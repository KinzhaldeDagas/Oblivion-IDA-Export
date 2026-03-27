0x744880: push    ecx
0x744881: push    ebx
0x744882: push    ebp
0x744883: push    esi
0x744884: mov     esi, [esp+10h+arg_0]
0x744888: push    edi
0x744889: mov     [esp+14h+var_4], 0
0x744891: mov     ebp, 1
0x744896: mov     eax, [esi+6Ch]
0x744899: cmp     eax, 106h
0x74489E: jnb     short loc_7448C3
0x7448A0: call    sub_7441E0
0x7448A5: mov     eax, [esi+6Ch]
0x7448A8: cmp     eax, 106h
0x7448AD: mov     edi, [esp+14h+arg_4]
0x7448B1: jnb     short loc_7448BB
0x7448B3: test    edi, edi
0x7448B5: jz      loc_744B55
0x7448BB: test    eax, eax
0x7448BD: jz      loc_744C4D
0x7448C3: cmp     eax, 3
0x7448C6: jb      short loc_744915
0x7448C8: mov     eax, [esi+40h]
0x7448CB: mov     ecx, [esi+50h]
0x7448CE: mov     edx, [esi+64h]
0x7448D1: mov     edi, [esi+2Ch]
0x7448D4: shl     eax, cl
0x7448D6: mov     ecx, [esi+30h]
0x7448D9: movzx   ecx, byte ptr [ecx+edx+2]
0x7448DE: xor     eax, ecx
0x7448E0: and     eax, [esi+4Ch]
0x7448E3: mov     ecx, [esi+3Ch]
0x7448E6: mov     [esi+40h], eax
0x7448E9: movzx   eax, word ptr [ecx+eax*2]
0x7448ED: and     edi, edx
0x7448EF: mov     edx, [esi+38h]
0x7448F2: mov     [edx+edi*2], ax
0x7448F6: mov     ecx, [esi+64h]
0x7448F9: and     ecx, [esi+2Ch]
0x7448FC: mov     edx, [esi+38h]
0x7448FF: movzx   eax, word ptr [edx+ecx*2]
0x744903: mov     ecx, [esi+40h]
0x744906: mov     edx, [esi+3Ch]
0x744909: mov     [esp+14h+var_4], eax
0x74490D: movzx   eax, word ptr [esi+64h]
0x744911: mov     [edx+ecx*2], ax
0x744915: mov     edx, [esi+68h]
0x744918: mov     ecx, [esi+58h]
0x74491B: mov     [esi+5Ch], edx
0x74491E: mov     edx, [esp+14h+var_4]
0x744922: test    edx, edx
0x744924: mov     ebx, 2
0x744929: mov     [esi+70h], ecx
0x74492C: mov     [esi+58h], ebx
0x74492F: jz      short loc_74499A
0x744931: mov     eax, ecx
0x744933: cmp     eax, [esi+78h]
0x744936: jnb     short loc_74499A
0x744938: mov     eax, [esi+64h]
0x74493B: mov     ecx, [esi+24h]
0x74493E: sub     eax, edx
0x744940: sub     ecx, 106h
0x744946: cmp     eax, ecx
0x744948: ja      short loc_74499A
0x74494A: mov     ecx, [esi+80h]
0x744950: cmp     ecx, ebx
0x744952: jge     short loc_74495F
0x744954: mov     eax, edx
0x744956: mov     edi, esi
0x744958: call    sub_743F90
0x74495D: jmp     short loc_744971
0x74495F: cmp     ecx, 3
0x744962: jnz     short loc_744974
0x744964: cmp     eax, ebp
0x744966: jnz     short loc_744974
0x744968: push    edx
0x744969: call    sub_744110
0x74496E: add     esp, 4
0x744971: mov     [esi+58h], eax
0x744974: mov     eax, [esi+58h]
0x744977: cmp     eax, 5
0x74497A: ja      short loc_74499A
0x74497C: cmp     [esi+80h], ebp
0x744982: jz      short loc_744997
0x744984: cmp     eax, 3
0x744987: jnz     short loc_74499A
0x744989: mov     edx, [esi+64h]
0x74498C: sub     edx, [esi+68h]
0x74498F: cmp     edx, 1000h
0x744995: jbe     short loc_74499A
0x744997: mov     [esi+58h], ebx
0x74499A: mov     eax, [esi+70h]
0x74499D: cmp     eax, 3
0x7449A0: jb      loc_744B5D
0x7449A6: cmp     [esi+58h], eax
0x7449A9: ja      loc_744B5D
0x7449AF: mov     dx, [esi+64h]
0x7449B3: sub     dx, [esi+5Ch]
0x7449B7: mov     eax, [esi+64h]
0x7449BA: mov     ecx, [esi+6Ch]
0x7449BD: mov     ebx, [esi+169Ch]
0x7449C3: lea     edi, [eax+ecx-3]
0x7449C7: mov     al, [esi+70h]
0x7449CA: sub     dx, bp
0x7449CD: movzx   ecx, dx
0x7449D0: mov     edx, [esi+1698h]
0x7449D6: mov     [ebx+edx*2], cx
0x7449DA: mov     edx, [esi+1690h]
0x7449E0: mov     ebx, [esi+1698h]
0x7449E6: sub     al, 3
0x7449E8: mov     [edx+ebx], al
0x7449EB: add     [esi+1698h], ebp
0x7449F1: movzx   eax, al
0x7449F4: movzx   edx, ds:byte_A851D0[eax]
0x7449FB: add     [esi+edx*4+490h], bp
0x744A03: lea     eax, [esi+edx*4+490h]
0x744A0A: add     ecx, 0FFFFh
0x744A10: cmp     cx, 100h
0x744A15: jnb     short loc_744A23
0x744A17: movzx   eax, cx
0x744A1A: movzx   eax, ds:byte_A84FD0[eax]
0x744A21: jmp     short loc_744A30
0x744A23: movzx   ecx, cx
0x744A26: shr     ecx, 7
0x744A29: movzx   eax, ds:byte_A850D0[ecx]
0x744A30: add     [esi+eax*4+980h], bp
0x744A38: mov     edx, [esi+1694h]
0x744A3E: mov     eax, [esi+70h]
0x744A41: sub     edx, ebp
0x744A43: xor     ebx, ebx
0x744A45: cmp     [esi+1698h], edx
0x744A4B: mov     ecx, ebp
0x744A4D: setz    bl
0x744A50: sub     ecx, eax
0x744A52: add     [esi+6Ch], ecx
0x744A55: add     eax, 0FFFFFFFEh
0x744A58: mov     [esi+70h], eax
0x744A5B: jmp     short loc_744A60
0x744A5D: align 10h
0x744A60: add     [esi+64h], ebp
0x744A63: mov     edx, [esi+64h]
0x744A66: cmp     edx, edi
0x744A68: ja      short loc_744AB8
0x744A6A: mov     eax, [esi+40h]
0x744A6D: mov     ecx, [esi+50h]
0x744A70: mov     ebp, [esi+38h]
0x744A73: shl     eax, cl
0x744A75: mov     ecx, [esi+30h]
0x744A78: movzx   ecx, byte ptr [ecx+edx+2]
0x744A7D: and     edx, [esi+2Ch]
0x744A80: xor     eax, ecx
0x744A82: and     eax, [esi+4Ch]
0x744A85: mov     ecx, [esi+3Ch]
0x744A88: mov     [esi+40h], eax
0x744A8B: movzx   eax, word ptr [ecx+eax*2]
0x744A8F: mov     [ebp+edx*2+0], ax
0x744A94: mov     ecx, [esi+64h]
0x744A97: and     ecx, [esi+2Ch]
0x744A9A: mov     edx, [esi+38h]
0x744A9D: movzx   eax, word ptr [edx+ecx*2]
0x744AA1: mov     ecx, [esi+40h]
0x744AA4: mov     edx, [esi+3Ch]
0x744AA7: mov     [esp+14h+var_4], eax
0x744AAB: movzx   eax, word ptr [esi+64h]
0x744AAF: mov     [edx+ecx*2], ax
0x744AB3: mov     ebp, 1
0x744AB8: add     dword ptr [esi+70h], 0FFFFFFFFh
0x744ABC: jnz     short loc_744A60
0x744ABE: add     [esi+64h], ebp
0x744AC1: test    ebx, ebx
0x744AC3: mov     eax, [esi+64h]
0x744AC6: mov     dword ptr [esi+60h], 0
0x744ACD: mov     dword ptr [esi+58h], 2
0x744AD4: jz      loc_744896
0x744ADA: mov     edx, [esi+54h]
0x744ADD: test    edx, edx
0x744ADF: jl      short loc_744AE8
0x744AE1: mov     ecx, [esi+30h]
0x744AE4: add     ecx, edx
0x744AE6: jmp     short loc_744AEA
0x744AE8: xor     ecx, ecx
0x744AEA: push    0
0x744AEC: sub     eax, edx
0x744AEE: push    eax
0x744AEF: push    ecx
0x744AF0: push    esi
0x744AF1: call    sub_747610
0x744AF6: mov     ecx, [esi+64h]
0x744AF9: mov     edi, [esi]
0x744AFB: mov     [esi+54h], ecx
0x744AFE: mov     eax, [edi+1Ch]
0x744B01: mov     ebx, [eax+14h]
0x744B04: mov     ecx, [edi+10h]
0x744B07: add     esp, 10h
0x744B0A: cmp     ebx, ecx
0x744B0C: jbe     short loc_744B10
0x744B0E: mov     ebx, ecx
0x744B10: test    ebx, ebx
0x744B12: jz      short loc_744B49
0x744B14: mov     edx, [eax+10h]
0x744B17: mov     eax, [edi+0Ch]
0x744B1A: push    ebx; Size
0x744B1B: push    edx; Src
0x744B1C: push    eax; Dst
0x744B1D: call    _memcpy
0x744B22: mov     eax, [edi+1Ch]
0x744B25: add     [edi+0Ch], ebx
0x744B28: add     [eax+10h], ebx
0x744B2B: add     [edi+14h], ebx
0x744B2E: sub     [edi+10h], ebx
0x744B31: mov     eax, [edi+1Ch]
0x744B34: sub     [eax+14h], ebx
0x744B37: mov     edi, [edi+1Ch]
0x744B3A: add     esp, 0Ch
0x744B3D: cmp     dword ptr [edi+14h], 0
0x744B41: jnz     short loc_744B49
0x744B43: mov     ecx, [edi+8]
0x744B46: mov     [edi+10h], ecx
0x744B49: mov     edx, [esi]
0x744B4B: cmp     dword ptr [edx+10h], 0
0x744B4F: jnz     loc_744896
0x744B55: pop     edi
0x744B56: pop     esi
0x744B57: pop     ebp
0x744B58: xor     eax, eax
0x744B5A: pop     ebx
0x744B5B: pop     ecx
0x744B5C: retn
0x744B5D: cmp     dword ptr [esi+60h], 0
0x744B61: jz      loc_744C3E
0x744B67: mov     eax, [esi+64h]
0x744B6A: mov     ecx, [esi+30h]
0x744B6D: mov     al, [eax+ecx-1]
0x744B71: mov     edx, [esi+1698h]
0x744B77: mov     ecx, [esi+169Ch]
0x744B7D: mov     word ptr [ecx+edx*2], 0
0x744B83: mov     edx, [esi+1690h]
0x744B89: mov     ecx, [esi+1698h]
0x744B8F: mov     [edx+ecx], al
0x744B92: add     [esi+1698h], ebp
0x744B98: movzx   edx, al
0x744B9B: add     [esi+edx*4+8Ch], bp
0x744BA3: lea     eax, [esi+edx*4+8Ch]
0x744BAA: mov     eax, [esi+1694h]
0x744BB0: sub     eax, ebp
0x744BB2: cmp     [esi+1698h], eax
0x744BB8: jnz     short loc_744C2C
0x744BBA: mov     ecx, [esi+54h]
0x744BBD: test    ecx, ecx
0x744BBF: jl      short loc_744BC8
0x744BC1: mov     eax, [esi+30h]
0x744BC4: add     eax, ecx
0x744BC6: jmp     short loc_744BCA
0x744BC8: xor     eax, eax
0x744BCA: mov     edx, [esi+64h]
0x744BCD: push    0
0x744BCF: sub     edx, ecx
0x744BD1: push    edx
0x744BD2: push    eax
0x744BD3: push    esi
0x744BD4: call    sub_747610
0x744BD9: mov     eax, [esi+64h]
0x744BDC: mov     edi, [esi]
0x744BDE: mov     [esi+54h], eax
0x744BE1: mov     eax, [edi+1Ch]
0x744BE4: mov     ebx, [eax+14h]
0x744BE7: mov     ecx, [edi+10h]
0x744BEA: add     esp, 10h
0x744BED: cmp     ebx, ecx
0x744BEF: jbe     short loc_744BF3
0x744BF1: mov     ebx, ecx
0x744BF3: test    ebx, ebx
0x744BF5: jz      short loc_744C2C
0x744BF7: mov     ecx, [eax+10h]
0x744BFA: mov     edx, [edi+0Ch]
0x744BFD: push    ebx; Size
0x744BFE: push    ecx; Src
0x744BFF: push    edx; Dst
0x744C00: call    _memcpy
0x744C05: mov     eax, [edi+1Ch]
0x744C08: add     [edi+0Ch], ebx
0x744C0B: add     [eax+10h], ebx
0x744C0E: add     [edi+14h], ebx
0x744C11: sub     [edi+10h], ebx
0x744C14: mov     eax, [edi+1Ch]
0x744C17: sub     [eax+14h], ebx
0x744C1A: mov     edi, [edi+1Ch]
0x744C1D: add     esp, 0Ch
0x744C20: cmp     dword ptr [edi+14h], 0
0x744C24: jnz     short loc_744C2C
0x744C26: mov     eax, [edi+8]
0x744C29: mov     [edi+10h], eax
0x744C2C: mov     ecx, [esi]
0x744C2E: add     [esi+64h], ebp
0x744C31: add     dword ptr [esi+6Ch], 0FFFFFFFFh
0x744C35: cmp     dword ptr [ecx+10h], 0
0x744C39: jmp     loc_744B4F
0x744C3E: add     [esi+64h], ebp
0x744C41: add     dword ptr [esi+6Ch], 0FFFFFFFFh
0x744C45: mov     [esi+60h], ebp
0x744C48: jmp     loc_744896
0x744C4D: cmp     dword ptr [esi+60h], 0
0x744C51: jz      short loc_744C9D
0x744C53: mov     edx, [esi+64h]
0x744C56: mov     eax, [esi+30h]
0x744C59: mov     al, [edx+eax-1]
0x744C5D: mov     ecx, [esi+1698h]
0x744C63: mov     edx, [esi+169Ch]
0x744C69: mov     word ptr [edx+ecx*2], 0
0x744C6F: mov     edx, [esi+1698h]
0x744C75: mov     ecx, [esi+1690h]
0x744C7B: mov     [ecx+edx], al
0x744C7E: add     [esi+1698h], ebp
0x744C84: movzx   eax, al
0x744C87: add     [esi+eax*4+8Ch], bp
0x744C8F: lea     eax, [esi+eax*4+8Ch]
0x744C96: mov     dword ptr [esi+60h], 0
0x744C9D: mov     ecx, [esi+54h]
0x744CA0: test    ecx, ecx
0x744CA2: jl      short loc_744CAB
0x744CA4: mov     eax, [esi+30h]
0x744CA7: add     eax, ecx
0x744CA9: jmp     short loc_744CAD
0x744CAB: xor     eax, eax
0x744CAD: xor     edx, edx
0x744CAF: cmp     edi, 4
0x744CB2: setz    dl
0x744CB5: push    edx
0x744CB6: mov     edx, [esi+64h]
0x744CB9: sub     edx, ecx
0x744CBB: push    edx
0x744CBC: push    eax
0x744CBD: push    esi
0x744CBE: call    sub_747610
0x744CC3: mov     eax, [esi+64h]
0x744CC6: mov     [esi+54h], eax
0x744CC9: mov     eax, [esi]
0x744CCB: add     esp, 10h
0x744CCE: call    sub_7439F0
0x744CD3: mov     ecx, [esi]
0x744CD5: xor     eax, eax
0x744CD7: cmp     [ecx+10h], eax
0x744CDA: jnz     short loc_744CEE
0x744CDC: cmp     edi, 4
0x744CDF: setnz   al
0x744CE2: pop     edi
0x744CE3: pop     esi
0x744CE4: pop     ebp
0x744CE5: pop     ebx
0x744CE6: sub     eax, 1
0x744CE9: and     eax, 2
0x744CEC: pop     ecx
0x744CED: retn
0x744CEE: cmp     edi, 4
0x744CF1: setz    al
0x744CF4: pop     edi
0x744CF5: pop     esi
0x744CF6: pop     ebp
0x744CF7: pop     ebx
0x744CF8: lea     eax, [eax+eax+1]
0x744CFC: pop     ecx
0x744CFD: retn
