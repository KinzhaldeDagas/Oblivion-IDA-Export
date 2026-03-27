0x542260: mov     eax, [esp+arg_0]
0x542264: push    ebx
0x542265: push    esi
0x542266: xor     ebx, ebx
0x542268: cmp     [esp+8+arg_4], bl
0x54226C: mov     esi, ecx
0x54226E: mov     [esi+10h], eax
0x542271: jz      short loc_54227B
0x542273: mov     [esi+1Ch], eax
0x542276: mov     [esi+18h], ebx
0x542279: jmp     short loc_542281
0x54227B: mov     [esi+18h], eax
0x54227E: mov     [esi+1Ch], ebx
0x542281: fldz
0x542283: and     dword ptr [esi+0FCh], 0FFFFFFF7h
0x54228A: fstp    dword ptr [esi+0F4h]
0x542290: mov     [esi+14h], ebx
0x542293: fld1
0x542295: fstp    dword ptr [esi+0D8h]
0x54229B: fld     dword ptr [esi+0D0h]
0x5422A1: fstp    dword ptr [esi+0D4h]
0x5422A7: mov     eax, ds:0B333C4h
0x5422AC: mov     [eax+6E8h], ebx
0x5422B2: mov     ecx, [esi+0FCh]
0x5422B8: and     ecx, 0FFFFFFFEh
0x5422BB: or      ecx, 2
0x5422BE: mov     [esi+0FCh], ecx
0x5422C4: mov     ecx, esi
0x5422C6: call    sub_540850
0x5422CB: mov     ecx, [esi+2Ch]
0x5422CE: cmp     ecx, ebx
0x5422D0: jz      short loc_5422D7
0x5422D2: call    sub_53BBC0
0x5422D7: mov     ecx, [esi+38h]
0x5422DA: pop     esi
0x5422DB: cmp     ecx, ebx
0x5422DD: pop     ebx
0x5422DE: jz      short locret_5422E5
0x5422E0: call    sub_53D6C0
0x5422E5: retn    8
