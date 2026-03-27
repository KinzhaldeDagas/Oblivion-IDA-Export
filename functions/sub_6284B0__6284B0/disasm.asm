0x6284B0: push    esi
0x6284B1: mov     esi, ecx
0x6284B3: mov     eax, [esi]
0x6284B5: mov     edx, [eax+184h]
0x6284BB: push    edi
0x6284BC: call    edx
0x6284BE: mov     edi, eax
0x6284C0: test    edi, edi
0x6284C2: jz      short loc_62850E
0x6284C4: mov     eax, [esi]
0x6284C6: mov     edx, [eax+194h]
0x6284CC: push    ebx
0x6284CD: mov     ebx, [esp+0Ch+arg_0]
0x6284D1: push    ebx
0x6284D2: mov     ecx, esi
0x6284D4: call    edx
0x6284D6: fld     dword ptr ds:0A30634h
0x6284DC: push    ecx
0x6284DD: fstp    [esp+10h+var_10]; float
0x6284E0: push    0; char
0x6284E2: push    ebx; int
0x6284E3: mov     ecx, edi
0x6284E5: call    sub_566DC0
0x6284EA: test    al, al
0x6284EC: mov     eax, [esi]
0x6284EE: pop     ebx
0x6284EF: mov     ecx, esi
0x6284F1: jz      short loc_628504
0x6284F3: mov     edx, [eax+0BCh]
0x6284F9: push    1
0x6284FB: call    edx
0x6284FD: pop     edi
0x6284FE: xor     al, al
0x628500: pop     esi
0x628501: retn    8
0x628504: mov     edx, [eax+17Ch]
0x62850A: push    0
0x62850C: call    edx
0x62850E: pop     edi
0x62850F: xor     al, al
0x628511: pop     esi
0x628512: retn    8
