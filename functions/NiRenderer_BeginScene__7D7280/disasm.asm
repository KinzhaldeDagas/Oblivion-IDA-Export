0x7D7280: mov     ecx, ds:0B3F928h
0x7D7286: cmp     dword ptr [ecx+204h], 0
0x7D728D: push    esi
0x7D728E: lea     esi, [ecx+204h]
0x7D7294: jnz     short loc_7D72B3
0x7D7296: cmp     dword ptr [ecx+200h], 0
0x7D729D: jnz     short loc_7D72B3
0x7D729F: mov     eax, [ecx]
0x7D72A1: mov     edx, [eax+130h]
0x7D72A7: call    edx
0x7D72A9: test    al, al
0x7D72AB: jz      short loc_7D72B3
0x7D72AD: mov     dword ptr [esi], 1
0x7D72B3: mov     eax, [esp+4+a2]
0x7D72B7: mov     ecx, [esp+4+a1]
0x7D72BB: push    eax; clearFlags
0x7D72BC: push    ecx; a1
0x7D72BD: call    StartUsingRenderTarget
0x7D72C2: add     esp, 8
0x7D72C5: pop     esi
0x7D72C6: retn
