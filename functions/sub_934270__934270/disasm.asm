0x934270: push    esi
0x934271: mov     esi, [esp+4+arg_0]
0x934275: test    dword ptr [esi+8], 3FFFFFFFh
0x93427C: mov     dword ptr [esi+4], 0
0x934283: jnz     short loc_934290
0x934285: push    4
0x934287: push    esi
0x934288: call    sub_8A6EE0
0x93428D: add     esp, 8
0x934290: mov     eax, [esi+4]
0x934293: mov     ecx, large fs:2Ch
0x93429A: inc     eax
0x93429B: mov     [esi+4], eax
0x93429E: mov     eax, ds:0BA9DE4h
0x9342A3: mov     edx, [ecx+eax*4]
0x9342A6: mov     eax, [edx+19Ch]
0x9342AC: mov     ecx, [eax+64h]
0x9342AF: test    ecx, ecx
0x9342B1: jz      short loc_9342C2
0x9342B3: dec     dword ptr [eax+0A8h]
0x9342B9: mov     edx, [ecx]
0x9342BB: mov     [eax+64h], edx
0x9342BE: mov     eax, ecx
0x9342C0: jmp     short loc_9342D1
0x9342C2: mov     ecx, ds:0BA7D98h
0x9342C8: mov     eax, [ecx]
0x9342CA: push    1Ch
0x9342CC: push    0Ch
0x9342CE: call    dword ptr [eax+18h]
0x9342D1: test    eax, eax
0x9342D3: jz      short loc_9342DD
0x9342D5: mov     dword ptr [eax], 0
0x9342DB: jmp     short loc_9342DF
0x9342DD: xor     eax, eax
0x9342DF: mov     ecx, [esi]
0x9342E1: mov     [ecx], eax
0x9342E3: mov     byte ptr [eax+13h], 10h
0x9342E7: mov     byte ptr [eax+10h], 1
0x9342EB: mov     dword ptr [eax+18h], 0FFFFFFFFh
0x9342F2: mov     dword ptr [eax], 10h
0x9342F8: pop     esi
0x9342F9: retn
