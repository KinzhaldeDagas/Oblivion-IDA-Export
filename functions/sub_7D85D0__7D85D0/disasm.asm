0x7D85D0: sub     esp, 40h
0x7D85D3: push    ebx
0x7D85D4: push    ebp
0x7D85D5: mov     ebp, [esp+48h+arg_0]
0x7D85D9: push    esi
0x7D85DA: push    edi
0x7D85DB: lea     eax, [esp+50h+var_30]
0x7D85DF: mov     esi, ecx
0x7D85E1: push    eax
0x7D85E2: mov     ecx, ebp
0x7D85E4: call    sub_405760
0x7D85E9: mov     ebx, [eax]
0x7D85EB: mov     eax, [esp+50h+var_30]
0x7D85EF: test    eax, eax
0x7D85F1: mov     [esp+50h+var_38], ebx
0x7D85F5: jz      short loc_7D8615
0x7D85F7: mov     edi, eax
0x7D85F9: add     eax, 4
0x7D85FC: push    eax; lpAddend
0x7D85FD: call    dword ptr ds:0A2807Ch
0x7D8603: test    eax, eax
0x7D8605: jnz     short loc_7D8615
0x7D8607: test    edi, edi
0x7D8609: jz      short loc_7D8615
0x7D860B: mov     edx, [edi]
0x7D860D: mov     eax, [edx]
0x7D860F: push    1
0x7D8611: mov     ecx, edi
0x7D8613: call    eax
0x7D8615: movzx   eax, word ptr ds:0B42EACh
0x7D861C: movzx   ecx, ax
0x7D861F: shl     ecx, 8
0x7D8622: or      ecx, [esp+50h+arg_4]
0x7D8626: cmp     ax, 5
0x7D862A: mov     [esp+50h+var_34], ecx
0x7D862E: jnz     loc_7D86C0
0x7D8634: mov     ecx, esi
0x7D8636: call    sub_7ED1A0
0x7D863B: cmp     dword ptr [esi+44h], 0
0x7D863F: jz      short loc_7D865D
0x7D8641: mov     ecx, [esi+3Ch]
0x7D8644: mov     eax, [ecx+8]
0x7D8647: cmp     byte ptr [eax+8], 0
0x7D864B: jbe     short loc_7D8657
0x7D864D: mov     edx, [eax+0Ch]
0x7D8650: mov     eax, ds:0B42EB0h
0x7D8655: mov     [edx], eax
0x7D8657: cmp     dword ptr [esi+44h], 0
0x7D865B: jnz     short loc_7D86B3
0x7D865D: cmp     byte ptr [esp+50h+arg_C], 0
0x7D8662: jz      short loc_7D86B3
0x7D8664: test    ebx, ebx
0x7D8666: jz      short loc_7D86B3
0x7D8668: lea     ecx, [esi+38h]
0x7D866B: call    NiTPointerList__FreeAllNodes
0x7D8670: push    0
0x7D8672: mov     ecx, ebp
0x7D8674: call    NiNode_GetNiPropertyByID
0x7D8679: test    eax, eax
0x7D867B: jnz     short loc_7D8684
0x7D867D: mov     eax, [ebx+8]
0x7D8680: test    eax, eax
0x7D8682: jz      short loc_7D8696
0x7D8684: mov     cx, [eax+18h]
0x7D8688: shr     cx, 9
0x7D868C: test    cl, 1
0x7D868F: mov     byte ptr [esp+50h+arg_4], 1
0x7D8694: jnz     short loc_7D869B
0x7D8696: mov     byte ptr [esp+50h+arg_4], 0
0x7D869B: cmp     dword ptr [ebp+0B8h], 0
0x7D86A2: mov     edx, [esp+50h+arg_4]
0x7D86A6: setnz   al
0x7D86A9: push    edx
0x7D86AA: mov     ecx, esi
0x7D86AC: push    eax
0x7D86AD: push    ebp
0x7D86AE: call    sub_85AAC0
0x7D86B3: pop     edi
0x7D86B4: lea     eax, [esi+38h]
0x7D86B7: pop     esi
0x7D86B8: pop     ebp
0x7D86B9: pop     ebx
0x7D86BA: add     esp, 40h
0x7D86BD: retn    10h
0x7D86C0: cmp     ax, 6
0x7D86C4: jnz     short loc_7D86F3
0x7D86C6: cmp     dword ptr [esi+54h], 0
0x7D86CA: jnz     short loc_7D86E6
0x7D86CC: mov     eax, [esi+1Ch]
0x7D86CF: test    eax, 100000h
0x7D86D4: setnbe  cl
0x7D86D7: test    al, 2
0x7D86D9: setnbe  dl
0x7D86DC: push    ecx
0x7D86DD: mov     ecx, esi
0x7D86DF: push    edx
0x7D86E0: push    ebp
0x7D86E1: call    sub_85ABD0
0x7D86E6: pop     edi
0x7D86E7: lea     eax, [esi+48h]
0x7D86EA: pop     esi
0x7D86EB: pop     ebp
0x7D86EC: pop     ebx
0x7D86ED: add     esp, 40h
0x7D86F0: retn    10h
0x7D86F3: fld     dword ptr [esi+9Ch]
0x7D86F9: mov     ecx, [esi+1Ch]
0x7D86FC: test    ecx, 80h
0x7D8702: fstp    [esp+50h+var_3C]
0x7D8706: fld     dword ptr [esi+0A4h]
0x7D870C: fstp    [esp+50h+var_40]
0x7D8710: fldz
0x7D8712: jbe     short loc_7D8726
0x7D8714: fcom    dword ptr ds:0B430A0h
0x7D871A: mov     byte ptr [esp+50h+arg_0], 1
0x7D871F: fnstsw  ax
0x7D8721: test    ah, 5
0x7D8724: jnp     short loc_7D872B
0x7D8726: mov     byte ptr [esp+50h+arg_0], 0
0x7D872B: test    cl, 1
0x7D872E: jbe     short loc_7D8741
0x7D8730: fcom    dword ptr ds:0B43090h
0x7D8736: fnstsw  ax
0x7D8738: test    ah, 5
0x7D873B: jp      short loc_7D8741
0x7D873D: mov     bl, 1
0x7D873F: jmp     short loc_7D8743
0x7D8741: xor     bl, bl
0x7D8743: cmp     byte ptr [esp+50h+arg_0], 0
0x7D8748: jnz     short loc_7D8752
0x7D874A: test    bl, bl
0x7D874C: jz      loc_7D8911
0x7D8752: fstp    st
0x7D8754: mov     eax, [ebp+20h]
0x7D8757: fld     dword ptr ds:0B46658h
0x7D875D: mov     ecx, [ebp+24h]
0x7D8760: fstp    [esp+50h+var_28]
0x7D8764: mov     edx, [ebp+28h]
0x7D8767: fld     dword ptr ds:0B4665Ch
0x7D876D: mov     [esp+50h+var_10], eax
0x7D8771: fstp    [esp+50h+var_24]
0x7D8775: mov     [esp+50h+var_C], ecx
0x7D8779: fld     dword ptr ds:0B46660h
0x7D877F: mov     [esp+50h+var_8], edx
0x7D8783: fstp    [esp+50h+var_20]
0x7D8787: mov     eax, [ebp+2Ch]
0x7D878A: fld     [esp+50h+var_10]
0x7D878E: mov     [esp+50h+var_4], eax
0x7D8792: fsub    [esp+50h+var_28]
0x7D8796: fstp    [esp+50h+var_1C]
0x7D879A: fld     [esp+50h+var_C]
0x7D879E: fsub    [esp+50h+var_24]
0x7D87A2: fstp    [esp+50h+var_18]
0x7D87A6: fld     [esp+50h+var_8]
0x7D87AA: fsub    [esp+50h+var_20]
0x7D87AE: fstp    [esp+50h+var_14]
0x7D87B2: fld     [esp+50h+var_18]
0x7D87B6: fld     [esp+50h+var_1C]
0x7D87BA: fld     [esp+50h+var_14]
0x7D87BE: fld     st(1)
0x7D87C0: fmulp   st(2), st
0x7D87C2: fld     st(2)
0x7D87C4: fmulp   st(3), st
0x7D87C6: fxch    st(1)
0x7D87C8: faddp   st(2), st
0x7D87CA: fmul    st, st
0x7D87CC: faddp   st(1), st
0x7D87CE: fstp    [esp+50h+var_2C]
0x7D87D2: fld     [esp+50h+var_2C]
0x7D87D6: call    __CIsqrt
0x7D87DB: fstp    [esp+50h+var_2C]
0x7D87DF: cmp     byte ptr [esp+50h+arg_0], 0
0x7D87E4: fld     [esp+50h+var_2C]
0x7D87E8: fsub    [esp+50h+var_4]
0x7D87EC: fstp    [esp+50h+var_2C]
0x7D87F0: fld1
0x7D87F2: fld     [esp+50h+var_2C]
0x7D87F6: jz      loc_7D8887
0x7D87FC: test    dword ptr [esi+1Ch], 20000h
0x7D8803: jbe     short loc_7D8838
0x7D8805: fld     dword ptr ds:0B4309Ch
0x7D880B: fcom    st(1)
0x7D880D: fnstsw  ax
0x7D880F: test    ah, 41h
0x7D8812: jz      short loc_7D8820
0x7D8814: fldz
0x7D8816: fld     st
0x7D8818: fld     dword ptr ds:0B430A0h
0x7D881E: jmp     short loc_7D8851
0x7D8820: fstp    st
0x7D8822: fldz
0x7D8824: fld1
0x7D8826: fstp    [esp+50h+var_40]
0x7D882A: jmp     short loc_7D8889
0x7D882C: fstp    st(2)
0x7D882E: fstp    st(1)
0x7D8830: fld1
0x7D8832: fstp    [esp+50h+var_40]
0x7D8836: jmp     short loc_7D8889
0x7D8838: fld     dword ptr ds:0B43094h
0x7D883E: fcom    st(1)
0x7D8840: fnstsw  ax
0x7D8842: test    ah, 41h
0x7D8845: jz      short loc_7D8820
0x7D8847: fldz
0x7D8849: fld     st
0x7D884B: fld     dword ptr ds:0B43098h
0x7D8851: fucom   st(1)
0x7D8853: fnstsw  ax
0x7D8855: fstp    st(1)
0x7D8857: test    ah, 44h
0x7D885A: jnp     short loc_7D882C
0x7D885C: fld     st(3)
0x7D885E: fsub    st, st(3)
0x7D8860: fxch    st(1)
0x7D8862: fsubrp  st(3), st
0x7D8864: fdivrp  st(2), st
0x7D8866: fxch    st(3)
0x7D8868: fcom    st(1)
0x7D886A: fnstsw  ax
0x7D886C: test    ah, 5
0x7D886F: jp      short loc_7D887D
0x7D8871: fstp    st(1)
0x7D8873: fld     st
0x7D8875: fsubr   st, st(1)
0x7D8877: fstp    [esp+50h+var_40]
0x7D887B: jmp     short loc_7D888B
0x7D887D: fxch    st(1)
0x7D887F: fsubr   st, st(1)
0x7D8881: fstp    [esp+50h+var_40]
0x7D8885: jmp     short loc_7D888B
0x7D8887: fldz
0x7D8889: fxch    st(2)
0x7D888B: test    bl, bl
0x7D888D: jz      short loc_7D890D
0x7D888F: fld     dword ptr ds:0B4308Ch
0x7D8895: fcom    st(2)
0x7D8897: fnstsw  ax
0x7D8899: test    ah, 41h
0x7D889C: jz      short loc_7D88EF
0x7D889E: fld     st(3)
0x7D88A0: fld     dword ptr ds:0B43090h
0x7D88A6: fucom   st(1)
0x7D88A8: fnstsw  ax
0x7D88AA: fstp    st(1)
0x7D88AC: test    ah, 44h
0x7D88AF: jnp     short loc_7D88FD
0x7D88B1: fcom    st(3)
0x7D88B3: fnstsw  ax
0x7D88B5: test    ah, 5
0x7D88B8: jp      short loc_7D88C8
0x7D88BA: fstp    st(2)
0x7D88BC: fstp    st(2)
0x7D88BE: fstp    st(1)
0x7D88C0: fstp    st
0x7D88C2: fst     [esp+50h+var_3C]
0x7D88C6: jmp     short loc_7D891C
0x7D88C8: fld     st(1)
0x7D88CA: fsubp   st(4), st
0x7D88CC: fsubrp  st(1), st
0x7D88CE: fdivp   st(2), st
0x7D88D0: fcom    st(1)
0x7D88D2: fnstsw  ax
0x7D88D4: test    ah, 5
0x7D88D7: jp      short loc_7D88E5
0x7D88D9: fstp    st(1)
0x7D88DB: fld     st
0x7D88DD: fsubp   st(1), st
0x7D88DF: fstp    [esp+50h+var_3C]
0x7D88E3: jmp     short loc_7D8911
0x7D88E5: fxch    st(1)
0x7D88E7: fsubp   st(1), st
0x7D88E9: fstp    [esp+50h+var_3C]
0x7D88ED: jmp     short loc_7D8911
0x7D88EF: fstp    st(1)
0x7D88F1: fstp    st(1)
0x7D88F3: fstp    st
0x7D88F5: fld1
0x7D88F7: fstp    [esp+50h+var_3C]
0x7D88FB: jmp     short loc_7D8934
0x7D88FD: fstp    st(2)
0x7D88FF: fstp    st(2)
0x7D8901: fstp    st(1)
0x7D8903: fstp    st
0x7D8905: fld1
0x7D8907: fstp    [esp+50h+var_3C]
0x7D890B: jmp     short loc_7D8934
0x7D890D: fstp    st
0x7D890F: fstp    st
0x7D8911: fcom    [esp+50h+var_3C]
0x7D8915: fnstsw  ax
0x7D8917: test    ah, 44h
0x7D891A: jp      short loc_7D8929
0x7D891C: fcom    dword ptr [esi+9Ch]
0x7D8922: fnstsw  ax
0x7D8924: test    ah, 5
0x7D8927: jnp     short loc_7D8982
0x7D8929: fcom    [esp+50h+var_3C]
0x7D892D: fnstsw  ax
0x7D892F: test    ah, 5
0x7D8932: jp      short loc_7D8941
0x7D8934: fcom    dword ptr [esi+9Ch]
0x7D893A: fnstsw  ax
0x7D893C: test    ah, 44h
0x7D893F: jnp     short loc_7D8982
0x7D8941: fld     st
0x7D8943: fld     [esp+50h+var_40]
0x7D8947: fucom   st(1)
0x7D8949: fnstsw  ax
0x7D894B: fstp    st(1)
0x7D894D: test    ah, 44h
0x7D8950: jp      short loc_7D8963
0x7D8952: fxch    st(1)
0x7D8954: fcom    dword ptr [esi+0A4h]
0x7D895A: fnstsw  ax
0x7D895C: test    ah, 5
0x7D895F: jnp     short loc_7D898F
0x7D8961: fxch    st(1)
0x7D8963: fcom    st(1)
0x7D8965: fnstsw  ax
0x7D8967: test    ah, 41h
0x7D896A: jnz     short loc_7D8998
0x7D896C: fxch    st(1)
0x7D896E: fcomp   dword ptr [esi+0A4h]
0x7D8974: fnstsw  ax
0x7D8976: test    ah, 44h
0x7D8979: jp      short loc_7D899A
0x7D897B: xor     ebx, ebx
0x7D897D: mov     [esi+24h], ebx
0x7D8980: jmp     short loc_7D899C
0x7D8982: xor     ebx, ebx
0x7D8984: fstp    st
0x7D8986: fld     [esp+50h+var_40]
0x7D898A: mov     [esi+24h], ebx
0x7D898D: jmp     short loc_7D899C
0x7D898F: xor     ebx, ebx
0x7D8991: fstp    st
0x7D8993: mov     [esi+24h], ebx
0x7D8996: jmp     short loc_7D899C
0x7D8998: fstp    st(1)
0x7D899A: xor     ebx, ebx
0x7D899C: fld     [esp+50h+var_3C]
0x7D89A0: mov     edi, [esp+50h+var_38]
0x7D89A4: cmp     edi, ebx
0x7D89A6: fstp    dword ptr [esi+9Ch]
0x7D89AC: fstp    dword ptr [esi+0A4h]
0x7D89B2: jz      short loc_7D89C5
0x7D89B4: mov     ecx, [edi+10h]
0x7D89B7: fld     dword ptr [ecx+50h]
0x7D89BA: push    ecx
0x7D89BB: mov     ecx, esi
0x7D89BD: fstp    [esp+54h+var_54]; float
0x7D89C0: call    sub_7E2430
0x7D89C5: test    dword ptr [esi+1Ch], 80000h
0x7D89CC: jbe     short loc_7D8A35
0x7D89CE: cmp     edi, ebx
0x7D89D0: jz      short loc_7D89DA
0x7D89D2: mov     edx, [edi+10h]
0x7D89D5: fld     dword ptr [edx+50h]
0x7D89D8: jmp     short loc_7D89DC
0x7D89DA: fld1
0x7D89DC: fstp    [esp+50h+arg_0]
0x7D89E0: push    ebx
0x7D89E1: fld     [esp+54h+arg_0]
0x7D89E5: mov     ecx, ebp
0x7D89E7: fstp    [esp+54h+arg_0]
0x7D89EB: call    NiNode_GetNiPropertyByID
0x7D89F0: fld1
0x7D89F2: mov     ecx, eax
0x7D89F4: fld     [esp+50h+arg_0]
0x7D89F8: fucom   st(1)
0x7D89FA: fnstsw  ax
0x7D89FC: fstp    st(1)
0x7D89FE: test    ah, 44h
0x7D8A01: jp      short loc_7D8A15
0x7D8A03: cmp     ecx, ebx
0x7D8A05: jz      short loc_7D8A32
0x7D8A07: test    byte ptr [ecx+18h], 1
0x7D8A0B: jz      short loc_7D8A32
0x7D8A0D: and     word ptr [ecx+18h], 0FFFEh
0x7D8A13: jmp     short loc_7D8A2F
0x7D8A15: fldz
0x7D8A17: fcomp   st(1)
0x7D8A19: fnstsw  ax
0x7D8A1B: test    ah, 5
0x7D8A1E: jp      short loc_7D8A32
0x7D8A20: cmp     ecx, ebx
0x7D8A22: jz      short loc_7D8A32
0x7D8A24: test    byte ptr [ecx+18h], 1
0x7D8A28: jnz     short loc_7D8A32
0x7D8A2A: or      word ptr [ecx+18h], 1
0x7D8A2F: mov     [esi+24h], ebx
0x7D8A32: fstp    dword ptr [esi+20h]
0x7D8A35: mov     eax, [esp+50h+var_34]
0x7D8A39: cmp     [esi+24h], eax
0x7D8A3C: mov     ebx, [esp+50h+arg_C]
0x7D8A40: jnz     short loc_7D8A4A
0x7D8A42: test    bl, bl
0x7D8A44: jnz     loc_7D8B32
0x7D8A4A: cmp     bl, 1
0x7D8A4D: mov     edi, [esp+50h+arg_8]
0x7D8A51: jnz     short loc_7D8A73
0x7D8A53: mov     ecx, esi
0x7D8A55: call    sub_7E24C0
0x7D8A5A: fldz
0x7D8A5C: fcomp   dword ptr [esi+20h]
0x7D8A5F: fnstsw  ax
0x7D8A61: test    ah, 44h
0x7D8A64: jnp     loc_7D8B32
0x7D8A6A: mov     ecx, [esp+50h+var_34]
0x7D8A6E: mov     [esi+24h], ecx
0x7D8A71: jmp     short loc_7D8A78
0x7D8A73: mov     word ptr [edi], 0
0x7D8A78: mov     eax, ds:0B42F48h
0x7D8A7D: cmp     eax, 1
0x7D8A80: jnz     short loc_7D8A93
0x7D8A82: mov     edx, [esi]
0x7D8A84: mov     eax, [esp+50h+arg_4]
0x7D8A88: mov     edx, [edx+98h]
0x7D8A8E: push    ebx
0x7D8A8F: push    edi
0x7D8A90: push    eax
0x7D8A91: jmp     short loc_7D8AA7
0x7D8A93: cmp     eax, 2
0x7D8A96: jl      short loc_7D8AAC
0x7D8A98: mov     eax, [esi]
0x7D8A9A: mov     ecx, [esp+50h+arg_4]
0x7D8A9E: mov     edx, [eax+9Ch]
0x7D8AA4: push    ebx
0x7D8AA5: push    edi
0x7D8AA6: push    ecx
0x7D8AA7: push    ebp
0x7D8AA8: mov     ecx, esi
0x7D8AAA: call    edx
0x7D8AAC: cmp     dword ptr ds:0B42F48h, 3
0x7D8AB3: jl      short loc_7D8B1A
0x7D8AB5: test    byte ptr ds:0B42F40h, 10h
0x7D8ABC: mov     eax, 0
0x7D8AC1: setnle  al
0x7D8AC4: test    al, al
0x7D8AC6: jz      short loc_7D8B1A
0x7D8AC8: test    bl, bl
0x7D8ACA: jz      short loc_7D8B32
0x7D8ACC: cmp     [esp+50h+var_38], 0
0x7D8AD1: jz      short loc_7D8B1A
0x7D8AD3: push    0
0x7D8AD5: mov     ecx, ebp
0x7D8AD7: call    NiNode_GetNiPropertyByID
0x7D8ADC: test    eax, eax
0x7D8ADE: jnz     short loc_7D8AEB
0x7D8AE0: mov     eax, [esp+50h+var_38]
0x7D8AE4: mov     eax, [eax+8]
0x7D8AE7: test    eax, eax
0x7D8AE9: jz      short loc_7D8AFD
0x7D8AEB: mov     cx, [eax+18h]
0x7D8AEF: shr     cx, 9
0x7D8AF3: test    cl, 1
0x7D8AF6: mov     byte ptr [esp+50h+arg_4], 1
0x7D8AFB: jnz     short loc_7D8B02
0x7D8AFD: mov     byte ptr [esp+50h+arg_4], 0
0x7D8B02: cmp     dword ptr [ebp+0B8h], 0
0x7D8B09: mov     edx, [esp+50h+arg_4]
0x7D8B0D: setnz   al
0x7D8B10: push    edx
0x7D8B11: mov     ecx, esi
0x7D8B13: push    eax
0x7D8B14: push    ebp
0x7D8B15: call    sub_85AAC0
0x7D8B1A: test    bl, bl
0x7D8B1C: jz      short loc_7D8B32
0x7D8B1E: cmp     dword ptr [esi+34h], 0
0x7D8B22: jbe     short loc_7D8B32
0x7D8B24: mov     ecx, [esi+30h]
0x7D8B27: mov     eax, [ecx+8]
0x7D8B2A: test    eax, eax
0x7D8B2C: jz      short loc_7D8B32
0x7D8B2E: mov     byte ptr [eax+7], 1
0x7D8B32: pop     edi
0x7D8B33: lea     eax, [esi+28h]
0x7D8B36: pop     esi
0x7D8B37: pop     ebp
0x7D8B38: pop     ebx
0x7D8B39: add     esp, 40h
0x7D8B3C: retn    10h
