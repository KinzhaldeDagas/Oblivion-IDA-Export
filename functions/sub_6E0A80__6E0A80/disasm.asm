0x6E0A80: sub     esp, 18h
0x6E0A83: push    esi
0x6E0A84: mov     esi, ecx
0x6E0A86: mov     al, [esi+8]
0x6E0A89: shr     al, 5
0x6E0A8C: test    al, 1
0x6E0A8E: jz      short loc_6E0A9B
0x6E0A90: fld     dword ptr ds:0A7A164h
0x6E0A96: fstp    dword ptr [esi+28h]
0x6E0A99: jmp     short loc_6E0AC9
0x6E0A9B: fld     [esp+1Ch+arg_0]
0x6E0A9F: push    ecx
0x6E0AA0: fstp    [esp+20h+var_20]; float
0x6E0AA3: call    sub_6C36B0
0x6E0AA8: test    al, al
0x6E0AAA: jz      short loc_6E0AC9
0x6E0AAC: mov     ecx, [esi+3Ch]
0x6E0AAF: test    ecx, ecx
0x6E0AB1: jz      loc_6E0BEE
0x6E0AB7: mov     edx, [ecx]
0x6E0AB9: mov     eax, [edx+94h]
0x6E0ABF: call    eax
0x6E0AC1: test    al, al
0x6E0AC3: jz      loc_6E0BEE
0x6E0AC9: mov     ecx, [esi+3Ch]
0x6E0ACC: test    ecx, ecx
0x6E0ACE: jz      loc_6E0BEE
0x6E0AD4: mov     edx, [ecx]
0x6E0AD6: fld     dword ptr [esi+28h]
0x6E0AD9: mov     edx, [edx+54h]
0x6E0ADC: lea     eax, [esp+1Ch+var_C]
0x6E0AE0: push    eax
0x6E0AE1: mov     eax, [esi+30h]
0x6E0AE4: push    eax
0x6E0AE5: push    ecx
0x6E0AE6: fstp    [esp+28h+var_28]
0x6E0AE9: call    edx
0x6E0AEB: test    al, al
0x6E0AED: jz      loc_6E0BEE
0x6E0AF3: fld     [esp+1Ch+var_C]
0x6E0AF7: fst     [esp+1Ch+var_18]
0x6E0AFB: fld     [esp+1Ch+var_8]
0x6E0AFF: fst     [esp+1Ch+var_14]
0x6E0B03: fld     [esp+1Ch+var_4]
0x6E0B07: fst     [esp+1Ch+var_10]
0x6E0B0B: fldz
0x6E0B0D: fcom    st(3)
0x6E0B0F: fnstsw  ax
0x6E0B11: fld1
0x6E0B13: test    ah, 41h
0x6E0B16: jnz     short loc_6E0B20
0x6E0B18: fstp    st(4)
0x6E0B1A: fst     [esp+1Ch+var_18]
0x6E0B1E: jmp     short loc_6E0B33
0x6E0B20: fcom    st(4)
0x6E0B22: fnstsw  ax
0x6E0B24: fstp    st(4)
0x6E0B26: test    ah, 5
0x6E0B29: jp      short loc_6E0B33
0x6E0B2B: fxch    st(3)
0x6E0B2D: fst     [esp+1Ch+var_18]
0x6E0B31: fxch    st(3)
0x6E0B33: fcom    st(2)
0x6E0B35: fnstsw  ax
0x6E0B37: test    ah, 41h
0x6E0B3A: jnz     short loc_6E0B46
0x6E0B3C: fstp    st(2)
0x6E0B3E: fxch    st(1)
0x6E0B40: fst     [esp+1Ch+var_14]
0x6E0B44: jmp     short loc_6E0B5B
0x6E0B46: fxch    st(2)
0x6E0B48: fcomp   st(3)
0x6E0B4A: fnstsw  ax
0x6E0B4C: test    ah, 41h
0x6E0B4F: jnz     short loc_6E0B59
0x6E0B51: fxch    st(2)
0x6E0B53: fst     [esp+1Ch+var_14]
0x6E0B57: fxch    st(2)
0x6E0B59: fxch    st(1)
0x6E0B5B: fcom    st(1)
0x6E0B5D: fnstsw  ax
0x6E0B5F: test    ah, 41h
0x6E0B62: jnz     short loc_6E0B6E
0x6E0B64: fstp    st(2)
0x6E0B66: fstp    st
0x6E0B68: fstp    [esp+1Ch+var_10]
0x6E0B6C: jmp     short loc_6E0B81
0x6E0B6E: fstp    st
0x6E0B70: fcomp   st(1)
0x6E0B72: fnstsw  ax
0x6E0B74: test    ah, 41h
0x6E0B77: jnz     short loc_6E0B7F
0x6E0B79: fstp    [esp+1Ch+var_10]
0x6E0B7D: jmp     short loc_6E0B81
0x6E0B7F: fstp    st
0x6E0B81: mov     eax, [esi+30h]
0x6E0B84: test    eax, eax
0x6E0B86: jz      short loc_6E0BEE
0x6E0B88: push    edi
0x6E0B89: push    eax
0x6E0B8A: push    offset dword_B3FD14
0x6E0B8F: call    NiRTTI_Cast
0x6E0B94: add     esp, 8
0x6E0B97: test    byte ptr [esi+40h], 1
0x6E0B9B: mov     edi, eax
0x6E0B9D: mov     ecx, edi
0x6E0B9F: jz      short loc_6E0BCB
0x6E0BA1: lea     eax, [esp+20h+var_18]
0x6E0BA5: push    eax
0x6E0BA6: call    sub_4820F0
0x6E0BAB: push    offset dword_B3FA90
0x6E0BB0: mov     ecx, edi
0x6E0BB2: call    sub_482120
0x6E0BB7: push    offset dword_B3FA90
0x6E0BBC: mov     ecx, edi
0x6E0BBE: call    sub_4B0BC0
0x6E0BC3: pop     edi
0x6E0BC4: pop     esi
0x6E0BC5: add     esp, 18h
0x6E0BC8: retn    4
0x6E0BCB: push    offset dword_B3FA90
0x6E0BD0: call    sub_4820F0
0x6E0BD5: lea     ecx, [esp+20h+var_18]
0x6E0BD9: push    ecx
0x6E0BDA: mov     ecx, edi
0x6E0BDC: call    sub_482120
0x6E0BE1: lea     edx, [esp+20h+var_18]
0x6E0BE5: push    edx
0x6E0BE6: mov     ecx, edi
0x6E0BE8: call    sub_4B0BC0
0x6E0BED: pop     edi
0x6E0BEE: pop     esi
0x6E0BEF: add     esp, 18h
0x6E0BF2: retn    4
