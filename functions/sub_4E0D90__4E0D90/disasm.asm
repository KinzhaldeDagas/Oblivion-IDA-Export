0x4E0D90: push    esi
0x4E0D91: mov     esi, ecx
0x4E0D93: mov     eax, [esi+1Ch]
0x4E0D96: movzx   eax, byte ptr [eax+4]
0x4E0D9A: cmp     eax, 12h
0x4E0D9D: jz      short loc_4E0DA4
0x4E0D9F: cmp     eax, 18h
0x4E0DA2: jnz     short loc_4E0E17
0x4E0DA4: mov     ecx, [esp+4+arg_0]
0x4E0DA8: mov     edx, ds:0B10568h
0x4E0DAE: mov     eax, [ecx+8]
0x4E0DB1: push    edx; Str2
0x4E0DB2: push    eax; Str1
0x4E0DB3: call    __strcmp
0x4E0DB8: add     esp, 8
0x4E0DBB: test    eax, eax
0x4E0DBD: jnz     short loc_4E0E17
0x4E0DBF: push    edi
0x4E0DC0: mov     edi, [esi+40h]
0x4E0DC3: test    edi, edi
0x4E0DC5: jz      short loc_4E0E16
0x4E0DC7: mov     ecx, edi; this
0x4E0DC9: call    TESObjectCELL_IsInterior
0x4E0DCE: test    al, al
0x4E0DD0: jz      short loc_4E0DDC
0x4E0DD2: lea     ecx, [edi+28h]
0x4E0DD5: call    sub_424180
0x4E0DDA: jmp     short loc_4E0DE1
0x4E0DDC: mov     eax, ds:0B35C24h
0x4E0DE1: test    eax, eax
0x4E0DE3: jz      short loc_4E0E16
0x4E0DE5: mov     edi, [esi+40h]
0x4E0DE8: mov     ecx, edi; this
0x4E0DEA: call    TESObjectCELL_IsInterior
0x4E0DEF: test    al, al
0x4E0DF1: jz      short loc_4E0DFB
0x4E0DF3: lea     ecx, [edi+28h]
0x4E0DF6: call    sub_424180
0x4E0DFB: mov     eax, [esi]
0x4E0DFD: mov     edx, [eax+154h]
0x4E0E03: push    0; a4
0x4E0E05: push    1; a3
0x4E0E07: push    1; a2
0x4E0E09: mov     ecx, esi
0x4E0E0B: call    edx
0x4E0E0D: push    eax; a1
0x4E0E0E: call    sub_88D070
0x4E0E13: add     esp, 10h
0x4E0E16: pop     edi
0x4E0E17: pop     esi
0x4E0E18: retn    4
