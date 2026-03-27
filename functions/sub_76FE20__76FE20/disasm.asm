0x76FE20: sub     esp, 38h
0x76FE23: push    ebx
0x76FE24: mov     ebx, [esp+3Ch+arg_0]
0x76FE28: push    ebp
0x76FE29: push    esi
0x76FE2A: mov     esi, [esp+44h+arg_8]
0x76FE2E: push    edi
0x76FE2F: xor     edi, edi
0x76FE31: cmp     esi, edi
0x76FE33: mov     ebp, ecx
0x76FE35: jz      short loc_76FE41
0x76FE37: movzx   eax, word ptr [esi+1Ch]
0x76FE3B: mov     [esp+48h+var_38], eax
0x76FE3F: jmp     short loc_76FE51
0x76FE41: mov     edx, [ebx]
0x76FE43: mov     eax, [edx+50h]
0x76FE46: mov     ecx, ebx
0x76FE48: call    eax
0x76FE4A: movzx   ecx, ax
0x76FE4D: mov     [esp+48h+var_38], ecx
0x76FE51: cmp     word ptr [esp+48h+var_38], di
0x76FE56: jz      loc_7700DD
0x76FE5C: mov     edx, [ebp+0]
0x76FE5F: mov     edx, [edx+70h]
0x76FE62: lea     eax, [esp+48h+var_1C]
0x76FE66: push    eax
0x76FE67: lea     ecx, [esp+4Ch+var_34]
0x76FE6B: push    ecx
0x76FE6C: mov     ecx, ebp
0x76FE6E: mov     [esp+50h+var_34], edi
0x76FE72: mov     [esp+50h+var_1C], edi
0x76FE76: call    edx
0x76FE78: test    al, al
0x76FE7A: jnz     short loc_76FE88
0x76FE7C: pop     edi
0x76FE7D: pop     esi
0x76FE7E: pop     ebp
0x76FE7F: xor     eax, eax
0x76FE81: pop     ebx
0x76FE82: add     esp, 38h
0x76FE85: retn    1Ch
0x76FE88: cmp     esi, edi
0x76FE8A: jz      short loc_76FE91
0x76FE8C: mov     edi, [esi+28h]
0x76FE8F: jmp     short loc_76FE94
0x76FE91: mov     edi, [ebx+38h]
0x76FE94: mov     eax, [esp+48h+var_34]
0x76FE98: push    eax
0x76FE99: mov     ecx, edi
0x76FE9B: call    sub_7780D0
0x76FEA0: mov     esi, [esp+48h+arg_14]
0x76FEA4: cmp     esi, [edi+1Ch]
0x76FEA7: jnb     short loc_76FEBB
0x76FEA9: mov     edx, [ebp+24h]
0x76FEAC: mov     eax, [edi+20h]
0x76FEAF: mov     ecx, esi
0x76FEB1: shl     ecx, 4
0x76FEB4: mov     ecx, [ecx+edx+0Ch]
0x76FEB8: mov     [eax+esi*4], ecx
0x76FEBB: mov     edx, [ebp+8]
0x76FEBE: cmp     byte ptr [edx+5C8h], 0
0x76FEC5: jz      short loc_76FED4
0x76FEC7: mov     eax, [ebp+0]
0x76FECA: mov     edx, [eax+68h]
0x76FECD: mov     ecx, ebp
0x76FECF: call    edx
0x76FED1: mov     [edi+10h], al
0x76FED4: xor     eax, eax
0x76FED6: cmp     [esp+48h+arg_18], eax
0x76FEDA: mov     byte ptr [esp+48h+arg_14], 1
0x76FEDF: jz      short loc_76FEF2
0x76FEE1: mov     ecx, [esp+48h+arg_10]
0x76FEE5: mov     [esp+48h+arg_10], ecx
0x76FEE9: mov     byte ptr [esp+48h+arg_14], al
0x76FEED: jmp     loc_76FF92
0x76FEF2: mov     ebx, [esp+48h+arg_10]
0x76FEF6: test    ebx, ebx
0x76FEF8: jz      short loc_76FF48
0x76FEFA: mov     eax, [ebx+8]
0x76FEFD: test    eax, eax
0x76FEFF: jz      short loc_76FF48
0x76FF01: mov     edx, [esp+48h+arg_0]
0x76FF05: mov     cx, [edx+2Eh]
0x76FF09: and     cx, 0F000h
0x76FF0E: cmp     cx, 8000h
0x76FF13: jz      short loc_76FF48
0x76FF15: mov     edx, [eax]
0x76FF17: mov     edx, [edx+34h]
0x76FF1A: lea     ecx, [esp+48h+var_18]
0x76FF1E: push    ecx
0x76FF1F: push    eax
0x76FF20: call    edx
0x76FF22: cmp     [esp+48h+var_18], 64h ; 'd'
0x76FF27: jnz     short loc_76FF48
0x76FF29: mov     eax, [ebp+0]
0x76FF2C: mov     edx, [eax+60h]
0x76FF2F: push    esi
0x76FF30: mov     ecx, ebp
0x76FF32: call    edx
0x76FF34: movzx   ecx, word ptr [esp+48h+var_38]
0x76FF39: imul    eax, ecx
0x76FF3C: cmp     [esp+48h+var_8], eax
0x76FF40: jb      short loc_76FF48
0x76FF42: mov     [esp+48h+arg_10], ebx
0x76FF46: jmp     short loc_76FF70
0x76FF48: mov     ecx, [ebp+0Ch]
0x76FF4B: push    esi
0x76FF4C: push    edi
0x76FF4D: call    NiGeometryBufferData__RefreshVBChips
0x76FF52: test    al, al
0x76FF54: jz      loc_76FE7C
0x76FF5A: push    esi
0x76FF5B: mov     ecx, edi
0x76FF5D: call    sub_761AC0
0x76FF62: mov     [esp+48h+arg_10], eax
0x76FF66: mov     [esp+48h+arg_C], 0FFFh
0x76FF6E: mov     ebx, eax
0x76FF70: mov     eax, [ebx+10h]
0x76FF73: mov     ecx, [ebx+14h]
0x76FF76: mov     edx, [ebx+0Ch]
0x76FF79: mov     edi, [ebx+8]
0x76FF7C: push    eax; int
0x76FF7D: push    ecx; Size
0x76FF7E: mov     ecx, [ebp+0Ch]
0x76FF81: push    edx; int
0x76FF82: push    edi; int
0x76FF83: call    sub_776C90
0x76FF88: mov     ebx, [esp+48h+arg_0]
0x76FF8C: mov     [esp+48h+arg_18], eax
0x76FF90: xor     eax, eax
0x76FF92: cmp     [esp+48h+arg_4], eax
0x76FF96: jz      short loc_76FFA3
0x76FF98: cmp     [esp+48h+arg_8], eax
0x76FF9C: mov     byte ptr [esp+48h+arg_0], 1
0x76FFA1: jz      short loc_76FFA8
0x76FFA3: mov     byte ptr [esp+48h+arg_0], 0
0x76FFA8: shl     esi, 4
0x76FFAB: add     esi, [ebp+24h]
0x76FFAE: mov     [esp+48h+var_20], eax
0x76FFB2: mov     [esp+48h+var_24], eax
0x76FFB6: mov     [esp+48h+var_28], eax
0x76FFBA: mov     [esp+48h+var_2C], eax
0x76FFBE: jz      loc_770089
0x76FFC4: cmp     [ebp+1Ch], eax
0x76FFC7: mov     [esp+48h+var_30], eax
0x76FFCB: jbe     loc_770089
0x76FFD1: xor     edi, edi
0x76FFD3: mov     eax, [esi+8]
0x76FFD6: mov     ecx, [eax+edi+4]
0x76FFDA: mov     edx, [eax+edi+8]
0x76FFDE: add     ecx, [esp+48h+arg_18]
0x76FFE2: add     eax, edi
0x76FFE4: cmp     edx, 0Eh; switch 15 cases
0x76FFE7: ja      short def_76FFF0; jumptable 0076FFF0 default case, cases 1,2
0x76FFE9: movzx   edx, ds:byte_770108[edx]
0x76FFF0: jmp     ds:jpt_76FFF0[edx*4]; switch jump
0x76FFF7: test    byte ptr [esp+48h+arg_C], 1; jumptable 0076FFF0 case 0
0x76FFFC: jz      short loc_770072
0x76FFFE: cmp     byte ptr [esp+48h+arg_0], 0
0x770003: jz      short def_76FFF0; jumptable 0076FFF0 default case, cases 1,2
0x770005: mov     [esp+48h+var_20], ecx
0x770009: jmp     short loc_770072
0x77000B: test    byte ptr [esp+48h+arg_C], 2; jumptable 0076FFF0 case 3
0x770010: jz      short loc_770072
0x770012: cmp     byte ptr [esp+48h+arg_0], 0
0x770017: jz      short def_76FFF0; jumptable 0076FFF0 default case, cases 1,2
0x770019: mov     [esp+48h+var_24], ecx
0x77001D: jmp     short loc_770072
0x77001F: test    byte ptr [esp+48h+arg_C], 2; jumptable 0076FFF0 case 14
0x770024: jz      short loc_770072
0x770026: cmp     byte ptr [esp+48h+arg_0], 0
0x77002B: jz      short def_76FFF0; jumptable 0076FFF0 default case, cases 1,2
0x77002D: mov     [esp+48h+var_28], ecx
0x770031: jmp     short loc_770072
0x770033: test    byte ptr [esp+48h+arg_C], 2; jumptable 0076FFF0 case 13
0x770038: jz      short loc_770072
0x77003A: cmp     byte ptr [esp+48h+arg_0], 0
0x77003F: jz      short def_76FFF0; jumptable 0076FFF0 default case, cases 1,2
0x770041: mov     [esp+48h+var_2C], ecx
0x770045: jmp     short loc_770072
0x770047: test    byte ptr [esp+48h+arg_C], 4; jumptable 0076FFF0 case 4
0x77004C: jmp     short loc_770053
0x77004E: test    byte ptr [esp+48h+arg_C], 8; jumptable 0076FFF0 cases 5-12
0x770053: jz      short loc_770072
0x770055: mov     edx, [esp+48h+arg_8]; jumptable 0076FFF0 default case, cases 1,2
0x770059: push    ecx
0x77005A: mov     ecx, [esi+0Ch]
0x77005D: push    ecx
0x77005E: mov     ecx, [esp+50h+var_38]
0x770062: push    eax
0x770063: mov     eax, [esp+54h+arg_4]
0x770067: push    edx
0x770068: push    eax
0x770069: push    ebx
0x77006A: push    ecx
0x77006B: mov     ecx, ebp
0x77006D: call    sub_76F590
0x770072: mov     eax, [esp+48h+var_30]
0x770076: add     eax, 1
0x770079: add     edi, 1Ch
0x77007C: cmp     eax, [ebp+1Ch]
0x77007F: mov     [esp+48h+var_30], eax
0x770083: jb      loc_76FFD3
0x770089: cmp     byte ptr [esp+48h+arg_0], 0
0x77008E: jz      short loc_7700BE
0x770090: mov     edx, [esi+0Ch]
0x770093: mov     eax, [esp+48h+var_2C]
0x770097: mov     ecx, [esp+48h+var_28]
0x77009B: push    edx
0x77009C: mov     edx, [esp+4Ch+var_24]
0x7700A0: push    eax
0x7700A1: mov     eax, [esp+50h+var_20]
0x7700A5: push    ecx
0x7700A6: movzx   ecx, word ptr [ebx+8]
0x7700AA: push    edx
0x7700AB: mov     edx, [ebx+20h]
0x7700AE: push    eax
0x7700AF: mov     eax, [ebx+1Ch]
0x7700B2: push    ecx
0x7700B3: mov     ecx, [esp+60h+arg_4]
0x7700B7: push    edx
0x7700B8: push    eax
0x7700B9: call    sub_72AF20
0x7700BE: cmp     byte ptr [esp+48h+arg_14], 0
0x7700C3: jz      short loc_7700DD
0x7700C5: mov     ecx, [esp+48h+arg_10]
0x7700C9: mov     eax, [ecx+8]
0x7700CC: mov     ecx, [ebp+0Ch]
0x7700CF: push    eax
0x7700D0: call    sub_776D80
0x7700D5: test    al, al
0x7700D7: jz      loc_76FE7C
0x7700DD: mov     eax, [esp+48h+arg_10]
0x7700E1: pop     edi
0x7700E2: pop     esi
0x7700E3: pop     ebp
0x7700E4: pop     ebx
0x7700E5: add     esp, 38h
0x7700E8: retn    1Ch
