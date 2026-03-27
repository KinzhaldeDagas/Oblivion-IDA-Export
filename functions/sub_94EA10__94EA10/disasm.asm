0x94EA10: push    ebp
0x94EA11: mov     ebp, esp
0x94EA13: and     esp, 0FFFFFFF0h
0x94EA16: sub     esp, 0D4h
0x94EA1C: mov     eax, [ebp+arg_0]
0x94EA1F: push    ebx
0x94EA20: mov     ebx, [eax+0Ch]
0x94EA23: push    esi
0x94EA24: push    edi
0x94EA25: mov     edi, [ebp+arg_4]
0x94EA28: mov     esi, ecx
0x94EA2A: push    edi
0x94EA2B: lea     ecx, [esi+0C0h]
0x94EA31: call    sub_958600
0x94EA36: mov     eax, [ebp+arg_0]
0x94EA39: lea     ecx, [esp+0E0h+var_40]
0x94EA40: push    ecx
0x94EA41: lea     edx, [esp+0E4h+var_80]
0x94EA45: push    edx
0x94EA46: push    eax
0x94EA47: mov     ecx, esi
0x94EA49: call    sub_94D100
0x94EA4E: lea     edx, [ebx+30h]
0x94EA51: push    edx
0x94EA52: lea     eax, [esp+0E4h+var_80]
0x94EA56: lea     ecx, [esi+50h]
0x94EA59: push    eax
0x94EA5A: call    sub_88FCC0
0x94EA5F: lea     edx, [ebx+10h]
0x94EA62: push    edx
0x94EA63: lea     eax, [esp+0E4h+var_40]
0x94EA6A: lea     ecx, [esi+40h]
0x94EA6D: push    eax
0x94EA6E: call    sub_88FCC0
0x94EA73: mov     ecx, [ebp+arg_8]
0x94EA76: push    ecx
0x94EA77: mov     ecx, esi
0x94EA79: call    sub_94CF80
0x94EA7E: mov     edx, [ebp+arg_8]
0x94EA81: push    edx
0x94EA82: mov     ecx, esi
0x94EA84: call    sub_94CF30
0x94EA89: mov     eax, [ebp+arg_8]
0x94EA8C: mov     edx, [edi]
0x94EA8E: push    eax
0x94EA8F: push    0FFFF0000h
0x94EA94: lea     eax, [esi+50h]
0x94EA97: push    eax
0x94EA98: lea     eax, [esi+40h]
0x94EA9B: push    eax
0x94EA9C: mov     ecx, edi
0x94EA9E: call    dword ptr [edx+1Ch]
0x94EAA1: lea     ecx, [ebx+60h]
0x94EAA4: push    ecx
0x94EAA5: lea     eax, [esi+90h]
0x94EAAB: push    eax
0x94EAAC: lea     ecx, [esp+0E8h+var_90]
0x94EAB0: call    sub_88FE00
0x94EAB5: fld     dword ptr [esi]
0x94EAB7: fmul    dword ptr ds:0A45E4Ch
0x94EABD: movaps  xmm2, [esp+0E0h+var_90]
0x94EAC2: movaps  xmm1, xmmword ptr [esi+50h]
0x94EAC6: mov     eax, [ebp+arg_8]
0x94EAC9: mov     edx, [edi]
0x94EACB: fstp    dword ptr [esp+0E0h+var_D0+0Ch]
0x94EACF: movss   xmm0, dword ptr [esp+0E0h+var_D0+0Ch]
0x94EAD5: fld     dword ptr [esi]
0x94EAD7: fmul    dword ptr ds:0A3D65Ch
0x94EADD: movaps  xmm3, xmm0
0x94EAE0: shufps  xmm3, xmm0, 0
0x94EAE4: mulps   xmm3, xmm2
0x94EAE7: addps   xmm3, xmm1
0x94EAEA: fstp    dword ptr [esp+0E0h+var_D0+0Ch]
0x94EAEE: movss   xmm0, dword ptr [esp+0E0h+var_D0+0Ch]
0x94EAF4: movaps  [esp+0E0h+var_C0], xmm3
0x94EAF9: push    eax
0x94EAFA: movaps  xmm3, xmm0
0x94EAFD: shufps  xmm3, xmm0, 0
0x94EB01: mulps   xmm3, xmm2
0x94EB04: push    0FF008000h
0x94EB09: lea     ecx, [esp+0E8h+var_B0]
0x94EB0D: addps   xmm3, xmm1
0x94EB10: movaps  [esp+0E8h+var_B0], xmm3
0x94EB15: push    ecx
0x94EB16: lea     eax, [esp+0ECh+var_C0]
0x94EB1A: push    eax
0x94EB1B: mov     ecx, edi
0x94EB1D: call    dword ptr [edx+1Ch]
0x94EB20: mov     ecx, [ebx+90h]
0x94EB26: mov     edx, [ebx+94h]
0x94EB2C: lea     eax, [ebx+70h]
0x94EB2F: push    eax
0x94EB30: lea     eax, [esi+90h]
0x94EB36: mov     dword ptr [esp+0E4h+var_D0+8], ecx
0x94EB3A: push    eax
0x94EB3B: lea     ecx, [esp+0E8h+var_B0]
0x94EB3F: mov     dword ptr [esp+0E8h+var_D0+0Ch], edx
0x94EB43: call    sub_88FE00
0x94EB48: fld     dword ptr [esi]
0x94EB4A: mov     ecx, dword ptr [esp+0E0h+var_D0+0Ch]
0x94EB4E: fmul    dword ptr ds:0A2FAACh
0x94EB54: movaps  xmm2, [esp+0E0h+var_90]
0x94EB59: movaps  xmm1, xmmword ptr [esi+50h]
0x94EB5D: mov     eax, [ebp+arg_8]
0x94EB60: mov     edx, [edi]
0x94EB62: mov     dword ptr [esp+0E0h+var_D0+0Ch], ecx
0x94EB66: movss   xmm0, dword ptr [esp+0E0h+var_D0+0Ch]
0x94EB6C: fstp    dword ptr [esp+0E0h+var_D0+0Ch]
0x94EB70: fld     dword ptr [esi]
0x94EB72: movaps  xmm3, xmm0
0x94EB75: fmul    dword ptr ds:0A641B8h
0x94EB7B: shufps  xmm3, xmm0, 0
0x94EB7F: movaps  xmm0, xmm3
0x94EB82: mulps   xmm0, xmm2
0x94EB85: movaps  xmm2, [esp+0E0h+var_B0]
0x94EB8A: addps   xmm0, xmm1
0x94EB8D: movss   xmm1, dword ptr [esp+0E0h+var_D0+0Ch]
0x94EB93: fstp    dword ptr [esp+0E0h+var_D0+0Ch]
0x94EB97: movaps  xmm3, xmm1
0x94EB9A: shufps  xmm3, xmm1, 0
0x94EB9E: movss   xmm1, dword ptr [esp+0E0h+var_D0+0Ch]
0x94EBA4: mulps   xmm3, xmm2
0x94EBA7: addps   xmm3, xmm0
0x94EBAA: push    eax
0x94EBAB: movaps  [esp+0E4h+var_C0], xmm3
0x94EBB0: push    0FFFFFFFFh
0x94EBB2: lea     ecx, [esp+0E8h+var_A0]
0x94EBB6: movaps  xmm3, xmm1
0x94EBB9: shufps  xmm3, xmm1, 0
0x94EBBD: push    ecx
0x94EBBE: lea     eax, [esp+0ECh+var_C0]
0x94EBC2: mulps   xmm3, xmm2
0x94EBC5: addps   xmm3, xmm0
0x94EBC8: push    eax
0x94EBC9: mov     ecx, edi
0x94EBCB: movaps  [esp+0F0h+var_A0], xmm3
0x94EBD0: call    dword ptr [edx+1Ch]
0x94EBD3: fld     dword ptr [esi]
0x94EBD5: mov     ecx, dword ptr [esp+0E0h+var_D0+8]
0x94EBD9: fmul    dword ptr ds:0A2FAACh
0x94EBDF: movaps  xmm2, [esp+0E0h+var_90]
0x94EBE4: movaps  xmm1, xmmword ptr [esi+50h]
0x94EBE8: mov     dword ptr [esp+0E0h+var_D0+8], ecx
0x94EBEC: movss   xmm0, dword ptr [esp+0E0h+var_D0+8]
0x94EBF2: fstp    dword ptr [esp+0E0h+var_D0+8]
0x94EBF6: fld     dword ptr [esi]
0x94EBF8: movaps  xmm3, xmm0
0x94EBFB: fmul    dword ptr ds:0A641B8h
0x94EC01: shufps  xmm3, xmm0, 0
0x94EC05: movaps  xmm0, xmm3
0x94EC08: mulps   xmm0, xmm2
0x94EC0B: movaps  xmm2, [esp+0E0h+var_B0]
0x94EC10: addps   xmm0, xmm1
0x94EC13: movss   xmm1, dword ptr [esp+0E0h+var_D0+8]
0x94EC19: fstp    dword ptr [esp+0E0h+var_D0+8]
0x94EC1D: movaps  xmm3, xmm1
0x94EC20: shufps  xmm3, xmm1, 0
0x94EC24: movss   xmm1, dword ptr [esp+0E0h+var_D0+8]
0x94EC2A: mulps   xmm3, xmm2
0x94EC2D: addps   xmm3, xmm0
0x94EC30: movaps  [esp+0E0h+var_C0], xmm3
0x94EC35: movaps  xmm3, xmm1
0x94EC38: shufps  xmm3, xmm1, 0
0x94EC3C: mulps   xmm3, xmm2
0x94EC3F: addps   xmm3, xmm0
0x94EC42: movaps  [esp+0E0h+var_A0], xmm3
0x94EC47: mov     eax, [ebp+arg_8]
0x94EC4A: mov     edx, [edi]
0x94EC4C: push    eax
0x94EC4D: push    0FFFFFFFFh
0x94EC4F: lea     ecx, [esp+0E8h+var_A0]
0x94EC53: push    ecx
0x94EC54: lea     eax, [esp+0ECh+var_C0]
0x94EC58: push    eax
0x94EC59: mov     ecx, edi
0x94EC5B: call    dword ptr [edx+1Ch]
0x94EC5E: lea     ecx, [ebx+40h]
0x94EC61: push    ecx
0x94EC62: lea     eax, [esi+90h]
0x94EC68: push    eax
0x94EC69: lea     ecx, [esp+0E8h+var_B0]
0x94EC6D: call    sub_88FE00
0x94EC72: fld     dword ptr [esi]
0x94EC74: fmul    dword ptr ds:0A45E4Ch
0x94EC7A: movaps  xmm2, [esp+0E0h+var_B0]
0x94EC7F: mov     eax, [ebp+arg_8]
0x94EC82: movaps  xmm1, xmmword ptr [esi+50h]
0x94EC86: mov     edx, [edi]
0x94EC88: fstp    dword ptr [esp+0E0h+var_D0+8]
0x94EC8C: fld     dword ptr [esi]
0x94EC8E: movss   xmm0, dword ptr [esp+0E0h+var_D0+8]
0x94EC94: fmul    dword ptr ds:0A3D65Ch
0x94EC9A: movaps  xmm3, xmm0
0x94EC9D: shufps  xmm3, xmm0, 0
0x94ECA1: mulps   xmm3, xmm2
0x94ECA4: addps   xmm3, xmm1
0x94ECA7: fstp    dword ptr [esp+0E0h+var_D0+8]
0x94ECAB: movss   xmm0, dword ptr [esp+0E0h+var_D0+8]
0x94ECB1: push    eax
0x94ECB2: movaps  [esp+0E4h+var_A0], xmm3
0x94ECB7: push    0FFFFFF00h
0x94ECBC: lea     ecx, [esp+0E8h+var_C0]
0x94ECC0: movaps  xmm3, xmm0
0x94ECC3: shufps  xmm3, xmm0, 0
0x94ECC7: push    ecx
0x94ECC8: lea     eax, [esp+0ECh+var_A0]
0x94ECCC: mulps   xmm3, xmm2
0x94ECCF: addps   xmm3, xmm1
0x94ECD2: push    eax
0x94ECD3: mov     ecx, edi
0x94ECD5: movaps  [esp+0F0h+var_C0], xmm3
0x94ECDA: call    dword ptr [edx+1Ch]
0x94ECDD: add     ebx, 20h ; ' '
0x94ECE0: push    ebx
0x94ECE1: lea     ecx, [esi+60h]
0x94ECE4: push    ecx
0x94ECE5: lea     ecx, [esp+0E8h+var_B0]
0x94ECE9: call    sub_88FE00
0x94ECEE: fld     dword ptr [esi]
0x94ECF0: fmul    dword ptr ds:0A45E4Ch
0x94ECF6: movaps  xmm2, [esp+0E0h+var_B0]
0x94ECFB: mov     eax, [ebp+arg_8]
0x94ECFE: movaps  xmm1, xmmword ptr [esi+40h]
0x94ED02: mov     edx, [edi]
0x94ED04: fstp    dword ptr [esp+0E0h+var_D0+8]
0x94ED08: movss   xmm0, dword ptr [esp+0E0h+var_D0+8]
0x94ED0E: fld     dword ptr [esi]
0x94ED10: fmul    dword ptr ds:0A3D65Ch
0x94ED16: movaps  xmm3, xmm0
0x94ED19: shufps  xmm3, xmm0, 0
0x94ED1D: mulps   xmm3, xmm2
0x94ED20: addps   xmm3, xmm1
0x94ED23: fstp    dword ptr [esp+0E0h+var_D0+8]
0x94ED27: movss   xmm0, dword ptr [esp+0E0h+var_D0+8]
0x94ED2D: push    eax
0x94ED2E: movaps  [esp+0E4h+var_A0], xmm3
0x94ED33: push    0FF0000FFh
0x94ED38: lea     ecx, [esp+0E8h+var_C0]
0x94ED3C: movaps  xmm3, xmm0
0x94ED3F: shufps  xmm3, xmm0, 0
0x94ED43: push    ecx
0x94ED44: mulps   xmm3, xmm2
0x94ED47: lea     eax, [esp+0ECh+var_A0]
0x94ED4B: addps   xmm3, xmm1
0x94ED4E: movaps  [esp+0ECh+var_C0], xmm3
0x94ED53: push    eax
0x94ED54: mov     ecx, edi
0x94ED56: call    dword ptr [edx+1Ch]
0x94ED59: pop     edi
0x94ED5A: pop     esi
0x94ED5B: pop     ebx
0x94ED5C: mov     esp, ebp
0x94ED5E: pop     ebp
0x94ED5F: retn    0Ch
