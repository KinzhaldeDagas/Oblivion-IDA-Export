0x753180: push    ebx
0x753181: push    esi
0x753182: push    edi
0x753183: mov     edi, [esp+0Ch+arg_0]
0x753187: push    edi
0x753188: mov     esi, ecx
0x75318A: call    sub_752D80
0x75318F: mov     ecx, [edi]
0x753191: lea     eax, [esp+0Ch+arg_0]
0x753195: push    eax
0x753196: push    esi
0x753197: call    NiTMap_GetAt
0x75319C: mov     eax, [esi+50h]
0x75319F: test    eax, eax
0x7531A1: mov     ebx, [esp+0Ch+arg_0]
0x7531A5: jz      short loc_7531CB
0x7531A7: lea     ecx, [esp+0Ch+arg_0]
0x7531AB: push    ecx
0x7531AC: mov     ecx, [edi]
0x7531AE: push    eax
0x7531AF: call    NiTMap_GetAt
0x7531B4: test    al, al
0x7531B6: jz      short loc_7531C5
0x7531B8: mov     edx, [esp+0Ch+arg_0]
0x7531BC: pop     edi
0x7531BD: pop     esi
0x7531BE: mov     [ebx+50h], edx
0x7531C1: pop     ebx
0x7531C2: retn    4
0x7531C5: mov     eax, [esi+50h]
0x7531C8: mov     [ebx+50h], eax
0x7531CB: pop     edi
0x7531CC: pop     esi
0x7531CD: pop     ebx
0x7531CE: retn    4
