0x6C94E0: push    ecx
0x6C94E1: push    esi
0x6C94E2: push    edi
0x6C94E3: mov     edi, ecx
0x6C94E5: mov     eax, [edi+0Ch]
0x6C94E8: xor     esi, esi
0x6C94EA: test    eax, eax
0x6C94EC: mov     [esp+0Ch+var_4], edi
0x6C94F0: jbe     short loc_6C9504
0x6C94F2: mov     ecx, [edi+14h]
0x6C94F5: cmp     dword ptr [ecx], 0
0x6C94F8: jz      short loc_6C9504
0x6C94FA: add     esi, 1
0x6C94FD: add     ecx, 10h
0x6C9500: cmp     esi, eax
0x6C9502: jb      short loc_6C94F5
0x6C9504: cmp     esi, eax
0x6C9506: jnz     short loc_6C951C
0x6C9508: mov     ecx, edi
0x6C950A: call    sub_6C8580
0x6C950F: test    al, al
0x6C9511: jnz     short loc_6C951C
0x6C9513: pop     edi
0x6C9514: or      eax, 0FFFFFFFFh
0x6C9517: pop     esi
0x6C9518: pop     ecx
0x6C9519: retn    8
0x6C951C: mov     edi, [edi+14h]
0x6C951F: mov     eax, [esp+0Ch+arg_0]
0x6C9523: push    ebx
0x6C9524: mov     ebx, esi
0x6C9526: shl     ebx, 4
0x6C9529: add     edi, ebx
0x6C952B: push    ebp
0x6C952C: mov     ebp, [edi]
0x6C952E: cmp     ebp, eax
0x6C9530: jz      short loc_6C9567
0x6C9532: test    ebp, ebp
0x6C9534: jz      short loc_6C9557
0x6C9536: lea     eax, [ebp+4]
0x6C9539: push    eax; lpAddend
0x6C953A: call    dword ptr ds:0A2807Ch
0x6C9540: test    eax, eax
0x6C9542: jnz     short loc_6C9553
0x6C9544: test    ebp, ebp
0x6C9546: jz      short loc_6C9553
0x6C9548: mov     edx, [ebp+0]
0x6C954B: mov     eax, [edx]
0x6C954D: push    1
0x6C954F: mov     ecx, ebp
0x6C9551: call    eax
0x6C9553: mov     eax, [esp+14h+arg_0]
0x6C9557: test    eax, eax
0x6C9559: mov     [edi], eax
0x6C955B: jz      short loc_6C9567
0x6C955D: add     eax, 4
0x6C9560: push    eax; lpAddend
0x6C9561: call    dword ptr ds:0A28078h
0x6C9567: mov     ecx, [esp+14h+arg_4]
0x6C956B: mov     edx, [esp+14h+var_4]
0x6C956F: push    ecx
0x6C9570: mov     ecx, [edx+18h]
0x6C9573: add     ecx, ebx
0x6C9575: call    sub_6C67F0
0x6C957A: pop     ebp
0x6C957B: pop     ebx
0x6C957C: pop     edi
0x6C957D: mov     eax, esi
0x6C957F: pop     esi
0x6C9580: pop     ecx
0x6C9581: retn    8
