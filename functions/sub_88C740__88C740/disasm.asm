0x88C740: push    ebp
0x88C741: mov     ebp, esp
0x88C743: and     esp, 0FFFFFFF0h
0x88C746: push    0FFFFFFFFh
0x88C748: push    offset SEH_88C740
0x88C74D: mov     eax, large fs:0
0x88C753: push    eax
0x88C754: sub     esp, 108h
0x88C75A: mov     eax, ds:0B30AACh
0x88C75F: xor     eax, esp
0x88C761: mov     [esp+114h+var_14], eax
0x88C768: push    ebx
0x88C769: push    esi
0x88C76A: push    edi
0x88C76B: mov     eax, ds:0B30AACh
0x88C770: xor     eax, esp
0x88C772: push    eax
0x88C773: lea     eax, [esp+124h+var_C]
0x88C77A: mov     large fs:0, eax
0x88C780: mov     ebx, [ebp+arg_0]
0x88C783: mov     edi, [ebp+arg_4]
0x88C786: xor     al, al
0x88C788: test    ebx, ebx
0x88C78A: mov     [esp+124h+var_F4], ecx
0x88C78E: mov     [esp+124h+var_100], edi
0x88C792: mov     [esp+124h+var_101], al
0x88C796: jz      loc_88CC52
0x88C79C: test    edi, edi
0x88C79E: jz      loc_88CC52
0x88C7A4: push    edi
0x88C7A5: call    sub_6FA970
0x88C7AA: add     esp, 4
0x88C7AD: test    eax, eax
0x88C7AF: jz      loc_88CC4E
0x88C7B5: mov     eax, [eax+0Ch]
0x88C7B8: and     eax, 2
0x88C7BB: jz      loc_88CC4E
0x88C7C1: push    ebx
0x88C7C2: mov     [esp+128h+var_F8], 0
0x88C7CA: call    sub_4A05E0
0x88C7CF: mov     esi, eax
0x88C7D1: add     esp, 4
0x88C7D4: test    esi, esi
0x88C7D6: mov     [esp+124h+var_FC], esi
0x88C7DA: jz      loc_88CBEC
0x88C7E0: mov     eax, [esi+10h]
0x88C7E3: test    eax, eax
0x88C7E5: mov     [esp+124h+var_F8], 1
0x88C7ED: mov     [esp+124h+var_108], eax
0x88C7F1: jz      loc_88CBEC
0x88C7F7: mov     eax, [esi]
0x88C7F9: mov     edx, [eax+74h]
0x88C7FC: mov     ecx, esi
0x88C7FE: call    edx
0x88C800: test    al, al
0x88C802: jnz     loc_88CBEC
0x88C808: cmp     edi, ebx
0x88C80A: mov     eax, [esp+124h+var_F4]
0x88C80E: mov     byte ptr [eax+18h], 1
0x88C812: mov     [esp+124h+var_101], 1
0x88C817: jz      loc_88CBEC
0x88C81D: mov     ecx, [esp+124h+var_108]
0x88C821: push    ecx
0x88C822: push    offset dword_BA8018
0x88C827: xor     edi, edi
0x88C829: call    NiRTTI__IsObjectOfRTTIType
0x88C82E: add     esp, 8
0x88C831: test    al, al
0x88C833: jz      short loc_88C83E
0x88C835: mov     edi, [esp+124h+var_108]
0x88C839: jmp     loc_88C942
0x88C83E: mov     edx, [esp+124h+var_108]
0x88C842: push    edx
0x88C843: push    offset dword_BA7D84
0x88C848: call    NiRTTI_Cast
0x88C84D: add     esp, 8
0x88C850: push    eax
0x88C851: lea     ecx, [esp+128h+var_108]
0x88C855: call    sub_405070
0x88C85A: cmp     [esp+124h+var_108], 0
0x88C85F: mov     [esp+124h+var_4], 0
0x88C86A: jz      loc_88C923
0x88C870: push    0
0x88C872: mov     ecx, esi
0x88C874: call    sub_897670
0x88C879: push    40h ; '@'
0x88C87B: call    sub_8896A0
0x88C880: add     esp, 4
0x88C883: mov     dword ptr [esp+124h+var_E0+0Ch], eax
0x88C887: test    eax, eax
0x88C889: mov     byte ptr [esp+124h+var_4], 1
0x88C891: jz      short loc_88C8A3
0x88C893: mov     ecx, [esp+124h+var_108]
0x88C897: push    ecx
0x88C898: mov     ecx, eax
0x88C89A: call    sub_8B96D0
0x88C89F: mov     esi, eax
0x88C8A1: jmp     short loc_88C8A5
0x88C8A3: xor     esi, esi
0x88C8A5: mov     ecx, [esp+124h+var_108]
0x88C8A9: mov     edx, [ecx]
0x88C8AB: mov     edx, [edx+8Ch]
0x88C8B1: lea     eax, [esp+124h+var_70]
0x88C8B8: push    eax
0x88C8B9: mov     byte ptr [esp+128h+var_4], 0
0x88C8C1: mov     edi, esi
0x88C8C3: call    edx
0x88C8C5: mov     ecx, [esp+124h+var_108]
0x88C8C9: mov     eax, [ecx]
0x88C8CB: mov     eax, [eax+90h]
0x88C8D1: lea     edx, [esp+124h+var_80]
0x88C8D8: push    edx
0x88C8D9: call    eax
0x88C8DB: movaps  xmm0, [esp+124h+var_70]
0x88C8E3: mov     edx, [esi]
0x88C8E5: mov     eax, [edx+94h]
0x88C8EB: movaps  xmmword ptr [esi+30h], xmm0
0x88C8EF: movaps  xmm0, [esp+124h+var_80]
0x88C8F7: push    offset stru_BA7A40
0x88C8FC: mov     ecx, esi
0x88C8FE: movaps  xmmword ptr [esi+20h], xmm0
0x88C902: call    eax
0x88C904: mov     edx, [esi]
0x88C906: mov     eax, [edx+98h]
0x88C90C: push    offset flt_B2F080
0x88C911: mov     ecx, esi
0x88C913: call    eax
0x88C915: mov     ecx, [esp+124h+var_FC]
0x88C919: push    esi
0x88C91A: call    sub_897670
0x88C91F: mov     esi, [esp+124h+var_FC]
0x88C923: push    0; a2
0x88C925: lea     ecx, [esp+128h+var_108]; this
0x88C929: call    NiSmartPointer_Set??
0x88C92E: lea     ecx, [esp+124h+var_108]; this
0x88C932: mov     [esp+124h+var_4], 0FFFFFFFFh
0x88C93D: call    sub_7016A0
0x88C942: test    edi, edi
0x88C944: jz      loc_88CB9C
0x88C94A: lea     ecx, [ebx+30h]
0x88C94D: push    ecx
0x88C94E: lea     edx, [esp+128h+var_60]
0x88C955: push    edx
0x88C956: call    sub_5398E0
0x88C95B: fld     dword ptr [edi+2Ch]
0x88C95E: fstp    [esp+12Ch+var_108]
0x88C962: movaps  xmm1, xmmword ptr [edi+30h]
0x88C966: fld     [esp+12Ch+var_108]
0x88C96A: lea     esi, [edi+20h]
0x88C96D: fld     st
0x88C96F: xorps   xmm3, xmm3
0x88C972: fld     qword ptr ds:0A3D0C0h
0x88C978: movaps  xmm6, xmm1
0x88C97B: fmul    st(1), st
0x88C97D: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x88C981: fxch    st(2)
0x88C983: movaps  xmm7, xmm1
0x88C986: shufps  xmm7, xmm1, 0C9h ; 'É'
0x88C98A: fmul    st, st(1)
0x88C98C: add     esp, 8
0x88C98F: lea     eax, [esp+124h+var_C0]
0x88C993: push    eax
0x88C994: fsub    qword ptr ds:0A2F928h
0x88C99A: lea     ecx, [esp+128h+var_60]
0x88C9A1: push    ecx
0x88C9A2: lea     ecx, [esp+12Ch+var_B0]
0x88C9A6: fstp    [esp+12Ch+var_108]
0x88C9AA: movss   xmm0, [esp+12Ch+var_108]
0x88C9B0: fldz
0x88C9B2: movss   xmm3, xmm0
0x88C9B6: movaps  xmm0, xmmword ptr [esi]
0x88C9B9: movaps  [esp+12Ch+var_D0], xmm0
0x88C9BE: fstp    dword ptr [esp+12Ch+var_D0+0Ch]
0x88C9C2: movaps  xmm2, [esp+12Ch+var_D0]
0x88C9C7: movaps  xmm0, xmm2
0x88C9CA: mulps   xmm0, xmm1
0x88C9CD: movaps  xmm4, xmm0
0x88C9D0: shufps  xmm4, xmm0, 55h ; 'U'
0x88C9D4: addss   xmm4, xmm0
0x88C9D8: movaps  xmm5, xmm0
0x88C9DB: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x88C9DF: addss   xmm5, xmm4
0x88C9E3: movss   dword ptr [esp+12Ch+var_D0], xmm5
0x88C9E9: fld     dword ptr [esp+12Ch+var_D0]
0x88C9ED: fmulp   st(2), st
0x88C9EF: xorps   xmm4, xmm4
0x88C9F2: fxch    st(1)
0x88C9F4: fstp    [esp+12Ch+var_108]
0x88C9F8: movss   xmm0, [esp+12Ch+var_108]
0x88C9FE: movss   xmm4, xmm0
0x88CA02: fstp    [esp+12Ch+var_108]
0x88CA06: movss   xmm5, [esp+12Ch+var_108]
0x88CA0C: xorps   xmm0, xmm0
0x88CA0F: movss   xmm0, xmm5
0x88CA13: movaps  xmm5, xmm2
0x88CA16: shufps  xmm5, xmm2, 0C9h ; 'É'
0x88CA1A: mulps   xmm5, xmm6
0x88CA1D: movaps  xmm6, xmm2
0x88CA20: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x88CA24: shufps  xmm0, xmm0, 0
0x88CA28: mulps   xmm6, xmm7
0x88CA2B: subps   xmm5, xmm6
0x88CA2E: mulps   xmm5, xmm0
0x88CA31: movaps  xmm0, xmm4
0x88CA34: shufps  xmm0, xmm4, 0
0x88CA38: mulps   xmm0, xmm2
0x88CA3B: movaps  xmm2, xmm3
0x88CA3E: shufps  xmm2, xmm3, 0
0x88CA42: mulps   xmm2, xmm1
0x88CA45: addps   xmm0, xmm2
0x88CA48: addps   xmm5, xmm0
0x88CA4B: movaps  [esp+12Ch+var_C0], xmm5
0x88CA50: call    sub_88FCC0
0x88CA55: lea     edx, [esp+124h+var_60]
0x88CA5C: push    edx
0x88CA5D: lea     ecx, [esp+128h+var_90]
0x88CA64: call    sub_8B1B40
0x88CA69: lea     eax, [esp+124h+var_90]
0x88CA70: push    eax
0x88CA71: push    esi
0x88CA72: lea     ecx, [esp+12Ch+var_A0]
0x88CA79: call    sub_889470
0x88CA7E: fld     dword ptr [esi+0Ch]
0x88CA81: fstp    [esp+124h+var_108]
0x88CA85: movaps  xmm2, [esp+124h+var_B0]
0x88CA8A: fld     [esp+124h+var_108]
0x88CA8E: xorps   xmm4, xmm4
0x88CA91: fld     st
0x88CA93: mov     ecx, [esp+124h+var_FC]
0x88CA97: fld     qword ptr ds:0A3D0C0h
0x88CA9D: movaps  xmm6, xmm2
0x88CAA0: fmul    st(1), st
0x88CAA2: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x88CAA6: fld     st(2)
0x88CAA8: movaps  xmm7, xmm2
0x88CAAB: shufps  xmm7, xmm2, 0C9h ; 'É'
0x88CAAF: fmulp   st(2), st
0x88CAB1: push    ecx
0x88CAB2: fxch    st(1)
0x88CAB4: mov     ecx, [esp+128h+var_100]
0x88CAB8: fsub    qword ptr ds:0A2F928h
0x88CABE: fstp    [esp+128h+var_108]
0x88CAC2: movss   xmm0, [esp+128h+var_108]
0x88CAC8: fldz
0x88CACA: movss   xmm4, xmm0
0x88CACE: movaps  xmm0, xmmword ptr [esi]
0x88CAD1: movaps  [esp+128h+var_D0], xmm0
0x88CAD6: fstp    dword ptr [esp+128h+var_D0+0Ch]
0x88CADA: movaps  xmm1, [esp+128h+var_D0]
0x88CADF: movaps  xmm0, xmm1
0x88CAE2: mulps   xmm0, xmm2
0x88CAE5: movaps  xmm3, xmm0
0x88CAE8: shufps  xmm3, xmm0, 55h ; 'U'
0x88CAEC: addss   xmm3, xmm0
0x88CAF0: movaps  xmm5, xmm0
0x88CAF3: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x88CAF7: addss   xmm5, xmm3
0x88CAFB: movss   dword ptr [esp+128h+var_D0], xmm5
0x88CB01: fld     dword ptr [esp+128h+var_D0]
0x88CB05: fmul    st, st(1)
0x88CB07: xorps   xmm3, xmm3
0x88CB0A: xorps   xmm5, xmm5
0x88CB0D: fstp    [esp+128h+var_108]
0x88CB11: movss   xmm0, [esp+128h+var_108]
0x88CB17: movss   xmm5, xmm0
0x88CB1B: fxch    st(1)
0x88CB1D: fchs
0x88CB1F: fmulp   st(1), st
0x88CB21: fstp    [esp+128h+var_108]
0x88CB25: movss   xmm0, [esp+128h+var_108]
0x88CB2B: movss   xmm3, xmm0
0x88CB2F: movaps  xmm0, xmm1
0x88CB32: shufps  xmm0, xmm1, 0C9h ; 'É'
0x88CB36: mulps   xmm0, xmm6
0x88CB39: movaps  xmm6, xmm1
0x88CB3C: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x88CB40: shufps  xmm3, xmm3, 0
0x88CB44: mulps   xmm6, xmm7
0x88CB47: subps   xmm0, xmm6
0x88CB4A: mulps   xmm0, xmm3
0x88CB4D: movaps  xmm3, xmm5
0x88CB50: shufps  xmm3, xmm5, 0
0x88CB54: mulps   xmm3, xmm1
0x88CB57: movaps  xmm1, xmm4
0x88CB5A: shufps  xmm1, xmm4, 0
0x88CB5E: mulps   xmm1, xmm2
0x88CB61: addps   xmm3, xmm1
0x88CB64: addps   xmm0, xmm3
0x88CB67: movaps  [esp+128h+var_C0], xmm0
0x88CB6C: movaps  xmmword ptr [edi+30h], xmm0
0x88CB70: movaps  xmm0, xmmword ptr [esp+128h+var_A0]
0x88CB78: movaps  xmmword ptr [esi], xmm0
0x88CB7B: call    sub_435CE0
0x88CB80: push    0
0x88CB82: mov     ecx, ebx
0x88CB84: call    sub_435CE0
0x88CB89: mov     dx, [ebx+18h]
0x88CB8D: and     dx, 0FFEFh
0x88CB92: or      dx, 6
0x88CB96: mov     [ebx+18h], dx
0x88CB9A: jmp     short loc_88CBE8
0x88CB9C: mov     ecx, [esp+124h+var_100]
0x88CBA0: push    esi
0x88CBA1: call    sub_435CE0
0x88CBA6: push    0
0x88CBA8: mov     ecx, ebx
0x88CBAA: call    sub_435CE0
0x88CBAF: lea     edi, [ebx+30h]
0x88CBB2: mov     ecx, 9
0x88CBB7: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x88CBBC: rep movsd
0x88CBBE: mov     eax, ds:0B3F9A8h
0x88CBC3: mov     [ebx+54h], eax
0x88CBC6: mov     ecx, ds:0B3F9ACh
0x88CBCC: mov     ax, [ebx+18h]
0x88CBD0: mov     [ebx+58h], ecx
0x88CBD3: mov     edx, ds:0B3F9B0h
0x88CBD9: and     ax, 0FFEFh
0x88CBDD: or      ax, 6
0x88CBE1: mov     [ebx+5Ch], edx
0x88CBE4: mov     [ebx+18h], ax
0x88CBE8: mov     edi, [esp+124h+var_100]
0x88CBEC: cmp     byte ptr ds:0BA7908h, 0
0x88CBF3: mov     ecx, [esp+124h+var_F4]
0x88CBF7: mov     [esp+124h+var_F0], ecx
0x88CBFB: mov     byte ptr [esp+124h+var_EC], 1
0x88CC00: jz      short loc_88CC18
0x88CC02: lea     edx, [esp+124h+var_F0]
0x88CC06: push    edx
0x88CC07: push    edi
0x88CC08: mov     [esp+12Ch+var_E8], 0Ah
0x88CC10: call    sub_88BBB0
0x88CC15: add     esp, 8
0x88CC18: mov     eax, [esp+124h+var_F8]
0x88CC1C: xor     ecx, ecx
0x88CC1E: mov     [esp+124h+var_E4], eax
0x88CC22: mov     eax, ds:0B2E300h
0x88CC27: cmp     eax, ecx
0x88CC29: mov     [esp+124h+var_E8], ecx
0x88CC2D: mov     dword ptr [esp+124h+var_E0], ecx
0x88CC31: mov     dword ptr [esp+124h+var_E0+4], ecx
0x88CC35: mov     dword ptr [esp+124h+var_E0+8], 1
0x88CC3D: jz      short loc_88CC4E
0x88CC3F: push    eax
0x88CC40: lea     ecx, [esp+128h+var_F0]
0x88CC44: push    ecx
0x88CC45: push    edi
0x88CC46: call    sub_88A7D0
0x88CC4B: add     esp, 0Ch
0x88CC4E: mov     al, [esp+124h+var_101]
0x88CC52: mov     ecx, dword ptr [esp+124h+var_C]
0x88CC59: mov     large fs:0, ecx
0x88CC60: pop     ecx
0x88CC61: pop     edi
0x88CC62: pop     esi
0x88CC63: pop     ebx
0x88CC64: mov     ecx, [esp+114h+var_14]
0x88CC6B: xor     ecx, esp
0x88CC6D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88CC72: mov     esp, ebp
0x88CC74: pop     ebp
0x88CC75: retn    8
