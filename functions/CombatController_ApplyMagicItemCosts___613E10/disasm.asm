0x613E10: push    ebx
0x613E11: push    ebp
0x613E12: mov     ebp, [esp+8+arg_0]
0x613E16: xor     ebx, ebx
0x613E18: cmp     ebp, ebx
0x613E1A: push    esi
0x613E1B: mov     esi, ecx
0x613E1D: jz      loc_614181
0x613E23: mov     eax, [ebp+0]
0x613E26: mov     edx, [eax+18h]
0x613E29: push    edi
0x613E2A: mov     ecx, ebp
0x613E2C: call    edx
0x613E2E: sub     eax, 6
0x613E31: jz      loc_613F45
0x613E37: sub     eax, 1
0x613E3A: jnz     loc_614180
0x613E40: mov     eax, [esi+7Ch]
0x613E43: cmp     eax, ebx
0x613E45: jz      short loc_613E56
0x613E47: cmp     [eax], ebp
0x613E49: jnz     short loc_613E56
0x613E4B: push    eax
0x613E4C: mov     ecx, esi
0x613E4E: call    sub_613D60
0x613E53: mov     [esi+7Ch], ebx
0x613E56: mov     eax, [esi+80h]
0x613E5C: cmp     eax, ebx
0x613E5E: jz      short loc_613E72
0x613E60: cmp     [eax], ebp
0x613E62: jnz     short loc_613E72
0x613E64: push    eax
0x613E65: mov     ecx, esi
0x613E67: call    sub_613D60
0x613E6C: mov     [esi+80h], ebx
0x613E72: mov     edi, [esi+84h]
0x613E78: cmp     edi, ebx
0x613E7A: jz      short loc_613E8E
0x613E7C: cmp     [edi], ebp
0x613E7E: jnz     short loc_613E8E
0x613E80: push    edi
0x613E81: mov     ecx, esi
0x613E83: call    sub_613D60
0x613E88: mov     [esi+84h], ebx
0x613E8E: mov     eax, [esi+88h]
0x613E94: cmp     eax, ebx
0x613E96: jz      short loc_613EAA
0x613E98: cmp     edi, eax
0x613E9A: jnz     short loc_613EAA
0x613E9C: cmp     [esi+84h], ebx
0x613EA2: jnz     short loc_613EAA
0x613EA4: mov     [esi+88h], ebx
0x613EAA: mov     eax, [esi+88h]
0x613EB0: cmp     eax, ebx
0x613EB2: jz      short loc_613EC6
0x613EB4: cmp     [eax], ebp
0x613EB6: jnz     short loc_613EC6
0x613EB8: push    eax
0x613EB9: mov     ecx, esi
0x613EBB: call    sub_613D60
0x613EC0: mov     [esi+88h], ebx
0x613EC6: mov     eax, [esi+90h]
0x613ECC: cmp     eax, ebx
0x613ECE: jz      short loc_613EE2
0x613ED0: cmp     [eax], ebp
0x613ED2: jnz     short loc_613EE2
0x613ED4: push    eax
0x613ED5: mov     ecx, esi
0x613ED7: call    sub_613D60
0x613EDC: mov     [esi+90h], ebx
0x613EE2: mov     eax, [esi+9Ch]
0x613EE8: cmp     eax, ebx
0x613EEA: jz      short loc_613EFE
0x613EEC: cmp     [eax], ebp
0x613EEE: jnz     short loc_613EFE
0x613EF0: push    eax
0x613EF1: mov     ecx, esi
0x613EF3: call    sub_613D60
0x613EF8: mov     [esi+9Ch], ebx
0x613EFE: mov     eax, [esi+98h]
0x613F04: cmp     eax, ebx
0x613F06: jz      short loc_613F1A
0x613F08: cmp     [eax], ebp
0x613F0A: jnz     short loc_613F1A
0x613F0C: push    eax
0x613F0D: mov     ecx, esi
0x613F0F: call    sub_613D60
0x613F14: mov     [esi+98h], ebx
0x613F1A: mov     eax, [esi+94h]
0x613F20: cmp     eax, ebx
0x613F22: jz      loc_614180
0x613F28: cmp     [eax], ebp
0x613F2A: jnz     loc_614180
0x613F30: push    eax
0x613F31: mov     ecx, esi
0x613F33: call    sub_613D60
0x613F38: pop     edi
0x613F39: mov     [esi+94h], ebx
0x613F3F: pop     esi
0x613F40: pop     ebp
0x613F41: pop     ebx
0x613F42: retn    4
0x613F45: mov     eax, [esi+7Ch]
0x613F48: cmp     eax, ebx
0x613F4A: jz      short loc_613F81
0x613F4C: cmp     [eax], ebp
0x613F4E: jnz     short loc_613F81
0x613F50: mov     eax, [eax+4]
0x613F53: cmp     eax, ebx
0x613F55: jz      short loc_613F81
0x613F57: mov     eax, [eax+8]
0x613F5A: push    ebx; int
0x613F5B: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x613F60: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x613F65: push    ebx; int
0x613F66: push    eax; void *
0x613F67: call    OblivionDynamicCast
0x613F6C: add     esp, 14h
0x613F6F: test    eax, eax
0x613F71: jz      short loc_613F81
0x613F73: mov     eax, [esi+7Ch]
0x613F76: push    eax
0x613F77: mov     ecx, esi
0x613F79: call    sub_613D60
0x613F7E: mov     [esi+7Ch], ebx
0x613F81: mov     eax, [esi+80h]
0x613F87: cmp     eax, ebx
0x613F89: jz      short loc_613FC6
0x613F8B: cmp     [eax], ebp
0x613F8D: jnz     short loc_613FC6
0x613F8F: mov     eax, [eax+4]
0x613F92: cmp     eax, ebx
0x613F94: jz      short loc_613FC6
0x613F96: mov     eax, [eax+8]
0x613F99: push    ebx; int
0x613F9A: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x613F9F: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x613FA4: push    ebx; int
0x613FA5: push    eax; void *
0x613FA6: call    OblivionDynamicCast
0x613FAB: add     esp, 14h
0x613FAE: test    eax, eax
0x613FB0: jz      short loc_613FC6
0x613FB2: mov     ecx, [esi+80h]
0x613FB8: push    ecx
0x613FB9: mov     ecx, esi
0x613FBB: call    sub_613D60
0x613FC0: mov     [esi+80h], ebx
0x613FC6: mov     edi, [esi+84h]
0x613FCC: cmp     edi, ebx
0x613FCE: jz      short loc_61400B
0x613FD0: cmp     [edi], ebp
0x613FD2: jnz     short loc_61400B
0x613FD4: mov     eax, [edi+4]
0x613FD7: cmp     eax, ebx
0x613FD9: jz      short loc_61400B
0x613FDB: mov     eax, [eax+8]
0x613FDE: push    ebx; int
0x613FDF: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x613FE4: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x613FE9: push    ebx; int
0x613FEA: push    eax; void *
0x613FEB: call    OblivionDynamicCast
0x613FF0: add     esp, 14h
0x613FF3: test    eax, eax
0x613FF5: jz      short loc_61400B
0x613FF7: mov     edx, [esi+84h]
0x613FFD: push    edx
0x613FFE: mov     ecx, esi
0x614000: call    sub_613D60
0x614005: mov     [esi+84h], ebx
0x61400B: mov     eax, [esi+88h]
0x614011: cmp     eax, ebx
0x614013: jz      short loc_614027
0x614015: cmp     edi, eax
0x614017: jnz     short loc_614027
0x614019: cmp     [esi+84h], ebx
0x61401F: jnz     short loc_614027
0x614021: mov     [esi+88h], ebx
0x614027: mov     eax, [esi+88h]
0x61402D: cmp     eax, ebx
0x61402F: jz      short loc_61406C
0x614031: cmp     [eax], ebp
0x614033: jnz     short loc_61406C
0x614035: mov     eax, [eax+4]
0x614038: cmp     eax, ebx
0x61403A: jz      short loc_61406C
0x61403C: mov     eax, [eax+8]
0x61403F: push    ebx; int
0x614040: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x614045: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61404A: push    ebx; int
0x61404B: push    eax; void *
0x61404C: call    OblivionDynamicCast
0x614051: add     esp, 14h
0x614054: test    eax, eax
0x614056: jz      short loc_61406C
0x614058: mov     eax, [esi+88h]
0x61405E: push    eax
0x61405F: mov     ecx, esi
0x614061: call    sub_613D60
0x614066: mov     [esi+88h], ebx
0x61406C: mov     eax, [esi+90h]
0x614072: cmp     eax, ebx
0x614074: jz      short loc_6140B1
0x614076: cmp     [eax], ebp
0x614078: jnz     short loc_6140B1
0x61407A: mov     eax, [eax+4]
0x61407D: cmp     eax, ebx
0x61407F: jz      short loc_6140B1
0x614081: mov     eax, [eax+8]
0x614084: push    ebx; int
0x614085: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x61408A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61408F: push    ebx; int
0x614090: push    eax; void *
0x614091: call    OblivionDynamicCast
0x614096: add     esp, 14h
0x614099: test    eax, eax
0x61409B: jz      short loc_6140B1
0x61409D: mov     ecx, [esi+90h]
0x6140A3: push    ecx
0x6140A4: mov     ecx, esi
0x6140A6: call    sub_613D60
0x6140AB: mov     [esi+90h], ebx
0x6140B1: mov     eax, [esi+9Ch]
0x6140B7: cmp     eax, ebx
0x6140B9: jz      short loc_6140F6
0x6140BB: cmp     [eax], ebp
0x6140BD: jnz     short loc_6140F6
0x6140BF: mov     eax, [eax+4]
0x6140C2: cmp     eax, ebx
0x6140C4: jz      short loc_6140F6
0x6140C6: mov     eax, [eax+8]
0x6140C9: push    ebx; int
0x6140CA: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x6140CF: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6140D4: push    ebx; int
0x6140D5: push    eax; void *
0x6140D6: call    OblivionDynamicCast
0x6140DB: add     esp, 14h
0x6140DE: test    eax, eax
0x6140E0: jz      short loc_6140F6
0x6140E2: mov     edx, [esi+9Ch]
0x6140E8: push    edx
0x6140E9: mov     ecx, esi
0x6140EB: call    sub_613D60
0x6140F0: mov     [esi+9Ch], ebx
0x6140F6: mov     eax, [esi+98h]
0x6140FC: cmp     eax, ebx
0x6140FE: jz      short loc_61413B
0x614100: cmp     [eax], ebp
0x614102: jnz     short loc_61413B
0x614104: mov     eax, [eax+4]
0x614107: cmp     eax, ebx
0x614109: jz      short loc_61413B
0x61410B: mov     eax, [eax+8]
0x61410E: push    ebx; int
0x61410F: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x614114: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x614119: push    ebx; int
0x61411A: push    eax; void *
0x61411B: call    OblivionDynamicCast
0x614120: add     esp, 14h
0x614123: test    eax, eax
0x614125: jz      short loc_61413B
0x614127: mov     eax, [esi+98h]
0x61412D: push    eax
0x61412E: mov     ecx, esi
0x614130: call    sub_613D60
0x614135: mov     [esi+98h], ebx
0x61413B: mov     eax, [esi+94h]
0x614141: cmp     eax, ebx
0x614143: jz      short loc_614180
0x614145: cmp     [eax], ebp
0x614147: jnz     short loc_614180
0x614149: mov     eax, [eax+4]
0x61414C: cmp     eax, ebx
0x61414E: jz      short loc_614180
0x614150: mov     eax, [eax+8]
0x614153: push    ebx; int
0x614154: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x614159: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61415E: push    ebx; int
0x61415F: push    eax; void *
0x614160: call    OblivionDynamicCast
0x614165: add     esp, 14h
0x614168: test    eax, eax
0x61416A: jz      short loc_614180
0x61416C: mov     ecx, [esi+94h]
0x614172: push    ecx
0x614173: mov     ecx, esi
0x614175: call    sub_613D60
0x61417A: mov     [esi+94h], ebx
0x614180: pop     edi
0x614181: pop     esi
0x614182: pop     ebp
0x614183: pop     ebx
0x614184: retn    4
