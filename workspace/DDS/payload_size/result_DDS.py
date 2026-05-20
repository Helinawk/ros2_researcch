import pandas as pd

df = pd.read_csv('./latency_payload_results.csv')

result = df.groupby('payload_size').agg(
    messages=('message_id', 'count'),
    avg_latency_ms=('latency_ms', 'mean'),
    min_latency_ms=('latency_ms', 'min'),
    max_latency_ms=('latency_ms', 'max'),
    jitter_ms=('latency_ms', 'std'),
    lost_messages=('lost_messages', 'sum')
)

print(result)
