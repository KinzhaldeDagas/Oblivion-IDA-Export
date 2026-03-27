0x4E08D0: push    esi
0x4E08D1: mov     esi, [ecx+3Ch]
0x4E08D4: xor     eax, eax
0x4E08D6: test    esi, esi
0x4E08D8: jz      short loc_4E0905
0x4E08DA: cmp     [esi+0B6h], ax
0x4E08E1: jbe     short loc_4E0905
0x4E08E3: mov     ecx, [esi+0B0h]
0x4E08E9: mov     ecx, [ecx]
0x4E08EB: test    ecx, ecx
0x4E08ED: jz      short loc_4E0905
0x4E08EF: cmp     [ecx+0Ch], eax
0x4E08F2: jz      short loc_4E0905
0x4E08F4: mov     ecx, [ecx+0Ch]
0x4E08F7: push    ecx
0x4E08F8: push    offset stru_B3CAC0
0x4E08FD: call    NiRTTI_Cast
0x4E0902: add     esp, 8
0x4E0905: fld     dword ptr ds:0A30634h
0x4E090B: push    ecx
0x4E090C: fstp    [esp+8+var_8]; float
0x4E090F: push    eax; int
0x4E0910: call    sub_4DA7F0
0x4E0915: add     esp, 8
0x4E0918: test    esi, esi
0x4E091A: jz      short loc_4E0923
0x4E091C: mov     esi, [esi+0Ch]
0x4E091F: test    esi, esi
0x4E0921: jnz     short loc_4E0927
0x4E0923: xor     eax, eax
0x4E0925: jmp     short loc_4E094A
0x4E0927: mov     edx, [esi]
0x4E0929: mov     eax, [edx+4]
0x4E092C: mov     ecx, esi
0x4E092E: call    eax
0x4E0930: test    eax, eax
0x4E0932: jz      short loc_4E0942
0x4E0934: cmp     eax, offset stru_B3CAC0
0x4E0939: jz      short loc_4E095F
0x4E093B: mov     eax, [eax+4]
0x4E093E: test    eax, eax
0x4E0940: jnz     short loc_4E0934
0x4E0942: xor     al, al
0x4E0944: neg     al
0x4E0946: sbb     eax, eax
0x4E0948: and     eax, esi
0x4E094A: fld     dword ptr ds:0A30634h
0x4E0950: push    ecx
0x4E0951: fstp    [esp+8+var_8]; float
0x4E0954: push    eax; int
0x4E0955: call    sub_4DA7F0
0x4E095A: add     esp, 8
0x4E095D: pop     esi
0x4E095E: retn
0x4E095F: mov     al, 1
0x4E0961: jmp     short loc_4E0944
