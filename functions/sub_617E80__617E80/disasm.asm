0x617E80: push    ebx
0x617E81: push    esi
0x617E82: push    edi
0x617E83: mov     edi, ecx
0x617E85: call    sub_5660F0
0x617E8A: mov     esi, [edi+40h]
0x617E8D: xor     ebx, ebx
0x617E8F: test    esi, esi
0x617E91: jz      loc_617F33
0x617E97: push    ebp
0x617E98: cmp     dword ptr [esi+4], 0
0x617E9C: jnz     short loc_617EA7
0x617E9E: cmp     dword ptr [esi], 0
0x617EA1: jz      loc_617F32
0x617EA7: mov     ebp, [esi]
0x617EA9: mov     eax, [ebp+0]
0x617EAC: push    0; int
0x617EAE: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x617EB3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x617EB8: push    0; int
0x617EBA: push    eax; a1
0x617EBB: call    TESForm_LookupByFormID
0x617EC0: add     esp, 4
0x617EC3: push    eax; void *
0x617EC4: call    OblivionDynamicCast
0x617EC9: add     esp, 14h
0x617ECC: test    eax, eax
0x617ECE: mov     [ebp+0], eax
0x617ED1: jz      short loc_617EEE
0x617ED3: mov     eax, [eax+8]
0x617ED6: mov     ecx, eax
0x617ED8: shr     ecx, 0Bh
0x617EDB: test    cl, 1
0x617EDE: jnz     short loc_617EEE
0x617EE0: shr     eax, 5
0x617EE3: test    al, 1
0x617EE5: jnz     short loc_617EEE
0x617EE7: mov     ebx, esi
0x617EE9: mov     esi, [esi+4]
0x617EEC: jmp     short loc_617F2A
0x617EEE: test    ebx, ebx
0x617EF0: jnz     short loc_617F16
0x617EF2: mov     eax, [esi+4]
0x617EF5: test    eax, eax
0x617EF7: jz      short loc_617F0E
0x617EF9: mov     edx, [eax+4]
0x617EFC: mov     [esi+4], edx
0x617EFF: mov     ecx, [eax]
0x617F01: push    eax
0x617F02: mov     [esi], ecx
0x617F04: call    FormHeapFree
0x617F09: add     esp, 4
0x617F0C: jmp     short loc_617F21
0x617F0E: mov     dword ptr [esi], 0
0x617F14: jmp     short loc_617F21
0x617F16: push    ebp
0x617F17: mov     ecx, ebx
0x617F19: call    BSSimpleList_Remove
0x617F1E: mov     esi, [ebx+4]
0x617F21: push    ebp
0x617F22: call    FormHeapFree
0x617F27: add     esp, 4
0x617F2A: test    esi, esi
0x617F2C: jnz     loc_617E98
0x617F32: pop     ebp
0x617F33: mov     eax, [edi+12Ch]
0x617F39: test    eax, eax
0x617F3B: jz      short loc_617F63
0x617F3D: push    0; int
0x617F3F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x617F44: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x617F49: push    0; int
0x617F4B: push    eax; a1
0x617F4C: call    TESForm_LookupByFormID
0x617F51: add     esp, 4
0x617F54: push    eax; void *
0x617F55: call    OblivionDynamicCast
0x617F5A: add     esp, 14h
0x617F5D: mov     [edi+12Ch], eax
0x617F63: mov     edx, [edi+74h]
0x617F66: mov     [edi+78h], edx
0x617F69: mov     eax, ds:0B33B00h
0x617F6E: cmp     byte ptr [eax+7Ch], 5Fh ; '_'
0x617F72: jb      loc_6180EC
0x617F78: mov     ecx, [edi+5Ch]
0x617F7B: push    ecx
0x617F7C: mov     ecx, edi
0x617F7E: call    sub_614D10
0x617F83: mov     edx, [edi+60h]
0x617F86: push    edx
0x617F87: mov     ecx, edi
0x617F89: call    sub_614D10
0x617F8E: mov     eax, [edi+64h]
0x617F91: push    eax
0x617F92: mov     ecx, edi
0x617F94: call    sub_614D10
0x617F99: mov     esi, [edi+90h]
0x617F9F: test    esi, esi
0x617FA1: jz      short loc_617FC0
0x617FA3: mov     ecx, [esi+4]
0x617FA6: test    ecx, ecx
0x617FA8: jz      short loc_617FAF
0x617FAA: call    sub_485BC0
0x617FAF: mov     eax, [esi]
0x617FB1: test    eax, eax
0x617FB3: jz      short loc_617FC0
0x617FB5: push    eax
0x617FB6: call    MagicItem_LookupByFormID
0x617FBB: add     esp, 4
0x617FBE: mov     [esi], eax
0x617FC0: mov     esi, [edi+94h]
0x617FC6: test    esi, esi
0x617FC8: jz      short loc_617FE7
0x617FCA: mov     ecx, [esi+4]
0x617FCD: test    ecx, ecx
0x617FCF: jz      short loc_617FD6
0x617FD1: call    sub_485BC0
0x617FD6: mov     eax, [esi]
0x617FD8: test    eax, eax
0x617FDA: jz      short loc_617FE7
0x617FDC: push    eax
0x617FDD: call    MagicItem_LookupByFormID
0x617FE2: add     esp, 4
0x617FE5: mov     [esi], eax
0x617FE7: mov     esi, [edi+98h]
0x617FED: test    esi, esi
0x617FEF: jz      short loc_61800E
0x617FF1: mov     ecx, [esi+4]
0x617FF4: test    ecx, ecx
0x617FF6: jz      short loc_617FFD
0x617FF8: call    sub_485BC0
0x617FFD: mov     eax, [esi]
0x617FFF: test    eax, eax
0x618001: jz      short loc_61800E
0x618003: push    eax
0x618004: call    MagicItem_LookupByFormID
0x618009: add     esp, 4
0x61800C: mov     [esi], eax
0x61800E: mov     esi, [edi+9Ch]
0x618014: test    esi, esi
0x618016: jz      short loc_618035
0x618018: mov     ecx, [esi+4]
0x61801B: test    ecx, ecx
0x61801D: jz      short loc_618024
0x61801F: call    sub_485BC0
0x618024: mov     eax, [esi]
0x618026: test    eax, eax
0x618028: jz      short loc_618035
0x61802A: push    eax
0x61802B: call    MagicItem_LookupByFormID
0x618030: add     esp, 4
0x618033: mov     [esi], eax
0x618035: mov     esi, [edi+0A0h]
0x61803B: test    esi, esi
0x61803D: jz      short loc_61805C
0x61803F: mov     ecx, [esi+4]
0x618042: test    ecx, ecx
0x618044: jz      short loc_61804B
0x618046: call    sub_485BC0
0x61804B: mov     eax, [esi]
0x61804D: test    eax, eax
0x61804F: jz      short loc_61805C
0x618051: push    eax
0x618052: call    MagicItem_LookupByFormID
0x618057: add     esp, 4
0x61805A: mov     [esi], eax
0x61805C: mov     eax, [edi+90h]
0x618062: test    eax, eax
0x618064: jz      short loc_618088
0x618066: cmp     dword ptr [eax], 0
0x618069: jz      short loc_618088
0x61806B: mov     ecx, [eax]; int
0x61806D: call    MagicItem_GetFormID
0x618072: cmp     [edi+8Ch], eax
0x618078: jnz     short loc_618088
0x61807A: mov     ecx, [edi+90h]
0x618080: mov     [edi+8Ch], ecx
0x618086: jmp     short loc_618092
0x618088: mov     dword ptr [edi+8Ch], 0
0x618092: mov     edx, [edi+60h]
0x618095: mov     eax, [edi+7Ch]
0x618098: push    edx
0x618099: push    eax
0x61809A: mov     ecx, edi
0x61809C: call    sub_614D60
0x6180A1: mov     ecx, [edi+5Ch]
0x6180A4: mov     edx, [edi+80h]
0x6180AA: push    ecx
0x6180AB: push    edx
0x6180AC: mov     ecx, edi
0x6180AE: mov     [edi+7Ch], eax
0x6180B1: call    sub_614D60
0x6180B6: mov     ecx, [edi+84h]
0x6180BC: mov     [edi+80h], eax
0x6180C2: mov     eax, [edi+64h]
0x6180C5: push    eax
0x6180C6: push    ecx
0x6180C7: mov     ecx, edi
0x6180C9: call    sub_614D60
0x6180CE: mov     edx, [edi+64h]
0x6180D1: mov     [edi+84h], eax
0x6180D7: mov     eax, [edi+88h]
0x6180DD: push    edx
0x6180DE: push    eax
0x6180DF: mov     ecx, edi
0x6180E1: call    sub_614D60
0x6180E6: mov     [edi+88h], eax
0x6180EC: mov     ecx, ds:0B33B00h
0x6180F2: cmp     byte ptr [ecx+7Ch], 66h ; 'f'
0x6180F6: jb      short loc_618103
0x6180F8: mov     edx, [edi+68h]
0x6180FB: push    edx
0x6180FC: mov     ecx, edi
0x6180FE: call    sub_614D10
0x618103: mov     byte ptr [edi+1BDh], 1
0x61810A: mov     byte ptr [edi+59h], 0
0x61810E: pop     edi
0x61810F: pop     esi
0x618110: pop     ebx
0x618111: retn
