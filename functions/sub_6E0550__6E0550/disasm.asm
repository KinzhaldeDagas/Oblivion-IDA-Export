0x6E0550: push    ecx
0x6E0551: push    esi
0x6E0552: push    edi
0x6E0553: mov     edi, [esp+0Ch+arg_0]
0x6E0557: push    edi
0x6E0558: mov     esi, ecx
0x6E055A: call    sub_715E40
0x6E055F: mov     ecx, [edi]
0x6E0561: lea     eax, [esp+0Ch+var_4]
0x6E0565: push    eax
0x6E0566: push    esi
0x6E0567: call    NiTMap_GetAt
0x6E056C: mov     eax, [esi+40h]
0x6E056F: test    eax, eax
0x6E0571: jz      short loc_6E059F
0x6E0573: lea     ecx, [esp+0Ch+arg_0]
0x6E0577: push    ecx
0x6E0578: mov     ecx, [edi]
0x6E057A: push    eax
0x6E057B: call    NiTMap_GetAt
0x6E0580: test    al, al
0x6E0582: jnz     short loc_6E0594
0x6E0584: mov     esi, [esi+40h]
0x6E0587: mov     edx, [esp+0Ch+var_4]
0x6E058B: pop     edi
0x6E058C: mov     [edx+40h], esi
0x6E058F: pop     esi
0x6E0590: pop     ecx
0x6E0591: retn    4
0x6E0594: mov     esi, [esp+0Ch+arg_0]
0x6E0598: mov     edx, [esp+0Ch+var_4]
0x6E059C: mov     [edx+40h], esi
0x6E059F: pop     edi
0x6E05A0: pop     esi
0x6E05A1: pop     ecx
0x6E05A2: retn    4
