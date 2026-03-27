0x49CD10: push    0FFFFFFFFh
0x49CD12: push    offset SEH_49CD10
0x49CD17: mov     eax, large fs:0
0x49CD1D: push    eax
0x49CD1E: sub     esp, 18h
0x49CD21: push    ebx
0x49CD22: push    ebp
0x49CD23: push    esi
0x49CD24: push    edi
0x49CD25: mov     eax, ds:0B30AACh
0x49CD2A: xor     eax, esp
0x49CD2C: push    eax
0x49CD2D: lea     eax, [esp+38h+var_C]
0x49CD31: mov     large fs:0, eax
0x49CD37: mov     esi, ecx
0x49CD39: mov     [esp+38h+var_24], esi
0x49CD3D: xor     ebx, ebx
0x49CD3F: mov     [esi], ebx
0x49CD41: mov     [esp+38h+var_4], ebx
0x49CD45: mov     [esi+4], ebx
0x49CD48: mov     [esi+8], ebx
0x49CD4B: mov     [esi+0Ch], ebx
0x49CD4E: mov     [esi+10h], ebx
0x49CD51: mov     [esi+14h], ebx
0x49CD54: mov     [esi+3Ch], ebx
0x49CD57: mov     [esi+34h], ebx
0x49CD5A: mov     [esi+38h], ebx
0x49CD5D: mov     dword ptr [esi+30h], offset ??_7?$NiTPointerList@PAVWadingWaterData@@@@6B@; const NiTPointerList<WadingWaterData *>::`vftable'
0x49CD64: mov     [esi+48h], ebx
0x49CD67: fldz
0x49CD69: mov     edi, [esi]
0x49CD6B: fst     dword ptr [esi+18h]
0x49CD6E: cmp     edi, ebx
0x49CD70: mov     byte ptr [esp+38h+var_4], 7
0x49CD75: jz      short loc_49CD99
0x49CD77: lea     eax, [edi+4]
0x49CD7A: fstp    st
0x49CD7C: push    eax; lpAddend
0x49CD7D: call    dword ptr ds:0A2807Ch
0x49CD83: test    eax, eax
0x49CD85: jnz     short loc_49CD95
0x49CD87: cmp     edi, ebx
0x49CD89: jz      short loc_49CD95
0x49CD8B: mov     edx, [edi]
0x49CD8D: mov     eax, [edx]
0x49CD8F: push    1
0x49CD91: mov     ecx, edi
0x49CD93: call    eax
0x49CD95: fldz
0x49CD97: mov     [esi], ebx
0x49CD99: mov     [esi+40h], ebx
0x49CD9C: mov     al, ds:0B070A0h
0x49CDA1: cmp     al, bl
0x49CDA3: mov     ds:0B45DB9h, al
0x49CDA8: jz      short loc_49CDB9
0x49CDAA: mov     ecx, ds:0B070E0h
0x49CDB0: shl     ecx, 5
0x49CDB3: mov     ds:0B45DBCh, ecx
0x49CDB9: mov     edi, [esi+48h]
0x49CDBC: cmp     edi, ebx
0x49CDBE: jz      short loc_49CDE3
0x49CDC0: lea     edx, [edi+4]
0x49CDC3: fstp    st
0x49CDC5: push    edx; lpAddend
0x49CDC6: call    dword ptr ds:0A2807Ch
0x49CDCC: test    eax, eax
0x49CDCE: jnz     short loc_49CDDE
0x49CDD0: cmp     edi, ebx
0x49CDD2: jz      short loc_49CDDE
0x49CDD4: mov     eax, [edi]
0x49CDD6: mov     edx, [eax]
0x49CDD8: push    1
0x49CDDA: mov     ecx, edi
0x49CDDC: call    edx
0x49CDDE: fldz
0x49CDE0: mov     [esi+48h], ebx
0x49CDE3: cmp     ds:0B35230h, ebx
0x49CDE9: mov     byte ptr ds:0B3521Dh, 1
0x49CDF0: jnz     loc_49CE93
0x49CDF6: push    0DCh ; 'Ü'; Size
0x49CDFB: fstp    st
0x49CDFD: call    FormHeapAlloc
0x49CE02: add     esp, 4
0x49CE05: mov     [esp+38h+var_20], eax
0x49CE09: cmp     eax, ebx
0x49CE0B: mov     byte ptr [esp+38h+var_4], 8
0x49CE10: jz      short loc_49CE1E
0x49CE12: push    ebx
0x49CE13: mov     ecx, eax; this
0x49CE15: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x49CE1A: mov     edi, eax
0x49CE1C: jmp     short loc_49CE20
0x49CE1E: xor     edi, edi
0x49CE20: mov     ecx, ds:0B35230h
0x49CE26: cmp     ecx, edi
0x49CE28: mov     byte ptr [esp+38h+var_4], 7
0x49CE2D: jz      short loc_49CE6E
0x49CE2F: cmp     ecx, ebx
0x49CE31: jz      short loc_49CE52
0x49CE33: mov     ebp, ecx
0x49CE35: add     ecx, 4
0x49CE38: push    ecx; lpAddend
0x49CE39: call    dword ptr ds:0A2807Ch
0x49CE3F: test    eax, eax
0x49CE41: jnz     short loc_49CE52
0x49CE43: cmp     ebp, ebx
0x49CE45: jz      short loc_49CE52
0x49CE47: mov     eax, [ebp+0]
0x49CE4A: mov     edx, [eax]
0x49CE4C: push    1
0x49CE4E: mov     ecx, ebp
0x49CE50: call    edx
0x49CE52: cmp     edi, ebx
0x49CE54: mov     ecx, edi
0x49CE56: mov     ds:0B35230h, ecx
0x49CE5C: jz      short loc_49CE6E
0x49CE5E: add     edi, 4
0x49CE61: push    edi; lpAddend
0x49CE62: call    dword ptr ds:0A28078h
0x49CE68: mov     ecx, ds:0B35230h
0x49CE6E: push    offset aWaterroot; "WaterRoot"
0x49CE73: call    NiObjectNET_SetName
0x49CE78: mov     eax, ds:0B333A0h
0x49CE7D: mov     ecx, [eax+0Ch]
0x49CE80: mov     edx, [ecx]
0x49CE82: mov     eax, ds:0B35230h
0x49CE87: mov     edx, [edx+84h]
0x49CE8D: push    ebx
0x49CE8E: push    eax
0x49CE8F: call    edx
0x49CE91: fldz
0x49CE93: fst     [esp+38h+var_1C]
0x49CE97: mov     eax, [esp+38h+var_1C]
0x49CE9B: fld     dword ptr ds:0A3D65Ch
0x49CEA1: mov     ds:0B45E14h, eax
0x49CEA6: fst     [esp+38h+var_18]
0x49CEAA: mov     ecx, [esp+38h+var_18]
0x49CEAE: fstp    [esp+38h+var_14]
0x49CEB2: mov     edx, [esp+38h+var_14]
0x49CEB6: fld1
0x49CEB8: mov     ds:0B45E18h, ecx
0x49CEBE: fst     [esp+38h+var_10]
0x49CEC2: mov     ds:0B45E1Ch, edx
0x49CEC8: mov     eax, [esp+38h+var_10]
0x49CECC: fxch    st(1)
0x49CECE: fst     [esp+38h+var_1C]
0x49CED2: mov     ds:0B45E20h, eax
0x49CED7: mov     ecx, [esp+38h+var_1C]
0x49CEDB: fst     [esp+38h+var_18]
0x49CEDF: fld     dword ptr ds:0A2FAACh
0x49CEE5: mov     edx, [esp+38h+var_18]
0x49CEE9: fstp    [esp+38h+var_14]
0x49CEED: mov     ds:0B45E24h, ecx
0x49CEF3: mov     eax, [esp+38h+var_14]
0x49CEF7: fxch    st(1)
0x49CEF9: fst     [esp+38h+var_10]
0x49CEFD: mov     ds:0B45E28h, edx
0x49CF03: mov     ecx, [esp+38h+var_10]
0x49CF07: fst     [esp+38h+var_1C]
0x49CF0B: fst     [esp+38h+var_18]
0x49CF0F: mov     edx, [esp+38h+var_1C]
0x49CF13: fst     [esp+38h+var_14]
0x49CF17: mov     ds:0B45E2Ch, eax
0x49CF1C: fstp    [esp+38h+var_10]
0x49CF20: mov     eax, [esp+38h+var_18]
0x49CF24: fld     dword ptr ds:0B07040h
0x49CF2A: mov     ds:0B45E30h, ecx
0x49CF30: fld     dword ptr ds:0B07048h
0x49CF36: mov     ecx, [esp+38h+var_14]
0x49CF3A: fmul    qword ptr ds:0A3F428h
0x49CF40: mov     ds:0B45E34h, edx
0x49CF46: mov     edx, [esp+38h+var_10]
0x49CF4A: mov     ds:0B45E38h, eax
0x49CF4F: mov     ds:0B45E3Ch, ecx
0x49CF55: fdivp   st(1), st
0x49CF57: mov     ds:0B45E40h, edx
0x49CF5D: call    Double_To_SInt32
0x49CF62: mov     [esp+38h+var_24], eax
0x49CF66: fild    [esp+38h+var_24]
0x49CF6A: mov     al, ds:0B07058h
0x49CF6F: mov     ds:0B45FD0h, al
0x49CF74: fstp    dword ptr ds:0B45EA4h
0x49CF7A: mov     ds:0B35220h, ebx
0x49CF80: mov     [esi+20h], ebx
0x49CF83: fst     dword ptr [esi+2Ch]
0x49CF86: mov     [esi+24h], ebx
0x49CF89: fstp    dword ptr [esi+44h]
0x49CF8C: mov     [esi+28h], bl
0x49CF8F: mov     byte ptr [esi+29h], 1
0x49CF93: mov     eax, esi
0x49CF95: mov     ecx, dword ptr [esp+38h+var_C]
0x49CF99: mov     large fs:0, ecx
0x49CFA0: pop     ecx
0x49CFA1: pop     edi
0x49CFA2: pop     esi
0x49CFA3: pop     ebp
0x49CFA4: pop     ebx
0x49CFA5: add     esp, 24h
0x49CFA8: retn
