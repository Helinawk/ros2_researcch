import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("summary_results.csv")

for metric in ["avg_ms", "max_ms", "jitter_ms", "p99_ms", "lost"]:
    plt.figure(figsize=(12, 6))
    plt.bar(df["file"], df[metric])
    plt.xticks(rotation=45, ha="right")
    plt.ylabel(metric)
    plt.title(metric + " by experiment")
    plt.tight_layout()
    plt.savefig(metric + ".png")
