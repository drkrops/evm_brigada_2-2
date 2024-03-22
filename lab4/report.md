## Задание - 1
```bash
Ms (short): fade fade fade fade fade 
Ml (int): ade1a1da ade1a1da ade1a1da ade1a1da ade1a1da 
Mq (long long): c1a551f1ab1e c1a551f1ab1e c1a551f1ab1e c1a551f1ab1e c1a551f1ab1e 

После вставки:
Ms (short): fade fade 10 fade fade 
Ml (int): ade1a1da ade1a1da 10 ade1a1da ade1a1da 
Mq (long long): c1a551f1ab1e c1a551f1ab1e 10 c1a551f1ab1e c1a551f1ab1e 
```

## Задание - 2
```bash
Before insertion:
Ms[0] = 0xfade
Ms[1] = 0xfade
Ms[2] = 0xfade
Ms[3] = 0xfade
Ms[4] = 0xfade

After insertion:
Ms[0] = 0xfade
Ms[1] = 0xfade
Ms[2] = 0xffff
Ms[3] = 0xfade
Ms[4] = 0xfade
```

## Задание - 3
```bash
Before insertion:
Mq[0] = c1a551f1ab1e
Mq[1] = c1a551f1ab1e
Mq[2] = c1a551f1ab1e
Mq[3] = c1a551f1ab1e
Mq[4] = c1a551f1ab1e

After insertion:
Mq[0] = c1a551f1ab1e
Mq[1] = c1a551f1ab1e
Mq[2] = bba551f1ab1e
Mq[3] = c1a551f1ab1e
Mq[4] = c1a551f1ab1e
```

## Задание - 4
```bash
Before insertion:
Ms[0] = 0xfade
Ms[1] = 0xfade
Ms[2] = 0xfade
Ms[3] = 0xfade
Ms[4] = 0xfade

After insertion:
Ms[0] = 0xfade
Ms[1] = 0xfade
Ms[2] = 0xabcd
Ms[3] = 0xfade
Ms[4] = 0xfade
```