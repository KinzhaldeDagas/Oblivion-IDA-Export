0x8AA710: sub     esp, 0Ch
0x8AA713: fld     dword ptr ds:0A30634h
0x8AA719: push    ebx
0x8AA71A: mov     ebx, [esp+10h+arg_4]
0x8AA71E: fstp    [esp+10h+var_C]
0x8AA722: fldz
0x8AA724: push    esi
0x8AA725: fdiv    qword ptr ds:0A309F0h
0x8AA72B: push    edi
0x8AA72C: mov     edi, [esp+18h+arg_0]
0x8AA730: mov     esi, ecx
0x8AA732: cmp     edi, [esi+0Ch]
0x8AA735: jb      short loc_8AA75F
0x8AA737: fstp    [esp+18h+var_4]
0x8AA73B: lea     ecx, [esp+18h+var_C]
0x8AA73F: fld     [esp+18h+var_4]
0x8AA743: lea     eax, [edi+1]
0x8AA746: push    ecx
0x8AA747: fstp    [esp+1Ch+var_8]
0x8AA74B: mov     ecx, ebx
0x8AA74D: mov     [esi+0Ch], eax
0x8AA750: call    sub_8AA390
0x8AA755: test    al, al
0x8AA757: jz      short loc_8AA7C7
0x8AA759: add     dword ptr [esi+10h], 1
0x8AA75D: jmp     short loc_8AA7C7
0x8AA75F: fstp    [esp+18h+arg_0]
0x8AA763: lea     edx, [esp+18h+var_C]
0x8AA767: fld     [esp+18h+arg_0]
0x8AA76B: push    edx
0x8AA76C: fstp    [esp+1Ch+var_4]
0x8AA770: mov     ecx, ebx
0x8AA772: fld     [esp+1Ch+var_4]
0x8AA776: fstp    [esp+1Ch+var_8]
0x8AA77A: call    sub_8AA390
0x8AA77F: fld     dword ptr ds:0A30634h
0x8AA785: mov     edx, [esi+4]
0x8AA788: fstp    [esp+18h+var_C]
0x8AA78C: test    al, al
0x8AA78E: fld     [esp+18h+arg_0]
0x8AA792: lea     ecx, [edi+edi*2]
0x8AA795: fstp    [esp+18h+var_4]
0x8AA799: lea     eax, [esp+18h+var_C]
0x8AA79D: fld     [esp+18h+var_4]
0x8AA7A1: lea     ecx, [edx+ecx*4]
0x8AA7A4: fstp    [esp+18h+var_8]
0x8AA7A8: push    eax
0x8AA7A9: jz      short loc_8AA7BA
0x8AA7AB: call    sub_8AA350
0x8AA7B0: test    al, al
0x8AA7B2: jz      short loc_8AA7C7
0x8AA7B4: add     dword ptr [esi+10h], 1
0x8AA7B8: jmp     short loc_8AA7C7
0x8AA7BA: call    sub_8AA390
0x8AA7BF: test    al, al
0x8AA7C1: jz      short loc_8AA7C7
0x8AA7C3: add     dword ptr [esi+10h], 0FFFFFFFFh
0x8AA7C7: mov     ecx, [esi+4]
0x8AA7CA: mov     edx, [ebx]
0x8AA7CC: lea     eax, [edi+edi*2]
0x8AA7CF: lea     eax, [ecx+eax*4]
0x8AA7D2: mov     [eax], edx
0x8AA7D4: mov     ecx, [ebx+4]
0x8AA7D7: pop     edi
0x8AA7D8: mov     [eax+4], ecx
0x8AA7DB: mov     edx, [ebx+8]
0x8AA7DE: pop     esi
0x8AA7DF: mov     [eax+8], edx
0x8AA7E2: pop     ebx
0x8AA7E3: add     esp, 0Ch
0x8AA7E6: retn    8
