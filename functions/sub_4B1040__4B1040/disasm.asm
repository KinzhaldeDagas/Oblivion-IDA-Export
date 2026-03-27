0x4B1040: mov     eax, [esp+arg_0]
0x4B1044: push    ebx
0x4B1045: push    edi
0x4B1046: push    0; int
0x4B1048: push    offset ??_R0?AVTESObjectLIGH@@@8; struct TypeDescriptor *
0x4B104D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B1052: push    0; int
0x4B1054: push    eax; void *
0x4B1055: mov     ebx, ecx
0x4B1057: call    OblivionDynamicCast
0x4B105C: mov     edi, eax
0x4B105E: add     esp, 14h
0x4B1061: test    edi, edi
0x4B1063: jnz     short loc_4B106C
0x4B1065: pop     edi
0x4B1066: mov     al, 1
0x4B1068: pop     ebx
0x4B1069: retn    4
0x4B106C: push    edi; a2
0x4B106D: mov     ecx, ebx; this
0x4B106F: call    TESForm_CompareAllComponentsTo
0x4B1074: test    al, al
0x4B1076: jnz     short loc_4B1065
0x4B1078: mov     ecx, [ebx+8Ch]
0x4B107E: cmp     ecx, [edi+8Ch]
0x4B1084: jnz     short loc_4B1065
0x4B1086: push    ebp
0x4B1087: mov     eax, 18h
0x4B108C: lea     ecx, [edi+70h]
0x4B108F: lea     edx, [ebx+70h]
0x4B1092: push    esi
0x4B1093: mov     esi, [edx]
0x4B1095: cmp     esi, [ecx]
0x4B1097: jnz     short loc_4B10AB
0x4B1099: sub     eax, 4
0x4B109C: add     ecx, 4
0x4B109F: add     edx, 4
0x4B10A2: cmp     eax, 4
0x4B10A5: jnb     short loc_4B1093
0x4B10A7: test    eax, eax
0x4B10A9: jz      short loc_4B1108
0x4B10AB: movzx   esi, byte ptr [edx]
0x4B10AE: movzx   ebp, byte ptr [ecx]
0x4B10B1: sub     esi, ebp
0x4B10B3: jnz     short loc_4B10FA
0x4B10B5: sub     eax, 1
0x4B10B8: add     ecx, 1
0x4B10BB: add     edx, 1
0x4B10BE: test    eax, eax
0x4B10C0: jz      short loc_4B1108
0x4B10C2: movzx   esi, byte ptr [edx]
0x4B10C5: movzx   ebp, byte ptr [ecx]
0x4B10C8: sub     esi, ebp
0x4B10CA: jnz     short loc_4B10FA
0x4B10CC: sub     eax, 1
0x4B10CF: add     ecx, 1
0x4B10D2: add     edx, 1
0x4B10D5: test    eax, eax
0x4B10D7: jz      short loc_4B1108
0x4B10D9: movzx   esi, byte ptr [edx]
0x4B10DC: movzx   ebp, byte ptr [ecx]
0x4B10DF: sub     esi, ebp
0x4B10E1: jnz     short loc_4B10FA
0x4B10E3: sub     eax, 1
0x4B10E6: add     ecx, 1
0x4B10E9: add     edx, 1
0x4B10EC: test    eax, eax
0x4B10EE: jz      short loc_4B1108
0x4B10F0: movzx   esi, byte ptr [edx]
0x4B10F3: movzx   edx, byte ptr [ecx]
0x4B10F6: sub     esi, edx
0x4B10F8: jz      short loc_4B1108
0x4B10FA: test    esi, esi
0x4B10FC: mov     eax, 1
0x4B1101: jg      short loc_4B110A
0x4B1103: or      eax, 0FFFFFFFFh
0x4B1106: jmp     short loc_4B110A
0x4B1108: xor     eax, eax
0x4B110A: test    eax, eax
0x4B110C: pop     esi
0x4B110D: pop     ebp
0x4B110E: jnz     loc_4B1065
0x4B1114: fld     dword ptr [ebx+88h]
0x4B111A: fld     dword ptr [edi+88h]
0x4B1120: fucompp
0x4B1122: fnstsw  ax
0x4B1124: test    ah, 44h
0x4B1127: jp      loc_4B1065
0x4B112D: pop     edi
0x4B112E: xor     al, al
0x4B1130: pop     ebx
0x4B1131: retn    4
