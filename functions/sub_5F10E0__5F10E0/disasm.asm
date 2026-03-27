0x5F10E0: sub     esp, 8
0x5F10E3: push    esi
0x5F10E4: mov     esi, ecx
0x5F10E6: cmp     dword ptr [esi+58h], 0
0x5F10EA: jz      short loc_5F10FF
0x5F10EC: mov     ecx, [esi+58h]
0x5F10EF: mov     eax, [ecx]
0x5F10F1: mov     edx, [eax+2C0h]
0x5F10F7: call    edx
0x5F10F9: test    ax, 800h
0x5F10FD: jnz     short loc_5F1107
0x5F10FF: lea     eax, [esi+2Ch]
0x5F1102: pop     esi
0x5F1103: add     esp, 8
0x5F1106: retn
0x5F1107: mov     eax, ds:0B3B7C4h
0x5F110C: add     eax, 1
0x5F110F: cmp     eax, 5
0x5F1112: mov     ds:0B3B7C4h, eax
0x5F1117: jl      short loc_5F1120
0x5F1119: xor     eax, eax
0x5F111B: mov     ds:0B3B7C4h, eax
0x5F1120: mov     ecx, [esi+2Ch]
0x5F1123: lea     eax, [eax+eax*2]
0x5F1126: lea     eax, ds:0B3B788h[eax*4]
0x5F112D: mov     [eax], ecx
0x5F112F: mov     edx, [esi+30h]
0x5F1132: mov     [eax+4], edx
0x5F1135: mov     ecx, [esi+34h]
0x5F1138: mov     [eax+8], ecx
0x5F113B: mov     ecx, esi; this
0x5F113D: call    TESObjectREFR_GetParentCell
0x5F1142: test    eax, eax
0x5F1144: jz      loc_5F11D6
0x5F114A: mov     ecx, esi; this
0x5F114C: call    TESObjectREFR_GetParentCell
0x5F1151: movzx   edx, byte ptr [eax+24h]
0x5F1155: shr     edx, 1
0x5F1157: test    dl, 1
0x5F115A: jz      short loc_5F11D6
0x5F115C: mov     ecx, esi; this
0x5F115E: call    TESObjectREFR_GetParentCell
0x5F1163: mov     ecx, eax
0x5F1165: call    TESObjectCELL_GetWaterHeight
0x5F116A: fsub    qword ptr ds:0A3F3F0h
0x5F1170: mov     ecx, esi
0x5F1172: fstp    [esp+0Ch+var_4]
0x5F1176: call    sub_5E0660
0x5F117B: fmul    qword ptr ds:0A31C70h
0x5F1181: mov     edx, ds:0B3B7C4h
0x5F1187: lea     ecx, [edx+edx*2]
0x5F118A: fstp    [esp+0Ch+var_8]
0x5F118E: fld     [esp+0Ch+var_8]
0x5F1192: fadd    dword ptr ds:0B3B790h[ecx*4]
0x5F1199: fld     [esp+0Ch+var_4]
0x5F119D: fcom    st(1)
0x5F119F: fnstsw  ax
0x5F11A1: test    ah, 41h
0x5F11A4: jnz     short loc_5F11BE
0x5F11A6: fstp    st
0x5F11A8: lea     eax, [edx+edx*2]
0x5F11AB: fstp    dword ptr ds:0B3B790h[ecx*4]
0x5F11B2: lea     eax, ds:0B3B788h[eax*4]
0x5F11B9: pop     esi
0x5F11BA: add     esp, 8
0x5F11BD: retn
0x5F11BE: fstp    st(1)
0x5F11C0: lea     eax, [edx+edx*2]
0x5F11C3: fstp    dword ptr ds:0B3B790h[ecx*4]
0x5F11CA: lea     eax, ds:0B3B788h[eax*4]
0x5F11D1: pop     esi
0x5F11D2: add     esp, 8
0x5F11D5: retn
0x5F11D6: mov     edx, ds:0B3B7C4h
0x5F11DC: lea     eax, [edx+edx*2]
0x5F11DF: lea     eax, ds:0B3B788h[eax*4]
0x5F11E6: pop     esi
0x5F11E7: add     esp, 8
0x5F11EA: retn
