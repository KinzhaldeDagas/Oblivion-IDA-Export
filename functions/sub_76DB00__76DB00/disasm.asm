0x76DB00: push    esi
0x76DB01: push    offset stru_B42680; lpCriticalSection
0x76DB06: call    dword ptr ds:0A2806Ch
0x76DB0C: call    dword ptr ds:0A2808Ch
0x76DB12: mov     esi, ds:0B294F4h
0x76DB18: add     dword ptr ds:0B426FCh, 1
0x76DB1F: test    esi, esi
0x76DB21: mov     ds:0B426F8h, eax
0x76DB26: jz      short loc_76DB3B
0x76DB28: mov     ecx, [esi+8]
0x76DB2B: lea     eax, [esi+8]
0x76DB2E: mov     eax, [ecx]
0x76DB30: mov     edx, [eax+2Ch]
0x76DB33: mov     esi, [esi]
0x76DB35: call    edx
0x76DB37: test    esi, esi
0x76DB39: jnz     short loc_76DB28
0x76DB3B: sub     dword ptr ds:0B426FCh, 1
0x76DB42: pop     esi
0x76DB43: jnz     short loc_76DB4F
0x76DB45: mov     dword ptr ds:0B426F8h, 0
0x76DB4F: push    offset stru_B42680; lpCriticalSection
0x76DB54: call    dword ptr ds:0A28074h
0x76DB5A: retn
