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
0x736BCA: align 10h
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
