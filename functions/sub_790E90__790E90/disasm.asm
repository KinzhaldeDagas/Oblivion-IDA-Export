0x790E90: push    ebp
0x790E91: mov     ebp, esp
0x790E93: push    0FFFFFFFFh
0x790E95: push    offset SEH_790E90
0x790E9A: mov     eax, large fs:0
0x790EA0: push    eax
0x790EA1: sub     esp, 10h
0x790EA4: push    ebx
0x790EA5: push    esi
0x790EA6: push    edi
0x790EA7: mov     eax, ds:0B30AACh
0x790EAC: xor     eax, ebp
0x790EAE: push    eax
0x790EAF: lea     eax, [ebp+var_C]
0x790EB2: mov     large fs:0, eax
0x790EB8: mov     [ebp+var_10], esp
0x790EBB: mov     esi, ecx
0x790EBD: mov     eax, [ebp+arg_C]
0x790EC0: mov     ecx, [eax]
0x790EC2: mov     edx, [eax+4]
0x790EC5: mov     eax, [eax+8]
0x790EC8: mov     [ebp+var_1C], ecx
0x790ECB: mov     ecx, [esi+4]
0x790ECE: test    ecx, ecx
0x790ED0: mov     [ebp+var_18], edx
0x790ED3: mov     [ebp+var_14], eax
0x790ED6: jnz     short loc_790EDC
0x790ED8: xor     ebx, ebx
0x790EDA: jmp     short loc_790EF1
0x790EDC: mov     edx, [esi+0Ch]
0x790EDF: sub     edx, ecx
0x790EE1: mov     eax, 2AAAAAABh
0x790EE6: imul    edx
0x790EE8: sar     edx, 1
0x790EEA: mov     ebx, edx
0x790EEC: shr     ebx, 1Fh
0x790EEF: add     ebx, edx
0x790EF1: mov     edi, [ebp+arg_8]
0x790EF4: test    edi, edi
0x790EF6: jz      loc_791128
0x790EFC: test    ecx, ecx
0x790EFE: jnz     short loc_790F04
0x790F00: xor     eax, eax
0x790F02: jmp     short loc_790F19
0x790F04: mov     edx, [esi+8]
0x790F07: sub     edx, ecx
0x790F09: mov     eax, 2AAAAAABh
0x790F0E: imul    edx
0x790F10: sar     edx, 1
0x790F12: mov     eax, edx
0x790F14: shr     eax, 1Fh
0x790F17: add     eax, edx
0x790F19: mov     edx, 15555555h
0x790F1E: sub     edx, eax
0x790F20: cmp     edx, edi
0x790F22: jnb     short loc_790F29
0x790F24: call    sub_790B90
0x790F29: test    ecx, ecx
0x790F2B: jnz     short loc_790F31
0x790F2D: xor     eax, eax
0x790F2F: jmp     short loc_790F46
0x790F31: mov     edx, [esi+8]
0x790F34: sub     edx, ecx
0x790F36: mov     eax, 2AAAAAABh
0x790F3B: imul    edx
0x790F3D: sar     edx, 1
0x790F3F: mov     eax, edx
0x790F41: shr     eax, 1Fh
0x790F44: add     eax, edx
0x790F46: add     eax, edi
0x790F48: cmp     ebx, eax
0x790F4A: jnb     loc_79105E
0x790F50: mov     eax, ebx
0x790F52: shr     eax, 1
0x790F54: mov     edx, 15555555h
0x790F59: sub     edx, eax
0x790F5B: cmp     edx, ebx
0x790F5D: jnb     short loc_790F63
0x790F5F: xor     ebx, ebx
0x790F61: jmp     short loc_790F65
0x790F63: add     ebx, eax
0x790F65: test    ecx, ecx
0x790F67: jnz     short loc_790F6D
0x790F69: xor     eax, eax
0x790F6B: jmp     short loc_790F82
0x790F6D: mov     edx, [esi+8]
0x790F70: sub     edx, ecx
0x790F72: mov     eax, 2AAAAAABh
0x790F77: imul    edx
0x790F79: sar     edx, 1
0x790F7B: mov     eax, edx
0x790F7D: shr     eax, 1Fh
0x790F80: add     eax, edx
0x790F82: add     eax, edi
0x790F84: cmp     ebx, eax
0x790F86: jnb     short loc_790F93
0x790F88: mov     ecx, esi
0x790F8A: call    sub_6F1080
0x790F8F: mov     ebx, eax
0x790F91: add     ebx, edi
0x790F93: push    0
0x790F95: push    ebx; char *
0x790F96: call    sub_78FAA0
0x790F9B: mov     ecx, [esi+4]
0x790F9E: mov     byte ptr [ebp+arg_8], 0
0x790FA2: mov     edx, [ebp+arg_8]
0x790FA5: push    edx
0x790FA6: mov     [ebp+arg_C], eax
0x790FA9: mov     edx, [ebp+arg_C]
0x790FAC: push    edx
0x790FAD: push    esi
0x790FAE: push    eax
0x790FAF: mov     eax, [ebp+arg_4]
0x790FB2: push    eax
0x790FB3: push    ecx
0x790FB4: mov     [ebp+var_4], 0
0x790FBB: call    sub_6F11A0
0x790FC0: add     esp, 20h
0x790FC3: lea     ecx, [ebp+var_1C]
0x790FC6: push    ecx
0x790FC7: push    edi
0x790FC8: push    eax
0x790FC9: mov     ecx, esi
0x790FCB: call    sub_6F1380
0x790FD0: mov     ecx, [esi+8]
0x790FD3: mov     byte ptr [ebp+arg_8], 0
0x790FD7: mov     edx, [ebp+arg_8]
0x790FDA: push    edx
0x790FDB: mov     edx, [ebp+arg_C]
0x790FDE: push    edx
0x790FDF: push    esi
0x790FE0: push    eax
0x790FE1: mov     eax, [ebp+arg_4]
0x790FE4: push    ecx
0x790FE5: push    eax
0x790FE6: call    sub_6F11A0
0x790FEB: mov     ecx, [esi+4]
0x790FEE: add     esp, 18h
0x790FF1: test    ecx, ecx
0x790FF3: jnz     short loc_790FF9
0x790FF5: xor     eax, eax
0x790FF7: jmp     short loc_79100E
0x790FF9: mov     edx, [esi+8]
0x790FFC: sub     edx, ecx
0x790FFE: mov     eax, 2AAAAAABh
0x791003: imul    edx
0x791005: sar     edx, 1
0x791007: mov     eax, edx
0x791009: shr     eax, 1Fh
0x79100C: add     eax, edx
0x79100E: add     edi, eax
0x791010: test    ecx, ecx
0x791012: jz      short loc_79101D
0x791014: push    ecx
0x791015: call    FormHeapFree
0x79101A: add     esp, 4
0x79101D: mov     eax, [ebp+arg_C]
0x791020: lea     ecx, [ebx+ebx*2]
0x791023: lea     edx, [eax+ecx*4]
0x791026: lea     ecx, [edi+edi*2]
0x791029: mov     [esi+0Ch], edx
0x79102C: lea     edx, [eax+ecx*4]
0x79102F: mov     [esi+8], edx
0x791032: mov     [esi+4], eax
0x791035: mov     ecx, [ebp+var_C]
0x791038: mov     large fs:0, ecx
0x79103F: pop     ecx
0x791040: pop     edi
0x791041: pop     esi
0x791042: pop     ebx
0x791043: mov     esp, ebp
0x791045: pop     ebp
0x791046: retn    10h
0x791049: mov     eax, [ebp+arg_C]
0x79104C: push    eax
0x79104D: call    FormHeapFree
0x791052: add     esp, 4
0x791055: push    0
0x791057: push    0
0x791059: call    ThrowException??
0x79105E: mov     ecx, [esi+8]
0x791061: mov     ebx, [ebp+arg_4]
0x791064: mov     edx, ecx
0x791066: sub     edx, ebx
0x791068: mov     eax, 2AAAAAABh
0x79106D: imul    edx
0x79106F: sar     edx, 1
0x791071: mov     eax, edx
0x791073: shr     eax, 1Fh
0x791076: add     eax, edx
0x791078: cmp     eax, edi
0x79107A: mov     [ebp+arg_C], ecx
0x79107D: jnb     short loc_7910EF
0x79107F: lea     eax, [edi+edi*2]
0x791082: add     eax, eax
0x791084: add     eax, eax
0x791086: mov     [ebp+arg_C], eax
0x791089: add     eax, ebx
0x79108B: push    eax
0x79108C: push    ecx
0x79108D: push    ebx
0x79108E: mov     ecx, esi
0x791090: call    sub_6F15A0
0x791095: mov     ecx, [esi+8]
0x791098: lea     edx, [ebp+var_1C]
0x79109B: push    edx
0x79109C: mov     edx, ecx
0x79109E: sub     edx, ebx
0x7910A0: mov     eax, 2AAAAAABh
0x7910A5: imul    edx
0x7910A7: sar     edx, 1
0x7910A9: mov     eax, edx
0x7910AB: shr     eax, 1Fh
0x7910AE: add     eax, edx
0x7910B0: sub     edi, eax
0x7910B2: push    edi
0x7910B3: push    ecx
0x7910B4: mov     ecx, esi
0x7910B6: mov     [ebp+var_4], 2
0x7910BD: call    sub_6F1380
0x7910C2: mov     eax, [ebp+arg_C]
0x7910C5: add     [esi+8], eax
0x7910C8: mov     esi, [esi+8]
0x7910CB: lea     ecx, [ebp+var_1C]
0x7910CE: push    ecx
0x7910CF: sub     esi, eax
0x7910D1: push    esi
0x7910D2: push    ebx
0x7910D3: call    sub_790460
0x7910D8: add     esp, 0Ch
0x7910DB: mov     ecx, [ebp+var_C]
0x7910DE: mov     large fs:0, ecx
0x7910E5: pop     ecx
0x7910E6: pop     edi
0x7910E7: pop     esi
0x7910E8: pop     ebx
0x7910E9: mov     esp, ebp
0x7910EB: pop     ebp
0x7910EC: retn    10h
0x7910EF: lea     edi, [edi+edi*2]
0x7910F2: push    ecx
0x7910F3: add     edi, edi
0x7910F5: mov     eax, ecx
0x7910F7: add     edi, edi
0x7910F9: sub     eax, edi
0x7910FB: push    ecx
0x7910FC: push    eax
0x7910FD: mov     ecx, esi
0x7910FF: mov     [ebp+arg_8], eax
0x791102: call    sub_6F15A0
0x791107: mov     edx, [ebp+arg_C]
0x79110A: mov     [esi+8], eax
0x79110D: mov     eax, [ebp+arg_8]
0x791110: push    edx
0x791111: push    eax
0x791112: push    ebx
0x791113: call    sub_79AAA0
0x791118: lea     ecx, [ebp+var_1C]
0x79111B: push    ecx
0x79111C: add     edi, ebx
0x79111E: push    edi
0x79111F: push    ebx
0x791120: call    sub_790460
0x791125: add     esp, 18h
0x791128: mov     ecx, [ebp+var_C]
0x79112B: mov     large fs:0, ecx
0x791132: pop     ecx
0x791133: pop     edi
0x791134: pop     esi
0x791135: pop     ebx
0x791136: mov     esp, ebp
0x791138: pop     ebp
0x791139: retn    10h
