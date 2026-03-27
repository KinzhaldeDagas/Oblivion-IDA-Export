0x646400: push    esi
0x646401: mov     esi, [esp+4+arg_0]
0x646405: test    esi, esi
0x646407: jz      short loc_646482
0x646409: mov     eax, [esi+8]
0x64640C: mov     ecx, eax
0x64640E: shr     ecx, 5
0x646411: test    cl, 1
0x646414: jnz     short loc_646482
0x646416: mov     edx, eax
0x646418: shr     edx, 0Eh
0x64641B: test    dl, 1
0x64641E: jnz     short loc_646482
0x646420: shr     eax, 0Bh
0x646423: test    al, 1
0x646425: jnz     short loc_646482
0x646427: push    edi
0x646428: mov     edi, [esp+8+arg_4]
0x64642C: test    edi, edi
0x64642E: jz      short loc_64647D
0x646430: mov     ecx, esi
0x646432: call    sub_4D74D0
0x646437: test    al, al
0x646439: jz      short loc_64647D
0x64643B: mov     eax, [esi]
0x64643D: mov     edx, [eax+198h]
0x646443: push    0
0x646445: mov     ecx, esi
0x646447: call    edx
0x646449: test    al, al
0x64644B: jnz     short loc_64647D
0x64644D: mov     eax, [esi]
0x64644F: mov     edx, [eax+388h]
0x646455: mov     ecx, esi
0x646457: call    edx
0x646459: test    eax, eax
0x64645B: jnz     short loc_64647D
0x64645D: push    1
0x64645F: push    edi
0x646460: mov     ecx, esi
0x646462: call    TESOBjectREFR_IsOwnedBy
0x646467: test    al, al
0x646469: jz      short loc_64647D
0x64646B: mov     eax, [edi]
0x64646D: mov     edx, [eax+22Ch]
0x646473: push    esi
0x646474: mov     ecx, edi
0x646476: call    edx
0x646478: pop     edi
0x646479: mov     al, 1
0x64647B: pop     esi
0x64647C: retn
0x64647D: pop     edi
0x64647E: xor     al, al
0x646480: pop     esi
0x646481: retn
0x646482: xor     al, al
0x646484: pop     esi
0x646485: retn
