0x8AF8C0: push    ebp
0x8AF8C1: mov     ebp, esp
0x8AF8C3: and     esp, 0FFFFFFF0h
0x8AF8C6: sub     esp, 104h
0x8AF8CC: mov     eax, ds:0B30AACh
0x8AF8D1: xor     eax, esp
0x8AF8D3: mov     [esp+104h+var_4], eax
0x8AF8DA: mov     eax, [ebp+arg_4]
0x8AF8DD: mov     ecx, [ebp+arg_8]
0x8AF8E0: push    ebx
0x8AF8E1: mov     ebx, [ebp+arg_0]
0x8AF8E4: mov     [esp+108h+var_F8], eax
0x8AF8E8: xor     al, al
0x8AF8EA: test    ebx, ebx
0x8AF8EC: push    esi
0x8AF8ED: push    edi
0x8AF8EE: mov     [esp+110h+var_FC], ecx
0x8AF8F2: mov     [esp+110h+var_FD], al
0x8AF8F6: jz      loc_8AFB1C
0x8AF8FC: push    ebx
0x8AF8FD: call    sub_47FAC0
0x8AF902: add     esp, 4
0x8AF905: test    eax, eax
0x8AF907: mov     dword ptr [esp+110h+var_F4], eax
0x8AF90B: jz      def_8AF956; jumptable 008AF956 default case, cases 8-10
0x8AF911: mov     esi, [eax+10h]
0x8AF914: test    esi, esi
0x8AF916: jz      def_8AF956; jumptable 008AF956 default case, cases 8-10
0x8AF91C: mov     eax, [esi+8]
0x8AF91F: test    eax, eax
0x8AF921: jz      short loc_8AF92D
0x8AF923: add     eax, 14h
0x8AF926: jz      short loc_8AF92D
0x8AF928: mov     eax, [eax+1Ch]
0x8AF92B: jmp     short loc_8AF92F
0x8AF92D: xor     eax, eax
0x8AF92F: mov     edx, eax
0x8AF931: and     dl, 3Fh
0x8AF934: cmp     dl, 8
0x8AF937: jnz     def_8AF956; jumptable 008AF956 default case, cases 8-10
0x8AF93D: shr     eax, 8
0x8AF940: and     eax, 1Fh
0x8AF943: add     eax, 0FFFFFFFFh; switch 13 cases
0x8AF946: cmp     eax, 0Ch
0x8AF949: ja      def_8AF956; jumptable 008AF956 default case, cases 8-10
0x8AF94F: movzx   eax, ds:byte_8AFB40[eax]
0x8AF956: jmp     ds:jpt_8AF956[eax*4]; switch jump
0x8AF95D: cmp     byte ptr [ebp+arg_C], 0; jumptable 008AF956 case 1
0x8AF961: setz    al
0x8AF964: test    al, al
0x8AF966: jz      def_8AF956; jumptable 008AF956 default case, cases 8-10
0x8AF96C: mov     ecx, esi; jumptable 008AF956 cases 2-7,11-13
0x8AF96E: call    sub_494F10
0x8AF973: test    eax, eax
0x8AF975: jz      def_8AF956; jumptable 008AF956 default case, cases 8-10
0x8AF97B: push    eax
0x8AF97C: push    offset dword_BA7FD8
0x8AF981: call    NiRTTI_Cast
0x8AF986: mov     edi, eax
0x8AF988: add     esp, 8
0x8AF98B: test    edi, edi
0x8AF98D: jz      def_8AF956; jumptable 008AF956 default case, cases 8-10
0x8AF993: mov     edx, [esi]
0x8AF995: mov     edx, [edx+0ACh]
0x8AF99B: lea     eax, [esp+110h+var_F4+4]
0x8AF99F: push    eax
0x8AF9A0: mov     ecx, esi
0x8AF9A2: call    edx
0x8AF9A4: mov     eax, dword ptr [esp+110h+var_F4]
0x8AF9A8: push    eax
0x8AF9A9: push    offset dword_BA7A20
0x8AF9AE: call    NiRTTI__IsObjectOfRTTIType
0x8AF9B3: add     esp, 8
0x8AF9B6: test    al, al
0x8AF9B8: mov     ecx, esi
0x8AF9BA: jz      loc_8AFA68
0x8AF9C0: call    sub_607840
0x8AF9C5: test    al, al
0x8AF9C7: jz      short loc_8AF9DD
0x8AF9C9: fld1
0x8AF9CB: mov     ecx, dword ptr [esp+110h+var_F4]
0x8AF9CF: fcomp   dword ptr [ecx+14h]
0x8AF9D2: fnstsw  ax
0x8AF9D4: test    ah, 44h
0x8AF9D7: jp      loc_8AFA77
0x8AF9DD: lea     edx, [ebx+64h]
0x8AF9E0: push    edx
0x8AF9E1: lea     eax, [esp+114h+var_F4+4]
0x8AF9E5: push    eax
0x8AF9E6: call    sub_5398E0
0x8AF9EB: push    esi
0x8AF9EC: push    offset dword_BA8018
0x8AF9F1: call    NiRTTI__IsObjectOfRTTIType
0x8AF9F6: add     esp, 10h
0x8AF9F9: test    al, al
0x8AF9FB: jz      short loc_8AFA77
0x8AF9FD: movaps  xmm0, [esp+110h+var_F4+4]
0x8AFA02: movaps  [esp+110h+anonymous_6], xmm0
0x8AFA0A: movaps  xmm0, xmmword ptr [esp+110h+var_E4+4]
0x8AFA0F: movaps  [esp+110h+anonymous_0], xmm0
0x8AFA17: movaps  xmm0, [esp+110h+anonymous_1]
0x8AFA1C: lea     ecx, [esi+20h]
0x8AFA1F: movaps  [esp+110h+anonymous_2], xmm0
0x8AFA27: movaps  xmm0, [esp+110h+anonymous_3]
0x8AFA2C: push    ecx
0x8AFA2D: lea     ecx, [esp+114h+var_50]
0x8AFA34: movaps  [esp+114h+anonymous_4], xmm0
0x8AFA3C: call    sub_8B1DD0
0x8AFA41: movaps  xmm0, xmmword ptr [esi+30h]
0x8AFA45: lea     edx, [esp+110h+var_50]
0x8AFA4C: push    edx
0x8AFA4D: lea     eax, [esp+114h+anonymous_6]
0x8AFA54: push    eax
0x8AFA55: lea     ecx, [esp+118h+var_F4+4]
0x8AFA59: movaps  xmmword ptr [esp+118h+var_24+4], xmm0
0x8AFA61: call    sub_8B1F70
0x8AFA66: jmp     short loc_8AFA77
0x8AFA68: mov     edx, [esi]
0x8AFA6A: mov     edx, [edx+0ACh]
0x8AFA70: lea     eax, [esp+110h+var_F4+4]
0x8AFA74: push    eax
0x8AFA75: call    edx
0x8AFA77: mov     edx, [esp+110h+var_F8]
0x8AFA7B: lea     eax, [esp+110h+var_B0]
0x8AFA7F: push    eax
0x8AFA80: lea     ecx, [esp+114h+var_F4+4]
0x8AFA84: push    ecx
0x8AFA85: push    edx
0x8AFA86: mov     ecx, edi
0x8AFA88: call    sub_8B6DC0
0x8AFA8D: test    al, al
0x8AFA8F: jz      short def_8AF956; jumptable 008AF956 default case, cases 8-10
0x8AFA91: mov     eax, [esp+110h+var_FC]
0x8AFA95: cmp     dword ptr [eax], 0
0x8AFA98: jz      short loc_8AFAAE
0x8AFA9A: fld     dword ptr [eax+2Ch]
0x8AFA9D: fld     dword ptr [esp+110h+anonymous_5+0Ch]
0x8AFAA1: fcompp
0x8AFAA3: fnstsw  ax
0x8AFAA5: test    ah, 5
0x8AFAA8: jp      short def_8AF956; jumptable 008AF956 default case, cases 8-10
0x8AFAAA: mov     eax, [esp+110h+var_FC]
0x8AFAAE: movaps  xmm0, [esp+110h+var_B0]
0x8AFAB3: mov     [eax], esi
0x8AFAB5: movaps  xmmword ptr [eax+10h], xmm0
0x8AFAB9: movaps  xmm0, [esp+110h+anonymous_5]
0x8AFABE: movaps  xmmword ptr [eax+20h], xmm0
0x8AFAC2: mov     eax, [ebx]; jumptable 008AF956 default case, cases 8-10
0x8AFAC4: mov     edx, [eax+8]
0x8AFAC7: mov     ecx, ebx
0x8AFAC9: call    edx
0x8AFACB: mov     edi, eax
0x8AFACD: test    edi, edi
0x8AFACF: jz      short loc_8AFB18
0x8AFAD1: movzx   eax, word ptr [edi+0B6h]
0x8AFAD8: xor     esi, esi
0x8AFADA: test    eax, eax
0x8AFADC: jbe     short loc_8AFB18
0x8AFADE: cmp     eax, esi
0x8AFAE0: ja      short loc_8AFAE6
0x8AFAE2: xor     eax, eax
0x8AFAE4: jmp     short loc_8AFAEF
0x8AFAE6: mov     eax, [edi+0B0h]
0x8AFAEC: mov     eax, [eax+esi*4]
0x8AFAEF: mov     ecx, [ebp+arg_C]
0x8AFAF2: mov     edx, [esp+110h+var_FC]
0x8AFAF6: push    ecx
0x8AFAF7: mov     ecx, [esp+114h+var_F8]
0x8AFAFB: push    edx
0x8AFAFC: push    ecx
0x8AFAFD: push    eax
0x8AFAFE: call    sub_8AF8C0
0x8AFB03: or      [esp+120h+var_FD], al
0x8AFB07: movzx   eax, word ptr [edi+0B6h]
0x8AFB0E: add     esi, 1
0x8AFB11: add     esp, 10h
0x8AFB14: cmp     eax, esi
0x8AFB16: ja      short loc_8AFAE6
0x8AFB18: mov     al, [esp+110h+var_FD]
0x8AFB1C: mov     ecx, [esp+110h+var_4]
0x8AFB23: pop     edi
0x8AFB24: pop     esi
0x8AFB25: pop     ebx
0x8AFB26: xor     ecx, esp
0x8AFB28: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8AFB2D: mov     esp, ebp
0x8AFB2F: pop     ebp
0x8AFB30: retn
