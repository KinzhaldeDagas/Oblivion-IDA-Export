0x932D60: sub     esp, 844h
0x932D66: push    ebx
0x932D67: mov     ebx, [esp+848h+arg_C]
0x932D6E: push    ebp
0x932D6F: push    esi
0x932D70: xor     ebp, ebp
0x932D72: inc     ebx
0x932D73: push    edi
0x932D74: mov     edi, [esp+854h+arg_8]
0x932D7B: mov     eax, ebx
0x932D7D: sub     eax, edi
0x932D7F: cmp     eax, 4
0x932D82: mov     esi, edi
0x932D84: mov     [esp+854h+var_840], ebx
0x932D88: jl      loc_932E29
0x932D8E: mov     edx, [esp+854h+arg_4]
0x932D95: mov     eax, [edx]
0x932D97: mov     ecx, edi
0x932D99: shl     ecx, 4
0x932D9C: lea     edx, [ecx+eax+1Ch]
0x932DA0: mov     ecx, ebx
0x932DA2: sub     ecx, edi
0x932DA4: sub     ecx, 4
0x932DA7: shr     ecx, 2
0x932DAA: inc     ecx
0x932DAB: lea     esi, [edi+ecx*4]
0x932DAE: mov     edi, edi
0x932DB0: fld     dword ptr ds:0A2FAA8h
0x932DB6: fld     dword ptr [edx-10h]
0x932DB9: fucompp
0x932DBB: fnstsw  ax
0x932DBD: test    ah, 44h
0x932DC0: jp      short loc_932DC9
0x932DC2: mov     eax, 1
0x932DC7: jmp     short loc_932DCB
0x932DC9: xor     eax, eax
0x932DCB: fld     dword ptr ds:0A2FAA8h
0x932DD1: add     ebp, eax
0x932DD3: fld     dword ptr [edx]
0x932DD5: fucompp
0x932DD7: fnstsw  ax
0x932DD9: test    ah, 44h
0x932DDC: jp      short loc_932DE5
0x932DDE: mov     eax, 1
0x932DE3: jmp     short loc_932DE7
0x932DE5: xor     eax, eax
0x932DE7: fld     dword ptr ds:0A2FAA8h
0x932DED: add     ebp, eax
0x932DEF: fld     dword ptr [edx+10h]
0x932DF2: fucompp
0x932DF4: fnstsw  ax
0x932DF6: test    ah, 44h
0x932DF9: jp      short loc_932E02
0x932DFB: mov     eax, 1
0x932E00: jmp     short loc_932E04
0x932E02: xor     eax, eax
0x932E04: fld     dword ptr ds:0A2FAA8h
0x932E0A: add     ebp, eax
0x932E0C: fld     dword ptr [edx+20h]
0x932E0F: fucompp
0x932E11: fnstsw  ax
0x932E13: test    ah, 44h
0x932E16: jp      short loc_932E1F
0x932E18: mov     eax, 1
0x932E1D: jmp     short loc_932E21
0x932E1F: xor     eax, eax
0x932E21: add     ebp, eax
0x932E23: add     edx, 40h ; '@'
0x932E26: dec     ecx
0x932E27: jnz     short loc_932DB0
0x932E29: cmp     esi, ebx
0x932E2B: jge     short loc_932E65
0x932E2D: mov     edx, [esp+854h+arg_4]
0x932E34: mov     eax, [edx]
0x932E36: mov     ecx, esi
0x932E38: shl     ecx, 4
0x932E3B: lea     edx, [ecx+eax+0Ch]
0x932E3F: mov     ecx, ebx
0x932E41: sub     ecx, esi
0x932E43: fld     dword ptr ds:0A2FAA8h
0x932E49: fld     dword ptr [edx]
0x932E4B: fucompp
0x932E4D: fnstsw  ax
0x932E4F: test    ah, 44h
0x932E52: jp      short loc_932E5B
0x932E54: mov     eax, 1
0x932E59: jmp     short loc_932E5D
0x932E5B: xor     eax, eax
0x932E5D: add     ebp, eax
0x932E5F: add     edx, 10h
0x932E62: dec     ecx
0x932E63: jnz     short loc_932E43
0x932E65: cmp     ebp, 3
0x932E68: jle     loc_933127
0x932E6E: mov     ecx, [esp+854h+arg_C]
0x932E75: lea     eax, [edi+ecx]
0x932E78: cdq
0x932E79: sub     eax, edx
0x932E7B: mov     ebp, eax
0x932E7D: lea     ecx, [esp+854h+var_410]
0x932E84: sar     ebp, 1
0x932E86: call    sub_933D80
0x932E8B: mov     esi, [esp+854h+arg_4]
0x932E92: mov     edx, [esi]
0x932E94: lea     ecx, [esp+854h+var_820]
0x932E98: mov     [esp+854h+var_410], edx
0x932E9F: call    sub_933D80
0x932EA4: mov     eax, [esi]
0x932EA6: mov     esi, [esp+854h+arg_0]
0x932EAD: mov     [esp+854h+var_820], eax
0x932EB1: mov     al, 1
0x932EB3: test    al, al
0x932EB5: mov     byte ptr [esp+854h+var_844], al
0x932EB9: lea     ebx, [ebp+1]
0x932EBC: jz      short loc_932F03
0x932EBE: mov     edi, edi
0x932EC0: mov     edx, [esp+854h+arg_4]
0x932EC7: lea     ecx, [esp+854h+var_410]
0x932ECE: push    ecx
0x932ECF: push    ebp
0x932ED0: push    edi
0x932ED1: push    edx
0x932ED2: push    esi
0x932ED3: mov     [esp+868h+var_408], 0
0x932EDE: call    sub_932D60
0x932EE3: lea     eax, [esp+868h+var_844]
0x932EE7: push    eax
0x932EE8: push    esi
0x932EE9: push    ebp
0x932EEA: lea     ecx, [esp+874h+var_410]
0x932EF1: push    edi
0x932EF2: push    ecx
0x932EF3: call    sub_92DE30
0x932EF8: mov     al, byte ptr [esp+87Ch+var_844]
0x932EFC: add     esp, 28h
0x932EFF: test    al, al
0x932F01: jnz     short loc_932EC0
0x932F03: mov     byte ptr [esp+854h+var_844], 1
0x932F08: jmp     short loc_932F10
0x932F0A: align 10h
0x932F10: mov     eax, [esp+854h+arg_C]
0x932F17: mov     ecx, [esp+854h+arg_4]
0x932F1E: lea     edx, [esp+854h+var_820]
0x932F22: push    edx
0x932F23: push    eax
0x932F24: push    ebx
0x932F25: push    ecx
0x932F26: push    esi
0x932F27: mov     [esp+868h+var_818], 0
0x932F2F: call    sub_932D60
0x932F34: mov     eax, [esp+868h+arg_C]
0x932F3B: lea     edx, [esp+868h+var_844]
0x932F3F: push    edx
0x932F40: push    esi
0x932F41: push    eax
0x932F42: lea     ecx, [esp+874h+var_820]
0x932F46: push    ebx
0x932F47: push    ecx
0x932F48: call    sub_92DE30
0x932F4D: mov     al, byte ptr [esp+87Ch+var_844]
0x932F51: add     esp, 28h
0x932F54: test    al, al
0x932F56: jnz     short loc_932F10
0x932F58: mov     eax, [esp+854h+arg_C]
0x932F5F: lea     edx, [esp+854h+var_824]
0x932F63: push    edx
0x932F64: push    esi
0x932F65: push    eax
0x932F66: lea     ecx, [esp+860h+var_410]
0x932F6D: push    edi
0x932F6E: push    ecx
0x932F6F: mov     byte ptr [esp+868h+var_824], 1
0x932F74: call    sub_92DE30
0x932F79: mov     eax, [esp+868h+arg_C]
0x932F80: lea     edx, [esp+868h+var_840]
0x932F84: push    edx
0x932F85: push    esi
0x932F86: push    eax
0x932F87: lea     ecx, [esp+874h+var_820]
0x932F8B: push    edi
0x932F8C: push    ecx
0x932F8D: mov     byte ptr [esp+87Ch+var_840], 1
0x932F92: call    sub_92DE30
0x932F97: mov     al, byte ptr [esp+87Ch+var_824]
0x932F9B: add     esp, 28h
0x932F9E: test    al, al
0x932FA0: jnz     short loc_932FAE
0x932FA2: mov     al, byte ptr [esp+854h+var_840]
0x932FA6: test    al, al
0x932FA8: jnz     short loc_932FAE
0x932FAA: xor     al, al
0x932FAC: jmp     short loc_932FB0
0x932FAE: mov     al, 1
0x932FB0: test    al, al
0x932FB2: mov     byte ptr [esp+854h+var_844], al
0x932FB6: jnz     loc_932EC0
0x932FBC: mov     eax, [esp+854h+var_408]
0x932FC3: test    eax, eax
0x932FC5: mov     ebp, [esp+854h+arg_10]
0x932FCC: jnz     short loc_933027
0x932FCE: mov     eax, [esp+854h+var_818]
0x932FD2: xor     edi, edi
0x932FD4: test    eax, eax
0x932FD6: jle     loc_9330A2
0x932FDC: lea     esi, [ebp+4]
0x932FDF: nop
0x932FE0: mov     eax, [esi+8]
0x932FE3: mov     ecx, [esi+4]
0x932FE6: mov     edx, [esp+854h+var_81C]
0x932FEA: and     eax, 3FFFFFFFh
0x932FEF: cmp     ecx, eax
0x932FF1: lea     ebx, [edx+edi*8]
0x932FF4: jnz     short loc_933001
0x932FF6: push    8
0x932FF8: push    esi
0x932FF9: call    sub_8A6EE0
0x932FFE: add     esp, 8
0x933001: mov     eax, [ebx]
0x933003: mov     ecx, [esi+4]
0x933006: mov     edx, [esi]
0x933008: mov     [edx+ecx*8], eax
0x93300B: mov     eax, [ebx+4]
0x93300E: mov     [edx+ecx*8+4], eax
0x933012: mov     edx, [esi+4]
0x933015: mov     eax, [esp+854h+var_818]
0x933019: inc     edx
0x93301A: inc     edi
0x93301B: cmp     edi, eax
0x93301D: mov     [esi+4], edx
0x933020: jl      short loc_932FE0
0x933022: jmp     loc_9330A2
0x933027: mov     ecx, [esp+854h+var_818]
0x93302B: test    ecx, ecx
0x93302D: jnz     short loc_93308B
0x93302F: xor     edi, edi
0x933031: test    eax, eax
0x933033: jle     loc_9330A2
0x933039: lea     esi, [ebp+4]
0x93303C: lea     esp, [esp+0]
0x933040: mov     edx, [esi+8]
0x933043: mov     eax, [esi+4]
0x933046: mov     ecx, [esp+854h+var_40C]
0x93304D: and     edx, 3FFFFFFFh
0x933053: cmp     eax, edx
0x933055: lea     ebx, [ecx+edi*8]
0x933058: jnz     short loc_933065
0x93305A: push    8
0x93305C: push    esi
0x93305D: call    sub_8A6EE0
0x933062: add     esp, 8
0x933065: mov     edx, [ebx]
0x933067: mov     eax, [esi+4]
0x93306A: mov     ecx, [esi]
0x93306C: mov     [ecx+eax*8], edx
0x93306F: mov     edx, [ebx+4]
0x933072: mov     [ecx+eax*8+4], edx
0x933076: mov     edx, [esi+4]
0x933079: mov     eax, [esp+854h+var_408]
0x933080: inc     edx
0x933081: inc     edi
0x933082: cmp     edi, eax
0x933084: mov     [esi+4], edx
0x933087: jl      short loc_933040
0x933089: jmp     short loc_9330A2
0x93308B: push    ebp
0x93308C: lea     eax, [esp+858h+var_820]
0x933090: push    eax
0x933091: lea     ecx, [esp+85Ch+var_410]
0x933098: push    ecx
0x933099: push    esi
0x93309A: call    sub_932250
0x93309F: add     esp, 10h
0x9330A2: mov     eax, [ebp+8]
0x9330A5: test    eax, eax
0x9330A7: jnz     short loc_9330B9
0x9330A9: lea     edx, [esp+854h+var_40C]
0x9330B0: push    edx
0x9330B1: lea     ecx, [ebp+4]
0x9330B4: call    sub_92F1D0
0x9330B9: mov     eax, [esp+854h+var_814]
0x9330BD: test    eax, eax
0x9330BF: mov     esi, ds:0BA9DE4h
0x9330C5: mov     edi, large fs:2Ch
0x9330CC: js      short loc_9330EC
0x9330CE: mov     ecx, [edi+esi*4]
0x9330D1: mov     ecx, [ecx+19Ch]
0x9330D7: and     eax, 3FFFFFFFh
0x9330DC: push    14h
0x9330DE: shl     eax, 3
0x9330E1: push    eax
0x9330E2: mov     eax, [esp+85Ch+var_81C]
0x9330E6: push    eax
0x9330E7: call    sub_8A75D0
0x9330EC: mov     eax, [esp+854h+var_404]
0x9330F3: test    eax, eax
0x9330F5: js      loc_93322D
0x9330FB: mov     edx, [esp+854h+var_40C]
0x933102: and     eax, 3FFFFFFFh
0x933107: push    14h
0x933109: shl     eax, 3
0x93310C: push    eax
0x93310D: mov     eax, [edi+esi*4]
0x933110: mov     ecx, [eax+19Ch]
0x933116: push    edx
0x933117: call    sub_8A75D0
0x93311C: pop     edi
0x93311D: pop     esi
0x93311E: pop     ebp
0x93311F: pop     ebx
0x933120: add     esp, 844h
0x933126: retn
0x933127: mov     ecx, [esp+854h+arg_4]
0x93312E: mov     edx, [ecx]
0x933130: mov     ebx, [esp+854h+arg_10]
0x933137: cmp     edi, [esp+854h+var_840]
0x93313B: mov     [ebx], edx
0x93313D: lea     edx, [esp+854h+var_830]
0x933141: mov     ecx, 80000003h
0x933146: mov     [esp+854h+var_83C], edx
0x93314A: mov     [esp+854h+var_838], 0
0x933152: mov     [esp+854h+var_834], ecx
0x933156: mov     esi, edi
0x933158: jge     loc_9331C2
0x93315E: shl     edi, 4
0x933161: mov     eax, [esp+854h+arg_4]
0x933168: fld     dword ptr ds:0A2FAA8h
0x93316E: mov     eax, [eax]
0x933170: fld     dword ptr [edi+eax+0Ch]
0x933174: fucompp
0x933176: fnstsw  ax
0x933178: test    ah, 44h
0x93317B: jp      short loc_9331B6
0x93317D: mov     eax, [esp+854h+var_838]
0x933181: and     ecx, 3FFFFFFFh
0x933187: cmp     eax, ecx
0x933189: jnz     short loc_93319E
0x93318B: lea     ecx, [esp+854h+var_83C]
0x93318F: push    4
0x933191: push    ecx
0x933192: call    sub_8A6EE0
0x933197: mov     edx, [esp+85Ch+var_83C]
0x93319B: add     esp, 8
0x93319E: mov     eax, [esp+854h+var_838]
0x9331A2: mov     [edx+eax*4], esi
0x9331A5: mov     eax, [esp+854h+var_838]
0x9331A9: mov     ecx, [esp+854h+var_834]
0x9331AD: mov     edx, [esp+854h+var_83C]
0x9331B1: inc     eax
0x9331B2: mov     [esp+854h+var_838], eax
0x9331B6: mov     eax, [esp+854h+var_840]
0x9331BA: inc     esi
0x9331BB: add     edi, 10h
0x9331BE: cmp     esi, eax
0x9331C0: jl      short loc_933161
0x9331C2: mov     eax, ebp
0x9331C4: sub     eax, 0
0x9331C7: jz      short loc_933202
0x9331C9: dec     eax
0x9331CA: jz      short loc_9331F0
0x9331CC: dec     eax
0x9331CD: mov     eax, [edx+4]
0x9331D0: jz      short loc_9331E3
0x9331D2: mov     ecx, [edx+8]
0x9331D5: push    ecx
0x9331D6: mov     ecx, [edx]
0x9331D8: push    eax
0x9331D9: push    ecx
0x9331DA: mov     ecx, ebx
0x9331DC: call    sub_933920
0x9331E1: jmp     short loc_9331FA
0x9331E3: mov     ecx, [edx]
0x9331E5: push    eax
0x9331E6: push    ecx
0x9331E7: mov     ecx, ebx
0x9331E9: call    sub_933870
0x9331EE: jmp     short loc_9331FA
0x9331F0: mov     edx, [edx]
0x9331F2: push    edx
0x9331F3: mov     ecx, ebx
0x9331F5: call    sub_933810
0x9331FA: mov     ecx, [esp+854h+var_834]
0x9331FE: mov     edx, [esp+854h+var_83C]
0x933202: test    ecx, ecx
0x933204: js      short loc_93322D
0x933206: mov     eax, ds:0BA9DE4h
0x93320B: and     ecx, 3FFFFFFFh
0x933211: shl     ecx, 2
0x933214: push    14h
0x933216: push    ecx
0x933217: mov     ecx, large fs:2Ch
0x93321E: push    edx
0x93321F: mov     edx, [ecx+eax*4]
0x933222: mov     ecx, [edx+19Ch]
0x933228: call    sub_8A75D0
0x93322D: pop     edi
0x93322E: pop     esi
0x93322F: pop     ebp
0x933230: pop     ebx
0x933231: add     esp, 844h
0x933237: retn
