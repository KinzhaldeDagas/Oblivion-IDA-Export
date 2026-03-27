0x4BD380: push    0FFFFFFFFh
0x4BD382: push    offset SEH_4BD380
0x4BD387: mov     eax, large fs:0
0x4BD38D: push    eax
0x4BD38E: push    esi
0x4BD38F: mov     eax, ds:0B30AACh
0x4BD394: xor     eax, esp
0x4BD396: push    eax
0x4BD397: lea     eax, [esp+14h+var_C]
0x4BD39B: mov     large fs:0, eax
0x4BD3A1: mov     esi, ecx
0x4BD3A3: mov     eax, [esp+14h+arg_4]
0x4BD3A7: mov     ecx, [esp+14h+arg_0]
0x4BD3AB: push    eax
0x4BD3AC: push    ecx
0x4BD3AD: call    sub_4EF1D0
0x4BD3B2: add     esp, 8
0x4BD3B5: mov     [esp+14h+arg_4], 0
0x4BD3BD: mov     edx, [esi]
0x4BD3BF: mov     edx, [edx+4]
0x4BD3C2: lea     ecx, [esp+14h+arg_4]
0x4BD3C6: push    ecx
0x4BD3C7: push    eax
0x4BD3C8: mov     ecx, esi
0x4BD3CA: mov     [esp+1Ch+var_4], 0
0x4BD3D2: call    edx
0x4BD3D4: test    al, al
0x4BD3D6: jz      short loc_4BD3E8
0x4BD3D8: mov     eax, [esp+14h+arg_4]
0x4BD3DC: mov     ecx, ds:0B33A10h
0x4BD3E2: push    eax
0x4BD3E3: call    sub_432130
0x4BD3E8: mov     esi, [esp+14h+arg_4]
0x4BD3EC: test    esi, esi
0x4BD3EE: mov     [esp+14h+var_4], 0FFFFFFFFh
0x4BD3F6: jz      short loc_4BD414
0x4BD3F8: lea     ecx, [esi+8]
0x4BD3FB: push    ecx; lpAddend
0x4BD3FC: call    dword ptr ds:0A2807Ch
0x4BD402: test    eax, eax
0x4BD404: jnz     short loc_4BD414
0x4BD406: test    esi, esi
0x4BD408: jz      short loc_4BD414
0x4BD40A: mov     edx, [esi]
0x4BD40C: mov     eax, [edx]
0x4BD40E: push    1
0x4BD410: mov     ecx, esi
0x4BD412: call    eax
0x4BD414: mov     ecx, [esp+14h+var_C]
0x4BD418: mov     large fs:0, ecx
0x4BD41F: pop     ecx
0x4BD420: pop     esi
0x4BD421: add     esp, 0Ch
0x4BD424: retn    8
