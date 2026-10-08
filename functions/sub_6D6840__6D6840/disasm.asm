0x6D6840: push    esi; Oblivion NiTransformInterpolator binary save. Saves base state, writes cached 0x20-byte transform +0x0C, and writes the NiTransformData object reference +0x2C. The three key cursors are transient and not serialized.
0x6D6841: push    edi
0x6D6842: mov     edi, [esp+8+arg_0]
0x6D6846: push    edi
0x6D6847: mov     esi, ecx
0x6D6849: call    j_j_nullsub_3
0x6D684E: push    edi
0x6D684F: lea     ecx, [esi+0Ch]
0x6D6852: call    sub_6CBA90
0x6D6857: mov     ecx, [esi+2Ch]
0x6D685A: mov     eax, [edi]
0x6D685C: mov     edx, [eax+2Ch]
0x6D685F: push    ecx
0x6D6860: mov     ecx, edi
0x6D6862: call    edx
0x6D6864: pop     edi
0x6D6865: pop     esi
0x6D6866: retn    4
