0x4D0C20: push    0FFFFFFFFh
0x4D0C22: push    offset SEH_4D0C20
0x4D0C27: mov     eax, large fs:0
0x4D0C2D: push    eax
0x4D0C2E: sub     esp, 0C4h
0x4D0C34: push    ebx
0x4D0C35: push    ebp
0x4D0C36: push    esi
0x4D0C37: push    edi
0x4D0C38: mov     eax, ds:0B30AACh
0x4D0C3D: xor     eax, esp
0x4D0C3F: push    eax
0x4D0C40: lea     eax, [esp+0E4h+var_C]
0x4D0C47: mov     large fs:0, eax
0x4D0C4D: mov     ebx, ecx
0x4D0C4F: xor     ebp, ebp
0x4D0C51: mov     [esp+0E4h+var_98], ebp
0x4D0C55: test    byte ptr [ebx+24h], 1
0x4D0C59: jz      loc_4D1105
0x4D0C5F: cmp     [ebx+54h], ebp
0x4D0C62: jz      loc_4D1105
0x4D0C68: push    ebp
0x4D0C69: call    GetShadowSceneNode
0x4D0C6E: fld     dword ptr ds:0B3F9A4h
0x4D0C74: mov     ecx, ds:0B3F9ACh
0x4D0C7A: fld     st
0x4D0C7C: mov     edx, ds:0B3F9B0h
0x4D0C82: fchs
0x4D0C84: fld     qword ptr ds:0A2FAA0h
0x4D0C8A: mov     edi, eax
0x4D0C8C: mov     eax, ds:0B3F9A8h
0x4D0C91: fmul    st(1), st
0x4D0C93: fxch    st(1)
0x4D0C95: sub     esp, 8
0x4D0C98: mov     dword ptr [esp+0F0h+var_BC+4], ecx
0x4D0C9C: fstp    [esp+0F0h+var_C8]
0x4D0CA0: lea     ecx, [esp+0F0h+var_78]
0x4D0CA4: mov     [esp+0F0h+var_C0], edi
0x4D0CA8: fmulp   st(1), st
0x4D0CAA: mov     dword ptr [esp+0F0h+var_BC], eax
0x4D0CAE: mov     [esp+0F0h+var_B4], edx
0x4D0CB2: fstp    [esp+0F0h+var_D0]
0x4D0CB6: fld     [esp+0F0h+var_D0]
0x4D0CBA: fstp    [esp+0F0h+var_E8]; float
0x4D0CBE: fld     [esp+0F0h+var_C8]
0x4D0CC2: fst     [esp+0F0h+var_EC]; float
0x4D0CC6: fstp    [esp+0F0h+var_F0]; float
0x4D0CC9: call    sub_711580
0x4D0CCE: push    ebp
0x4D0CCF: lea     ecx, [esp+0E8h+a2]
0x4D0CD3: call    NiFrustum__SetOrtho
0x4D0CD8: fld     dword ptr ds:0A2FE7Ch
0x4D0CDE: mov     eax, [ebx+54h]
0x4D0CE1: fstp    [esp+0E4h+var_84]
0x4D0CE5: mov     [esp+0E4h+var_7C], 1
0x4D0CEA: mov     ecx, [eax+20h]
0x4D0CED: mov     edx, [eax+24h]
0x4D0CF0: mov     [esp+0E4h+var_B0], ecx
0x4D0CF4: mov     ecx, [eax+28h]
0x4D0CF7: mov     [esp+0E4h+var_A8], ecx
0x4D0CFB: fld     [esp+0E4h+var_A8]
0x4D0CFF: mov     ecx, [esp+0E4h+arg_8]
0x4D0D06: fld     st
0x4D0D08: mov     [esp+0E4h+var_AC], edx
0x4D0D0C: mov     edx, [eax+2Ch]
0x4D0D0F: mov     eax, [esp+0E4h+arg_4]
0x4D0D16: mov     [esp+0E4h+var_A4], edx
0x4D0D1A: fld     [esp+0E4h+var_A4]
0x4D0D1E: fld     st
0x4D0D20: shl     eax, 0Ch
0x4D0D23: fsubp   st(2), st
0x4D0D25: add     eax, 1080h
0x4D0D2A: fxch    st(1)
0x4D0D2C: mov     [esp+0E4h+var_D0], eax
0x4D0D30: shl     ecx, 0Ch
0x4D0D33: fstp    [esp+0E4h+var_B0]
0x4D0D37: add     ecx, 1080h
0x4D0D3D: push    ebp; float
0x4D0D3E: faddp   st(1), st
0x4D0D40: lea     edx, [esp+0E8h+var_BC]
0x4D0D44: push    edx; int
0x4D0D45: mov     eax, edx
0x4D0D47: fstp    [esp+0ECh+var_AC]
0x4D0D4B: push    eax; int
0x4D0D4C: fild    [esp+0F0h+var_D0]
0x4D0D50: mov     [esp+0F0h+var_D0], ecx
0x4D0D54: mov     ecx, ebx
0x4D0D56: fstp    dword ptr [esp+0F0h+var_BC]
0x4D0D5A: fild    [esp+0F0h+var_D0]
0x4D0D5E: fstp    dword ptr [esp+0F0h+var_BC+4]
0x4D0D62: fld     [esp+0F0h+var_AC]
0x4D0D66: fadd    qword ptr ds:0A46968h
0x4D0D6C: fstp    [esp+0F0h+var_B4]
0x4D0D70: call    sub_4CCE20
0x4D0D75: fld     dword ptr ds:0A46964h
0x4D0D7B: fst     [esp+0E4h+a2]
0x4D0D7F: fld     dword ptr ds:0A46960h
0x4D0D85: fst     [esp+0E4h+var_90]
0x4D0D89: fstp    [esp+0E4h+var_8C]
0x4D0D8D: fstp    [esp+0E4h+var_88]
0x4D0D91: fld     [esp+0E4h+var_B4]
0x4D0D95: fsub    [esp+0E4h+var_B0]
0x4D0D99: fadd    qword ptr ds:0A3F3E8h
0x4D0D9F: push    124h; Size
0x4D0DA4: fstp    [esp+0E8h+var_80]
0x4D0DA8: call    FormHeapAlloc
0x4D0DAD: add     esp, 4
0x4D0DB0: mov     [esp+0E4h+var_B0], eax
0x4D0DB4: cmp     eax, ebp
0x4D0DB6: mov     [esp+0E4h+var_4], 1
0x4D0DC1: jz      short loc_4D0DD2
0x4D0DC3: mov     ecx, eax
0x4D0DC5: call    sub_70D590
0x4D0DCA: mov     esi, eax
0x4D0DCC: mov     [esp+0E4h+var_C8], esi
0x4D0DD0: jmp     short loc_4D0DD8
0x4D0DD2: mov     [esp+0E4h+var_C8], ebp
0x4D0DD6: mov     esi, ebp
0x4D0DD8: cmp     esi, ebp
0x4D0DDA: mov     [esp+0E4h+var_B0], esi
0x4D0DDE: jz      short loc_4D0DEA
0x4D0DE0: lea     ecx, [esi+4]
0x4D0DE3: push    ecx; lpAddend
0x4D0DE4: call    dword ptr ds:0A28078h
0x4D0DEA: push    0DCh ; 'Ü'; Size
0x4D0DEF: mov     [esp+0E8h+var_4], 2
0x4D0DFA: call    FormHeapAlloc
0x4D0DFF: add     esp, 4
0x4D0E02: mov     [esp+0E4h+var_9C], eax
0x4D0E06: cmp     eax, ebp
0x4D0E08: mov     byte ptr [esp+0E4h+var_4], 3
0x4D0E10: jz      short loc_4D0E1C
0x4D0E12: push    ebp
0x4D0E13: mov     ecx, eax; this
0x4D0E15: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4D0E1A: mov     ebp, eax
0x4D0E1C: test    ebp, ebp
0x4D0E1E: mov     [esp+0E4h+var_9C], ebp
0x4D0E22: jz      short loc_4D0E2E
0x4D0E24: lea     edx, [ebp+4]
0x4D0E27: push    edx; lpAddend
0x4D0E28: call    dword ptr ds:0A28078h
0x4D0E2E: mov     eax, [ebp+0]
0x4D0E31: mov     edx, [eax+84h]
0x4D0E37: push    1
0x4D0E39: push    esi
0x4D0E3A: mov     ecx, ebp
0x4D0E3C: mov     byte ptr [esp+0ECh+var_4], 4
0x4D0E44: call    edx
0x4D0E46: mov     eax, dword ptr [esp+0E4h+var_BC]
0x4D0E4A: mov     [ebp+54h], eax
0x4D0E4D: mov     ecx, dword ptr [esp+0E4h+var_BC+4]
0x4D0E51: mov     [ebp+58h], ecx
0x4D0E54: mov     edx, [esp+0E4h+var_B4]
0x4D0E58: mov     [ebp+5Ch], edx
0x4D0E5B: mov     eax, [edi]
0x4D0E5D: mov     edx, [eax+84h]
0x4D0E63: push    1
0x4D0E65: push    ebp
0x4D0E66: mov     ecx, edi
0x4D0E68: call    edx
0x4D0E6A: mov     eax, ds:0B35EB8h
0x4D0E6F: push    1
0x4D0E71: push    eax
0x4D0E72: mov     ecx, ebx
0x4D0E74: call    sub_4CBA80
0x4D0E79: test    eax, eax
0x4D0E7B: jz      short loc_4D0EE6
0x4D0E7D: fld     dword ptr [eax+28h]
0x4D0E80: fstp    [esp+0E4h+var_D0]
0x4D0E84: fldz
0x4D0E86: fld     [esp+0E4h+var_D0]
0x4D0E8A: fucom   st(1)
0x4D0E8C: fnstsw  ax
0x4D0E8E: fstp    st(1)
0x4D0E90: test    ah, 44h
0x4D0E93: jnp     short loc_4D0EE4
0x4D0E95: mov     ecx, 9
0x4D0E9A: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x4D0E9F: lea     edi, [esp+0E4h+var_54]
0x4D0EA6: rep movsd
0x4D0EA8: push    ecx
0x4D0EA9: lea     ecx, [esp+0E8h+var_54]
0x4D0EB0: fstp    [esp+0E8h+var_E8]; float
0x4D0EB3: call    NiMatrix33_InitRotationTransform
0x4D0EB8: lea     ecx, [esp+0E4h+var_78]
0x4D0EBC: push    ecx
0x4D0EBD: lea     edx, [esp+0E8h+var_30]
0x4D0EC4: push    edx
0x4D0EC5: lea     ecx, [esp+0ECh+var_54]
0x4D0ECC: call    NiMAtrix33_Multiply
0x4D0ED1: mov     ecx, 9
0x4D0ED6: mov     esi, eax
0x4D0ED8: lea     edi, [esp+0E4h+var_78]
0x4D0EDC: rep movsd
0x4D0EDE: mov     esi, [esp+0E4h+var_C8]
0x4D0EE2: jmp     short loc_4D0EE6
0x4D0EE4: fstp    st
0x4D0EE6: lea     edi, [esi+30h]
0x4D0EE9: mov     ecx, 9
0x4D0EEE: lea     esi, [esp+0E4h+var_78]
0x4D0EF2: rep movsd
0x4D0EF4: mov     edi, [esp+0E4h+var_C8]
0x4D0EF8: lea     eax, [esp+0E4h+a2]
0x4D0EFC: push    eax; a2
0x4D0EFD: mov     ecx, edi; this
0x4D0EFF: call    Camera_SetFrustum
0x4D0F04: mov     esi, 1
0x4D0F09: fldz
0x4D0F0B: push    esi; a3
0x4D0F0C: push    ecx
0x4D0F0D: mov     ecx, ebp; this
0x4D0F0F: fstp    [esp+0ECh+var_EC]; a2
0x4D0F12: call    NiAVObject_UpdateNiAVObject
0x4D0F17: fldz
0x4D0F19: push    esi; a3
0x4D0F1A: push    ecx
0x4D0F1B: fstp    [esp+0ECh+var_EC]; a2
0x4D0F1E: mov     ecx, edi; this
0x4D0F20: call    NiAVObject_UpdateNiAVObject
0x4D0F25: mov     eax, [ebx+54h]
0x4D0F28: test    eax, eax
0x4D0F2A: mov     [esp+0E4h+var_C9], 0
0x4D0F2F: mov     [esp+0E4h+var_CB], 0
0x4D0F34: jz      short loc_4D0F58
0x4D0F36: cmp     word ptr [eax+0B6h], 0
0x4D0F3E: ja      short loc_4D0F48
0x4D0F40: xor     eax, eax
0x4D0F42: mov     [esp+0E4h+var_D0], eax
0x4D0F46: jmp     short loc_4D0F64
0x4D0F48: mov     ecx, [eax+0B0h]
0x4D0F4E: mov     edx, [ecx]
0x4D0F50: mov     [esp+0E4h+var_D0], edx
0x4D0F54: mov     eax, edx
0x4D0F56: jmp     short loc_4D0F64
0x4D0F58: mov     [esp+0E4h+var_D0], 0
0x4D0F60: mov     eax, [esp+0E4h+var_D0]
0x4D0F64: test    eax, eax
0x4D0F66: jz      short loc_4D0F76
0x4D0F68: mov     cl, [eax+18h]
0x4D0F6B: and     cl, 1
0x4D0F6E: or      [eax+18h], si
0x4D0F72: mov     [esp+0E4h+var_C9], cl
0x4D0F76: mov     eax, [ebx+54h]
0x4D0F79: test    eax, eax
0x4D0F7B: jz      short loc_4D0F91
0x4D0F7D: cmp     [eax+0B6h], si
0x4D0F84: jbe     short loc_4D0F91
0x4D0F86: mov     eax, [eax+0B0h]
0x4D0F8C: mov     edi, [eax+4]
0x4D0F8F: jmp     short loc_4D0F93
0x4D0F91: xor     edi, edi
0x4D0F93: test    edi, edi
0x4D0F95: jz      short loc_4D0FA4
0x4D0F97: mov     al, [edi+18h]
0x4D0F9A: and     al, 1
0x4D0F9C: or      [edi+18h], si
0x4D0FA0: mov     [esp+0E4h+var_CB], al
0x4D0FA4: call    sub_49A140
0x4D0FA9: mov     esi, eax
0x4D0FAB: test    esi, esi
0x4D0FAD: mov     [esp+0E4h+var_CA], 0
0x4D0FB2: jz      short loc_4D0FC2
0x4D0FB4: mov     al, [esi+18h]
0x4D0FB7: and     al, 1
0x4D0FB9: or      word ptr [esi+18h], 1
0x4D0FBE: mov     [esp+0E4h+var_CA], al
0x4D0FC2: movzx   ecx, byte ptr ds:0B0727Ch
0x4D0FC9: mov     edx, [esp+0E4h+var_C8]
0x4D0FCD: push    edx
0x4D0FCE: lea     eax, [esp+0E8h+var_A0]
0x4D0FD2: mov     byte ptr [esp+0E8h+var_C4+3], cl
0x4D0FD6: push    eax
0x4D0FD7: mov     ecx, ebx
0x4D0FD9: mov     byte ptr ds:0B0727Ch, 0
0x4D0FE0: call    sub_4D0190
0x4D0FE5: movzx   ecx, byte ptr [esp+0E4h+var_C4+3]
0x4D0FEA: xor     ebx, ebx
0x4D0FEC: cmp     esi, ebx
0x4D0FEE: mov     ds:0B0727Ch, cl
0x4D0FF4: mov     byte ptr [esp+0E4h+var_4], 5
0x4D0FFC: mov     ecx, 0FFFEh
0x4D1001: jz      short loc_4D1014
0x4D1003: cmp     [esp+0E4h+var_CA], bl
0x4D1007: jz      short loc_4D1010
0x4D1009: or      word ptr [esi+18h], 1
0x4D100E: jmp     short loc_4D1014
0x4D1010: and     [esi+18h], cx
0x4D1014: mov     eax, [esp+0E4h+var_D0]
0x4D1018: cmp     eax, ebx
0x4D101A: jz      short loc_4D102D
0x4D101C: cmp     [esp+0E4h+var_C9], bl
0x4D1020: jz      short loc_4D1029
0x4D1022: or      word ptr [eax+18h], 1
0x4D1027: jmp     short loc_4D102D
0x4D1029: and     [eax+18h], cx
0x4D102D: cmp     edi, ebx
0x4D102F: jz      short loc_4D1042
0x4D1031: cmp     [esp+0E4h+var_CB], bl
0x4D1035: jz      short loc_4D103E
0x4D1037: or      word ptr [edi+18h], 1
0x4D103C: jmp     short loc_4D1042
0x4D103E: and     [edi+18h], cx
0x4D1042: mov     ecx, [esp+0E4h+var_C0]
0x4D1046: mov     edx, [ecx]
0x4D1048: mov     edx, [edx+88h]
0x4D104E: push    ebp
0x4D104F: lea     eax, [esp+0E8h+var_C0]
0x4D1053: push    eax
0x4D1054: call    edx
0x4D1056: mov     eax, [esp+0E4h+var_C0]
0x4D105A: cmp     eax, ebx
0x4D105C: mov     edi, ds:0A2807Ch
0x4D1062: jz      short loc_4D107E
0x4D1064: mov     esi, eax
0x4D1066: add     eax, 4
0x4D1069: push    eax; lpAddend
0x4D106A: call    edi ; InterlockedDecrement
0x4D106C: test    eax, eax
0x4D106E: jnz     short loc_4D107E
0x4D1070: cmp     esi, ebx
0x4D1072: jz      short loc_4D107E
0x4D1074: mov     eax, [esi]
0x4D1076: mov     edx, [eax]
0x4D1078: push    1
0x4D107A: mov     ecx, esi
0x4D107C: call    edx
0x4D107E: lea     eax, [ebp+4]
0x4D1081: push    eax; lpAddend
0x4D1082: call    edi ; InterlockedDecrement
0x4D1084: test    eax, eax
0x4D1086: jnz     short loc_4D1093
0x4D1088: mov     edx, [ebp+0]
0x4D108B: mov     eax, [edx]
0x4D108D: push    1
0x4D108F: mov     ecx, ebp
0x4D1091: call    eax
0x4D1093: mov     esi, [esp+0E4h+var_C8]
0x4D1097: lea     ecx, [esi+4]
0x4D109A: push    ecx; lpAddend
0x4D109B: mov     [esp+0E8h+var_9C], ebx
0x4D109F: call    edi ; InterlockedDecrement
0x4D10A1: test    eax, eax
0x4D10A3: jnz     short loc_4D10AF
0x4D10A5: mov     edx, [esi]
0x4D10A7: mov     eax, [edx]
0x4D10A9: push    1
0x4D10AB: mov     ecx, esi
0x4D10AD: call    eax
0x4D10AF: mov     eax, [esp+0E4h+var_A0]
0x4D10B3: cmp     eax, ebx
0x4D10B5: mov     ebp, [esp+0E4h+arg_0]
0x4D10BC: mov     [esp+0E4h+var_B0], ebx
0x4D10C0: mov     [ebp+0], eax
0x4D10C3: jz      short loc_4D10D3
0x4D10C5: add     eax, 4
0x4D10C8: push    eax; lpAddend
0x4D10C9: call    dword ptr ds:0A28078h
0x4D10CF: mov     eax, [esp+0E4h+var_A0]
0x4D10D3: cmp     eax, ebx
0x4D10D5: mov     [esp+0E4h+var_98], 1
0x4D10DD: mov     byte ptr [esp+0E4h+var_4], 4
0x4D10E5: jz      short loc_4D1101
0x4D10E7: mov     esi, eax
0x4D10E9: add     eax, 4
0x4D10EC: push    eax; lpAddend
0x4D10ED: call    edi ; InterlockedDecrement
0x4D10EF: test    eax, eax
0x4D10F1: jnz     short loc_4D1101
0x4D10F3: cmp     esi, ebx
0x4D10F5: jz      short loc_4D1101
0x4D10F7: mov     edx, [esi]
0x4D10F9: mov     eax, [edx]
0x4D10FB: push    1
0x4D10FD: mov     ecx, esi
0x4D10FF: call    eax
0x4D1101: mov     eax, ebp
0x4D1103: jmp     short loc_4D110E
0x4D1105: mov     eax, [esp+0E4h+arg_0]
0x4D110C: mov     [eax], ebp
0x4D110E: mov     ecx, [esp+0E4h+var_C]
0x4D1115: mov     large fs:0, ecx
0x4D111C: pop     ecx
0x4D111D: pop     edi
0x4D111E: pop     esi
0x4D111F: pop     ebp
0x4D1120: pop     ebx
0x4D1121: add     esp, 0D0h
0x4D1127: retn    0Ch
