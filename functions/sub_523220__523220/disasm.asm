0x523220: push    ebx
0x523221: mov     ebx, ds:0A2807Ch
0x523227: push    esi
0x523228: mov     esi, ecx
0x52322A: push    edi
0x52322B: mov     edi, [esi+1D4h]
0x523231: test    edi, edi
0x523233: jz      short loc_523257
0x523235: lea     eax, [edi+4]
0x523238: push    eax; lpAddend
0x523239: call    ebx ; InterlockedDecrement
0x52323B: test    eax, eax
0x52323D: jnz     short loc_52324D
0x52323F: test    edi, edi
0x523241: jz      short loc_52324D
0x523243: mov     edx, [edi]
0x523245: mov     eax, [edx]
0x523247: push    1
0x523249: mov     ecx, edi
0x52324B: call    eax
0x52324D: mov     dword ptr [esi+1D4h], 0
0x523257: mov     edi, [esi+1D8h]
0x52325D: test    edi, edi
0x52325F: jz      short loc_523283
0x523261: lea     ecx, [edi+4]
0x523264: push    ecx; lpAddend
0x523265: call    ebx ; InterlockedDecrement
0x523267: test    eax, eax
0x523269: jnz     short loc_523279
0x52326B: test    edi, edi
0x52326D: jz      short loc_523279
0x52326F: mov     edx, [edi]
0x523271: mov     eax, [edx]
0x523273: push    1
0x523275: mov     ecx, edi
0x523277: call    eax
0x523279: mov     dword ptr [esi+1D8h], 0
0x523283: cmp     dword ptr [esi+1D4h], 0
0x52328A: jnz     short loc_5232C7
0x52328C: cmp     dword ptr [esi+1D8h], 0
0x523293: jnz     short loc_5232C7
0x523295: mov     ecx, [esi+0E8h]
0x52329B: test    ecx, ecx
0x52329D: jz      short loc_5232C7
0x52329F: mov     edx, [esp+0Ch+arg_4]
0x5232A3: mov     eax, [esp+0Ch+arg_0]
0x5232A7: push    0
0x5232A9: push    1
0x5232AB: push    esi
0x5232AC: push    edx
0x5232AD: push    eax
0x5232AE: call    sub_52DED0
0x5232B3: mov     ecx, [esi+0E8h]
0x5232B9: mov     dx, [ecx+2FCh]
0x5232C0: mov     [esi+1E0h], dx
0x5232C7: pop     edi
0x5232C8: pop     esi
0x5232C9: pop     ebx
0x5232CA: retn    8
