0x94EEE0: push    ebp
0x94EEE1: mov     ebp, esp
0x94EEE3: and     esp, 0FFFFFFF0h
0x94EEE6: sub     esp, 0D4h
0x94EEEC: mov     eax, [ebp+arg_0]
0x94EEEF: push    ebx
0x94EEF0: mov     ebx, [eax+0Ch]
0x94EEF3: push    esi
0x94EEF4: push    edi
0x94EEF5: mov     edi, [ebp+arg_4]
0x94EEF8: mov     esi, ecx
0x94EEFA: push    edi
0x94EEFB: lea     ecx, [esi+0C0h]
0x94EF01: mov     dword ptr [esp+0E4h+var_D0+8], ebx
0x94EF05: call    sub_958600
0x94EF0A: mov     eax, [ebp+arg_0]
0x94EF0D: lea     ecx, [esp+0E0h+var_40]
0x94EF14: push    ecx
0x94EF15: lea     edx, [esp+0E4h+var_80]
0x94EF19: push    edx
0x94EF1A: push    eax
0x94EF1B: mov     ecx, esi
0x94EF1D: call    sub_94D100
0x94EF22: lea     edx, [ebx+60h]
0x94EF25: push    edx
0x94EF26: lea     eax, [esp+0E4h+var_80]
0x94EF2A: lea     ecx, [esi+50h]
0x94EF2D: push    eax
0x94EF2E: call    sub_88FCC0
0x94EF33: lea     edx, [ebx+10h]
0x94EF36: push    edx
0x94EF37: lea     eax, [esp+0E4h+var_40]
0x94EF3E: lea     ecx, [esi+40h]
0x94EF41: push    eax
0x94EF42: call    sub_88FCC0
0x94EF47: mov     ecx, [ebp+arg_8]
0x94EF4A: push    ecx
0x94EF4B: mov     ecx, esi
0x94EF4D: call    sub_94CF30
0x94EF52: mov     edx, [ebp+arg_8]
0x94EF55: push    edx
0x94EF56: mov     ecx, esi
0x94EF58: call    sub_94CF80
0x94EF5D: lea     ecx, [ebx+70h]
0x94EF60: push    ecx
0x94EF61: lea     eax, [esi+90h]
0x94EF67: push    eax
0x94EF68: lea     ecx, [esp+0E8h+var_A0]
0x94EF6C: call    sub_88FE00
0x94EF71: lea     edx, [ebx+80h]
0x94EF77: push    edx
0x94EF78: lea     eax, [esi+90h]
0x94EF7E: push    eax
0x94EF7F: lea     ecx, [esp+0E8h+var_90]
0x94EF83: call    sub_88FE00
0x94EF88: mov     eax, [ebp+arg_8]
0x94EF8B: mov     edx, [edi]
0x94EF8D: push    eax
0x94EF8E: push    0FFFF0000h
0x94EF93: lea     eax, [esi+50h]
0x94EF96: push    eax
0x94EF97: lea     eax, [esi+40h]
0x94EF9A: push    eax
0x94EF9B: mov     ecx, edi
0x94EF9D: call    dword ptr [edx+1Ch]
0x94EFA0: mov     eax, [ebx+94h]
0x94EFA6: cmp     eax, 7F7FFFFFh
0x94EFAB: movaps  xmm2, xmmword ptr [esp+0E0h+var_A0]
0x94EFB0: movaps  xmm1, xmmword ptr [esi+50h]
0x94EFB4: jz      short loc_94F022
0x94EFB6: mov     edx, [ebx+90h]
0x94EFBC: mov     ebx, [edi]
0x94EFBE: mov     ecx, eax
0x94EFC0: mov     eax, [ebp+arg_8]
0x94EFC3: mov     dword ptr [esp+0E0h+var_D0+0Ch], ecx
0x94EFC7: movss   xmm0, dword ptr [esp+0E0h+var_D0+0Ch]
0x94EFCD: push    eax
0x94EFCE: movaps  xmm3, xmm0
0x94EFD1: shufps  xmm3, xmm0, 0
0x94EFD5: mulps   xmm3, xmm2
0x94EFD8: addps   xmm3, xmm1
0x94EFDB: movaps  [esp+0E4h+var_C0], xmm3
0x94EFE0: push    3F800000h; float
0x94EFE5: mov     dword ptr [esp+0E8h+var_D0+0Ch], edx
0x94EFE9: movss   xmm0, dword ptr [esp+0E8h+var_D0+0Ch]
0x94EFEF: push    3F800000h; float
0x94EFF4: movaps  xmm3, xmm0
0x94EFF7: shufps  xmm3, xmm0, 0
0x94EFFB: mulps   xmm3, xmm2
0x94EFFE: push    3F000000h; float
0x94F003: addps   xmm3, xmm1
0x94F006: push    0; float
0x94F008: movaps  [esp+0F4h+var_B0], xmm3
0x94F00D: call    sub_8AEBB0
0x94F012: add     esp, 10h
0x94F015: push    eax
0x94F016: lea     ecx, [esp+0E8h+var_C0]
0x94F01A: push    ecx
0x94F01B: lea     edx, [esp+0ECh+var_B0]
0x94F01F: push    edx
0x94F020: jmp     short loc_94F08A
0x94F022: mov     eax, [esi]
0x94F024: fld     dword ptr [esi]
0x94F026: mov     ecx, [ebp+arg_8]
0x94F029: fchs
0x94F02B: mov     ebx, [edi]
0x94F02D: mov     dword ptr [esp+0E0h+var_D0+0Ch], eax
0x94F031: movss   xmm0, dword ptr [esp+0E0h+var_D0+0Ch]
0x94F037: fstp    dword ptr [esp+0E0h+var_D0+0Ch]
0x94F03B: push    ecx
0x94F03C: movaps  xmm3, xmm0
0x94F03F: shufps  xmm3, xmm0, 0
0x94F043: movss   xmm0, dword ptr [esp+0E4h+var_D0+0Ch]
0x94F049: mulps   xmm3, xmm2
0x94F04C: addps   xmm3, xmm1
0x94F04F: movaps  [esp+0E4h+var_C0], xmm3
0x94F054: push    3F800000h; float
0x94F059: push    3F800000h; float
0x94F05E: movaps  xmm3, xmm0
0x94F061: shufps  xmm3, xmm0, 0
0x94F065: mulps   xmm3, xmm2
0x94F068: push    3F000000h; float
0x94F06D: addps   xmm3, xmm1
0x94F070: push    0; float
0x94F072: movaps  [esp+0F4h+var_B0], xmm3
0x94F077: call    sub_8AEBB0
0x94F07C: add     esp, 10h
0x94F07F: push    eax
0x94F080: lea     edx, [esp+0E8h+var_C0]
0x94F084: push    edx
0x94F085: lea     eax, [esp+0ECh+var_B0]
0x94F089: push    eax
0x94F08A: mov     ecx, edi
0x94F08C: call    dword ptr [ebx+1Ch]
0x94F08F: fld     dword ptr [esi]
0x94F091: mov     eax, dword ptr [esp+0E0h+var_D0+8]
0x94F095: fmul    dword ptr ds:0A3D65Ch
0x94F09B: mov     edx, [eax+90h]
0x94F0A1: movaps  xmm1, xmmword ptr [esp+0E0h+var_A0]
0x94F0A6: mov     ecx, [eax+94h]
0x94F0AC: mov     ebx, [ebp+arg_8]
0x94F0AF: mov     eax, [edi]
0x94F0B1: mov     dword ptr [esp+0E0h+var_D0+8], edx
0x94F0B5: movss   xmm0, dword ptr [esp+0E0h+var_D0+8]
0x94F0BB: fstp    dword ptr [esp+0E0h+var_D0+8]
0x94F0BF: fld     dword ptr [esi]
0x94F0C1: movaps  xmm2, xmm0
0x94F0C4: fmul    dword ptr ds:0A45E4Ch
0x94F0CA: shufps  xmm2, xmm0, 0
0x94F0CE: movaps  xmm0, xmmword ptr [esi+50h]
0x94F0D2: mulps   xmm2, xmm1
0x94F0D5: movss   xmm1, dword ptr [esp+0E0h+var_D0+8]
0x94F0DB: fstp    dword ptr [esp+0E0h+var_D0+8]
0x94F0DF: movaps  xmm3, xmm1
0x94F0E2: shufps  xmm3, xmm1, 0
0x94F0E6: addps   xmm0, xmm2
0x94F0E9: movaps  xmm2, xmmword ptr [esp+0E0h+var_90]
0x94F0EE: mulps   xmm3, xmm2
0x94F0F1: movaps  xmm1, xmm0
0x94F0F4: addps   xmm1, xmm3
0x94F0F7: push    ebx
0x94F0F8: mov     dword ptr [esp+0E4h+var_D0+0Ch], ecx
0x94F0FC: movaps  [esp+0E4h+var_C0], xmm1
0x94F101: movss   xmm1, dword ptr [esp+0E4h+var_D0+8]
0x94F107: push    0FFFFFFFFh
0x94F109: lea     ecx, [esp+0E8h+var_B0]
0x94F10D: movaps  xmm3, xmm1
0x94F110: push    ecx
0x94F111: shufps  xmm3, xmm1, 0
0x94F115: lea     edx, [esp+0ECh+var_C0]
0x94F119: mulps   xmm3, xmm2
0x94F11C: addps   xmm0, xmm3
0x94F11F: push    edx
0x94F120: mov     ecx, edi
0x94F122: movaps  [esp+0F0h+var_B0], xmm0
0x94F127: call    dword ptr [eax+1Ch]
0x94F12A: fld     dword ptr [esi]
0x94F12C: fmul    dword ptr ds:0A3D65Ch
0x94F132: mov     eax, dword ptr [esp+0E0h+var_D0+0Ch]
0x94F136: movaps  xmm1, xmmword ptr [esp+0E0h+var_A0]
0x94F13B: mov     edx, [edi]
0x94F13D: mov     dword ptr [esp+0E0h+var_D0+8], eax
0x94F141: movss   xmm0, dword ptr [esp+0E0h+var_D0+8]
0x94F147: fstp    dword ptr [esp+0E0h+var_D0+8]
0x94F14B: fld     dword ptr [esi]
0x94F14D: movaps  xmm2, xmm0
0x94F150: fmul    dword ptr ds:0A45E4Ch
0x94F156: shufps  xmm2, xmm0, 0
0x94F15A: movaps  xmm0, xmmword ptr [esi+50h]
0x94F15E: mulps   xmm2, xmm1
0x94F161: movss   xmm1, dword ptr [esp+0E0h+var_D0+8]
0x94F167: fstp    dword ptr [esp+0E0h+var_D0+8]
0x94F16B: movaps  xmm3, xmm1
0x94F16E: shufps  xmm3, xmm1, 0
0x94F172: addps   xmm0, xmm2
0x94F175: movaps  xmm2, xmmword ptr [esp+0E0h+var_90]
0x94F17A: mulps   xmm3, xmm2
0x94F17D: movaps  xmm1, xmm0
0x94F180: addps   xmm1, xmm3
0x94F183: push    ebx
0x94F184: movaps  [esp+0E4h+var_C0], xmm1
0x94F189: movss   xmm1, dword ptr [esp+0E4h+var_D0+8]
0x94F18F: push    0FFFFFFFFh
0x94F191: lea     eax, [esp+0E8h+var_B0]
0x94F195: movaps  xmm3, xmm1
0x94F198: lea     ecx, [esp+0E8h+var_C0]
0x94F19C: shufps  xmm3, xmm1, 0
0x94F1A0: push    eax
0x94F1A1: mulps   xmm3, xmm2
0x94F1A4: addps   xmm0, xmm3
0x94F1A7: push    ecx
0x94F1A8: movaps  [esp+0F0h+var_B0], xmm0
0x94F1AD: mov     ecx, edi
0x94F1AF: call    dword ptr [edx+1Ch]
0x94F1B2: pop     edi
0x94F1B3: pop     esi
0x94F1B4: pop     ebx
0x94F1B5: mov     esp, ebp
0x94F1B7: pop     ebp
0x94F1B8: retn    0Ch
