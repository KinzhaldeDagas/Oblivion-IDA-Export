0x692660: push    esi
0x692661: mov     esi, [esp+4+arg_0]
0x692665: mov     ecx, [esi+58h]
0x692668: test    ecx, ecx
0x69266A: jz      short loc_69267F
0x69266C: cmp     [esp+4+arg_8], 0
0x692671: jz      short loc_69267F
0x692673: mov     eax, [ecx]
0x692675: mov     edx, [eax+3CCh]
0x69267B: push    0
0x69267D: call    edx
0x69267F: fld     dword ptr ds:0A40360h
0x692685: mov     eax, [esi]
0x692687: mov     edx, [eax+374h]
0x69268D: push    ecx
0x69268E: mov     ecx, [esp+8+arg_4]
0x692692: fstp    [esp+8+var_8]
0x692695: push    ecx
0x692696: mov     ecx, esi
0x692698: call    edx
0x69269A: mov     eax, [esi]
0x69269C: mov     edx, [eax+298h]
0x6926A2: push    0
0x6926A4: push    0FFFFFF9Ch
0x6926A6: push    22h ; '"'
0x6926A8: mov     ecx, esi
0x6926AA: call    edx
0x6926AC: pop     esi
0x6926AD: retn
