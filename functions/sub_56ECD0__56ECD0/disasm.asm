0x56ECD0: push    ebp
0x56ECD1: mov     ebp, esp
0x56ECD3: and     esp, 0FFFFFFF8h
0x56ECD6: push    0FFFFFFFFh
0x56ECD8: push    offset SEH_56ECD0
0x56ECDD: mov     eax, large fs:0
0x56ECE3: push    eax
0x56ECE4: sub     esp, 1BCh
0x56ECEA: push    ebx
0x56ECEB: push    ebp
0x56ECEC: push    esi
0x56ECED: push    edi
0x56ECEE: mov     eax, ds:0B30AACh
0x56ECF3: xor     eax, esp
0x56ECF5: push    eax
0x56ECF6: lea     eax, [esp+1DCh+var_C]
0x56ECFD: mov     large fs:0, eax
0x56ED03: mov     ebx, ecx
0x56ED05: mov     [esp+1DCh+var_184], ebx
0x56ED09: mov     eax, [ebx+2Ch]
0x56ED0C: mov     ebp, [eax+0B8h]
0x56ED12: mov     ecx, [ebp+0Ch]
0x56ED15: mov     ecx, [ecx+8]
0x56ED18: mov     [esp+1DCh+var_1AC], ecx
0x56ED1C: lea     esi, [eax+64h]
0x56ED1F: mov     ecx, 9
0x56ED24: lea     edi, [esp+1DCh+var_E8]
0x56ED2B: lea     edx, [esp+1DCh+var_34]
0x56ED32: rep movsd
0x56ED34: push    edx
0x56ED35: lea     ecx, [esp+1E0h+var_E8]
0x56ED3C: call    sub_7103C0
0x56ED41: lea     eax, [esp+1DCh+var_128]
0x56ED48: push    eax
0x56ED49: lea     esi, [ebx+40h]
0x56ED4C: push    esi
0x56ED4D: lea     ecx, [esp+1E4h+var_E8]
0x56ED54: push    1
0x56ED56: push    ecx
0x56ED57: call    sub_7107A0
0x56ED5C: fld     dword ptr [ebx+50h]
0x56ED5F: add     esp, 0Ch
0x56ED62: lea     ecx, [esp+1E0h+var_C4]
0x56ED69: fstp    [esp+1E0h+var_1E0]; float
0x56ED6C: call    NiMatrix33_InitRotationTransform
0x56ED71: mov     edx, [esi]
0x56ED73: mov     ecx, [esi+4]
0x56ED76: sub     esp, 0Ch
0x56ED79: mov     eax, esp
0x56ED7B: mov     [eax], edx
0x56ED7D: mov     edx, [esi+8]
0x56ED80: mov     [eax+4], ecx
0x56ED83: mov     [eax+8], edx
0x56ED86: lea     eax, [esp+1E8h+var_7C]
0x56ED8D: push    eax
0x56ED8E: call    sub_6F9290
0x56ED93: add     esp, 10h
0x56ED96: push    eax
0x56ED97: lea     ecx, [esp+1E0h+var_58]
0x56ED9E: push    ecx
0x56ED9F: lea     ecx, [esp+1E4h+var_C4]
0x56EDA6: call    NiMAtrix33_Multiply
0x56EDAB: mov     esi, eax
0x56EDAD: mov     eax, [ebx+2Ch]
0x56EDB0: mov     ecx, 9
0x56EDB5: lea     edi, [esp+1DCh+var_A0]
0x56EDBC: rep movsd
0x56EDBE: lea     esi, [eax+64h]
0x56EDC1: mov     ecx, 0Dh
0x56EDC6: lea     edi, [esp+1DCh+var_11C]
0x56EDCD: rep movsd
0x56EDCF: fld     [esp+1DCh+var_F8]
0x56EDD6: fsub    dword ptr [ebx+34h]
0x56EDD9: fstp    [esp+1DCh+var_F8]
0x56EDE0: fld     [esp+1DCh+var_F4]
0x56EDE7: fsub    dword ptr [ebx+38h]
0x56EDEA: fstp    [esp+1DCh+var_F4]
0x56EDF1: fld     [esp+1DCh+var_F0]
0x56EDF8: fsub    dword ptr [ebx+3Ch]
0x56EDFB: fstp    [esp+1DCh+var_F0]
0x56EE02: mov     ecx, [ebp+8]
0x56EE05: mov     ecx, [ecx+44h]
0x56EE08: test    ecx, ecx
0x56EE0A: jz      loc_56FB28
0x56EE10: cmp     dword ptr [ecx+44h], 0
0x56EE14: jz      loc_56FB28
0x56EE1A: mov     eax, [eax+0B4h]
0x56EE20: movzx   eax, word ptr [eax+8]
0x56EE24: mov     ecx, [ebp+0Ch]
0x56EE27: mov     edx, [esp+1DCh+var_1AC]
0x56EE2B: mov     ecx, [ecx+0Ch]
0x56EE2E: movzx   ebx, ax
0x56EE31: xor     eax, eax
0x56EE33: test    edx, edx
0x56EE35: mov     [esp+1DCh+var_16C], ebx
0x56EE39: mov     [esp+1DCh+var_1C0], eax
0x56EE3D: mov     [esp+1DCh+var_1C4], ecx
0x56EE41: jle     short loc_56EE7B
0x56EE43: add     ecx, 22h ; '"'
0x56EE46: mov     si, ax
0x56EE49: lea     esp, [esp+0]
0x56EE50: add     si, [ecx-4]
0x56EE54: cmp     word ptr [ecx], 0
0x56EE58: mov     word ptr [esp+1DCh+var_1C0], si
0x56EE5D: setnbe  al
0x56EE60: test    al, al
0x56EE62: mov     eax, [esp+1DCh+var_1C0]
0x56EE66: jz      short loc_56EE6D
0x56EE68: add     eax, 2
0x56EE6B: jmp     short loc_56EE70
0x56EE6D: lea     eax, [eax+eax*2]
0x56EE70: add     ecx, 2Ch ; ','
0x56EE73: sub     edx, 1
0x56EE76: movzx   eax, ax
0x56EE79: jnz     short loc_56EE50
0x56EE7B: movzx   eax, ax
0x56EE7E: xor     ecx, ecx
0x56EE80: lea     eax, [eax+eax*2]
0x56EE83: mov     edx, 2
0x56EE88: mul     edx
0x56EE8A: seto    cl
0x56EE8D: neg     ecx
0x56EE8F: or      ecx, eax
0x56EE91: push    ecx; Size
0x56EE92: call    FormHeapAlloc
0x56EE97: mov     [esp+1E0h+Src], eax
0x56EE9B: xor     ecx, ecx
0x56EE9D: mov     eax, ebx
0x56EE9F: mov     edx, 4
0x56EEA4: mul     edx
0x56EEA6: seto    cl
0x56EEA9: neg     ecx
0x56EEAB: or      ecx, eax
0x56EEAD: push    ecx; Size
0x56EEAE: call    FormHeapAlloc
0x56EEB3: lea     ecx, ds:0[ebx*4]
0x56EEBA: push    ecx
0x56EEBB: push    0FFFFFFFFh
0x56EEBD: push    eax
0x56EEBE: mov     [esp+1F0h+var_18C], eax
0x56EEC2: call    __memset
0x56EEC7: xor     ecx, ecx
0x56EEC9: mov     eax, ebx
0x56EECB: mov     edx, 0Ch
0x56EED0: mul     edx
0x56EED2: seto    cl
0x56EED5: neg     ecx
0x56EED7: or      ecx, eax
0x56EED9: push    ecx; Size
0x56EEDA: call    FormHeapAlloc
0x56EEDF: mov     [esp+1F4h+var_17C], eax
0x56EEE3: xor     ecx, ecx
0x56EEE5: mov     eax, ebx
0x56EEE7: mov     edx, 0Ch
0x56EEEC: mul     edx
0x56EEEE: seto    cl
0x56EEF1: neg     ecx
0x56EEF3: or      ecx, eax
0x56EEF5: push    ecx; Size
0x56EEF6: call    FormHeapAlloc
0x56EEFB: mov     [esp+1F8h+var_168], eax
0x56EF02: xor     ecx, ecx
0x56EF04: mov     eax, ebx
0x56EF06: mov     edx, 0Ch
0x56EF0B: mul     edx
0x56EF0D: seto    cl
0x56EF10: neg     ecx
0x56EF12: or      ecx, eax
0x56EF14: push    ecx; Size
0x56EF15: call    FormHeapAlloc
0x56EF1A: mov     esi, eax
0x56EF1C: mov     eax, [esp+1FCh+var_184]
0x56EF20: mov     eax, [eax+2Ch]
0x56EF23: mov     eax, [eax+0B4h]
0x56EF29: movzx   ecx, word ptr [eax+8]
0x56EF2D: mov     edx, [eax+20h]
0x56EF30: mov     eax, [eax+1Ch]
0x56EF33: add     esp, 20h
0x56EF36: push    0Ch
0x56EF38: push    0
0x56EF3A: push    0
0x56EF3C: push    esi
0x56EF3D: movzx   ecx, cx
0x56EF40: mov     [esp+1ECh+var_150], esi
0x56EF47: mov     esi, [esp+1ECh+var_168]
0x56EF4E: push    esi
0x56EF4F: push    ecx
0x56EF50: push    edx
0x56EF51: push    eax
0x56EF52: mov     ecx, ebp
0x56EF54: call    sub_72AF20
0x56EF59: mov     ebp, [ebp+8]
0x56EF5C: mov     edx, [ebp+44h]
0x56EF5F: mov     ebp, [ebp+40h]
0x56EF62: mov     [esp+1DCh+var_180], edx
0x56EF66: mov     [esp+1DCh+var_188], ebp
0x56EF6A: xor     ecx, ecx
0x56EF6C: mov     eax, ebp
0x56EF6E: mov     edx, 4Ch ; 'L'
0x56EF73: mul     edx
0x56EF75: seto    cl
0x56EF78: neg     ecx
0x56EF7A: or      ecx, eax
0x56EF7C: push    ecx; Size
0x56EF7D: call    FormHeapAlloc
0x56EF82: mov     esi, eax
0x56EF84: add     esp, 4
0x56EF87: mov     dword ptr [esp+1DCh+var_160], esi
0x56EF8B: xor     eax, eax
0x56EF8D: cmp     esi, eax
0x56EF8F: mov     [esp+1DCh+var_4], eax
0x56EF96: jz      short loc_56EFB5
0x56EF98: add     ebp, 0FFFFFFFFh
0x56EF9B: mov     edi, esi
0x56EF9D: js      short loc_56EFAF
0x56EF9F: nop
0x56EFA0: mov     ecx, edi
0x56EFA2: call    sub_72EF90
0x56EFA7: add     edi, 4Ch ; 'L'
0x56EFAA: sub     ebp, 1
0x56EFAD: jns     short loc_56EFA0
0x56EFAF: mov     [esp+1DCh+var_190], esi
0x56EFB3: jmp     short loc_56EFB9
0x56EFB5: mov     [esp+1DCh+var_190], eax
0x56EFB9: xor     edx, edx
0x56EFBB: cmp     [esp+1DCh+var_188], edx
0x56EFBF: mov     [esp+1DCh+var_4], 0FFFFFFFFh
0x56EFCA: mov     [esp+1DCh+var_1B4], edx
0x56EFCE: jle     loc_56F0BD
0x56EFD4: jmp     short loc_56EFDA
0x56EFD6: mov     edx, [esp+1DCh+var_1B4]
0x56EFDA: mov     ecx, [esp+1DCh+var_190]
0x56EFDE: mov     eax, edx
0x56EFE0: imul    eax, 4Ch ; 'L'
0x56EFE3: lea     edi, [eax+ecx]
0x56EFE6: mov     ecx, [esp+1DCh+var_180]
0x56EFEA: lea     esi, [eax+ecx]
0x56EFED: mov     ecx, 0Dh
0x56EFF2: mov     [esp+1DCh+var_1A8], edi
0x56EFF6: rep movsd
0x56EFF8: xor     ecx, ecx
0x56EFFA: test    edx, edx
0x56EFFC: mov     edx, 8
0x56F001: jnz     short loc_56F051
0x56F003: lea     esi, ds:0[ebx*4]
0x56F00A: mov     eax, esi
0x56F00C: mul     edx
0x56F00E: seto    cl
0x56F011: neg     ecx
0x56F013: or      ecx, eax
0x56F015: push    ecx; Size
0x56F016: call    FormHeapAlloc
0x56F01B: mov     ebp, eax
0x56F01D: add     esp, 4
0x56F020: mov     dword ptr [esp+1DCh+var_160], ebp
0x56F024: test    ebp, ebp
0x56F026: mov     [esp+1DCh+var_4], 1
0x56F031: jz      short loc_56F094
0x56F033: lea     edi, ds:0FFFFFFFFh[ebx*4]
0x56F03A: test    edi, edi
0x56F03C: mov     esi, ebp
0x56F03E: jl      short loc_56F096
0x56F040: mov     ecx, esi
0x56F042: call    sub_72EFA0
0x56F047: add     esi, 8
0x56F04A: sub     edi, 1
0x56F04D: jns     short loc_56F040
0x56F04F: jmp     short loc_56F096
0x56F051: mov     eax, ebx
0x56F053: mul     edx
0x56F055: seto    cl
0x56F058: neg     ecx
0x56F05A: or      ecx, eax
0x56F05C: push    ecx; Size
0x56F05D: call    FormHeapAlloc
0x56F062: mov     ebp, eax
0x56F064: add     esp, 4
0x56F067: mov     dword ptr [esp+1DCh+var_160], ebp
0x56F06B: test    ebp, ebp
0x56F06D: mov     [esp+1DCh+var_4], 2
0x56F078: jz      short loc_56F094
0x56F07A: lea     edi, [ebx-1]
0x56F07D: test    edi, edi
0x56F07F: mov     esi, ebp
0x56F081: jl      short loc_56F096
0x56F083: mov     ecx, esi
0x56F085: call    sub_72EFA0
0x56F08A: add     esi, 8
0x56F08D: sub     edi, 1
0x56F090: jns     short loc_56F083
0x56F092: jmp     short loc_56F096
0x56F094: xor     ebp, ebp
0x56F096: mov     eax, [esp+1DCh+var_1A8]
0x56F09A: mov     [eax+44h], ebp
0x56F09D: mov     eax, [esp+1DCh+var_1B4]
0x56F0A1: add     eax, 1
0x56F0A4: cmp     eax, [esp+1DCh+var_188]
0x56F0A8: mov     [esp+1DCh+var_4], 0FFFFFFFFh
0x56F0B3: mov     [esp+1DCh+var_1B4], eax
0x56F0B7: jl      loc_56EFD6
0x56F0BD: test    ebx, ebx
0x56F0BF: jle     loc_56F293
0x56F0C5: fld     [esp+1DCh+var_124]
0x56F0CC: mov     ebp, [esp+1DCh+var_17C]
0x56F0D0: mov     esi, [esp+1DCh+var_150]
0x56F0D7: fstp    [esp+1DCh+var_160]
0x56F0DB: fld     [esp+1DCh+var_128]
0x56F0E2: mov     edi, [esp+1DCh+var_168]
0x56F0E6: fstp    [esp+1DCh+var_158]
0x56F0ED: add     ebp, 8
0x56F0F0: fld     [esp+1DCh+var_120]
0x56F0F7: sub     edi, esi
0x56F0F9: fstp    [esp+1DCh+var_178]
0x56F0FD: mov     [esp+1DCh+var_1B0], ebx
0x56F101: mov     ebx, [edi+esi]
0x56F104: mov     ecx, ds:0B3F9ACh
0x56F10A: mov     edx, ds:0B3F9B0h
0x56F110: mov     eax, ds:0B3F9A8h
0x56F115: mov     [esp+1DCh+var_134], ebx
0x56F11C: mov     ebx, [edi+esi+4]
0x56F120: mov     [esp+1DCh+var_130], ebx
0x56F127: mov     ebx, [edi+esi+8]
0x56F12B: mov     dword ptr [esp+1DCh+var_14C+4], ecx
0x56F132: mov     dword ptr [esp+1DCh+var_140+4], ecx
0x56F139: mov     [esp+1DCh+var_12C], ebx
0x56F140: mov     ebx, [esi]
0x56F142: lea     ecx, [esp+1DCh+var_140]
0x56F149: push    ecx
0x56F14A: mov     [esp+1E0h+var_144], edx
0x56F151: mov     [esp+1E0h+var_138], edx
0x56F158: lea     edx, [esp+1E0h+var_134]
0x56F15F: push    edx
0x56F160: mov     dword ptr [esp+1E4h+var_14C], eax
0x56F167: mov     [esp+1E4h+var_1A4], ebx
0x56F16B: mov     ebx, [esi+4]
0x56F16E: mov     dword ptr [esp+1E4h+var_140], eax
0x56F175: push    1
0x56F177: lea     eax, [esp+1E8h+var_F8]
0x56F17E: push    eax
0x56F17F: lea     ecx, [esp+1ECh+var_11C]
0x56F186: mov     [esp+1ECh+var_1A0], ebx
0x56F18A: mov     ebx, [esi+8]
0x56F18D: push    ecx
0x56F18E: mov     [esp+1F0h+var_19C], ebx
0x56F192: call    sub_710580
0x56F197: lea     edx, [esp+1F0h+var_14C]
0x56F19E: push    edx
0x56F19F: lea     eax, [esp+1F4h+var_140]
0x56F1A6: push    eax
0x56F1A7: push    1
0x56F1A9: lea     ecx, [esp+1FCh+var_A0]
0x56F1B0: push    offset Vector3_InitValue?
0x56F1B5: push    ecx
0x56F1B6: call    sub_710580
0x56F1BB: fld     dword ptr [esp+204h+var_14C]
0x56F1C2: mov     eax, [esp+204h+var_184]
0x56F1C9: fdiv    dword ptr [eax+4Ch]
0x56F1CC: add     esp, 28h
0x56F1CF: fld     qword ptr ds:0A2FAA0h
0x56F1D5: fadd    st(1), st
0x56F1D7: fxch    st(1)
0x56F1D9: fstp    dword ptr [ebp-8]
0x56F1DC: fld     dword ptr [esp+1DCh+var_14C+4]
0x56F1E3: fdiv    dword ptr [eax+4Ch]
0x56F1E6: faddp   st(1), st
0x56F1E8: fstp    dword ptr [ebp-4]
0x56F1EB: fld     [esp+1DCh+var_1A0]
0x56F1EF: fmul    [esp+1DCh+var_160]
0x56F1F3: fld     [esp+1DCh+var_1A4]
0x56F1F7: fmul    [esp+1DCh+var_158]
0x56F1FE: faddp   st(1), st
0x56F200: fld     [esp+1DCh+var_19C]
0x56F204: fmul    [esp+1DCh+var_178]
0x56F208: faddp   st(1), st
0x56F20A: fstp    [esp+1DCh+Dst]
0x56F20E: fld     [esp+1DCh+Dst]
0x56F212: fldz
0x56F214: fcom    st(1)
0x56F216: fnstsw  ax
0x56F218: test    ah, 41h
0x56F21B: jnz     short loc_56F221
0x56F21D: fstp    st(1)
0x56F21F: jmp     short loc_56F223
0x56F221: fstp    st
0x56F223: fld1
0x56F225: mov     eax, 0Ah
0x56F22A: fld     st
0x56F22C: fsubrp  st(2), st
0x56F22E: fxch    st(1)
0x56F230: fstp    [esp+1DCh+var_1A8]
0x56F234: fld1
0x56F236: fstp    [esp+1DCh+var_1B4]
0x56F23A: test    al, 1
0x56F23C: fld     [esp+1DCh+var_1A8]
0x56F240: jz      short loc_56F24C
0x56F242: fld     [esp+1DCh+var_1B4]
0x56F246: fmul    st, st(1)
0x56F248: fstp    [esp+1DCh+var_1B4]
0x56F24C: shr     eax, 1
0x56F24E: jz      short loc_56F258
0x56F250: fmul    st, st
0x56F252: fstp    [esp+1DCh+var_1A8]
0x56F256: jmp     short loc_56F23A
0x56F258: fstp    st
0x56F25A: add     esi, 0Ch
0x56F25D: fld     [esp+1DCh+var_1B4]
0x56F261: add     ebp, 0Ch
0x56F264: sub     [esp+1DCh+var_1B0], 1
0x56F269: fstp    [esp+1DCh+var_198]
0x56F26D: fld     [esp+1DCh+var_144]
0x56F274: fabs
0x56F276: fstp    [esp+1DCh+Dst]
0x56F27A: fld     [esp+1DCh+Dst]
0x56F27E: fmul    qword ptr ds:0A4C2D0h
0x56F284: fsubp   st(1), st
0x56F286: fmul    [esp+1DCh+var_198]
0x56F28A: fstp    dword ptr [ebp-0Ch]
0x56F28D: jnz     loc_56F101
0x56F293: mov     eax, [esp+1DCh+var_1AC]
0x56F297: xor     edi, edi
0x56F299: cmp     eax, edi
0x56F29B: mov     [esp+1DCh+var_1A8], edi
0x56F29F: mov     dword ptr [esp+1DCh+var_178], edi
0x56F2A3: jle     loc_56FAB8
0x56F2A9: mov     ebx, [esp+1DCh+var_1C4]
0x56F2AD: mov     ebp, [esp+1DCh+Src]
0x56F2B1: add     ebx, 14h
0x56F2B4: mov     [esp+1DCh+var_198], eax
0x56F2B8: jmp     short loc_56F2C0
0x56F2BA: align 10h
0x56F2C0: movzx   edx, word ptr [ebx+0Ah]
0x56F2C4: mov     eax, [ebx]
0x56F2C6: cmp     word ptr [ebx+0Eh], 0
0x56F2CB: mov     [esp+1DCh+var_1A8], eax
0x56F2CF: movzx   eax, dx
0x56F2D2: setnbe  byte ptr [esp+1DCh+var_1C4]
0x56F2D7: test    eax, eax
0x56F2D9: mov     [esp+1DCh+var_1C0], edx
0x56F2DD: mov     [esp+1DCh+var_1B5], 0
0x56F2E2: mov     [esp+1DCh+var_1B4], 0
0x56F2EA: jle     loc_56F4FB
0x56F2F0: mov     eax, [esp+1DCh+var_1A8]
0x56F2F4: add     eax, 4
0x56F2F7: mov     [esp+1DCh+var_1BC], eax
0x56F2FB: mov     [esp+1DCh+var_1B0], eax
0x56F2FF: mov     [esp+1DCh+var_1AC], eax
0x56F303: cmp     byte ptr [esp+1DCh+var_1C4], 0
0x56F308: mov     eax, [esp+1DCh+var_1BC]
0x56F30C: jnz     short loc_56F312
0x56F30E: mov     eax, [esp+1DCh+var_1B0]
0x56F312: movzx   edx, word ptr [eax-2]
0x56F316: movzx   ecx, word ptr [eax-4]
0x56F31A: movzx   esi, word ptr [eax]
0x56F31D: mov     eax, [ebx-8]
0x56F320: movzx   ecx, cx
0x56F323: movzx   ecx, word ptr [eax+ecx*2]
0x56F327: movzx   edx, dx
0x56F32A: movzx   edx, word ptr [eax+edx*2]
0x56F32E: cmp     cx, dx
0x56F331: movzx   esi, si
0x56F334: movzx   eax, word ptr [eax+esi*2]
0x56F338: jz      loc_56F4BE
0x56F33E: cmp     cx, ax
0x56F341: jz      loc_56F4BE
0x56F347: cmp     dx, ax
0x56F34A: jz      loc_56F4BE
0x56F350: mov     esi, [ebx-8]
0x56F353: mov     eax, [esp+1DCh+var_17C]
0x56F357: mov     ecx, [esp+1DCh+var_1A8]
0x56F35B: mov     edx, [esp+1DCh+var_1C4]
0x56F35F: push    esi
0x56F360: push    eax
0x56F361: mov     eax, [esp+1E4h+var_1B4]
0x56F365: push    ecx
0x56F366: mov     ecx, [esp+1E8h+var_184]
0x56F36A: push    edx
0x56F36B: push    0
0x56F36D: push    eax
0x56F36E: call    sub_56CB70
0x56F373: test    al, al
0x56F375: jz      loc_56F4A9
0x56F37B: cmp     byte ptr [esp+1DCh+var_1C4], 0
0x56F380: jz      short loc_56F38C
0x56F382: mov     ecx, [esp+1DCh+var_1BC]
0x56F386: movzx   eax, word ptr [ecx-4]
0x56F38A: jmp     short loc_56F394
0x56F38C: mov     edx, [esp+1DCh+var_1AC]
0x56F390: movzx   eax, word ptr [edx-4]
0x56F394: movzx   eax, ax
0x56F397: movzx   eax, word ptr [esi+eax*2]
0x56F39B: mov     esi, [esp+1DCh+var_18C]
0x56F39F: movzx   ecx, ax
0x56F3A2: cmp     dword ptr [esi+ecx*4], 0FFFFFFFFh
0x56F3A6: lea     eax, [esi+ecx*4]
0x56F3A9: jnz     short loc_56F3C8
0x56F3AB: mov     ecx, dword ptr [esp+1DCh+var_178]
0x56F3AF: movzx   edx, cx
0x56F3B2: mov     [eax], edx
0x56F3B4: movzx   eax, di
0x56F3B7: mov     [ebp+eax*2+0], cx
0x56F3BC: add     edi, 1
0x56F3BF: add     ecx, 1
0x56F3C2: mov     dword ptr [esp+1DCh+var_178], ecx
0x56F3C6: jmp     short loc_56F3DA
0x56F3C8: mov     dx, [eax]
0x56F3CB: movzx   ecx, di
0x56F3CE: mov     [ebp+ecx*2+0], dx
0x56F3D3: mov     ecx, dword ptr [esp+1DCh+var_178]
0x56F3D7: add     edi, 1
0x56F3DA: cmp     byte ptr [esp+1DCh+var_1C4], 0
0x56F3DF: jz      short loc_56F3EB
0x56F3E1: mov     eax, [esp+1DCh+var_1BC]
0x56F3E5: movzx   eax, word ptr [eax-2]
0x56F3E9: jmp     short loc_56F3F3
0x56F3EB: mov     edx, [esp+1DCh+var_1AC]
0x56F3EF: movzx   eax, word ptr [edx-2]
0x56F3F3: mov     edx, [ebx-8]
0x56F3F6: movzx   eax, ax
0x56F3F9: movzx   eax, word ptr [edx+eax*2]
0x56F3FD: movzx   eax, ax
0x56F400: cmp     dword ptr [esi+eax*4], 0FFFFFFFFh
0x56F404: lea     eax, [esi+eax*4]
0x56F407: jnz     short loc_56F422
0x56F409: movzx   edx, cx
0x56F40C: mov     [eax], edx
0x56F40E: movzx   eax, di
0x56F411: mov     [ebp+eax*2+0], cx
0x56F416: add     edi, 1
0x56F419: add     ecx, 1
0x56F41C: mov     dword ptr [esp+1DCh+var_178], ecx
0x56F420: jmp     short loc_56F430
0x56F422: mov     ax, [eax]
0x56F425: movzx   edx, di
0x56F428: mov     [ebp+edx*2+0], ax
0x56F42D: add     edi, 1
0x56F430: cmp     byte ptr [esp+1DCh+var_1C4], 0
0x56F435: jz      short loc_56F440
0x56F437: mov     edx, [esp+1DCh+var_1BC]
0x56F43B: movzx   eax, word ptr [edx]
0x56F43E: jmp     short loc_56F447
0x56F440: mov     eax, [esp+1DCh+var_1AC]
0x56F444: movzx   eax, word ptr [eax]
0x56F447: movzx   edx, ax
0x56F44A: mov     eax, [ebx-8]
0x56F44D: movzx   eax, word ptr [eax+edx*2]
0x56F451: movzx   edx, ax
0x56F454: cmp     dword ptr [esi+edx*4], 0FFFFFFFFh
0x56F458: lea     eax, [esi+edx*4]
0x56F45B: jnz     short loc_56F476
0x56F45D: movzx   edx, cx
0x56F460: mov     [eax], edx
0x56F462: movzx   eax, di
0x56F465: mov     [ebp+eax*2+0], cx
0x56F46A: add     edi, 1
0x56F46D: add     ecx, 1
0x56F470: mov     dword ptr [esp+1DCh+var_178], ecx
0x56F474: jmp     short loc_56F484
0x56F476: mov     dx, [eax]
0x56F479: movzx   ecx, di
0x56F47C: mov     [ebp+ecx*2+0], dx
0x56F481: add     edi, 1
0x56F484: cmp     byte ptr [esp+1DCh+var_1C4], 0
0x56F489: jz      short loc_56F4D1
0x56F48B: cmp     [esp+1DCh+var_1B5], 0
0x56F490: jz      short loc_56F4A9
0x56F492: movzx   eax, di
0x56F495: movzx   ecx, word ptr [ebp+eax*2-6]
0x56F49A: movzx   edx, word ptr [ebp+eax*2-2]
0x56F49F: mov     [ebp+eax*2-6], dx
0x56F4A4: mov     [ebp+eax*2-2], cx
0x56F4A9: cmp     byte ptr [esp+1DCh+var_1C4], 0
0x56F4AE: jz      short loc_56F4D1
0x56F4B0: cmp     [esp+1DCh+var_1B5], 0
0x56F4B5: setz    al
0x56F4B8: mov     [esp+1DCh+var_1B5], al
0x56F4BC: jmp     short loc_56F4D1
0x56F4BE: cmp     byte ptr [esp+1DCh+var_1C4], 0
0x56F4C3: jz      short loc_56F4D1
0x56F4C5: cmp     [esp+1DCh+var_1B5], 0
0x56F4CA: setz    cl
0x56F4CD: mov     [esp+1DCh+var_1B5], cl
0x56F4D1: mov     eax, [esp+1DCh+var_1B4]
0x56F4D5: add     [esp+1DCh+var_1BC], 2
0x56F4DA: mov     ecx, 6
0x56F4DF: add     [esp+1DCh+var_1B0], ecx
0x56F4E3: add     [esp+1DCh+var_1AC], ecx
0x56F4E7: movzx   ecx, word ptr [esp+1DCh+var_1C0]
0x56F4EC: add     eax, 1
0x56F4EF: cmp     eax, ecx
0x56F4F1: mov     [esp+1DCh+var_1B4], eax
0x56F4F5: jl      loc_56F303
0x56F4FB: add     ebx, 2Ch ; ','
0x56F4FE: sub     [esp+1DCh+var_198], 1
0x56F503: jnz     loc_56F2C0
0x56F509: cmp     word ptr [esp+1DCh+var_178], 0
0x56F50F: mov     [esp+1DCh+var_1A8], edi
0x56F513: jbe     loc_56FAB8
0x56F519: movzx   esi, di
0x56F51C: xor     ecx, ecx
0x56F51E: mov     eax, esi
0x56F520: mov     edx, 2
0x56F525: mul     edx
0x56F527: seto    cl
0x56F52A: neg     ecx
0x56F52C: or      ecx, eax
0x56F52E: push    ecx; Size
0x56F52F: call    FormHeapAlloc
0x56F534: mov     edx, [esp+1E0h+Src]
0x56F538: lea     ecx, [esi+esi]
0x56F53B: push    ecx; Size
0x56F53C: push    edx; Src
0x56F53D: push    eax; Dst
0x56F53E: mov     dword ptr [esp+1ECh+var_160], eax
0x56F545: call    _memcpy
0x56F54A: mov     eax, [esp+1ECh+var_184]
0x56F54E: mov     eax, [eax+2Ch]
0x56F551: mov     ecx, [eax+0B4h]
0x56F557: mov     eax, [eax+0B4h]
0x56F55D: mov     ecx, [ecx+1Ch]
0x56F560: mov     edx, [eax+20h]
0x56F563: movzx   esi, word ptr [esp+1ECh+var_178]
0x56F568: mov     [esp+1ECh+Dst], ecx
0x56F56C: mov     [esp+1ECh+var_1B0], edx
0x56F570: xor     ecx, ecx
0x56F572: mov     eax, esi
0x56F574: mov     edx, 0Ch
0x56F579: mul     edx
0x56F57B: seto    cl
0x56F57E: neg     ecx
0x56F580: or      ecx, eax
0x56F582: push    ecx; Size
0x56F583: call    FormHeapAlloc
0x56F588: mov     ebx, eax
0x56F58A: xor     ecx, ecx
0x56F58C: mov     eax, esi
0x56F58E: mov     edx, 0Ch
0x56F593: mul     edx
0x56F595: seto    cl
0x56F598: mov     [esp+1F0h+var_1B4], ebx
0x56F59C: neg     ecx
0x56F59E: or      ecx, eax
0x56F5A0: push    ecx; Size
0x56F5A1: call    FormHeapAlloc
0x56F5A6: fld     qword ptr ds:0A68610h
0x56F5AC: add     esp, 18h
0x56F5AF: xor     ebp, ebp
0x56F5B1: cmp     [esp+1DCh+var_16C], 4
0x56F5B6: mov     [esp+1DCh+var_1AC], eax
0x56F5BA: jl      loc_56F88C
0x56F5C0: mov     edi, [esp+1DCh+Dst]
0x56F5C4: mov     esi, [esp+1DCh+var_18C]
0x56F5C8: mov     edx, [esp+1DCh+var_17C]
0x56F5CC: mov     eax, [esp+1DCh+var_1B0]
0x56F5D0: lea     ecx, [edi+1Ch]
0x56F5D3: sub     edi, [esp+1DCh+var_1B0]
0x56F5D7: add     esi, 8
0x56F5DA: mov     dword ptr [esp+1DCh+var_158], edi
0x56F5E1: mov     edi, [esp+1DCh+var_16C]
0x56F5E5: add     edi, 0FFFFFFFCh
0x56F5E8: shr     edi, 2
0x56F5EB: add     edx, 18h
0x56F5EE: add     eax, 14h
0x56F5F1: add     edi, 1
0x56F5F4: mov     [esp+1DCh+var_198], edi
0x56F5F8: lea     ebp, ds:0[edi*4]
0x56F5FF: mov     edi, [esi-8]
0x56F602: cmp     edi, 0FFFFFFFFh
0x56F605: jz      loc_56F69B
0x56F60B: fld     dword ptr [eax-14h]
0x56F60E: lea     edi, [edi+edi*2]
0x56F611: fmul    st, st(1)
0x56F613: lea     edi, [ebx+edi*4]
0x56F616: fstp    [esp+1DCh+var_1BC]
0x56F61A: fld     dword ptr [eax-10h]
0x56F61D: fmul    st, st(1)
0x56F61F: fstp    [esp+1DCh+var_1C0]
0x56F623: fld     dword ptr [eax-0Ch]
0x56F626: fmul    st, st(1)
0x56F628: fstp    [esp+1DCh+var_1C4]
0x56F62C: fld     dword ptr [ecx-1Ch]
0x56F62F: fadd    [esp+1DCh+var_1BC]
0x56F633: fstp    [esp+1DCh+var_1BC]
0x56F637: fld     dword ptr [ecx-18h]
0x56F63A: fadd    [esp+1DCh+var_1C0]
0x56F63E: fstp    [esp+1DCh+var_1C0]
0x56F642: fld     dword ptr [ecx-14h]
0x56F645: fadd    [esp+1DCh+var_1C4]
0x56F649: fstp    [esp+1DCh+var_1C4]
0x56F64D: fld     [esp+1DCh+var_1BC]
0x56F651: fstp    [esp+1DCh+var_1A4]
0x56F655: mov     ebx, [esp+1DCh+var_1A4]
0x56F659: fld     [esp+1DCh+var_1C0]
0x56F65D: mov     [edi], ebx
0x56F65F: fstp    [esp+1DCh+var_1A0]
0x56F663: mov     ebx, [esp+1DCh+var_1A0]
0x56F667: fld     [esp+1DCh+var_1C4]
0x56F66B: mov     [edi+4], ebx
0x56F66E: fstp    [esp+1DCh+var_19C]
0x56F672: mov     ebx, [esp+1DCh+var_19C]
0x56F676: mov     [edi+8], ebx
0x56F679: mov     edi, [esi-8]
0x56F67C: mov     ebx, [esp+1DCh+var_1AC]
0x56F680: lea     edi, [edi+edi*2]
0x56F683: lea     edi, [ebx+edi*4]
0x56F686: mov     ebx, [edx-18h]
0x56F689: mov     [edi], ebx
0x56F68B: mov     ebx, [edx-14h]
0x56F68E: mov     [edi+4], ebx
0x56F691: mov     ebx, [edx-10h]
0x56F694: mov     [edi+8], ebx
0x56F697: mov     ebx, [esp+1DCh+var_1B4]
0x56F69B: mov     edi, [esi-4]
0x56F69E: cmp     edi, 0FFFFFFFFh
0x56F6A1: jz      loc_56F741
0x56F6A7: fld     dword ptr [eax-8]
0x56F6AA: mov     ebx, dword ptr [esp+1DCh+var_158]
0x56F6B1: fmul    st, st(1)
0x56F6B3: lea     edi, [edi+edi*2]
0x56F6B6: fstp    [esp+1DCh+var_1BC]
0x56F6BA: fld     dword ptr [eax-4]
0x56F6BD: fmul    st, st(1)
0x56F6BF: fstp    [esp+1DCh+var_1C0]
0x56F6C3: fld     dword ptr [eax]
0x56F6C5: fmul    st, st(1)
0x56F6C7: fstp    [esp+1DCh+var_1C4]
0x56F6CB: fld     dword ptr [ecx-10h]
0x56F6CE: fadd    [esp+1DCh+var_1BC]
0x56F6D2: fstp    [esp+1DCh+var_1BC]
0x56F6D6: fld     dword ptr [ecx-0Ch]
0x56F6D9: fadd    [esp+1DCh+var_1C0]
0x56F6DD: fstp    [esp+1DCh+var_1C0]
0x56F6E1: fld     dword ptr [ebx+eax]
0x56F6E4: mov     ebx, [esp+1DCh+var_1B4]
0x56F6E8: fadd    [esp+1DCh+var_1C4]
0x56F6EC: lea     edi, [ebx+edi*4]
0x56F6EF: fstp    [esp+1DCh+var_1C4]
0x56F6F3: fld     [esp+1DCh+var_1BC]
0x56F6F7: fstp    [esp+1DCh+var_1A4]
0x56F6FB: mov     ebx, [esp+1DCh+var_1A4]
0x56F6FF: fld     [esp+1DCh+var_1C0]
0x56F703: mov     [edi], ebx
0x56F705: fstp    [esp+1DCh+var_1A0]
0x56F709: mov     ebx, [esp+1DCh+var_1A0]
0x56F70D: fld     [esp+1DCh+var_1C4]
0x56F711: mov     [edi+4], ebx
0x56F714: fstp    [esp+1DCh+var_19C]
0x56F718: mov     ebx, [esp+1DCh+var_19C]
0x56F71C: mov     [edi+8], ebx
0x56F71F: mov     edi, [esi-4]
0x56F722: mov     ebx, [esp+1DCh+var_1AC]
0x56F726: lea     edi, [edi+edi*2]
0x56F729: lea     edi, [ebx+edi*4]
0x56F72C: mov     ebx, [edx-0Ch]
0x56F72F: mov     [edi], ebx
0x56F731: mov     ebx, [edx-8]
0x56F734: mov     [edi+4], ebx
0x56F737: mov     ebx, [edx-4]
0x56F73A: mov     [edi+8], ebx
0x56F73D: mov     ebx, [esp+1DCh+var_1B4]
0x56F741: mov     edi, [esi]
0x56F743: cmp     edi, 0FFFFFFFFh
0x56F746: jz      loc_56F7D9
0x56F74C: fld     dword ptr [eax+4]
0x56F74F: lea     edi, [edi+edi*2]
0x56F752: fmul    st, st(1)
0x56F754: lea     edi, [ebx+edi*4]
0x56F757: fstp    [esp+1DCh+var_1BC]
0x56F75B: fld     dword ptr [eax+8]
0x56F75E: fmul    st, st(1)
0x56F760: fstp    [esp+1DCh+var_1C0]
0x56F764: fld     dword ptr [eax+0Ch]
0x56F767: fmul    st, st(1)
0x56F769: fstp    [esp+1DCh+var_1C4]
0x56F76D: fld     dword ptr [ecx-4]
0x56F770: fadd    [esp+1DCh+var_1BC]
0x56F774: fstp    [esp+1DCh+var_1BC]
0x56F778: fld     dword ptr [ecx]
0x56F77A: fadd    [esp+1DCh+var_1C0]
0x56F77E: fstp    [esp+1DCh+var_1C0]
0x56F782: fld     dword ptr [ecx+4]
0x56F785: fadd    [esp+1DCh+var_1C4]
0x56F789: fstp    [esp+1DCh+var_1C4]
0x56F78D: fld     [esp+1DCh+var_1BC]
0x56F791: fstp    [esp+1DCh+var_1A4]
0x56F795: mov     ebx, [esp+1DCh+var_1A4]
0x56F799: fld     [esp+1DCh+var_1C0]
0x56F79D: mov     [edi], ebx
0x56F79F: fstp    [esp+1DCh+var_1A0]
0x56F7A3: mov     ebx, [esp+1DCh+var_1A0]
0x56F7A7: fld     [esp+1DCh+var_1C4]
0x56F7AB: mov     [edi+4], ebx
0x56F7AE: fstp    [esp+1DCh+var_19C]
0x56F7B2: mov     ebx, [esp+1DCh+var_19C]
0x56F7B6: mov     [edi+8], ebx
0x56F7B9: mov     edi, [esi]
0x56F7BB: mov     ebx, [esp+1DCh+var_1AC]
0x56F7BF: lea     edi, [edi+edi*2]
0x56F7C2: lea     edi, [ebx+edi*4]
0x56F7C5: mov     ebx, [edx]
0x56F7C7: mov     [edi], ebx
0x56F7C9: mov     ebx, [edx+4]
0x56F7CC: mov     [edi+4], ebx
0x56F7CF: mov     ebx, [edx+8]
0x56F7D2: mov     [edi+8], ebx
0x56F7D5: mov     ebx, [esp+1DCh+var_1B4]
0x56F7D9: mov     edi, [esi+4]
0x56F7DC: cmp     edi, 0FFFFFFFFh
0x56F7DF: jz      loc_56F875
0x56F7E5: fld     dword ptr [eax+10h]
0x56F7E8: lea     edi, [edi+edi*2]
0x56F7EB: fmul    st, st(1)
0x56F7ED: lea     edi, [ebx+edi*4]
0x56F7F0: fstp    [esp+1DCh+var_1BC]
0x56F7F4: fld     dword ptr [eax+14h]
0x56F7F7: fmul    st, st(1)
0x56F7F9: fstp    [esp+1DCh+var_1C0]
0x56F7FD: fld     dword ptr [eax+18h]
0x56F800: fmul    st, st(1)
0x56F802: fstp    [esp+1DCh+var_1C4]
0x56F806: fld     dword ptr [ecx+8]
0x56F809: fadd    [esp+1DCh+var_1BC]
0x56F80D: fstp    [esp+1DCh+var_1BC]
0x56F811: fld     dword ptr [ecx+0Ch]
0x56F814: fadd    [esp+1DCh+var_1C0]
0x56F818: fstp    [esp+1DCh+var_1C0]
0x56F81C: fld     dword ptr [ecx+10h]
0x56F81F: fadd    [esp+1DCh+var_1C4]
0x56F823: fstp    [esp+1DCh+var_1C4]
0x56F827: fld     [esp+1DCh+var_1BC]
0x56F82B: fstp    [esp+1DCh+var_1A4]
0x56F82F: mov     ebx, [esp+1DCh+var_1A4]
0x56F833: fld     [esp+1DCh+var_1C0]
0x56F837: mov     [edi], ebx
0x56F839: fstp    [esp+1DCh+var_1A0]
0x56F83D: mov     ebx, [esp+1DCh+var_1A0]
0x56F841: fld     [esp+1DCh+var_1C4]
0x56F845: mov     [edi+4], ebx
0x56F848: fstp    [esp+1DCh+var_19C]
0x56F84C: mov     ebx, [esp+1DCh+var_19C]
0x56F850: mov     [edi+8], ebx
0x56F853: mov     edi, [esi+4]
0x56F856: mov     ebx, [esp+1DCh+var_1AC]
0x56F85A: lea     edi, [edi+edi*2]
0x56F85D: lea     edi, [ebx+edi*4]
0x56F860: mov     ebx, [edx+0Ch]
0x56F863: mov     [edi], ebx
0x56F865: mov     ebx, [edx+10h]
0x56F868: mov     [edi+4], ebx
0x56F86B: mov     ebx, [edx+14h]
0x56F86E: mov     [edi+8], ebx
0x56F871: mov     ebx, [esp+1DCh+var_1B4]
0x56F875: add     eax, 30h ; '0'
0x56F878: add     ecx, 30h ; '0'
0x56F87B: add     edx, 30h ; '0'
0x56F87E: add     esi, 10h
0x56F881: sub     [esp+1DCh+var_198], 1
0x56F886: jnz     loc_56F5FF
0x56F88C: cmp     ebp, [esp+1DCh+var_16C]
0x56F890: jge     loc_56F97A
0x56F896: mov     ecx, [esp+1DCh+Dst]
0x56F89A: mov     edi, [esp+1DCh+var_1B0]
0x56F89E: lea     eax, [ebp+ebp*2+0]
0x56F8A2: add     eax, eax
0x56F8A4: add     eax, eax
0x56F8A6: mov     esi, ecx
0x56F8A8: lea     edx, [eax+ecx]
0x56F8AB: lea     eax, [eax+edi+8]
0x56F8AF: sub     esi, edi
0x56F8B1: mov     edi, [esp+1DCh+var_17C]
0x56F8B5: sub     edi, ecx
0x56F8B7: mov     [esp+1DCh+var_1B0], edi
0x56F8BB: mov     ecx, [esp+1DCh+var_18C]
0x56F8BF: mov     ecx, [ecx+ebp*4]
0x56F8C2: cmp     ecx, 0FFFFFFFFh
0x56F8C5: jz      loc_56F967
0x56F8CB: fld     dword ptr [eax-8]
0x56F8CE: lea     ecx, [ecx+ecx*2]
0x56F8D1: fmul    st, st(1)
0x56F8D3: lea     ecx, [ebx+ecx*4]
0x56F8D6: fstp    [esp+1DCh+var_1BC]
0x56F8DA: fld     dword ptr [eax-4]
0x56F8DD: fmul    st, st(1)
0x56F8DF: fstp    [esp+1DCh+var_1C0]
0x56F8E3: fld     dword ptr [eax]
0x56F8E5: fmul    st, st(1)
0x56F8E7: fstp    [esp+1DCh+var_1C4]
0x56F8EB: fld     dword ptr [edx]
0x56F8ED: fadd    [esp+1DCh+var_1BC]
0x56F8F1: fstp    [esp+1DCh+var_1BC]
0x56F8F5: fld     dword ptr [edx+4]
0x56F8F8: fadd    [esp+1DCh+var_1C0]
0x56F8FC: fstp    [esp+1DCh+var_1C0]
0x56F900: fld     dword ptr [eax+esi]
0x56F903: fadd    [esp+1DCh+var_1C4]
0x56F907: fstp    [esp+1DCh+var_1C4]
0x56F90B: fld     [esp+1DCh+var_1BC]
0x56F90F: fstp    [esp+1DCh+var_1A4]
0x56F913: mov     edi, [esp+1DCh+var_1A4]
0x56F917: fld     [esp+1DCh+var_1C0]
0x56F91B: mov     [ecx], edi
0x56F91D: fstp    [esp+1DCh+var_1A0]
0x56F921: mov     edi, [esp+1DCh+var_1A0]
0x56F925: fld     [esp+1DCh+var_1C4]
0x56F929: mov     [ecx+4], edi
0x56F92C: fstp    [esp+1DCh+var_19C]
0x56F930: mov     edi, [esp+1DCh+var_19C]
0x56F934: mov     [ecx+8], edi
0x56F937: mov     ecx, [esp+1DCh+var_18C]
0x56F93B: mov     ecx, [ecx+ebp*4]
0x56F93E: mov     edi, [esp+1DCh+var_1AC]
0x56F942: lea     ecx, [ecx+ecx*2]
0x56F945: lea     ecx, [edi+ecx*4]
0x56F948: mov     edi, [esp+1DCh+var_1B0]
0x56F94C: mov     edi, [edi+edx]
0x56F94F: mov     [ecx], edi
0x56F951: mov     edi, [esp+1DCh+var_1B0]
0x56F955: mov     edi, [edi+edx+4]
0x56F959: mov     [ecx+4], edi
0x56F95C: mov     edi, [esp+1DCh+var_1B0]
0x56F960: mov     edi, [edi+edx+8]
0x56F964: mov     [ecx+8], edi
0x56F967: add     ebp, 1
0x56F96A: add     edx, 0Ch
0x56F96D: add     eax, 0Ch
0x56F970: cmp     ebp, [esp+1DCh+var_16C]
0x56F974: jl      loc_56F8BB
0x56F97A: cmp     [esp+1DCh+var_188], 0
0x56F97F: fstp    st
0x56F981: jle     loc_56FA8F
0x56F987: mov     edi, [esp+1DCh+var_180]
0x56F98B: mov     edx, [esp+1DCh+var_188]
0x56F98F: mov     esi, [esp+1DCh+var_190]
0x56F993: add     edi, 48h ; 'H'
0x56F996: mov     [esp+1DCh+var_198], edx
0x56F99A: xor     eax, eax
0x56F99C: cmp     [edi], ax
0x56F99F: jbe     short loc_56F9E8
0x56F9A1: mov     ecx, [edi-4]
0x56F9A4: movzx   ecx, word ptr [ecx+eax*8]
0x56F9A8: movzx   edx, cx
0x56F9AB: mov     ecx, [esp+1DCh+var_18C]
0x56F9AF: cmp     dword ptr [ecx+edx*4], 0FFFFFFFFh
0x56F9B3: lea     ecx, [ecx+edx*4]
0x56F9B6: jz      short loc_56F9DE
0x56F9B8: movzx   edx, word ptr [esi+48h]
0x56F9BC: mov     cx, [ecx]
0x56F9BF: mov     ebp, [esi+44h]
0x56F9C2: mov     [ebp+edx*8+0], cx
0x56F9C7: mov     edx, [edi-4]
0x56F9CA: movzx   ecx, word ptr [esi+48h]
0x56F9CE: fld     dword ptr [edx+eax*8+4]
0x56F9D2: mov     ebp, [esi+44h]
0x56F9D5: fstp    dword ptr [ebp+ecx*8+4]
0x56F9D9: add     word ptr [esi+48h], 1
0x56F9DE: movzx   edx, word ptr [edi]
0x56F9E1: add     eax, 1
0x56F9E4: cmp     eax, edx
0x56F9E6: jl      short loc_56F9A1
0x56F9E8: movzx   eax, word ptr [esi+48h]
0x56F9EC: mov     ebp, [esi+44h]
0x56F9EF: xor     ecx, ecx
0x56F9F1: mov     dword ptr [esp+1DCh+var_158], eax
0x56F9F8: mov     edx, 8
0x56F9FD: mul     edx
0x56F9FF: seto    cl
0x56FA02: mov     [esp+1DCh+var_1B0], ebp
0x56FA06: neg     ecx
0x56FA08: or      ecx, eax
0x56FA0A: push    ecx; Size
0x56FA0B: call    FormHeapAlloc
0x56FA10: add     esp, 4
0x56FA13: mov     [esp+1DCh+Dst], eax
0x56FA17: test    eax, eax
0x56FA19: mov     [esp+1DCh+var_4], 3
0x56FA24: jz      short loc_56FA53
0x56FA26: mov     ebp, eax
0x56FA28: mov     eax, dword ptr [esp+1DCh+var_158]
0x56FA2F: add     eax, 0FFFFFFFFh
0x56FA32: mov     [esp+1DCh+var_180], eax
0x56FA36: js      short loc_56FA49
0x56FA38: mov     ecx, ebp
0x56FA3A: call    sub_72EFA0
0x56FA3F: add     ebp, 8
0x56FA42: sub     [esp+1DCh+var_180], 1
0x56FA47: jns     short loc_56FA38
0x56FA49: mov     eax, [esp+1DCh+Dst]
0x56FA4D: mov     ebp, [esp+1DCh+var_1B0]
0x56FA51: jmp     short loc_56FA55
0x56FA53: xor     eax, eax
0x56FA55: mov     [esi+44h], eax
0x56FA58: movzx   ecx, word ptr [esi+48h]
0x56FA5C: add     ecx, ecx
0x56FA5E: add     ecx, ecx
0x56FA60: add     ecx, ecx
0x56FA62: push    ecx; Size
0x56FA63: push    ebp; Src
0x56FA64: push    eax; Dst
0x56FA65: mov     [esp+1E8h+var_4], 0FFFFFFFFh
0x56FA70: call    _memcpy
0x56FA75: push    ebp
0x56FA76: call    FormHeapFree
0x56FA7B: add     esp, 10h
0x56FA7E: add     edi, 4Ch ; 'L'
0x56FA81: add     esi, 4Ch ; 'L'
0x56FA84: sub     [esp+1DCh+var_198], 1
0x56FA89: jnz     loc_56F99A
0x56FA8F: mov     edx, [esp+1DCh+var_190]
0x56FA93: mov     eax, dword ptr [esp+1DCh+var_160]
0x56FA97: mov     ecx, [esp+1DCh+var_1AC]
0x56FA9B: push    edx
0x56FA9C: mov     edx, [esp+1E0h+var_1A8]
0x56FAA0: push    eax
0x56FAA1: mov     eax, dword ptr [esp+1E4h+var_178]
0x56FAA5: push    ecx
0x56FAA6: mov     ecx, [esp+1E8h+var_184]
0x56FAAA: push    ebx
0x56FAAB: push    edx
0x56FAAC: mov     edx, [ecx+2Ch]
0x56FAAF: push    eax
0x56FAB0: push    edx
0x56FAB1: call    sub_56CFF0
0x56FAB6: jmp     short loc_56FAED
0x56FAB8: mov     edi, [esp+1DCh+var_188]
0x56FABC: test    edi, edi
0x56FABE: jle     short loc_56FAE0
0x56FAC0: mov     esi, [esp+1DCh+var_190]
0x56FAC4: add     esi, 44h ; 'D'
0x56FAC7: mov     eax, [esi]
0x56FAC9: push    eax
0x56FACA: call    FormHeapFree
0x56FACF: mov     dword ptr [esi], 0
0x56FAD5: add     esp, 4
0x56FAD8: add     esi, 4Ch ; 'L'
0x56FADB: sub     edi, 1
0x56FADE: jnz     short loc_56FAC7
0x56FAE0: mov     ecx, [esp+1DCh+var_190]
0x56FAE4: push    ecx
0x56FAE5: call    FormHeapFree
0x56FAEA: add     esp, 4
0x56FAED: mov     edx, [esp+1DCh+var_168]
0x56FAF1: push    edx
0x56FAF2: call    FormHeapFree
0x56FAF7: mov     eax, [esp+1E0h+var_150]
0x56FAFE: push    eax
0x56FAFF: call    FormHeapFree
0x56FB04: mov     ecx, [esp+1E4h+Src]
0x56FB0B: push    ecx
0x56FB0C: call    FormHeapFree
0x56FB11: mov     edx, [esp+1E8h+var_18C]
0x56FB15: push    edx
0x56FB16: call    FormHeapFree
0x56FB1B: mov     eax, [esp+1ECh+var_17C]
0x56FB1F: push    eax
0x56FB20: call    FormHeapFree
0x56FB25: add     esp, 14h
0x56FB28: mov     ecx, [esp+1DCh+var_C]
0x56FB2F: mov     large fs:0, ecx
0x56FB36: pop     ecx
0x56FB37: pop     edi
0x56FB38: pop     esi
0x56FB39: pop     ebp
0x56FB3A: pop     ebx
0x56FB3B: mov     esp, ebp
0x56FB3D: pop     ebp
0x56FB3E: retn
