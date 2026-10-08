0x736A20: sub     esp, 48h
0x736A23: push    ebx
0x736A24: mov     ebx, [esp+4Ch+arg_4]
0x736A28: mov     eax, [ebx+5Ch]
0x736A2B: mov     ecx, [ebx+60h]
0x736A2E: push    ebp
0x736A2F: mov     ebp, [esp+50h+arg_90]
0x736A36: push    esi
0x736A37: mov     esi, [eax+ecx*4]
0x736A3A: imul    esi, [esp+54h+arg_94]
0x736A42: mov     ecx, [eax+ebp*4+4]
0x736A46: add     esi, [ebx+50h]
0x736A49: sub     ecx, [eax+ebp*4]
0x736A4C: add     esi, [eax+ebp*4]
0x736A4F: mov     eax, [esp+54h+arg_0]
0x736A53: push    edi
0x736A54: push    1
0x736A56: lea     edx, [esp+5Ch+arg_4]
0x736A5A: push    edx
0x736A5B: mov     edx, [eax+4]
0x736A5E: push    ecx
0x736A5F: push    esi
0x736A60: push    eax
0x736A61: mov     [esp+6Ch+arg_4], 1
0x736A69: call    edx
0x736A6B: add     esp, 14h
0x736A6E: lea     eax, [esp+58h+arg_8]
0x736A72: push    eax
0x736A73: lea     ecx, [esp+5Ch+var_18]
0x736A77: call    sub_71B4D0
0x736A7C: mov     ecx, [ebx+54h]
0x736A7F: mov     edi, [ecx+ebp*4]
0x736A82: mov     edx, [ebx+58h]
0x736A85: mov     ebp, [edx+ebp*4]
0x736A88: lea     eax, [esp+58h+arg_4C]
0x736A8F: push    eax
0x736A90: lea     ecx, [esp+5Ch+arg_8]
0x736A94: mov     [esp+5Ch+var_24], edi
0x736A98: call    sub_70E260
0x736A9D: test    al, al
0x736A9F: jz      loc_736EA7
0x736AA5: mov     [esp+58h+var_44], esi
0x736AA9: xor     eax, eax
0x736AAB: lea     ecx, [esp+58h+arg_1C]
0x736AAF: nop
0x736AB0: cmp     dword ptr [ecx], 3
0x736AB3: jz      short loc_736B2F
0x736AB5: add     eax, 1
0x736AB8: add     ecx, 0Ch
0x736ABB: cmp     eax, 4
0x736ABE: jb      short loc_736AB0
0x736AC0: test    ebp, ebp
0x736AC2: jbe     loc_736EA7
0x736AC8: mov     dl, [esp+58h+var_4]
0x736ACC: mov     [esp+58h+var_2C], ebp
0x736AD0: test    edi, edi
0x736AD2: jbe     loc_736E9C
0x736AD8: movzx   eax, dl
0x736ADB: mov     [esp+58h+var_40], eax
0x736ADF: mov     al, 8
0x736AE1: sub     al, [esp+58h+var_3]
0x736AE5: mov     ecx, 8
0x736AEA: mov     byte ptr [esp+58h+arg_0], al
0x736AEE: movzx   eax, [esp+58h+var_3]
0x736AF3: sub     ecx, eax
0x736AF5: mov     [esp+58h+var_38], eax
0x736AF9: mov     al, 8
0x736AFB: sub     al, [esp+58h+var_2]
0x736AFF: mov     [esp+58h+var_3C], ecx
0x736B03: mov     byte ptr [esp+58h+arg_4], al
0x736B07: movzx   eax, [esp+58h+var_2]
0x736B0C: mov     bl, 8
0x736B0E: sub     bl, dl
0x736B10: mov     ecx, 8
0x736B15: sub     ecx, eax
0x736B17: mov     byte ptr [esp+58h+arg_94], bl
0x736B1E: mov     [esp+58h+var_30], eax
0x736B22: mov     [esp+58h+var_34], ecx
0x736B26: mov     [esp+58h+var_28], edi
0x736B2A: jmp     loc_736D77
0x736B2F: lea     ecx, [eax+eax*2]
0x736B32: cmp     [esp+ecx*4+58h+arg_24], 0
0x736B3A: jz      short loc_736AC0
0x736B3C: test    ebp, ebp
0x736B3E: jbe     loc_736EA7
0x736B44: mov     bl, [esp+58h+var_4]
0x736B48: mov     [esp+58h+var_28], ebp
0x736B4C: lea     esp, [esp+0]
0x736B50: test    edi, edi
0x736B52: jbe     loc_736D59
0x736B58: movzx   eax, bl
0x736B5B: mov     [esp+58h+var_40], eax
0x736B5F: mov     al, 8
0x736B61: sub     al, [esp+58h+var_3]
0x736B65: mov     ecx, 8
0x736B6A: mov     byte ptr [esp+58h+arg_0], al
0x736B6E: movzx   eax, [esp+58h+var_3]
0x736B73: sub     ecx, eax
0x736B75: mov     [esp+58h+var_38], eax
0x736B79: mov     al, 8
0x736B7B: sub     al, [esp+58h+var_2]
0x736B7F: mov     [esp+58h+var_3C], ecx
0x736B83: mov     [esp+58h+var_47], al
0x736B87: movzx   eax, [esp+58h+var_2]
0x736B8C: mov     [esp+58h+var_30], eax
0x736B90: mov     ecx, 8
0x736B95: sub     ecx, eax
0x736B97: mov     al, 8
0x736B99: sub     al, [esp+58h+var_1]
0x736B9D: mov     [esp+58h+var_34], ecx
0x736BA1: mov     byte ptr [esp+58h+arg_4], al
0x736BA5: movzx   eax, [esp+58h+var_1]
0x736BAA: mov     dl, 8
0x736BAC: sub     dl, bl
0x736BAE: mov     ecx, 8
0x736BB3: sub     ecx, eax
0x736BB5: mov     byte ptr [esp+58h+arg_94], dl
0x736BBC: mov     [esp+58h+var_1C], eax
0x736BC0: mov     [esp+58h+var_20], ecx
0x736BC4: mov     [esp+58h+var_2C], edi
0x736BC8: jmp     short loc_736BD7
0x736BD0: mov     dl, byte ptr [esp+58h+arg_94]
0x736BD7: mov     ecx, [esp+58h+var_44]
0x736BDB: mov     edi, [ecx]
0x736BDD: movzx   ecx, [esp+58h+var_8]
0x736BE2: mov     eax, edi
0x736BE4: and     eax, [esp+58h+var_18]
0x736BE8: xor     ebp, ebp
0x736BEA: shr     eax, cl
0x736BEC: cmp     dl, bl
0x736BEE: ja      short loc_736BFD
0x736BF0: movzx   ecx, dl
0x736BF3: or      ebp, eax
0x736BF5: sub     bl, dl
0x736BF7: shl     ebp, cl
0x736BF9: cmp     bl, dl
0x736BFB: jnb     short loc_736BF0
0x736BFD: mov     ecx, 8
0x736C02: sub     ecx, ebx
0x736C04: sub     ecx, [esp+58h+var_40]
0x736C08: mov     [esp+58h+arg_90], eax
0x736C0F: shr     [esp+58h+arg_90], cl
0x736C16: mov     cl, dl
0x736C18: mov     dl, byte ptr [esp+58h+arg_90]
0x736C1F: mov     ebx, ebp
0x736C21: shr     ebx, cl
0x736C23: mov     ecx, [esp+58h+var_40]
0x736C27: shl     al, cl
0x736C29: movzx   ecx, [esp+58h+var_7]
0x736C2E: or      dl, bl
0x736C30: mov     bl, byte ptr [esp+58h+arg_0]
0x736C34: or      dl, al
0x736C36: mov     eax, edi
0x736C38: and     eax, [esp+58h+var_14]
0x736C3C: xor     ebp, ebp
0x736C3E: shr     eax, cl
0x736C40: mov     cl, [esp+58h+var_3]
0x736C44: cmp     bl, cl
0x736C46: mov     [esp+58h+var_46], dl
0x736C4A: mov     dl, cl
0x736C4C: ja      short loc_736C5D
0x736C4E: mov     edi, edi
0x736C50: movzx   ecx, bl
0x736C53: or      ebp, eax
0x736C55: sub     dl, bl
0x736C57: shl     ebp, cl
0x736C59: cmp     dl, bl
0x736C5B: jnb     short loc_736C50
0x736C5D: mov     ecx, [esp+58h+var_3C]
0x736C61: sub     ecx, edx
0x736D70: mov     bl, byte ptr [esp+58h+arg_94]
0x736D77: mov     ecx, [esp+58h+var_44]
0x736D7B: mov     edi, [ecx]
0x736D7D: movzx   ecx, [esp+58h+var_8]
0x736D82: mov     eax, edi
0x736D84: and     eax, [esp+58h+var_18]
0x736D88: xor     ebp, ebp
0x736D8A: shr     eax, cl
0x736D8C: cmp     bl, dl
0x736D8E: ja      short loc_736D9D
0x736D90: movzx   ecx, bl
0x736D93: or      ebp, eax
0x736D95: sub     dl, bl
0x736D97: shl     ebp, cl
0x736D99: cmp     dl, bl
0x736D9B: jnb     short loc_736D90
0x736D9D: mov     ecx, 8
0x736DA2: sub     ecx, edx
0x736DA4: sub     ecx, [esp+58h+var_40]
0x736DA8: mov     edx, eax
0x736DAA: shr     edx, cl
0x736DAC: mov     ecx, ebp
0x736DAE: mov     [esp+58h+arg_90], ecx
0x736DB5: mov     cl, bl
0x736DB7: mov     ebx, ebp
0x736DB9: shr     ebx, cl
0x736DBB: mov     ecx, [esp+58h+var_40]
0x736DBF: shl     al, cl
0x736DC1: movzx   ecx, [esp+58h+var_7]
0x736DC6: or      dl, bl
0x736DC8: mov     bl, byte ptr [esp+58h+arg_0]
0x736DCC: or      dl, al
0x736DCE: mov     eax, edi
0x736DD0: and     eax, [esp+58h+var_14]
0x736DD4: xor     ebp, ebp
0x736DD6: shr     eax, cl
0x736DD8: mov     cl, [esp+58h+var_3]
0x736DDC: cmp     bl, cl
0x736DDE: mov     [esp+58h+var_45], dl
0x736DE2: mov     dl, cl
0x736DE4: ja      short loc_736DF3
0x736DE6: movzx   ecx, bl
0x736DE9: or      ebp, eax
0x736DEB: sub     dl, bl
0x736DED: shl     ebp, cl
0x736DEF: cmp     dl, bl
0x736DF1: jnb     short loc_736DE6
0x736DF3: mov     ecx, [esp+58h+var_3C]
0x736DF7: and     edi, [esp+58h+var_10]
0x736DFB: sub     ecx, edx
0x736DFD: mov     edx, eax
0x736DFF: shr     edx, cl
0x736E01: mov     ecx, ebp
0x736E03: mov     [esp+58h+arg_90], ecx
0x736E0A: mov     cl, bl
0x736E0C: mov     ebx, ebp
0x736E0E: shr     ebx, cl
0x736E10: mov     ecx, [esp+58h+var_38]
0x736E14: shl     al, cl
0x736E16: movzx   ecx, [esp+58h+var_6]
0x736E1B: shr     edi, cl
0x736E1D: mov     cl, [esp+58h+var_2]
0x736E21: or      dl, bl
0x736E23: mov     bl, byte ptr [esp+58h+arg_4]
0x736E27: or      dl, al
0x736E29: mov     eax, edi
0x736E2B: xor     edi, edi
0x736E2D: cmp     bl, cl
0x736E2F: ja      short loc_736E48
0x736E31: movzx   ebp, bl
0x736E34: mov     bl, cl
0x736E36: sub     bl, byte ptr [esp+58h+arg_4]
0x736E3A: or      edi, eax
0x736E3C: mov     ecx, ebp
0x736E3E: shl     edi, cl
0x736E40: cmp     bl, byte ptr [esp+58h+arg_4]
0x736E44: jnb     short loc_736E36
0x736E46: jmp     short loc_736E4B
0x736E48: movzx   ebx, cl
0x736E4B: movzx   ecx, [esp+58h+var_45]
0x736E50: mov     [esi], cl
0x736E52: mov     ecx, [esp+58h+var_34]
0x736E56: add     [esp+58h+var_44], 4
0x736E5B: mov     [esi+1], dl
0x736E5E: add     esi, 1
0x736E61: sub     ecx, ebx
0x736E63: mov     edx, eax
0x736E65: shr     edx, cl
0x736E67: movzx   ecx, byte ptr [esp+58h+arg_4]
0x736E6C: mov     ebx, edi
0x736E6E: shr     ebx, cl
0x736E70: mov     ecx, [esp+58h+var_30]
0x736E74: shl     al, cl
0x736E76: add     esi, 1
0x736E79: or      dl, bl
0x736E7B: add     esi, 1
0x736E7E: or      dl, al
0x736E80: mov     [esi-1], dl
0x736E83: mov     dl, [esp+58h+var_4]
0x736E87: mov     byte ptr [esi], 0FFh
0x736E8A: add     esi, 1
0x736E8D: sub     [esp+58h+var_28], 1
0x736E92: jnz     loc_736D70
0x736E98: mov     edi, [esp+58h+var_24]
0x736E9C: sub     [esp+58h+var_2C], 1
0x736EA1: jnz     loc_736AD0
0x736EA7: pop     edi
0x736EA8: pop     esi
0x736EA9: pop     ebp
0x736EAA: pop     ebx
0x736EAB: add     esp, 48h
0x736EAE: retn
