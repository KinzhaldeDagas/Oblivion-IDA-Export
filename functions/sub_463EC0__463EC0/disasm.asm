0x463EC0: push    0FFFFFFFFh
0x463EC2: push    offset SEH_463EC0
0x463EC7: mov     eax, large fs:0
0x463ECD: push    eax
0x463ECE: push    esi
0x463ECF: push    edi
0x463ED0: mov     eax, ds:0B30AACh
0x463ED5: xor     eax, esp
0x463ED7: push    eax
0x463ED8: lea     eax, [esp+18h+var_C]
0x463EDC: mov     large fs:0, eax
0x463EE2: mov     esi, ecx
0x463EE4: mov     edi, [esp+18h+a1]
0x463EE8: push    edi; a1
0x463EE9: call    TESForm_LookupByFormID
0x463EEE: add     esp, 4
0x463EF1: test    eax, eax
0x463EF3: jz      short loc_463EFF
0x463EF5: push    eax
0x463EF6: mov     ecx, esi
0x463EF8: call    sub_45C7A0
0x463EFD: jmp     short loc_463F09
0x463EFF: mov     ecx, [esi]
0x463F01: push    1
0x463F03: push    edi
0x463F04: call    sub_452DF0
0x463F09: movzx   eax, byte ptr [esp+18h+arg_8]
0x463F0E: add     eax, 0FFFFFFF4h; switch 7 cases
0x463F11: cmp     eax, 6
0x463F14: ja      def_463F1A; jumptable 00463F1A default case, cases 13,14
0x463F1A: jmp     ds:jpt_463F1A[eax*4]; switch jump
0x463F21: push    1C0h; jumptable 00463F1A case 12
0x463F26: call    FormHeapAlloc
0x463F2B: add     esp, 4
0x463F2E: mov     [esp+18h+arg_8], eax
0x463F32: test    eax, eax
0x463F34: mov     [esp+18h+var_4], 0
0x463F3C: jz      loc_464015
0x463F42: mov     ecx, [esp+18h+arg_4]
0x463F46: push    0
0x463F48: push    0
0x463F4A: push    0
0x463F4C: push    ecx
0x463F4D: mov     ecx, eax; this
0x463F4F: call    ??0CombatController@@QAE@XZ; CombatController::CombatController(void)
0x463F54: jmp     loc_464017
0x463F59: push    40h ; '@'; jumptable 00463F1A case 15
0x463F5B: call    FormHeapAlloc
0x463F60: add     esp, 4
0x463F63: mov     [esp+18h+arg_8], eax
0x463F67: test    eax, eax
0x463F69: mov     [esp+18h+var_4], 1
0x463F71: jz      loc_464015
0x463F77: mov     ecx, eax
0x463F79: call    sub_606860
0x463F7E: jmp     loc_464017
0x463F83: push    68h ; 'h'; jumptable 00463F1A case 16
0x463F85: call    FormHeapAlloc
0x463F8A: add     esp, 4
0x463F8D: mov     [esp+18h+arg_8], eax
0x463F91: test    eax, eax
0x463F93: mov     [esp+18h+var_4], 2
0x463F9B: jz      short loc_464015
0x463F9D: push    0
0x463F9F: push    0
0x463FA1: push    0
0x463FA3: mov     ecx, eax; this
0x463FA5: call    ??0FleePackage@@QAE@XZ; FleePackage::FleePackage(void)
0x463FAA: jmp     short loc_464017
0x463FAC: push    64h ; 'd'; jumptable 00463F1A case 18
0x463FAE: call    FormHeapAlloc
0x463FB3: add     esp, 4
0x463FB6: mov     [esp+18h+arg_8], eax
0x463FBA: test    eax, eax
0x463FBC: mov     [esp+18h+var_4], 3
0x463FC4: jz      short loc_464015
0x463FC6: mov     ecx, eax
0x463FC8: call    sub_625D00
0x463FCD: jmp     short loc_464017
0x463FCF: push    58h ; 'X'; jumptable 00463F1A case 17
0x463FD1: call    FormHeapAlloc
0x463FD6: add     esp, 4
0x463FD9: mov     [esp+18h+arg_8], eax
0x463FDD: test    eax, eax
0x463FDF: mov     [esp+18h+var_4], 4
0x463FE7: jz      short loc_464015
0x463FE9: mov     ecx, eax
0x463FEB: call    sub_67D300
0x463FF0: jmp     short loc_464017
0x463FF2: push    3Ch ; '<'; jumptable 00463F1A default case, cases 13,14
0x463FF4: call    FormHeapAlloc
0x463FF9: add     esp, 4
0x463FFC: mov     [esp+18h+arg_8], eax
0x464000: test    eax, eax
0x464002: mov     [esp+18h+var_4], 5
0x46400A: jz      short loc_464015
0x46400C: mov     ecx, eax; this
0x46400E: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x464013: jmp     short loc_464017
0x464015: xor     eax, eax
0x464017: mov     esi, eax
0x464019: push    1; a3
0x46401B: push    edi; a2
0x46401C: mov     ecx, esi; this
0x46401E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x464026: call    TESForm_SetFormID
0x46402B: mov     eax, esi
0x46402D: mov     ecx, dword ptr [esp+18h+var_C]
0x464031: mov     large fs:0, ecx
0x464038: pop     ecx
0x464039: pop     edi
0x46403A: pop     esi
0x46403B: add     esp, 0Ch
0x46403E: retn    0Ch
