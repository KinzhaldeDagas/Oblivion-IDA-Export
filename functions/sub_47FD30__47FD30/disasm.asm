0x47FD30: push    0FFFFFFFFh
0x47FD32: push    offset SEH_47FD30
0x47FD37: mov     eax, large fs:0
0x47FD3D: push    eax
0x47FD3E: sub     esp, 0Ch
0x47FD41: push    ebx
0x47FD42: push    ebp
0x47FD43: push    esi
0x47FD44: push    edi
0x47FD45: mov     eax, ds:0B30AACh
0x47FD4A: xor     eax, esp
0x47FD4C: push    eax
0x47FD4D: lea     eax, [esp+2Ch+var_C]
0x47FD51: mov     large fs:0, eax
0x47FD57: push    48h ; 'H'; Size
0x47FD59: call    FormHeapAlloc
0x47FD5E: fldz
0x47FD60: fst     [esp+30h+var_18]
0x47FD64: mov     ebx, eax
0x47FD66: fst     [esp+30h+var_14]
0x47FD6A: mov     eax, [esp+30h+var_18]
0x47FD6E: fld     [esp+30h+arg_0]
0x47FD72: mov     ecx, [esp+30h+var_14]
0x47FD76: fld     st
0x47FD78: mov     [ebx], eax
0x47FD7A: fld     qword ptr ds:0A3D660h
0x47FD80: mov     [ebx+4], ecx
0x47FD83: fmul    st(1), st
0x47FD85: push    60h ; '`'; Size
0x47FD87: fxch    st(1)
0x47FD89: fstp    [esp+34h+var_10]
0x47FD8D: mov     edx, [esp+34h+var_10]
0x47FD91: fld     st(1)
0x47FD93: mov     [ebx+8], edx
0x47FD96: fchs
0x47FD98: fstp    [esp+34h+arg_0]
0x47FD9C: fld     [esp+34h+arg_0]
0x47FDA0: fst     [esp+34h+var_18]
0x47FDA4: mov     eax, [esp+34h+var_18]
0x47FDA8: fxch    st(2)
0x47FDAA: mov     [ebx+0Ch], eax
0x47FDAD: fst     [esp+34h+var_14]
0x47FDB1: mov     ecx, [esp+34h+var_14]
0x47FDB5: fxch    st(3)
0x47FDB7: mov     [ebx+10h], ecx
0x47FDBA: fst     [esp+34h+var_10]
0x47FDBE: mov     edx, [esp+34h+var_10]
0x47FDC2: fxch    st(3)
0x47FDC4: mov     [ebx+14h], edx
0x47FDC7: fst     [esp+34h+var_18]
0x47FDCB: mov     eax, [esp+34h+var_18]
0x47FDCF: fst     [esp+34h+var_14]
0x47FDD3: mov     ecx, [esp+34h+var_14]
0x47FDD7: fxch    st(3)
0x47FDD9: mov     [ebx+18h], eax
0x47FDDC: fst     [esp+34h+var_10]
0x47FDE0: mov     edx, [esp+34h+var_10]
0x47FDE4: fxch    st(3)
0x47FDE6: mov     [ebx+1Ch], ecx
0x47FDE9: fstp    [esp+34h+var_18]
0x47FDED: mov     eax, [esp+34h+var_18]
0x47FDF1: fxch    st(1)
0x47FDF3: mov     [ebx+20h], edx
0x47FDF6: fst     [esp+34h+var_14]
0x47FDFA: mov     ecx, [esp+34h+var_14]
0x47FDFE: fxch    st(2)
0x47FE00: mov     [ebx+24h], eax
0x47FE03: fst     [esp+34h+var_10]
0x47FE07: mov     edx, [esp+34h+var_10]
0x47FE0B: fxch    st(2)
0x47FE0D: mov     [ebx+28h], ecx
0x47FE10: fst     [esp+34h+var_18]
0x47FE14: mov     eax, [esp+34h+var_18]
0x47FE18: fst     [esp+34h+var_14]
0x47FE1C: mov     ecx, [esp+34h+var_14]
0x47FE20: fxch    st(2)
0x47FE22: mov     [ebx+2Ch], edx
0x47FE25: fst     [esp+34h+var_10]
0x47FE29: mov     edx, [esp+34h+var_10]
0x47FE2D: fst     [esp+34h+var_18]
0x47FE31: mov     [ebx+30h], eax
0x47FE34: mov     eax, [esp+34h+var_18]
0x47FE38: fstp    [esp+34h+var_14]
0x47FE3C: mov     [ebx+34h], ecx
0x47FE3F: mov     ecx, [esp+34h+var_14]
0x47FE43: fmulp   st(1), st
0x47FE45: mov     [ebx+38h], edx
0x47FE48: mov     [ebx+3Ch], eax
0x47FE4B: fstp    [esp+34h+var_10]
0x47FE4F: mov     edx, [esp+34h+var_10]
0x47FE53: mov     [ebx+40h], ecx
0x47FE56: mov     [ebx+44h], edx
0x47FE59: call    FormHeapAlloc
0x47FE5E: add     esp, 8
0x47FE61: mov     edi, eax
0x47FE63: mov     [esp+2Ch+arg_0], edi
0x47FE67: test    edi, edi
0x47FE69: mov     [esp+2Ch+var_4], 0
0x47FE71: jz      short loc_47FE84
0x47FE73: push    offset sub_47EA50
0x47FE78: push    6
0x47FE7A: push    10h
0x47FE7C: push    edi
0x47FE7D: call    sub_401080
0x47FE82: jmp     short loc_47FE86
0x47FE84: xor     edi, edi
0x47FE86: mov     eax, [esp+2Ch+arg_4]
0x47FE8A: mov     ecx, [eax]
0x47FE8C: mov     [edi], ecx
0x47FE8E: mov     edx, [eax+4]
0x47FE91: mov     [edi+4], edx
0x47FE94: mov     ecx, [eax+8]
0x47FE97: mov     [edi+8], ecx
0x47FE9A: mov     edx, [eax+0Ch]
0x47FE9D: mov     [edi+0Ch], edx
0x47FEA0: mov     ecx, [eax]
0x47FEA2: mov     [edi+10h], ecx
0x47FEA5: mov     edx, [eax+4]
0x47FEA8: mov     [edi+14h], edx
0x47FEAB: mov     ecx, [eax+8]
0x47FEAE: mov     [edi+18h], ecx
0x47FEB1: mov     edx, [eax+0Ch]
0x47FEB4: mov     [edi+1Ch], edx
0x47FEB7: mov     ecx, [eax]
0x47FEB9: mov     [edi+20h], ecx
0x47FEBC: mov     edx, [eax+4]
0x47FEBF: mov     [edi+24h], edx
0x47FEC2: mov     ecx, [eax+8]
0x47FEC5: mov     [edi+28h], ecx
0x47FEC8: mov     edx, [eax+0Ch]
0x47FECB: mov     [edi+2Ch], edx
0x47FECE: mov     ecx, [eax]
0x47FED0: mov     [edi+30h], ecx
0x47FED3: mov     edx, [eax+4]
0x47FED6: mov     [edi+34h], edx
0x47FED9: mov     ecx, [eax+8]
0x47FEDC: mov     [edi+38h], ecx
0x47FEDF: mov     edx, [eax+0Ch]
0x47FEE2: mov     [edi+3Ch], edx
0x47FEE5: mov     ecx, [eax]
0x47FEE7: mov     [edi+40h], ecx
0x47FEEA: mov     edx, [eax+4]
0x47FEED: mov     [edi+44h], edx
0x47FEF0: mov     ecx, [eax+8]
0x47FEF3: mov     [edi+48h], ecx
0x47FEF6: mov     edx, [eax+0Ch]
0x47FEF9: mov     [edi+4Ch], edx
0x47FEFC: mov     ecx, [eax]
0x47FEFE: mov     [edi+50h], ecx
0x47FF01: mov     edx, [eax+4]
0x47FF04: mov     [edi+54h], edx
0x47FF07: mov     ecx, [eax+8]
0x47FF0A: mov     [edi+58h], ecx
0x47FF0D: mov     edx, [eax+0Ch]
0x47FF10: push    30h ; '0'; Size
0x47FF12: mov     [esp+30h+var_4], 0FFFFFFFFh
0x47FF1A: mov     [edi+5Ch], edx
0x47FF1D: call    FormHeapAlloc
0x47FF22: mov     esi, eax
0x47FF24: mov     eax, 2
0x47FF29: xor     ecx, ecx
0x47FF2B: mov     edx, 3
0x47FF30: mov     ebp, 1
0x47FF35: mov     [esi+2], ax
0x47FF39: mov     [esi+6], cx
0x47FF3D: mov     [esi+0Ah], ax
0x47FF41: mov     [esi+0Ch], cx
0x47FF45: mov     ecx, 4
0x47FF4A: mov     [esi+1Ah], ax
0x47FF4E: mov     eax, 5
0x47FF53: mov     word ptr [esi], 0
0x47FF58: mov     [esi+4], bp
0x47FF5C: mov     [esi+8], dx
0x47FF60: mov     [esi+0Eh], cx
0x47FF64: mov     [esi+10h], dx
0x47FF68: mov     word ptr [esi+12h], 0
0x47FF6E: mov     [esi+14h], bp
0x47FF72: mov     [esi+16h], cx
0x47FF76: mov     [esi+18h], bp
0x47FF7A: mov     [esi+1Ch], ax
0x47FF7E: mov     word ptr [esi+1Eh], 2
0x47FF84: mov     [esi+20h], dx
0x47FF88: mov     [esi+22h], ax
0x47FF8C: mov     [esi+24h], dx
0x47FF90: mov     [esi+26h], cx
0x47FF94: mov     [esi+28h], ax
0x47FF98: mov     [esi+2Ah], cx
0x47FF9C: push    0C0h ; 'À'; Size
0x47FFA1: mov     [esi+2Ch], bp
0x47FFA5: mov     [esi+2Eh], ax
0x47FFA9: call    FormHeapAlloc
0x47FFAE: add     esp, 8
0x47FFB1: mov     [esp+2Ch+arg_0], eax
0x47FFB5: test    eax, eax
0x47FFB7: mov     [esp+2Ch+var_4], ebp
0x47FFBB: jz      short loc_47FFE7
0x47FFBD: push    esi
0x47FFBE: push    8
0x47FFC0: push    0
0x47FFC2: push    0
0x47FFC4: push    0
0x47FFC6: push    edi
0x47FFC7: push    0
0x47FFC9: push    ebx
0x47FFCA: push    6
0x47FFCC: mov     ecx, eax
0x47FFCE: call    sub_7174B0
0x47FFD3: mov     ecx, [esp+2Ch+var_C]
0x47FFD7: mov     large fs:0, ecx
0x47FFDE: pop     ecx
0x47FFDF: pop     edi
0x47FFE0: pop     esi
0x47FFE1: pop     ebp
0x47FFE2: pop     ebx
0x47FFE3: add     esp, 18h
0x47FFE6: retn
0x47FFE7: xor     eax, eax
0x47FFE9: mov     ecx, [esp+2Ch+var_C]
0x47FFED: mov     large fs:0, ecx
0x47FFF4: pop     ecx
0x47FFF5: pop     edi
0x47FFF6: pop     esi
0x47FFF7: pop     ebp
0x47FFF8: pop     ebx
0x47FFF9: add     esp, 18h
0x47FFFC: retn
