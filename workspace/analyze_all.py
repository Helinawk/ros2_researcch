import pandas as pd
import glob
import os

rows = []

for file in glob.glob("results_*.csv"):
    df = pd.read_csv(file)

    rows.append({
        "file": file,
        "messages": len(df),
        "avg_ms": df["latency_ms"].mean(),
        "min_ms": df["latency_ms"].min(),
        "max_ms": df["latency_ms"].max(),
        "jitter_ms": df["latency_ms"].std(),
        "p95_ms": df["latency_ms"].quantile(0.95),
        "p99_ms": df["latency_ms"].quantile(0.99),
        "lost": df["message_id"].max() + 1 - len(df)
    })

result = pd.DataFrame(rows)
result = result.sort_values("file")

print(result.to_string(index=False))
result.to_csv("summary_results.csv", index=False)
