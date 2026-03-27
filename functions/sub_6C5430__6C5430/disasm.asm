0x6C5430: push    ecx
0x6C5431: mov     edx, [esp+4+arg_0]
0x6C5435: lea     eax, [esp+4+var_4]
0x6C5438: push    eax
0x6C5439: push    edx
0x6C543A: add     ecx, 8
0x6C543D: mov     [esp+0Ch+var_4], 0
0x6C5445: call    NiTMap_GetAt
0x6C544A: neg     al
0x6C544C: sbb     eax, eax
0x6C544E: and     eax, [esp+4+var_4]
0x6C5451: pop     ecx
0x6C5452: retn    4
