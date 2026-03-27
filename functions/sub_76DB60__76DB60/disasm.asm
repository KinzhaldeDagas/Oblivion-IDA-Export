0x76DB60: push    esi
0x76DB61: push    offset stru_B42680; lpCriticalSection
0x76DB66: call    dword ptr ds:0A2806Ch
0x76DB6C: call    dword ptr ds:0A2808Ch
0x76DB72: mov     esi, ds:0B294F4h
0x76DB78: add     dword ptr ds:0B426FCh, 1
0x76DB7F: test    esi, esi
0x76DB81: mov     ds:0B426F8h, eax
0x76DB86: jz      short loc_76DBA5
0x76DB88: push    edi
0x76DB89: mov     edi, [esp+8+arg_0]
0x76DB8D: lea     ecx, [ecx+0]
0x76DB90: mov     ecx, [esi+8]
0x76DB93: lea     eax, [esi+8]
0x76DB96: mov     eax, [ecx]
0x76DB98: mov     edx, [eax+30h]
0x76DB9B: mov     esi, [esi]
0x76DB9D: push    edi
0x76DB9E: call    edx
0x76DBA0: test    esi, esi
0x76DBA2: jnz     short loc_76DB90
0x76DBA4: pop     edi
0x76DBA5: sub     dword ptr ds:0B426FCh, 1
0x76DBAC: pop     esi
0x76DBAD: jnz     short loc_76DBB9
0x76DBAF: mov     dword ptr ds:0B426F8h, 0
0x76DBB9: push    offset stru_B42680; lpCriticalSection
0x76DBBE: call    dword ptr ds:0A28074h
0x76DBC4: retn
