0x698C00: push    0FFFFFFFFh
0x698C02: push    offset ??1MagicBoltProjectile@@UAE@XZ_SEH
0x698C07: mov     eax, large fs:0
0x698C0D: push    eax
0x698C0E: sub     esp, 0Ch
0x698C11: push    ebx
0x698C12: push    ebp
0x698C13: push    esi
0x698C14: push    edi
0x698C15: mov     eax, ds:0B30AACh
0x698C1A: xor     eax, esp
0x698C1C: push    eax
0x698C1D: lea     eax, [esp+2Ch+var_C]
0x698C21: mov     large fs:0, eax
0x698C27: mov     esi, ecx
0x698C29: mov     [esp+2Ch+var_10], esi
0x698C2D: mov     dword ptr [esi], offset ??_7MagicBoltProjectile@@6BMagicBoltProjectile@@@; const MagicBoltProjectile::`vftable'{for `MagicBoltProjectile'}
0x698C33: mov     dword ptr [esi+18h], offset ??_7MagicBoltProjectile@@6BTESChildCell@@@; const MagicBoltProjectile::`vftable'{for `TESChildCell'}
0x698C3A: mov     eax, ds:0B333C4h
0x698C3F: xor     ebx, ebx
0x698C41: cmp     eax, ebx
0x698C43: mov     [esp+2Ch+var_4], 5
0x698C4B: jz      short loc_698C52
0x698C4D: add     eax, 5Ch ; '\'
0x698C50: jmp     short loc_698C54
0x698C52: xor     eax, eax
0x698C54: cmp     [esi+68h], eax
0x698C57: jz      short loc_698C84
0x698C59: fld     dword ptr ds:0B38110h
0x698C5F: fcom    qword ptr ds:0A2FC68h
0x698C65: fnstsw  ax
0x698C67: test    ah, 5
0x698C6A: jp      short loc_698C70
0x698C6C: fstp    st
0x698C6E: fldz
0x698C70: fstp    [esp+2Ch+var_18]
0x698C74: fld     dword ptr ds:0B3C0D0h
0x698C7A: fsub    [esp+2Ch+var_18]
0x698C7E: fstp    dword ptr ds:0B3C0D0h
0x698C84: push    esi
0x698C85: mov     ecx, offset ActorProcessManager_ptr.unk4C
0x698C8A: call    BSSimpleList_Remove
0x698C8F: mov     eax, [esi+7Ch]
0x698C92: mov     ecx, [esi+88h]
0x698C98: push    eax
0x698C99: push    ecx
0x698C9A: call    sub_7F4420
0x698C9F: mov     edi, [esi+7Ch]
0x698CA2: mov     ebp, ds:0A2807Ch
0x698CA8: add     esp, 8
0x698CAB: cmp     edi, ebx
0x698CAD: jz      short loc_698CCA
0x698CAF: lea     eax, [edi+4]
0x698CB2: push    eax; lpAddend
0x698CB3: call    ebp ; InterlockedDecrement
0x698CB5: test    eax, eax
0x698CB7: jnz     short loc_698CC7
0x698CB9: cmp     edi, ebx
0x698CBB: jz      short loc_698CC7
0x698CBD: mov     edx, [edi]
0x698CBF: mov     eax, [edx]
0x698CC1: push    1
0x698CC3: mov     ecx, edi
0x698CC5: call    eax
0x698CC7: mov     [esi+7Ch], ebx
0x698CCA: mov     eax, [esi+88h]
0x698CD0: cmp     eax, ebx
0x698CD2: jz      short loc_698D0D
0x698CD4: mov     ecx, [eax+1Ch]
0x698CD7: cmp     ecx, ebx
0x698CD9: jz      short loc_698D0D
0x698CDB: mov     edx, [ecx]
0x698CDD: mov     edx, [edx+88h]
0x698CE3: push    eax
0x698CE4: lea     eax, [esp+30h+var_18]
0x698CE8: push    eax
0x698CE9: call    edx
0x698CEB: mov     eax, [esp+2Ch+var_18]
0x698CEF: cmp     eax, ebx
0x698CF1: jz      short loc_698D0D
0x698CF3: mov     edi, eax
0x698CF5: add     eax, 4
0x698CF8: push    eax; lpAddend
0x698CF9: call    ebp ; InterlockedDecrement
0x698CFB: test    eax, eax
0x698CFD: jnz     short loc_698D0D
0x698CFF: cmp     edi, ebx
0x698D01: jz      short loc_698D0D
0x698D03: mov     eax, [edi]
0x698D05: mov     edx, [eax]
0x698D07: push    1
0x698D09: mov     ecx, edi
0x698D0B: call    edx
0x698D0D: mov     edi, [esi+94h]
0x698D13: cmp     edi, ebx
0x698D15: jz      short loc_698D35
0x698D17: lea     eax, [edi+4]
0x698D1A: push    eax; lpAddend
0x698D1B: call    ebp ; InterlockedDecrement
0x698D1D: test    eax, eax
0x698D1F: jnz     short loc_698D2F
0x698D21: cmp     edi, ebx
0x698D23: jz      short loc_698D2F
0x698D25: mov     edx, [edi]
0x698D27: mov     eax, [edx]
0x698D29: push    1
0x698D2B: mov     ecx, edi
0x698D2D: call    eax
0x698D2F: mov     [esi+94h], ebx
0x698D35: mov     edi, [esi+88h]
0x698D3B: cmp     edi, ebx
0x698D3D: jz      short loc_698D5D
0x698D3F: lea     ecx, [edi+4]
0x698D42: push    ecx; lpAddend
0x698D43: call    ebp ; InterlockedDecrement
0x698D45: test    eax, eax
0x698D47: jnz     short loc_698D57
0x698D49: cmp     edi, ebx
0x698D4B: jz      short loc_698D57
0x698D4D: mov     edx, [edi]
0x698D4F: mov     eax, [edx]
0x698D51: push    1
0x698D53: mov     ecx, edi
0x698D55: call    eax
0x698D57: mov     [esi+88h], ebx
0x698D5D: mov     edi, [esi+8Ch]
0x698D63: cmp     edi, ebx
0x698D65: jz      short loc_698D85
0x698D67: lea     ecx, [edi+4]
0x698D6A: push    ecx; lpAddend
0x698D6B: call    ebp ; InterlockedDecrement
0x698D6D: test    eax, eax
0x698D6F: jnz     short loc_698D7F
0x698D71: cmp     edi, ebx
0x698D73: jz      short loc_698D7F
0x698D75: mov     edx, [edi]
0x698D77: mov     eax, [edx]
0x698D79: push    1
0x698D7B: mov     ecx, edi
0x698D7D: call    eax
0x698D7F: mov     [esi+8Ch], ebx
0x698D85: mov     edi, [esi+90h]
0x698D8B: cmp     edi, ebx
0x698D8D: jz      short loc_698DAD
0x698D8F: lea     ecx, [edi+4]
0x698D92: push    ecx; lpAddend
0x698D93: call    ebp ; InterlockedDecrement
0x698D95: test    eax, eax
0x698D97: jnz     short loc_698DA7
0x698D99: cmp     edi, ebx
0x698D9B: jz      short loc_698DA7
0x698D9D: mov     edx, [edi]
0x698D9F: mov     eax, [edx]
0x698DA1: push    1
0x698DA3: mov     ecx, edi
0x698DA5: call    eax
0x698DA7: mov     [esi+90h], ebx
0x698DAD: cmp     [esi+84h], ebx
0x698DB3: jz      loc_698F14
0x698DB9: lea     esp, [esp+0]
0x698DC0: mov     eax, [esi+84h]
0x698DC6: mov     ecx, [eax+1Ch]
0x698DC9: mov     [esp+2Ch+var_14], ecx
0x698DCD: mov     ecx, [eax]
0x698DCF: mov     eax, [eax+4]
0x698DD2: push    ecx
0x698DD3: push    eax
0x698DD4: call    sub_7F4420
0x698DD9: mov     ebp, [esi+84h]
0x698DDF: mov     edi, [ebp+0]
0x698DE2: add     esp, 8
0x698DE5: cmp     edi, ebx
0x698DE7: jz      short loc_698E08
0x698DE9: lea     edx, [edi+4]
0x698DEC: push    edx; lpAddend
0x698DED: call    dword ptr ds:0A2807Ch
0x698DF3: test    eax, eax
0x698DF5: jnz     short loc_698E05
0x698DF7: cmp     edi, ebx
0x698DF9: jz      short loc_698E05
0x698DFB: mov     eax, [edi]
0x698DFD: mov     edx, [eax]
0x698DFF: push    1
0x698E01: mov     ecx, edi
0x698E03: call    edx
0x698E05: mov     [ebp+0], ebx
0x698E08: mov     eax, [esi+84h]
0x698E0E: mov     ecx, [eax+4]
0x698E11: cmp     ecx, ebx
0x698E13: jz      short loc_698E55
0x698E15: mov     ecx, [ecx+1Ch]
0x698E18: cmp     ecx, ebx
0x698E1A: jz      short loc_698E55
0x698E1C: mov     eax, [eax+4]
0x698E1F: mov     edx, [ecx]
0x698E21: mov     edx, [edx+88h]
0x698E27: push    eax
0x698E28: lea     eax, [esp+30h+var_18]
0x698E2C: push    eax
0x698E2D: call    edx
0x698E2F: mov     eax, [esp+2Ch+var_18]
0x698E33: cmp     eax, ebx
0x698E35: jz      short loc_698E55
0x698E37: mov     edi, eax
0x698E39: add     eax, 4
0x698E3C: push    eax; lpAddend
0x698E3D: call    dword ptr ds:0A2807Ch
0x698E43: test    eax, eax
0x698E45: jnz     short loc_698E55
0x698E47: cmp     edi, ebx
0x698E49: jz      short loc_698E55
0x698E4B: mov     eax, [edi]
0x698E4D: mov     edx, [eax]
0x698E4F: push    1
0x698E51: mov     ecx, edi
0x698E53: call    edx
0x698E55: mov     edi, [esi+84h]
0x698E5B: mov     ebp, [edi+4]
0x698E5E: add     edi, 4
0x698E61: cmp     ebp, ebx
0x698E63: jz      short loc_698E84
0x698E65: lea     eax, [ebp+4]
0x698E68: push    eax; lpAddend
0x698E69: call    dword ptr ds:0A2807Ch
0x698E6F: test    eax, eax
0x698E71: jnz     short loc_698E82
0x698E73: cmp     ebp, ebx
0x698E75: jz      short loc_698E82
0x698E77: mov     edx, [ebp+0]
0x698E7A: mov     eax, [edx]
0x698E7C: push    1
0x698E7E: mov     ecx, ebp
0x698E80: call    eax
0x698E82: mov     [edi], ebx
0x698E84: mov     edi, [esi+84h]
0x698E8A: mov     ebp, [edi+14h]
0x698E8D: add     edi, 14h
0x698E90: cmp     ebp, ebx
0x698E92: jz      short loc_698EB3
0x698E94: lea     ecx, [ebp+4]
0x698E97: push    ecx; lpAddend
0x698E98: call    dword ptr ds:0A2807Ch
0x698E9E: test    eax, eax
0x698EA0: jnz     short loc_698EB1
0x698EA2: cmp     ebp, ebx
0x698EA4: jz      short loc_698EB1
0x698EA6: mov     edx, [ebp+0]
0x698EA9: mov     eax, [edx]
0x698EAB: push    1
0x698EAD: mov     ecx, ebp
0x698EAF: call    eax
0x698EB1: mov     [edi], ebx
0x698EB3: mov     edi, [esi+84h]
0x698EB9: mov     ebp, [edi+18h]
0x698EBC: add     edi, 18h
0x698EBF: cmp     ebp, ebx
0x698EC1: jz      short loc_698EE2
0x698EC3: lea     ecx, [ebp+4]
0x698EC6: push    ecx; lpAddend
0x698EC7: call    dword ptr ds:0A2807Ch
0x698ECD: test    eax, eax
0x698ECF: jnz     short loc_698EE0
0x698ED1: cmp     ebp, ebx
0x698ED3: jz      short loc_698EE0
0x698ED5: mov     edx, [ebp+0]
0x698ED8: mov     eax, [edx]
0x698EDA: push    1
0x698EDC: mov     ecx, ebp
0x698EDE: call    eax
0x698EE0: mov     [edi], ebx
0x698EE2: mov     edi, [esi+84h]
0x698EE8: cmp     edi, ebx
0x698EEA: jz      short loc_698EFC
0x698EEC: mov     ecx, edi
0x698EEE: call    sub_696C00
0x698EF3: push    edi
0x698EF4: call    FormHeapFree
0x698EF9: add     esp, 4
0x698EFC: mov     ecx, [esp+2Ch+var_14]
0x698F00: cmp     ecx, ebx
0x698F02: mov     [esi+84h], ecx
0x698F08: jnz     loc_698DC0
0x698F0E: mov     ebp, ds:0A2807Ch
0x698F14: mov     ecx, [esi+9Ch]
0x698F1A: cmp     ecx, ebx
0x698F1C: jz      short loc_698F43
0x698F1E: call    sub_6B7240
0x698F23: mov     edi, [esi+9Ch]
0x698F29: cmp     edi, ebx
0x698F2B: jz      short loc_698F43
0x698F2D: mov     ecx, edi; this
0x698F2F: call    sub_6B73E0
0x698F34: push    edi
0x698F35: call    FormHeapFree
0x698F3A: add     esp, 4
0x698F3D: mov     [esi+9Ch], ebx
0x698F43: mov     edi, [esi+94h]
0x698F49: cmp     edi, ebx
0x698F4B: mov     byte ptr [esp+2Ch+var_4], 4
0x698F50: jz      short loc_698F6A
0x698F52: lea     edx, [edi+4]
0x698F55: push    edx; lpAddend
0x698F56: call    ebp ; InterlockedDecrement
0x698F58: test    eax, eax
0x698F5A: jnz     short loc_698F6A
0x698F5C: cmp     edi, ebx
0x698F5E: jz      short loc_698F6A
0x698F60: mov     eax, [edi]
0x698F62: mov     edx, [eax]
0x698F64: push    1
0x698F66: mov     ecx, edi
0x698F68: call    edx
0x698F6A: mov     edi, [esi+90h]
0x698F70: cmp     edi, ebx
0x698F72: mov     byte ptr [esp+2Ch+var_4], 3
0x698F77: jz      short loc_698F91
0x698F79: lea     eax, [edi+4]
0x698F7C: push    eax; lpAddend
0x698F7D: call    ebp ; InterlockedDecrement
0x698F7F: test    eax, eax
0x698F81: jnz     short loc_698F91
0x698F83: cmp     edi, ebx
0x698F85: jz      short loc_698F91
0x698F87: mov     edx, [edi]
0x698F89: mov     eax, [edx]
0x698F8B: push    1
0x698F8D: mov     ecx, edi
0x698F8F: call    eax
0x698F91: mov     edi, [esi+8Ch]
0x698F97: cmp     edi, ebx
0x698F99: mov     byte ptr [esp+2Ch+var_4], 2
0x698F9E: jz      short loc_698FB8
0x698FA0: lea     ecx, [edi+4]
0x698FA3: push    ecx; lpAddend
0x698FA4: call    ebp ; InterlockedDecrement
0x698FA6: test    eax, eax
0x698FA8: jnz     short loc_698FB8
0x698FAA: cmp     edi, ebx
0x698FAC: jz      short loc_698FB8
0x698FAE: mov     edx, [edi]
0x698FB0: mov     eax, [edx]
0x698FB2: push    1
0x698FB4: mov     ecx, edi
0x698FB6: call    eax
0x698FB8: mov     edi, [esi+88h]
0x698FBE: cmp     edi, ebx
0x698FC0: mov     byte ptr [esp+2Ch+var_4], 1
0x698FC5: jz      short loc_698FDF
0x698FC7: lea     ecx, [edi+4]
0x698FCA: push    ecx; lpAddend
0x698FCB: call    ebp ; InterlockedDecrement
0x698FCD: test    eax, eax
0x698FCF: jnz     short loc_698FDF
0x698FD1: cmp     edi, ebx
0x698FD3: jz      short loc_698FDF
0x698FD5: mov     edx, [edi]
0x698FD7: mov     eax, [edx]
0x698FD9: push    1
0x698FDB: mov     ecx, edi
0x698FDD: call    eax
0x698FDF: mov     edi, [esi+7Ch]
0x698FE2: cmp     edi, ebx
0x698FE4: mov     byte ptr [esp+2Ch+var_4], bl
0x698FE8: jz      short loc_699002
0x698FEA: lea     ecx, [edi+4]
0x698FED: push    ecx; lpAddend
0x698FEE: call    ebp ; InterlockedDecrement
0x698FF0: test    eax, eax
0x698FF2: jnz     short loc_699002
0x698FF4: cmp     edi, ebx
0x698FF6: jz      short loc_699002
0x698FF8: mov     edx, [edi]
0x698FFA: mov     eax, [edx]
0x698FFC: push    1
0x698FFE: mov     ecx, edi
0x699000: call    eax
0x699002: mov     ecx, esi
0x699004: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x69900C: call    sub_69FA60
0x699011: mov     ecx, dword ptr [esp+2Ch+var_C]
0x699015: mov     large fs:0, ecx
0x69901C: pop     ecx
0x69901D: pop     edi
0x69901E: pop     esi
0x69901F: pop     ebp
0x699020: pop     ebx
0x699021: add     esp, 18h
0x699024: retn
