0x483D60: push    0FFFFFFFFh
0x483D62: push    offset SEH_483D60
0x483D67: mov     eax, large fs:0
0x483D6D: push    eax
0x483D6E: sub     esp, 20h
0x483D71: push    ebx
0x483D72: push    ebp
0x483D73: push    esi
0x483D74: push    edi
0x483D75: mov     eax, ds:0B30AACh
0x483D7A: xor     eax, esp
0x483D7C: push    eax
0x483D7D: lea     eax, [esp+40h+var_C]
0x483D81: mov     large fs:0, eax
0x483D87: mov     esi, ecx
0x483D89: mov     [esp+40h+var_20], esi
0x483D8D: cmp     byte ptr ds:0B34420h, 0
0x483D94: jz      short loc_483DA9
0x483D96: mov     ecx, ds:0B06AA8h
0x483D9C: mov     eax, ds:0B06AA0h
0x483DA1: mov     ds:0B3441Ch, ecx
0x483DA7: jmp     short loc_483DBA
0x483DA9: mov     edx, ds:0B06A98h
0x483DAF: mov     eax, ds:0B06A90h
0x483DB4: mov     ds:0B3441Ch, edx
0x483DBA: cmp     byte ptr ds:0B43077h, 0
0x483DC1: mov     ds:0B34418h, eax
0x483DC6: jz      loc_48429A
0x483DCC: test    eax, eax
0x483DCE: jz      loc_48429A
0x483DD4: cmp     byte ptr ds:0B09AE8h, 0
0x483DDB: jnz     short loc_483DEA
0x483DDD: cmp     byte ptr ds:0B09AF0h, 0
0x483DE4: jz      loc_48429A
0x483DEA: cmp     [esp+40h+arg_0], 0
0x483DEF: jz      loc_48429A
0x483DF5: mov     eax, ds:0B333A0h
0x483DFA: mov     ecx, [eax+24h]
0x483DFD: mov     eax, [eax+20h]
0x483E00: mov     edx, [esi]
0x483E02: push    ecx
0x483E03: push    eax
0x483E04: mov     eax, [edx+10h]
0x483E07: mov     ecx, esi
0x483E09: call    eax
0x483E0B: mov     ecx, esi
0x483E0D: call    sub_483750
0x483E12: cmp     dword ptr ds:0B34424h, 0
0x483E19: jnz     short loc_483E4C
0x483E1B: mov     ecx, ds:0B333A0h
0x483E21: mov     eax, [ecx+10h]
0x483E24: mov     eax, [eax+1Ch]
0x483E27: push    1
0x483E29: mov     ecx, eax
0x483E2B: call    sub_405790
0x483E30: test    eax, eax
0x483E32: jz      short loc_483E40
0x483E34: mov     edx, [eax]
0x483E36: mov     ecx, eax
0x483E38: mov     eax, [edx+8]
0x483E3B: call    eax
0x483E3D: push    eax
0x483E3E: jmp     short loc_483E42
0x483E40: push    0; a2
0x483E42: mov     ecx, offset dword_B34424; this
0x483E47: call    NiSmartPointer_Set??
0x483E4C: mov     eax, ds:0B06A2Ch
0x483E51: mov     ecx, ds:0B34418h
0x483E57: shr     eax, 1
0x483E59: add     ecx, eax
0x483E5B: mov     [esp+40h+var_1C], eax
0x483E5F: mov     eax, [esi+0Ch]
0x483E62: xor     edi, edi
0x483E64: test    eax, eax
0x483E66: mov     [esp+40h+var_14], ecx
0x483E6A: mov     [esp+40h+var_18], edi
0x483E6E: jbe     loc_4841EE
0x483E74: mov     [esp+40h+var_24], ecx
0x483E78: jmp     short loc_483E80
0x483E7A: align 10h
0x483E80: test    eax, eax
0x483E82: mov     [esp+40h+var_2C], 0
0x483E8A: jbe     loc_4841D3
0x483E90: mov     edx, [esp+40h+var_14]
0x483E94: mov     [esp+40h+var_28], edx
0x483E98: jmp     short loc_483EA0
0x483E9A: align 10h
0x483EA0: mov     edx, [esp+40h+var_2C]
0x483EA4: imul    eax, edi
0x483EA7: mov     ecx, [esp+40h+var_20]
0x483EAB: mov     ebx, ds:0B06A90h
0x483EB1: add     eax, edx
0x483EB3: shl     eax, 4
0x483EB6: add     eax, [ecx+10h]
0x483EB9: cmp     edi, ebx
0x483EBB: mov     esi, eax
0x483EBD: jb      short loc_483EF2
0x483EBF: mov     eax, ds:0B06A2Ch
0x483EC4: add     eax, ebx
0x483EC6: cmp     edi, eax
0x483EC8: jnb     short loc_483EF2
0x483ECA: cmp     edx, ebx
0x483ECC: jb      short loc_483EF2
0x483ECE: cmp     edx, eax
0x483ED0: jnb     short loc_483EF2
0x483ED2: cmp     byte ptr [esi], 0
0x483ED5: jz      short loc_483EF2
0x483ED7: mov     eax, [esi+4]
0x483EDA: test    eax, eax
0x483EDC: jz      short loc_483EE3
0x483EDE: or      word ptr [eax+18h], 1
0x483EE3: movzx   ecx, word ptr [esi+0Ch]
0x483EE7: movzx   edx, word ptr [esi+8]
0x483EEB: push    ecx
0x483EEC: push    edx
0x483EED: jmp     loc_483FD9
0x483EF2: mov     eax, [esi+4]
0x483EF5: test    eax, eax
0x483EF7: lea     ebx, [esi+4]
0x483EFA: jz      short loc_483F02
0x483EFC: and     word ptr [eax+18h], 0FFFEh
0x483F02: push    edx
0x483F03: push    edi
0x483F04: call    sub_4837C0
0x483F09: mov     ecx, [ebx]
0x483F0B: test    ecx, ecx
0x483F0D: jz      loc_483FF0
0x483F13: mov     dl, [esi+1]
0x483F16: test    dl, dl
0x483F18: jnz     loc_483FBF
0x483F1E: test    al, al
0x483F20: jz      loc_483FC7
0x483F26: neg     ecx
0x483F28: sbb     ecx, ecx
0x483F2A: and     ecx, 0FFFFFFFDh
0x483F2D: add     ecx, 4
0x483F30: mov     ebp, ecx
0x483F32: mov     byte ptr [esi+1], 1
0x483F36: mov     ecx, [esp+40h+arg_0]
0x483F3A: push    1
0x483F3C: call    sub_4EF2D0
0x483F41: test    al, al
0x483F43: jnz     short loc_483F58
0x483F45: mov     ecx, [esp+40h+arg_0]
0x483F49: push    2
0x483F4B: call    sub_4EF2D0
0x483F50: test    al, al
0x483F52: jz      loc_4841B4
0x483F58: mov     ecx, [esp+40h+arg_0]
0x483F5C: push    1
0x483F5E: call    sub_4EF2D0
0x483F63: test    al, al
0x483F65: jnz     short loc_483F70
0x483F67: cmp     ebp, 1
0x483F6A: jz      loc_4841B4
0x483F70: mov     ecx, [esp+40h+arg_0]
0x483F74: push    2
0x483F76: call    sub_4EF2D0
0x483F7B: test    al, al
0x483F7D: jnz     short loc_483F88
0x483F7F: cmp     ebp, 2
0x483F82: jz      loc_4841B4
0x483F88: mov     ecx, [esp+40h+arg_0]
0x483F8C: push    1
0x483F8E: call    sub_4EF2D0
0x483F93: test    al, al
0x483F95: jnz     short loc_483FA1
0x483F97: cmp     ebp, 4
0x483F9A: jnz     short loc_483FA1
0x483F9C: mov     ebp, 2
0x483FA1: mov     ecx, [esp+40h+arg_0]
0x483FA5: push    2
0x483FA7: call    sub_4EF2D0
0x483FAC: test    al, al
0x483FAE: jnz     short loc_484023
0x483FB0: cmp     ebp, 4
0x483FB3: jnz     short loc_484023
0x483FB5: mov     ebp, 1
0x483FBA: jmp     loc_484057
0x483FBF: test    al, al
0x483FC1: jnz     loc_4841B4
0x483FC7: test    dl, dl
0x483FC9: jz      loc_4841B4
0x483FCF: movzx   eax, word ptr [esi+0Ch]
0x483FD3: movzx   ecx, word ptr [esi+8]
0x483FD7: push    eax
0x483FD8: push    ecx
0x483FD9: call    sub_4EF1D0
0x483FDE: push    eax
0x483FDF: call    sub_7B3A40
0x483FE4: add     esp, 0Ch
0x483FE7: mov     byte ptr [esi+1], 0
0x483FEB: jmp     loc_4841B4
0x483FF0: test    al, al
0x483FF2: jnz     loc_483F26
0x483FF8: cmp     [esi+1], al
0x483FFB: jz      short loc_484019
0x483FFD: movzx   edx, word ptr [esi+0Ch]
0x484001: movzx   eax, word ptr [esi+8]
0x484005: push    edx
0x484006: push    eax
0x484007: call    sub_4EF1D0
0x48400C: push    eax
0x48400D: call    sub_7B3A40
0x484012: add     esp, 0Ch
0x484015: mov     byte ptr [esi+1], 0
0x484019: mov     ebp, 2
0x48401E: jmp     loc_483F36
0x484023: cmp     ebp, 2
0x484026: jnz     short loc_484052
0x484028: movzx   ecx, word ptr [esi+0Ch]
0x48402C: movzx   edx, word ptr [esi+8]
0x484030: push    ecx
0x484031: mov     ecx, [esp+44h+arg_0]
0x484035: push    edx
0x484036: call    sub_4F0DA0
0x48403B: test    al, al
0x48403D: jz      loc_4841B4
0x484043: cmp     byte ptr ds:0B09AE8h, 0
0x48404A: jz      loc_4841B4
0x484050: jmp     short loc_484089
0x484052: cmp     ebp, 1
0x484055: jnz     short loc_484066
0x484057: cmp     byte ptr ds:0B09AF0h, 0
0x48405E: jz      loc_4841B4
0x484064: jmp     short loc_484089
0x484066: cmp     ebp, 4
0x484069: jnz     short loc_484089
0x48406B: cmp     byte ptr ds:0B09AE8h, 0
0x484072: jnz     short loc_48407B
0x484074: mov     ebp, 1
0x484079: jmp     short loc_484089
0x48407B: cmp     byte ptr ds:0B09AF0h, 0
0x484082: jnz     short loc_484089
0x484084: mov     ebp, 2
0x484089: mov     ecx, ds:0B06A90h
0x48408F: cmp     edi, ecx
0x484091: jb      short loc_4840B5
0x484093: mov     eax, ds:0B06A2Ch
0x484098: add     eax, ecx
0x48409A: cmp     edi, eax
0x48409C: jnb     short loc_4840B5
0x48409E: mov     edx, [esp+40h+var_2C]
0x4840A2: cmp     edx, ecx
0x4840A4: jb      short loc_4840B9
0x4840A6: cmp     edx, eax
0x4840A8: jnb     short loc_4840B9
0x4840AA: cmp     ebp, 1
0x4840AD: jz      loc_4841B4
0x4840B3: jmp     short loc_4840B9
0x4840B5: mov     edx, [esp+40h+var_2C]
0x4840B9: mov     eax, [ebx]
0x4840BB: test    eax, eax
0x4840BD: jnz     short loc_4840FF
0x4840BF: push    0DCh ; 'Ü'; Size
0x4840C4: call    FormHeapAlloc
0x4840C9: add     esp, 4
0x4840CC: mov     [esp+40h+var_10], eax
0x4840D0: test    eax, eax
0x4840D2: mov     [esp+40h+var_4], 0
0x4840DA: jz      short loc_4840E7
0x4840DC: push    0
0x4840DE: mov     ecx, eax; this
0x4840E0: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4840E5: jmp     short loc_4840E9
0x4840E7: xor     eax, eax
0x4840E9: push    eax; a2
0x4840EA: mov     ecx, ebx; this
0x4840EC: mov     [esp+44h+var_4], 0FFFFFFFFh
0x4840F4: call    NiSmartPointer_Set??
0x4840F9: mov     edx, [esp+40h+var_2C]
0x4840FD: jmp     short loc_484105
0x4840FF: and     word ptr [eax+18h], 0FFFEh
0x484105: mov     ecx, ds:0B06A90h
0x48410B: cmp     edi, ecx
0x48410D: jb      short loc_48412E
0x48410F: mov     eax, ds:0B06A2Ch
0x484114: add     eax, ecx
0x484116: cmp     edi, eax
0x484118: jnb     short loc_48412E
0x48411A: cmp     edx, ecx
0x48411C: jb      short loc_48412E
0x48411E: cmp     edx, eax
0x484120: jnb     short loc_48412E
0x484122: mov     eax, [ebx]
0x484124: or      word ptr [eax+18h], 1
0x484129: mov     ebp, 2
0x48412E: mov     eax, [esp+40h+var_24]
0x484132: cdq
0x484133: mov     ecx, eax
0x484135: mov     eax, [esp+40h+var_28]
0x484139: xor     ecx, edx
0x48413B: sub     ecx, edx
0x48413D: cdq
0x48413E: xor     eax, edx
0x484140: sub     eax, edx
0x484142: cmp     ecx, eax
0x484144: jbe     short loc_484148
0x484146: mov     eax, ecx
0x484148: mov     ecx, [esp+40h+var_1C]
0x48414C: add     ecx, 2
0x48414F: cmp     eax, ecx
0x484151: ja      short loc_484157
0x484153: xor     edi, edi
0x484155: jmp     short loc_484167
0x484157: mov     edx, [esp+40h+var_1C]
0x48415B: add     edx, 4
0x48415E: cmp     edx, eax
0x484160: sbb     edi, edi
0x484162: neg     edi
0x484164: add     edi, 1
0x484167: cmp     ebp, 2
0x48416A: jz      short loc_484188
0x48416C: cmp     ebp, 4
0x48416F: jnz     short loc_48418A
0x484171: movzx   eax, word ptr [esi+0Ch]
0x484175: movzx   ecx, word ptr [esi+8]
0x484179: push    eax
0x48417A: push    ecx
0x48417B: mov     ecx, [esp+48h+arg_0]
0x48417F: call    sub_4F0DA0
0x484184: test    al, al
0x484186: jz      short loc_48418A
0x484188: xor     edi, edi
0x48418A: mov     edx, [ebx]
0x48418C: mov     eax, ds:0B34424h
0x484191: mov     ecx, [esi+0Ch]
0x484194: push    ebp
0x484195: push    edi
0x484196: push    edx
0x484197: mov     edx, [esi+8]
0x48419A: push    eax
0x48419B: mov     eax, [esp+50h+arg_0]
0x48419F: push    ecx
0x4841A0: mov     ecx, ds:0B35B8Ch
0x4841A6: push    edx
0x4841A7: push    eax
0x4841A8: call    sub_4BD430
0x4841AD: mov     edi, [esp+40h+var_18]
0x4841B1: mov     byte ptr [esi], 1
0x4841B4: mov     ecx, [esp+40h+var_2C]
0x4841B8: mov     edx, [esp+40h+var_20]
0x4841BC: mov     eax, [edx+0Ch]
0x4841BF: sub     [esp+40h+var_28], 1
0x4841C4: add     ecx, 1
0x4841C7: cmp     ecx, eax
0x4841C9: mov     [esp+40h+var_2C], ecx
0x4841CD: jb      loc_483EA0
0x4841D3: mov     eax, [esp+40h+var_20]
0x4841D7: mov     eax, [eax+0Ch]
0x4841DA: sub     [esp+40h+var_24], 1
0x4841DF: add     edi, 1
0x4841E2: cmp     edi, eax
0x4841E4: mov     [esp+40h+var_18], edi
0x4841E8: jb      loc_483E80
0x4841EE: fldz
0x4841F0: push    1; a3
0x4841F2: push    ecx
0x4841F3: fstp    [esp+48h+a2]; a2
0x4841F6: mov     ecx, ds:0B34424h; this
0x4841FC: call    NiAVObject_UpdateNiAVObject
0x484201: mov     ecx, ds:0B34424h; this
0x484207: call    NiAVObject_InitializePropertyState
0x48420C: mov     ecx, ds:0B34424h
0x484212: mov     ecx, [ecx+1Ch]
0x484215: push    1
0x484217: call    NiNode_GetNiPropertyByID
0x48421C: push    eax
0x48421D: push    offset dword_B43484
0x484222: call    NiRTTI_Cast
0x484227: add     esp, 8
0x48422A: test    eax, eax
0x48422C: jz      short loc_48429A
0x48422E: fld     dword ptr [eax+2Ch]
0x484231: fstp    [esp+40h+var_14]
0x484235: fld     dword ptr [eax+30h]
0x484238: fstp    [esp+40h+arg_0]
0x48423C: fld     [esp+40h+arg_0]
0x484240: fld     st
0x484242: fld     [esp+40h+var_14]
0x484246: fld     st
0x484248: fsubp   st(2), st
0x48424A: fxch    st(1)
0x48424C: fmul    qword ptr ds:0A2FAA0h
0x484252: faddp   st(1), st
0x484254: fld     dword ptr ds:0B34410h
0x48425A: fcom    st(1)
0x48425C: fnstsw  ax
0x48425E: test    ah, 5
0x484261: jp      short loc_484267
0x484263: fstp    st(1)
0x484265: jmp     short loc_484269
0x484267: fstp    st
0x484269: fstp    [esp+40h+var_14]
0x48426D: fld     dword ptr ds:0B34414h
0x484273: fcom    st(1)
0x484275: fnstsw  ax
0x484277: test    ah, 5
0x48427A: jp      short loc_484280
0x48427C: fstp    st(1)
0x48427E: jmp     short loc_484282
0x484280: fstp    st
0x484282: fstp    [esp+40h+arg_0]
0x484286: fld     [esp+40h+var_14]
0x48428A: fst     dword ptr ds:0B2C334h
0x484290: fsubr   [esp+40h+arg_0]
0x484294: fstp    dword ptr ds:0B2C338h
0x48429A: mov     ecx, [esp+40h+var_C]
0x48429E: mov     large fs:0, ecx
0x4842A5: pop     ecx
0x4842A6: pop     edi
0x4842A7: pop     esi
0x4842A8: pop     ebp
0x4842A9: pop     ebx
0x4842AA: add     esp, 2Ch
0x4842AD: retn    4
