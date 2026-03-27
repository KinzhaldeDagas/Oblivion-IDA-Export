0x6F7750: push    0FFFFFFFFh
0x6F7752: push    offset SEH_6F7750
0x6F7757: mov     eax, large fs:0
0x6F775D: push    eax
0x6F775E: sub     esp, 40h
0x6F7761: mov     eax, ds:0B30AACh
0x6F7766: xor     eax, esp
0x6F7768: mov     [esp+4Ch+var_10], eax
0x6F776C: push    ebx
0x6F776D: push    ebp
0x6F776E: push    esi
0x6F776F: push    edi
0x6F7770: mov     eax, ds:0B30AACh
0x6F7775: xor     eax, esp
0x6F7777: push    eax; MaxCount
0x6F7778: lea     eax, [esp+60h+var_C]
0x6F777C: mov     large fs:0, eax
0x6F7782: mov     eax, [ecx+20h]
0x6F7785: mov     eax, [eax]
0x6F7787: xor     edx, edx
0x6F7789: cmp     eax, edx
0x6F778B: mov     [esp+60h+var_44], ecx
0x6F778F: jz      short loc_6F77B9
0x6F7791: mov     eax, [ecx+20h]
0x6F7794: mov     esi, [ecx+30h]
0x6F7797: mov     eax, [eax]
0x6F7799: mov     esi, [esi]
0x6F779B: add     esi, eax
0x6F779D: cmp     eax, esi
0x6F779F: jnb     short loc_6F77B9
0x6F77A1: mov     eax, [ecx+30h]
0x6F77A4: add     dword ptr [eax], 0FFFFFFFFh
0x6F77A7: mov     eax, [ecx+20h]
0x6F77AA: mov     ecx, [eax]
0x6F77AC: lea     edx, [ecx+1]
0x6F77AF: mov     [eax], edx
0x6F77B1: movzx   eax, byte ptr [ecx]
0x6F77B4: jmp     loc_6F7A2E
0x6F77B9: mov     eax, [ecx+4Ch]
0x6F77BC: cmp     eax, edx
0x6F77BE: jz      loc_6F7A2B
0x6F77C4: cmp     [ecx+3Ch], edx
0x6F77C7: jnz     short loc_6F77E3
0x6F77C9: push    eax; File
0x6F77CA: call    _fgetc
0x6F77CF: add     esp, 4
0x6F77D2: cmp     eax, 0FFFFFFFFh
0x6F77D5: jz      loc_6F7A2B
0x6F77DB: movzx   eax, al
0x6F77DE: jmp     loc_6F7A2E
0x6F77E3: mov     [esp+60h+var_14], 0Fh
0x6F77EB: mov     [esp+60h+var_18], edx
0x6F77EF: mov     byte ptr [esp+60h+var_28], dl
0x6F77F3: push    eax; File
0x6F77F4: mov     [esp+64h+var_4], edx
0x6F77F8: call    _fgetc
0x6F77FD: add     esp, 4
0x6F7800: cmp     eax, 0FFFFFFFFh
0x6F7803: jz      loc_6F7A22
0x6F7809: push    eax
0x6F780A: push    1
0x6F780C: lea     ecx, [esp+68h+var_2C]
0x6F7810: call    sub_6EDAA0
0x6F7815: mov     edi, [esp+60h+var_14]
0x6F7819: cmp     edi, 10h
0x6F781C: mov     eax, [esp+60h+var_28]
0x6F7820: jb      loc_6F7972
0x6F7826: test    eax, eax
0x6F7828: mov     ebx, eax
0x6F782A: jz      short loc_6F7850
0x6F782C: cmp     edi, 10h
0x6F782F: mov     ecx, eax
0x6F7831: jnb     short loc_6F7837
0x6F7833: lea     ecx, [esp+60h+var_28]
0x6F7837: cmp     ecx, ebx
0x6F7839: ja      short loc_6F7850
0x6F783B: cmp     edi, 10h
0x6F783E: mov     ecx, eax
0x6F7840: jnb     short loc_6F7846
0x6F7842: lea     ecx, [esp+60h+var_28]
0x6F7846: mov     edx, [esp+60h+var_18]
0x6F784A: add     ecx, edx
0x6F784C: cmp     ebx, ecx
0x6F784E: jbe     short loc_6F7861
0x6F7850: call    __invalid_parameter_noinfo
0x6F7855: mov     edi, [esp+60h+var_14]
0x6F7859: mov     edx, [esp+60h+var_18]
0x6F785D: mov     eax, [esp+60h+var_28]
0x6F7861: lea     ecx, [esp+60h+var_2C]
0x6F7865: cmp     ecx, 0FFFFFFFEh
0x6F7868: jz      short loc_6F788C
0x6F786A: cmp     edi, 10h
0x6F786D: mov     ecx, eax
0x6F786F: jnb     short loc_6F7875
0x6F7871: lea     ecx, [esp+60h+var_28]
0x6F7875: add     ecx, edx
0x6F7877: cmp     ebx, ecx
0x6F7879: jb      short loc_6F788C
0x6F787B: call    __invalid_parameter_noinfo
0x6F7880: mov     edi, [esp+60h+var_14]
0x6F7884: mov     edx, [esp+60h+var_18]
0x6F7888: mov     eax, [esp+60h+var_28]
0x6F788C: cmp     edi, 10h
0x6F788F: mov     ebp, edx
0x6F7891: jb      loc_6F797B
0x6F7897: test    eax, eax
0x6F7899: mov     esi, eax
0x6F789B: jz      short loc_6F78BD
0x6F789D: cmp     edi, 10h
0x6F78A0: mov     ecx, eax
0x6F78A2: jnb     short loc_6F78A8
0x6F78A4: lea     ecx, [esp+60h+var_28]
0x6F78A8: cmp     ecx, esi
0x6F78AA: ja      short loc_6F78BD
0x6F78AC: cmp     edi, 10h
0x6F78AF: mov     ecx, eax
0x6F78B1: jnb     short loc_6F78B7
0x6F78B3: lea     ecx, [esp+60h+var_28]
0x6F78B7: add     ecx, edx
0x6F78B9: cmp     esi, ecx
0x6F78BB: jbe     short loc_6F78CE
0x6F78BD: call    __invalid_parameter_noinfo
0x6F78C2: mov     edi, [esp+60h+var_14]
0x6F78C6: mov     edx, [esp+60h+var_18]
0x6F78CA: mov     eax, [esp+60h+var_28]
0x6F78CE: lea     ecx, [esp+60h+var_2C]
0x6F78D2: cmp     ecx, 0FFFFFFFEh
0x6F78D5: jz      short loc_6F78EB
0x6F78D7: cmp     edi, 10h
0x6F78DA: jnb     short loc_6F78E0
0x6F78DC: lea     eax, [esp+60h+var_28]
0x6F78E0: add     eax, edx
0x6F78E2: cmp     esi, eax
0x6F78E4: jb      short loc_6F78EB
0x6F78E6: call    __invalid_parameter_noinfo
0x6F78EB: mov     edi, [esp+60h+var_44]
0x6F78EF: mov     ecx, [edi+3Ch]
0x6F78F2: mov     edx, [ecx]
0x6F78F4: mov     edx, [edx+10h]
0x6F78F7: lea     eax, [esp+60h+var_40]
0x6F78FB: push    eax
0x6F78FC: lea     eax, [esp+64h+var_48]
0x6F7900: push    eax
0x6F7901: lea     eax, [esp+68h+Dst]
0x6F7905: push    eax
0x6F7906: lea     eax, [esp+6Ch+var_48]
0x6F790A: push    eax
0x6F790B: add     ebx, ebp
0x6F790D: push    ebx
0x6F790E: push    esi
0x6F790F: lea     eax, [edi+44h]
0x6F7912: push    eax
0x6F7913: call    edx
0x6F7915: test    eax, eax
0x6F7917: jl      loc_6F7A22
0x6F791D: cmp     eax, 1
0x6F7920: jle     short loc_6F7984
0x6F7922: cmp     eax, 3
0x6F7925: jnz     loc_6F7A22
0x6F792B: cmp     [esp+60h+var_18], 1
0x6F7930: jb      loc_6F7A0D
0x6F7936: push    1; Src
0x6F7938: lea     edx, [esp+64h+var_34]
0x6F793C: push    edx
0x6F793D: lea     ecx, [esp+68h+var_2C]
0x6F7941: call    sub_6F75E0
0x6F7946: mov     ecx, eax
0x6F7948: call    ??D?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBEABDXZ; std::_String_const_iterator<char,std::char_traits<char>,std::allocator<char>>::operator*(void)
0x6F794D: push    eax; Src
0x6F794E: lea     eax, [esp+68h+Dst]
0x6F7952: push    1; DstSize
0x6F7954: push    eax; Dst
0x6F7955: call    _memcpy_s
0x6F795A: movzx   esi, [esp+70h+Dst]
0x6F795F: add     esp, 10h
0x6F7962: lea     ecx, [esp+60h+var_2C]
0x6F7966: call    sub_79AB00
0x6F796B: mov     eax, esi
0x6F796D: jmp     loc_6F7A2E
0x6F7972: lea     ebx, [esp+60h+var_28]
0x6F7976: jmp     loc_6F782C
0x6F797B: lea     esi, [esp+60h+var_28]
0x6F797F: jmp     loc_6F789D
0x6F7984: lea     eax, [esp+60h+Dst]
0x6F7988: cmp     [esp+60h+var_40], eax
0x6F798C: jnz     loc_6F7A56
0x6F7992: mov     edx, [esp+60h+var_14]
0x6F7996: cmp     edx, 10h
0x6F7999: mov     eax, [esp+60h+var_28]
0x6F799D: jb      loc_6F7A4D
0x6F79A3: test    eax, eax
0x6F79A5: mov     esi, eax
0x6F79A7: jz      short loc_6F79CD
0x6F79A9: cmp     edx, 10h
0x6F79AC: mov     ecx, eax
0x6F79AE: jnb     short loc_6F79B4
0x6F79B0: lea     ecx, [esp+60h+var_28]
0x6F79B4: cmp     ecx, esi
0x6F79B6: ja      short loc_6F79CD
0x6F79B8: cmp     edx, 10h
0x6F79BB: mov     ecx, eax
0x6F79BD: jnb     short loc_6F79C3
0x6F79BF: lea     ecx, [esp+60h+var_28]
0x6F79C3: mov     ebx, [esp+60h+var_18]
0x6F79C7: add     ecx, ebx
0x6F79C9: cmp     esi, ecx
0x6F79CB: jbe     short loc_6F79DA
0x6F79CD: call    __invalid_parameter_noinfo
0x6F79D2: mov     edx, [esp+60h+var_14]
0x6F79D6: mov     eax, [esp+60h+var_28]
0x6F79DA: lea     ecx, [esp+60h+var_2C]
0x6F79DE: cmp     ecx, 0FFFFFFFEh
0x6F79E1: jz      short loc_6F79FB
0x6F79E3: cmp     edx, 10h
0x6F79E6: jnb     short loc_6F79EC
0x6F79E8: lea     eax, [esp+60h+var_28]
0x6F79EC: mov     edx, [esp+60h+var_18]
0x6F79F0: add     eax, edx
0x6F79F2: cmp     esi, eax
0x6F79F4: jb      short loc_6F79FB
0x6F79F6: call    __invalid_parameter_noinfo
0x6F79FB: mov     eax, dword ptr [esp+60h+var_48]
0x6F79FF: sub     eax, esi
0x6F7A01: push    eax
0x6F7A02: push    0
0x6F7A04: lea     ecx, [esp+68h+var_2C]
0x6F7A08: call    sub_4134E0
0x6F7A0D: mov     ecx, [edi+4Ch]
0x6F7A10: push    ecx; File
0x6F7A11: call    _fgetc
0x6F7A16: add     esp, 4
0x6F7A19: cmp     eax, 0FFFFFFFFh
0x6F7A1C: jnz     loc_6F7809
0x6F7A22: lea     ecx, [esp+60h+var_2C]
0x6F7A26: call    sub_79AB00
0x6F7A2B: or      eax, 0FFFFFFFFh
0x6F7A2E: mov     ecx, dword ptr [esp+60h+var_C]
0x6F7A32: mov     large fs:0, ecx
0x6F7A39: pop     ecx
0x6F7A3A: pop     edi
0x6F7A3B: pop     esi
0x6F7A3C: pop     ebp
0x6F7A3D: pop     ebx
0x6F7A3E: mov     ecx, [esp+4Ch+var_10]
0x6F7A42: xor     ecx, esp
0x6F7A44: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6F7A49: add     esp, 4Ch
0x6F7A4C: retn
0x6F7A4D: lea     esi, [esp+60h+var_28]
0x6F7A51: jmp     loc_6F79A9
0x6F7A56: mov     edi, [esp+60h+var_18]
0x6F7A5A: lea     ecx, [esp+60h+var_3C]
0x6F7A5E: push    ecx
0x6F7A5F: lea     ecx, [esp+64h+var_2C]
0x6F7A63: call    sub_6F75E0
0x6F7A68: mov     ecx, eax
0x6F7A6A: call    ??D?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBEABDXZ; std::_String_const_iterator<char,std::char_traits<char>,std::allocator<char>>::operator*(void)
0x6F7A6F: sub     edi, dword ptr [esp+60h+var_48]
0x6F7A73: mov     esi, eax
0x6F7A75: add     esi, edi
0x6F7A77: test    esi, esi
0x6F7A79: jle     short loc_6F7A9C
0x6F7A7B: mov     edx, [esp+60h+var_44]
0x6F7A7F: mov     eax, [edx+4Ch]
0x6F7A82: mov     ecx, dword ptr [esp+60h+var_48]
0x6F7A86: movsx   edx, byte ptr [esi+ecx-1]
0x6F7A8B: sub     esi, 1
0x6F7A8E: push    eax; File
0x6F7A8F: push    edx; Ch
0x6F7A90: call    _ungetc
0x6F7A95: add     esp, 8
0x6F7A98: test    esi, esi
0x6F7A9A: jg      short loc_6F7A7B
0x6F7A9C: movzx   esi, [esp+60h+Dst]
0x6F7AA1: lea     ecx, [esp+60h+var_2C]
0x6F7AA5: call    sub_79AB00
0x6F7AAA: mov     eax, esi
0x6F7AAC: jmp     short loc_6F7A2E
