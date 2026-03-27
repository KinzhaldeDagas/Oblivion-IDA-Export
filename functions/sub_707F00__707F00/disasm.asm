0x707F00: sub     esp, 2Ch
0x707F03: push    ebx
0x707F04: mov     ebx, [esp+30h+arg_0]
0x707F08: push    ebp
0x707F09: push    esi
0x707F0A: mov     esi, ecx
0x707F0C: push    ebx
0x707F0D: mov     [esp+3Ch+var_2C], esi
0x707F11: call    sub_6FFCE0
0x707F16: mov     eax, [ebx+21Ch]
0x707F1C: mov     edx, [eax+4]
0x707F1F: push    1
0x707F21: lea     ecx, [esp+3Ch+arg_0]
0x707F25: push    ecx
0x707F26: push    2
0x707F28: lea     ebp, [esi+18h]
0x707F2B: push    ebp
0x707F2C: push    eax
0x707F2D: mov     [esp+4Ch+arg_0], 2
0x707F35: call    edx
0x707F37: add     esp, 14h
0x707F3A: cmp     dword ptr [ebx+0D8h], 401000Bh
0x707F44: jnb     short loc_707F5D
0x707F46: movzx   eax, word ptr [ebp+0]
0x707F4A: movzx   ecx, ax
0x707F4D: and     eax, 0FFF8h
0x707F52: add     eax, eax
0x707F54: and     ecx, 7
0x707F57: or      eax, ecx
0x707F59: mov     [ebp+0], ax
0x707F5D: cmp     dword ptr [ebx+0D8h], 401000Ch
0x707F67: jnb     short loc_707F88
0x707F69: mov     cx, [ebp+0]
0x707F6D: movzx   eax, word ptr [ebp+0]
0x707F71: and     cx, 0FFF7h
0x707F76: or      cx, 7
0x707F7A: shl     cx, 4
0x707F7E: and     eax, 0Fh
0x707F81: or      cx, ax
0x707F84: mov     [ebp+0], cx
0x707F88: cmp     dword ptr [ebx+0D8h], 5000001h
0x707F92: jnb     short loc_707FAB
0x707F94: movzx   eax, word ptr [ebp+0]
0x707F98: movzx   ecx, ax
0x707F9B: and     eax, 0FF00h
0x707FA0: movzx   edx, cl
0x707FA3: add     eax, eax
0x707FA5: or      eax, edx
0x707FA7: mov     [ebp+0], ax
0x707FAB: push    edi
0x707FAC: push    ebx
0x707FAD: lea     ecx, [esi+54h]
0x707FB0: call    sub_709430
0x707FB5: push    ebx
0x707FB6: lea     ecx, [esi+30h]
0x707FB9: call    sub_711B90
0x707FBE: mov     eax, [ebx+21Ch]
0x707FC4: push    1
0x707FC6: lea     ecx, [esp+40h+arg_0]
0x707FCA: push    ecx
0x707FCB: mov     edi, 4
0x707FD0: push    edi
0x707FD1: lea     edx, [esi+60h]
0x707FD4: push    edx
0x707FD5: push    eax
0x707FD6: mov     eax, [eax+4]
0x707FD9: mov     [esp+50h+arg_0], edi
0x707FDD: call    eax
0x707FDF: add     esp, 14h
0x707FE2: cmp     dword ptr [ebx+0D8h], 5000013h
0x707FEC: jnb     loc_708122
0x707FF2: movzx   eax, word ptr [ebp+0]
0x707FF6: fldz
0x707FF8: movzx   ecx, al
0x707FFB: fst     [esp+3Ch+var_1C]
0x707FFF: fst     [esp+3Ch+var_18]
0x708003: fstp    [esp+3Ch+var_14]
0x708007: shr     cl, 1
0x708009: movzx   edx, al
0x70800C: shr     dl, 3
0x70800F: push    ebx
0x708010: and     ecx, 7
0x708013: mov     [esp+40h+var_28], ecx
0x708017: movzx   ecx, ax
0x70801A: xor     dl, cl
0x70801C: shr     ax, 3
0x708020: lea     ecx, [esp+40h+var_1C]
0x708024: and     edx, 1
0x708027: xor     dx, ax
0x70802A: mov     [ebp+0], dx
0x70802E: call    sub_709430
0x708033: mov     ecx, ebx
0x708035: call    sub_712AE0
0x70803A: cmp     dword ptr [ebx+0D8h], 4010000h
0x708044: mov     eax, [ebx+21Ch]
0x70804A: push    1
0x70804C: lea     ecx, [esp+40h+var_24]
0x708050: push    ecx
0x708051: jnb     short loc_708072
0x708053: push    edi
0x708054: lea     edx, [esp+48h+var_20]
0x708058: push    edx
0x708059: push    eax
0x70805A: mov     eax, [eax+4]
0x70805D: mov     [esp+50h+var_24], edi
0x708061: call    eax
0x708063: add     esp, 14h
0x708066: cmp     [esp+3Ch+var_20], 0
0x70806B: setnz   byte ptr [esp+3Ch+arg_0]
0x708070: jmp     short loc_70808A
0x708072: push    1
0x708074: lea     edx, [esp+48h+arg_0]
0x708078: push    edx
0x708079: push    eax
0x70807A: mov     eax, [eax+4]
0x70807D: mov     [esp+50h+var_24], 1
0x708085: call    eax
0x708087: add     esp, 14h
0x70808A: mov     edi, offset aNicollisionswi; "NiCollisionSwitch"
0x70808F: lea     esi, [ebx+384h]
0x708095: mov     ecx, 12h
0x70809A: xor     edx, edx
0x70809C: repe cmpsb
0x70809E: jnz     short loc_7080B2
0x7080A0: mov     al, [ebp+0]
0x7080A3: shr     al, 3
0x7080A6: test    al, 1
0x7080A8: jnz     short loc_7080B2
0x7080AA: mov     [esp+3Ch+var_28], 4
0x7080B2: cmp     byte ptr [esp+3Ch+arg_0], 0
0x7080B7: jnz     short loc_7080D3
0x7080B9: push    offset Vector3_InitValue?
0x7080BE: lea     ecx, [esp+40h+var_1C]
0x7080C2: call    sub_8AA390
0x7080C7: test    al, al
0x7080C9: jnz     short loc_7080D3
0x7080CB: cmp     word ptr [esp+3Ch+var_28], 2
0x7080D1: jz      short loc_708132
0x7080D3: push    offset aNicollisiondat; "NiCollisionData"
0x7080D8: call    sub_712520
0x7080DD: add     esp, 4
0x7080E0: test    eax, eax
0x7080E2: jz      short loc_708132
0x7080E4: mov     edi, [esp+3Ch+var_2C]
0x7080E8: lea     esi, [edi+0A8h]
0x7080EE: push    eax; a2
0x7080EF: mov     ecx, esi; this
0x7080F1: call    NiSmartPointer_Set??
0x7080F6: movzx   ecx, word ptr [esp+3Ch+var_28]
0x7080FB: movzx   edx, byte ptr [esp+3Ch+arg_0]
0x708100: mov     [esp+3Ch+var_C], ecx
0x708104: mov     ecx, [esi]
0x708106: mov     [esp+3Ch+var_8], edx
0x70810A: mov     [esp+3Ch+var_10], edi
0x70810E: mov     [esp+3Ch+var_4], ebx
0x708112: mov     eax, [ecx]
0x708114: mov     eax, [eax+58h]
0x708117: lea     edx, [esp+3Ch+var_10]
0x70811B: push    edx
0x70811C: call    eax
0x70811E: mov     esi, edi
0x708120: jmp     short loc_708136
0x708122: mov     ecx, ebx
0x708124: call    sub_712AE0
0x708129: mov     ecx, ebx
0x70812B: call    sub_712A20
0x708130: jmp     short loc_708136
0x708132: mov     esi, [esp+3Ch+var_2C]
0x708136: cmp     dword ptr [ebx+0D8h], 0A000102h
0x708140: pop     edi
0x708141: jnb     short loc_708153
0x708143: mov     cx, [ebp+0]
0x708147: mov     [ebx+258h], cx
0x70814E: and     word ptr [ebp+0], 3Fh
0x708153: mov     eax, [ebx+0D8h]
0x708159: cmp     eax, 0A000106h
0x70815E: jnb     short loc_708176
0x708160: mov     esi, [esi+0A8h]
0x708166: test    esi, esi
0x708168: jz      short loc_708176
0x70816A: mov     edx, [esi]
0x70816C: push    0
0x70816E: push    eax
0x70816F: mov     eax, [edx+5Ch]
0x708172: mov     ecx, esi
0x708174: call    eax
0x708176: cmp     dword ptr [ebx+0D8h], 14000004h
0x708180: jnb     short loc_708188
0x708182: and     word ptr [ebp+0], 0FFBFh
0x708188: mov     cx, [ebp+0]
0x70818C: and     cx, 0FFEFh
0x708191: or      cx, 0Eh
0x708195: pop     esi
0x708196: mov     [ebp+0], cx
0x70819A: pop     ebp
0x70819B: pop     ebx
0x70819C: add     esp, 2Ch
0x70819F: retn    4
