0x60DBF0: push    ebp
0x60DBF1: mov     ebp, esp
0x60DBF3: and     esp, 0FFFFFFF0h
0x60DBF6: sub     esp, 34h
0x60DBF9: mov     eax, ds:0B30AACh
0x60DBFE: xor     eax, esp
0x60DC00: mov     [esp+34h+var_4], eax
0x60DC04: mov     eax, [ebp+arg_0]
0x60DC07: push    ebx
0x60DC08: push    esi
0x60DC09: mov     [esp+3Ch+var_24], eax
0x60DC0D: mov     eax, [ebp+arg_4]
0x60DC10: push    edi
0x60DC11: mov     [esp+40h+var_30], ecx
0x60DC15: mov     ecx, [eax+4Ch]
0x60DC18: xor     edi, edi
0x60DC1A: cmp     ecx, edi
0x60DC1C: mov     [esp+40h+var_2C], eax
0x60DC20: mov     [esp+40h+var_28], ecx
0x60DC24: mov     [esp+40h+var_34], edi
0x60DC28: jle     loc_60DD47
0x60DC2E: fldz
0x60DC30: xor     ebx, ebx
0x60DC32: jmp     short loc_60DC38
0x60DC34: mov     eax, [esp+40h+var_2C]
0x60DC38: mov     esi, [eax+48h]
0x60DC3B: mov     ecx, [esp+40h+var_24]
0x60DC3F: mov     eax, [ecx]
0x60DC41: add     eax, ebx
0x60DC43: mov     eax, [eax+28h]
0x60DC46: add     esi, edi
0x60DC48: cmp     byte ptr [eax+18h], 1
0x60DC4C: jnz     short loc_60DC55
0x60DC4E: mov     ecx, [eax+10h]
0x60DC51: add     ecx, eax
0x60DC53: jnz     short loc_60DCA7
0x60DC55: mov     edx, [eax+1Ch]
0x60DC58: and     edx, 3Fh
0x60DC5B: cmp     dl, 14h
0x60DC5E: jz      short loc_60DCD3
0x60DC60: mov     eax, [esp+40h+var_30]
0x60DC64: add     eax, 0FFFFFE10h
0x60DC69: jz      short loc_60DC7F
0x60DC6B: mov     eax, [eax+8]
0x60DC6E: test    eax, eax
0x60DC70: jz      short loc_60DC7F
0x60DC72: mov     ecx, eax
0x60DC74: fstp    st
0x60DC76: call    sub_8AC0A0
0x60DC7B: fldz
0x60DC7D: jmp     short loc_60DC84
0x60DC7F: mov     eax, offset stru_BA7A40
0x60DC84: movaps  xmm0, xmmword ptr [eax]
0x60DC87: fst     [esp+40h+var_20]
0x60DC8B: fst     [esp+40h+var_20+4]
0x60DC8F: movaps  xmmword ptr [esi+10h], xmm0
0x60DC93: fst     [esp+40h+var_20+8]
0x60DC97: fld1
0x60DC99: fstp    [esp+40h+var_20+0Ch]
0x60DC9D: movaps  xmm0, xmmword ptr [esp+40h+var_20]
0x60DCA2: movaps  xmmword ptr [esi], xmm0
0x60DCA5: jmp     short loc_60DCD3
0x60DCA7: push    eax
0x60DCA8: fstp    st
0x60DCAA: call    sub_8AFCE0
0x60DCAF: add     esp, 4
0x60DCB2: test    eax, eax
0x60DCB4: jz      short loc_60DCD1
0x60DCB6: push    eax
0x60DCB7: call    sub_4DC270
0x60DCBC: add     esp, 4
0x60DCBF: test    eax, eax
0x60DCC1: jz      short loc_60DCD1
0x60DCC3: mov     ecx, ds:0B333C4h
0x60DCC9: cmp     eax, [ecx+578h]
0x60DCCF: jz      short loc_60DD04
0x60DCD1: fldz
0x60DCD3: mov     eax, [esp+40h+var_34]
0x60DCD7: add     eax, 1
0x60DCDA: add     edi, 40h ; '@'
0x60DCDD: add     ebx, 30h ; '0'
0x60DCE0: cmp     eax, [esp+40h+var_28]
0x60DCE4: mov     [esp+40h+var_34], eax
0x60DCE8: jl      loc_60DC34
0x60DCEE: fstp    st
0x60DCF0: pop     edi
0x60DCF1: pop     esi
0x60DCF2: pop     ebx
0x60DCF3: mov     ecx, [esp+34h+var_4]
0x60DCF7: xor     ecx, esp
0x60DCF9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60DCFE: mov     esp, ebp
0x60DD00: pop     ebp
0x60DD01: retn    8
0x60DD04: mov     eax, [esp+40h+var_30]
0x60DD08: add     eax, 0FFFFFE10h
0x60DD0D: jz      short loc_60DD1F
0x60DD0F: mov     eax, [eax+8]
0x60DD12: test    eax, eax
0x60DD14: jz      short loc_60DD1F
0x60DD16: mov     ecx, eax
0x60DD18: call    sub_8AC0A0
0x60DD1D: jmp     short loc_60DD24
0x60DD1F: mov     eax, offset stru_BA7A40
0x60DD24: fldz
0x60DD26: movaps  xmm0, xmmword ptr [eax]
0x60DD29: fst     [esp+40h+var_20]
0x60DD2D: movaps  xmmword ptr [esi+10h], xmm0
0x60DD31: fst     [esp+40h+var_20+4]
0x60DD35: fstp    [esp+40h+var_20+8]
0x60DD39: fld1
0x60DD3B: fstp    [esp+40h+var_20+0Ch]
0x60DD3F: movaps  xmm0, xmmword ptr [esp+40h+var_20]
0x60DD44: movaps  xmmword ptr [esi], xmm0
0x60DD47: mov     ecx, [esp+40h+var_4]
0x60DD4B: pop     edi
0x60DD4C: pop     esi
0x60DD4D: pop     ebx
0x60DD4E: xor     ecx, esp
0x60DD50: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60DD55: mov     esp, ebp
0x60DD57: pop     ebp
0x60DD58: retn    8
