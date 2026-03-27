0x65F720: push    ecx
0x65F721: mov     eax, [esp+4+arg_C]
0x65F725: push    eax
0x65F726: mov     eax, [esp+8+arg_4]
0x65F72A: lea     edx, [esp+8+var_4]
0x65F72E: push    edx
0x65F72F: mov     edx, [esp+0Ch+arg_0]
0x65F733: push    eax
0x65F734: push    edx
0x65F735: mov     [esp+14h+var_4], 0
0x65F73D: call    Actor_MagicCaster_IsMagicItemUseable
0x65F742: mov     ecx, [esp+4+arg_8]
0x65F746: test    ecx, ecx
0x65F748: mov     edx, [esp+4+var_4]
0x65F74B: jz      short loc_65F74F
0x65F74D: mov     [ecx], edx
0x65F74F: test    al, al
0x65F751: jnz     short loc_65F75C
0x65F753: cmp     edx, 5
0x65F756: jnz     short loc_65F75C
0x65F758: pop     ecx
0x65F759: retn    10h
0x65F75C: cmp     byte ptr ds:0B3BB06h, 0
0x65F763: jz      short loc_65F767
0x65F765: mov     al, 1
0x65F767: pop     ecx
0x65F768: retn    10h
