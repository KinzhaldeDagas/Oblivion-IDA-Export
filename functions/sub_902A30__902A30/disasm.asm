0x902A30: push    ebp
0x902A31: mov     ebp, esp
0x902A33: and     esp, 0FFFFFFF0h
0x902A36: mov     eax, 1194h
0x902A3B: call    __alloca_probe
0x902A40: mov     edx, ds:0BA9DE4h
0x902A46: push    ebx
0x902A47: mov     ebx, ecx
0x902A49: mov     ecx, large fs:2Ch
0x902A50: mov     eax, [ecx+edx*4]
0x902A53: push    esi
0x902A54: mov     esi, [eax+1A4h]
0x902A5A: push    edi
0x902A5B: cmp     esi, [eax+1A8h]
0x902A61: jnb     short loc_902A8E
0x902A63: mov     esi, eax
0x902A65: mov     ecx, [esi+1A4h]
0x902A6B: mov     dword ptr [ecx], offset aLtcvxlst; "LtCvxLst"
0x902A71: mov     dword ptr [ecx+0Ch], offset off_A9BC80
0x902A78: rdtsc
0x902A7A: mov     [esp+11A0h+var_1184], eax
0x902A7E: mov     eax, [esp+11A0h+var_1184]
0x902A82: mov     [ecx+4], eax
0x902A85: add     ecx, 10h
0x902A88: mov     [esi+1A4h], ecx
0x902A8E: mov     edi, [ebp+arg_4]
0x902A91: mov     ecx, [edi]
0x902A93: mov     edx, [ebp+arg_0]
0x902A96: mov     eax, [edi+8]
0x902A99: movaps  xmm2, xmmword ptr [eax+40h]
0x902A9D: movaps  xmm3, xmmword ptr [eax+50h]
0x902AA1: mov     [esp+11A0h+var_1184], ecx
0x902AA5: mov     ecx, [edx+8]
0x902AA8: mov     edx, [ebp+arg_8]
0x902AAB: fld     dword ptr [edx+18h]
0x902AAE: mov     esi, [ebp+arg_C]
0x902AB1: fld     st
0x902AB3: subps   xmm3, xmm2
0x902AB6: fmul    dword ptr [ecx+5Ch]
0x902AB9: push    esi
0x902ABA: fxch    st(1)
0x902ABC: fmul    dword ptr [eax+5Ch]
0x902ABF: fld     st(1)
0x902AC1: fstp    [esp+11A4h+var_118C]
0x902AC5: movss   xmm0, [esp+11A4h+var_118C]
0x902ACB: fst     [esp+11A4h+var_118C]
0x902ACF: fld     dword ptr [ecx+0A0h]
0x902AD5: movss   xmm1, [esp+11A4h+var_118C]
0x902ADB: fmul    dword ptr [ecx+9Ch]
0x902AE1: movaps  xmm2, xmm1
0x902AE4: shufps  xmm2, xmm1, 0
0x902AE8: movaps  xmm1, xmmword ptr [ecx+50h]
0x902AEC: fmul    st, st(2)
0x902AEE: mulps   xmm2, xmm3
0x902AF1: fld     dword ptr [eax+0A0h]
0x902AF7: movaps  xmm3, xmmword ptr [ecx+40h]
0x902AFB: fmul    dword ptr [eax+9Ch]
0x902B01: subps   xmm3, xmm1
0x902B04: movaps  xmm1, xmm0
0x902B07: shufps  xmm1, xmm0, 0
0x902B0B: fmul    st, st(2)
0x902B0D: mulps   xmm1, xmm3
0x902B10: addps   xmm1, xmm2
0x902B13: movaps  [esp+11A4h+var_1170], xmm1
0x902B18: faddp   st(1), st
0x902B1A: lea     ecx, [esp+11A4h+var_1040]
0x902B21: fstp    dword ptr [esp+11A4h+var_1170+0Ch]
0x902B25: fstp    st
0x902B27: fstp    st
0x902B29: call    sub_901C90
0x902B2E: mov     al, [ebx+84h]
0x902B34: test    al, al
0x902B36: jnz     loc_902CF3
0x902B3C: mov     ecx, large fs:2Ch
0x902B43: mov     eax, ds:0BA9DE4h
0x902B48: mov     eax, [ecx+eax*4]
0x902B4B: mov     edx, [eax+1A4h]
0x902B51: cmp     edx, [eax+1A8h]
0x902B57: jnb     short loc_902B8B
0x902B59: mov     eax, ds:0BA9DE4h
0x902B5E: mov     eax, [ecx+eax*4]
0x902B61: mov     ecx, [eax+1A4h]
0x902B67: mov     [esp+11A0h+var_118C], eax
0x902B6B: mov     dword ptr [ecx], offset aStstream; "StStream"
0x902B71: rdtsc
0x902B73: mov     [esp+11A0h+var_1178], eax
0x902B77: mov     edx, [esp+11A0h+var_1178]
0x902B7B: mov     eax, [esp+11A0h+var_118C]
0x902B7F: mov     [ecx+4], edx
0x902B82: add     ecx, 0Ch
0x902B85: mov     [eax+1A4h], ecx
0x902B8B: xor     eax, eax
0x902B8D: mov     ax, [ebx+86h]
0x902B94: test    ax, ax
0x902B97: lea     ecx, [eax-1]
0x902B9A: mov     [ebx+86h], cx
0x902BA1: jge     loc_902F80
0x902BA7: mov     eax, [esp+11A0h+var_1184]
0x902BAB: mov     word ptr [ebx+86h], 19h
0x902BB4: mov     edx, [eax+10h]
0x902BB7: mov     eax, [eax+14h]
0x902BBA: mov     ecx, [edi+8]
0x902BBD: mov     [esp+11A0h+var_111C], edx
0x902BC4: mov     edx, [ebp+arg_0]
0x902BC7: mov     [esp+11A0h+var_1118], eax
0x902BCE: mov     eax, [edx+8]
0x902BD1: push    ecx
0x902BD2: push    eax
0x902BD3: lea     ecx, [esp+11A8h+var_1080]
0x902BDA: mov     [esp+11A8h+var_1126], 1
0x902BE4: mov     [esp+11A8h+var_1124], 0
0x902BEF: mov     [esp+11A8h+var_1120], 0
0x902BFA: mov     [esp+11A8h+var_112C], offset off_A9BB94
0x902C02: call    sub_8B1FF0
0x902C07: mov     eax, [ebp+arg_0]
0x902C0A: mov     ecx, [eax]
0x902C0C: lea     edx, [esp+11A0h+var_112C]
0x902C10: mov     [esp+11A0h+var_1108], edx
0x902C17: mov     edx, [eax+8]
0x902C1A: mov     eax, [ebp+arg_8]
0x902C1D: mov     [esp+11A0h+var_110C], ecx
0x902C24: lea     ecx, [esp+11A0h+var_1080]
0x902C2B: mov     [esp+11A0h+var_1110], edx
0x902C32: mov     [esp+11A0h+var_1114], ecx
0x902C39: mov     ecx, [eax+8]
0x902C3C: lea     edx, [esp+11A0h+var_1090]
0x902C43: push    edx
0x902C44: lea     eax, [ebx+20h]
0x902C47: mov     [esp+11A4h+var_1104], ecx
0x902C4E: push    eax
0x902C4F: lea     ecx, [ebx+0Ch]
0x902C52: push    ecx
0x902C53: lea     edx, [esp+11ACh+var_1114]
0x902C5A: push    edx
0x902C5B: call    sub_93D4A0
0x902C60: add     esp, 10h
0x902C63: test    eax, eax
0x902C65: jz      loc_902F78
0x902C6B: mov     ecx, [ebx+8]
0x902C6E: mov     edx, [ebx+80h]
0x902C74: push    ecx
0x902C75: lea     eax, [ebx+30h]
0x902C78: push    edx
0x902C79: push    eax
0x902C7A: call    sub_934100
0x902C7F: mov     eax, [esp+11ACh+var_1040]
0x902C86: mov     ecx, [esp+11ACh+var_10]
0x902C8D: movaps  xmm0, [esp+11ACh+var_30]
0x902C95: mov     edx, [esp+11ACh+var_C]
0x902C9C: mov     dword ptr [ebx+30h], 0
0x902CA3: mov     byte ptr [ebx+84h], 1
0x902CAA: mov     [esi], eax
0x902CAC: mov     [esi+3034h], ecx
0x902CB2: movaps  xmmword ptr [esi+10h], xmm0
0x902CB6: movaps  xmm0, [esp+11ACh+var_20]
0x902CBE: movaps  xmmword ptr [esi+20h], xmm0
0x902CC2: mov     eax, [esi+3040h]
0x902CC8: add     esp, 0Ch
0x902CCB: test    eax, eax
0x902CCD: mov     [esi+3030h], edx
0x902CD3: jz      short loc_902CEB
0x902CD5: mov     ecx, 402h
0x902CDA: lea     esi, [esp+11A0h+var_103C]
0x902CE1: mov     edi, eax
0x902CE3: rep movsd
0x902CE5: mov     edi, [ebp+arg_4]
0x902CE8: mov     esi, [ebp+arg_C]
0x902CEB: mov     [esp+11A0h+var_112C], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x902CF3: fld     dword ptr [ebx+2Ch]
0x902CF6: mov     ecx, [ebp+arg_8]
0x902CF9: fcomp   dword ptr [ecx+8]
0x902CFC: fnstsw  ax
0x902CFE: test    ah, 41h
0x902D01: jnz     short loc_902D55
0x902D03: movaps  xmm1, [esp+11A0h+var_1170]
0x902D08: fld     dword ptr [ebx+2Ch]
0x902D0B: movaps  xmm2, xmmword ptr [ebx+20h]
0x902D0F: movaps  xmm0, xmm1
0x902D12: mulps   xmm0, xmm2
0x902D15: movaps  xmm2, xmm1
0x902D18: shufps  xmm2, xmm1, 0FFh
0x902D1C: movaps  xmm1, xmm0
0x902D1F: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x902D23: addss   xmm1, xmm2
0x902D27: movaps  xmm2, xmm0
0x902D2A: shufps  xmm2, xmm0, 55h ; 'U'
0x902D2E: lea     eax, [esp+11A0h+var_117C]
0x902D32: addss   xmm2, xmm0
0x902D36: addps   xmm2, xmm1
0x902D39: movss   dword ptr [eax], xmm2
0x902D3D: fsub    [esp+11A0h+var_117C]
0x902D41: fstp    dword ptr [ebx+2Ch]
0x902D44: fld     dword ptr [ebx+2Ch]
0x902D47: fcomp   dword ptr [ecx+8]
0x902D4A: fnstsw  ax
0x902D4C: test    ah, 41h
0x902D4F: jz      loc_902F58
0x902D55: mov     edx, ds:0BA9DE4h
0x902D5B: mov     ecx, large fs:2Ch
0x902D62: mov     eax, [ecx+edx*4]
0x902D65: mov     edx, [eax+1A4h]
0x902D6B: cmp     edx, [eax+1A8h]
0x902D71: jnb     short loc_902DA5
0x902D73: mov     eax, ds:0BA9DE4h
0x902D78: mov     eax, [ecx+eax*4]
0x902D7B: mov     ecx, [eax+1A4h]
0x902D81: mov     [esp+11A0h+var_118C], eax
0x902D85: mov     dword ptr [ecx], offset aStgsk; "StGsk"
0x902D8B: rdtsc
0x902D8D: mov     [esp+11A0h+var_1174], eax
0x902D91: mov     edx, [esp+11A0h+var_1174]
0x902D95: mov     eax, [esp+11A0h+var_118C]
0x902D99: mov     [ecx+4], edx
0x902D9C: add     ecx, 0Ch
0x902D9F: mov     [eax+1A4h], ecx
0x902DA5: mov     ecx, [edi+8]
0x902DA8: mov     edx, ds:0B2FFE4h
0x902DAE: mov     eax, [edi]
0x902DB0: mov     [esp+11A0h+var_114C], ecx
0x902DB4: mov     [esp+11A0h+var_1138], edx
0x902DB8: mov     [esp+11A0h+var_1148], edi
0x902DBC: mov     [esp+11A0h+var_113E], 1
0x902DC3: mov     [esp+11A0h+var_113C], 0
0x902DCB: mov     [esp+11A0h+var_1144], offset off_A9BB94
0x902DD3: mov     edx, [eax+10h]
0x902DD6: mov     ecx, [edx]
0x902DD8: fld     dword ptr [ecx+0Ch]
0x902DDB: mov     ecx, [edi+4]
0x902DDE: mov     [esp+11A0h+var_1134], edx
0x902DE2: mov     edx, [eax+14h]
0x902DE5: fstp    [esp+11A0h+var_1138]
0x902DE9: push    esi
0x902DEA: mov     [esp+11A4h+var_1130], edx
0x902DEE: mov     edx, [ebp+arg_8]
0x902DF1: lea     eax, [esp+11A4h+var_1144]
0x902DF5: mov     [esp+11A4h+var_1154], eax
0x902DF9: push    edx
0x902DFA: mov     [esp+11A8h+var_1150], ecx
0x902DFE: mov     ecx, [ebp+arg_0]
0x902E01: lea     eax, [esp+11A8h+var_1154]
0x902E05: push    eax
0x902E06: push    ecx
0x902E07: mov     ecx, ebx
0x902E09: call    sub_8FFC70
0x902E0E: fld     [esp+11A0h+var_10]
0x902E15: fld     dword ptr [esi+3034h]
0x902E1B: fucompp
0x902E1D: fnstsw  ax
0x902E1F: test    ah, 44h
0x902E22: jp      loc_902EA6
0x902E28: mov     al, [ebx+32h]
0x902E2B: test    al, al
0x902E2D: jz      loc_9030C8
0x902E33: movzx   ecx, byte ptr [ebx+34h]
0x902E37: movzx   edx, byte ptr [ecx+ebx+38h]
0x902E3C: movzx   ecx, byte ptr [ebx+32h]
0x902E40: lea     eax, [ebx+30h]
0x902E43: shr     edx, 3
0x902E46: add     edx, eax
0x902E48: movzx   ecx, word ptr [edx+ecx*8+4]
0x902E4D: and     ecx, 0FF00h
0x902E53: mov     [esp+11A0h+var_1188], ecx
0x902E57: movzx   ecx, byte ptr [ebx+34h]
0x902E5B: lea     edx, [ecx+1]
0x902E5E: mov     [esp+11A0h+var_118C], edx
0x902E62: movzx   edx, byte ptr [ebx+35h]
0x902E66: add     edx, ecx
0x902E68: mov     ecx, [esp+11A0h+var_118C]
0x902E6C: mov     [esp+11A0h+var_1180], edx
0x902E70: cmp     ecx, [esp+11A0h+var_1180]
0x902E74: jge     loc_9030C8
0x902E7A: movzx   ecx, byte ptr [ecx+ebx+38h]
0x902E7F: movzx   edx, byte ptr [eax+2]
0x902E83: shr     ecx, 3
0x902E86: add     ecx, eax
0x902E88: movzx   ecx, word ptr [ecx+edx*8+4]
0x902E8D: mov     edx, [esp+11A0h+var_1188]
0x902E91: and     ecx, 0FF00h
0x902E97: cmp     edx, ecx
0x902E99: jnz     short loc_902EA6
0x902E9B: mov     ecx, [esp+11A0h+var_118C]
0x902E9F: inc     ecx
0x902EA0: mov     [esp+11A0h+var_118C], ecx
0x902EA4: jmp     short loc_902E70
0x902EA6: mov     edx, [ebx+8]
0x902EA9: lea     eax, [ebx+30h]
0x902EAC: push    edx
0x902EAD: push    eax
0x902EAE: call    sub_939B60
0x902EB3: lea     eax, [ebx+30h]
0x902EB6: add     esp, 8
0x902EB9: test    eax, eax
0x902EBB: mov     byte ptr [ebx+84h], 0
0x902EC2: jz      short loc_902ED7
0x902EC4: lea     ecx, [eax+0Ch]
0x902EC7: mov     [eax], ecx
0x902EC9: mov     dword ptr [eax+4], 0
0x902ED0: mov     dword ptr [eax+8], 80000001h
0x902ED7: push    eax
0x902ED8: call    sub_934270
0x902EDD: mov     eax, [esp+11A4h+var_10]
0x902EE4: mov     edx, [esp+11A4h+var_1040]
0x902EEB: movaps  xmm0, [esp+11A4h+var_30]
0x902EF3: mov     ecx, [esp+11A4h+var_C]
0x902EFA: mov     word ptr [ebx+86h], 19h
0x902F03: mov     dword ptr [ebx+40h], 0
0x902F0A: mov     [esi+3034h], eax
0x902F10: mov     [esi], edx
0x902F12: movaps  xmmword ptr [esi+10h], xmm0
0x902F16: movaps  xmm0, [esp+11A4h+var_20]
0x902F1E: movaps  xmmword ptr [esi+20h], xmm0
0x902F22: mov     eax, [esi+3040h]
0x902F28: add     esp, 4
0x902F2B: test    eax, eax
0x902F2D: mov     [esi+3030h], ecx
0x902F33: jz      short loc_902F4B
0x902F35: mov     ecx, 402h
0x902F3A: lea     esi, [esp+11A0h+var_103C]
0x902F41: mov     edi, eax
0x902F43: rep movsd
0x902F45: mov     edi, [ebp+arg_4]
0x902F48: mov     esi, [ebp+arg_C]
0x902F4B: mov     [esp+11A0h+var_1144], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x902F53: jmp     loc_902B3C
0x902F58: mov     al, [ebx+32h]
0x902F5B: test    al, al
0x902F5D: jz      loc_9030C8
0x902F63: mov     edx, [ebx+8]
0x902F66: push    edx
0x902F67: add     ebx, 30h ; '0'
0x902F6A: push    ebx
0x902F6B: call    sub_939B60
0x902F70: add     esp, 8
0x902F73: jmp     loc_9030C8
0x902F78: fld     dword ptr [ebx+2Ch]
0x902F7B: fchs
0x902F7D: fstp    dword ptr [ebx+40h]
0x902F80: movaps  xmm1, [esp+11A0h+var_1170]
0x902F85: fld     dword ptr [ebx+40h]
0x902F88: mov     edx, [ebp+arg_8]
0x902F8B: movaps  xmm0, xmm1
0x902F8E: mulps   xmm0, xmm1
0x902F91: movaps  xmm2, xmm0
0x902F94: shufps  xmm2, xmm0, 55h ; 'U'
0x902F98: movaps  xmm3, xmm0
0x902F9B: addss   xmm2, xmm0
0x902F9F: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x902FA3: movaps  xmm0, xmm3
0x902FA6: addss   xmm0, xmm2
0x902FAA: movaps  [esp+11A0h+var_1170], xmm0
0x902FAF: sqrtss  xmm0, xmm0
0x902FB3: movss   dword ptr [esp+11A0h+var_1170], xmm0
0x902FB9: movaps  xmm0, [esp+11A0h+var_1170]
0x902FBE: lea     eax, [esp+11A0h+var_1188]
0x902FC2: movss   dword ptr [eax], xmm0
0x902FC6: fsub    [esp+11A0h+var_1188]
0x902FCA: mov     eax, [ebp+arg_0]
0x902FCD: mov     [esp+11A0h+var_10F8], edx
0x902FD4: fstp    dword ptr [ebx+40h]
0x902FD7: mov     ecx, [ebx+8]
0x902FDA: mov     edx, [eax+8]
0x902FDD: mov     [esp+11A0h+var_10F4], ecx
0x902FE4: mov     ecx, [edi+8]
0x902FE7: push    ecx
0x902FE8: push    edx
0x902FE9: lea     ecx, [esp+11A8h+var_10F0]
0x902FF0: mov     [esp+11A8h+var_1100], eax
0x902FF7: mov     [esp+11A8h+var_10FC], edi
0x902FFE: movaps  [esp+11A8h+var_10A0], xmm1
0x903006: call    sub_8B1FF0
0x90300B: mov     eax, [esp+11A0h+var_1184]
0x90300F: mov     edi, [eax+14h]
0x903012: mov     ecx, large fs:2Ch
0x903019: mov     edx, ds:0BA9DE4h
0x90301F: mov     eax, [ecx+edx*4]
0x903022: mov     [esp+11A0h+var_1180], eax
0x903026: mov     eax, [eax+19Ch]
0x90302C: test    eax, eax
0x90302E: jnz     short loc_903035
0x903030: mov     eax, ds:0BA7D9Ch
0x903035: mov     ecx, [eax+20h]
0x903038: lea     edx, ds:14h[edi*4]
0x90303F: and     edx, 0FFFFFFF0h
0x903042: mov     [esp+11A0h+var_1188], ecx
0x903046: add     ecx, edx
0x903048: cmp     ecx, [eax+2Ch]
0x90304B: ja      short loc_90305A
0x90304D: mov     [eax+20h], ecx
0x903050: mov     ecx, [esp+11A0h+var_1188]
0x903054: mov     [esp+11A0h+var_118C], ecx
0x903058: jmp     short loc_903070
0x90305A: mov     ecx, [eax]
0x90305C: mov     [esp+11A0h+var_1188], ecx
0x903060: mov     ecx, eax
0x903062: mov     eax, [esp+11A0h+var_1188]
0x903066: push    edx
0x903067: call    dword ptr [eax+0Ch]
0x90306A: mov     [esp+11A0h+var_118C], eax
0x90306E: mov     ecx, eax
0x903070: xor     eax, eax
0x903072: test    edi, edi
0x903074: jle     short loc_90307E
0x903076: mov     [ecx+eax*4], eax
0x903079: inc     eax
0x90307A: cmp     eax, edi
0x90307C: jl      short loc_903076
0x90307E: mov     eax, [esp+11A0h+var_1184]
0x903082: push    esi
0x903083: push    edi
0x903084: push    ecx
0x903085: mov     dword ptr [ecx+edi*4], 0FFFFFFFFh
0x90308C: push    eax
0x90308D: lea     ecx, [esp+11B0h+var_1100]
0x903094: push    ecx
0x903095: add     ebx, 30h ; '0'
0x903098: push    ebx
0x903099: call    sub_934DC0
0x90309E: mov     edx, [esp+11B8h+var_1180]
0x9030A2: mov     eax, [edx+19Ch]
0x9030A8: add     esp, 18h
0x9030AB: test    eax, eax
0x9030AD: jnz     short loc_9030B4
0x9030AF: mov     eax, ds:0BA7D9Ch
0x9030B4: mov     ecx, [esp+11A0h+var_118C]
0x9030B8: cmp     ecx, [eax+28h]
0x9030BB: mov     [eax+20h], ecx
0x9030BE: jnz     short loc_9030C8
0x9030C0: mov     edx, [eax]
0x9030C2: push    ecx
0x9030C3: mov     ecx, eax
0x9030C5: call    dword ptr [edx+10h]
0x9030C8: mov     ecx, large fs:2Ch
0x9030CF: mov     edx, ds:0BA9DE4h
0x9030D5: mov     eax, [ecx+edx*4]
0x9030D8: mov     esi, [eax+1A4h]
0x9030DE: cmp     esi, [eax+1A8h]
0x9030E4: jnb     short loc_90310A
0x9030E6: mov     esi, eax
0x9030E8: mov     ecx, [esi+1A4h]
0x9030EE: mov     dword ptr [ecx], offset aLt_0; "lt"
0x9030F4: rdtsc
0x9030F6: mov     [esp+11A0h+var_1188], eax
0x9030FA: mov     eax, [esp+11A0h+var_1188]
0x9030FE: mov     [ecx+4], eax
0x903101: add     ecx, 0Ch
0x903104: mov     [esi+1A4h], ecx
0x90310A: pop     edi
0x90310B: pop     esi
0x90310C: pop     ebx
0x90310D: mov     esp, ebp
0x90310F: pop     ebp
0x903110: retn    10h
