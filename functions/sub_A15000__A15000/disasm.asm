0xA15000: push    0
0xA15002: push    5
0xA15004: push    offset off_AA13F8; "cylRadius"
0xA15009: push    1
0xA1500B: push    offset off_AA13E8; "VertexIdEncoding"
0xA15010: push    0
0xA15012: push    0
0xA15014: push    60h ; '`'
0xA15016: push    offset unk_BA9734
0xA1501B: push    offset aHkcylindershap; "hkCylinderShape"
0xA15020: mov     ecx, offset unk_BA925C
0xA15025: call    sub_90D190
0xA1502A: retn
