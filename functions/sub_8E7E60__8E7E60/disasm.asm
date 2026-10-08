0x8E7E60: mov     eax, [esp+arg_0]
0x8E7E64: cmp     eax, 0Dh; switch 14 cases
0x8E7E67: ja      def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7E6D: jmp     ds:jpt_8E7E6D[eax*4]; switch jump
0x8E7E74: push    14h; jumptable 008E7E6D case 0
0x8E7E76: call    FormHeapAlloc
0x8E7E7B: add     esp, 4
0x8E7E7E: test    eax, eax
0x8E7E80: jz      def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7E86: mov     ecx, eax
0x8E7E88: jmp     loc_8C3290
0x8E7E8D: push    14h; jumptable 008E7E6D case 1
0x8E7E8F: call    FormHeapAlloc
0x8E7E94: add     esp, 4
0x8E7E97: test    eax, eax
0x8E7E99: jz      def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7E9F: mov     ecx, eax
0x8E7EA1: jmp     loc_8C2B20
0x8E7EA6: push    14h; jumptable 008E7E6D case 2
0x8E7EA8: call    FormHeapAlloc
0x8E7EAD: add     esp, 4
0x8E7EB0: test    eax, eax
0x8E7EB2: jz      def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7EB8: mov     ecx, eax
0x8E7EBA: jmp     loc_539B60
0x8E7EBF: push    14h; jumptable 008E7E6D case 3
0x8E7EC1: call    FormHeapAlloc
0x8E7EC6: add     esp, 4
0x8E7EC9: test    eax, eax
0x8E7ECB: jz      def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7ED1: mov     ecx, eax
0x8E7ED3: jmp     loc_8E7E20
0x8E7ED8: push    14h; jumptable 008E7E6D case 4
0x8E7EDA: call    FormHeapAlloc
0x8E7EDF: add     esp, 4
0x8E7EE2: test    eax, eax
0x8E7EE4: jz      def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7EEA: mov     ecx, eax
0x8E7EEC: jmp     loc_8E7E40
0x8E7EF1: push    14h; jumptable 008E7E6D case 6
0x8E7EF3: call    FormHeapAlloc
0x8E7EF8: add     esp, 4
0x8E7EFB: test    eax, eax
0x8E7EFD: jz      def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7F03: mov     ecx, eax
0x8E7F05: jmp     loc_8C1C90
0x8E7F0A: push    14h; jumptable 008E7E6D case 7
0x8E7F0C: call    FormHeapAlloc
0x8E7F11: add     esp, 4
0x8E7F14: test    eax, eax
0x8E7F16: jz      short def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7F18: mov     ecx, eax
0x8E7F1A: jmp     loc_8C1250
0x8E7F1F: push    14h; jumptable 008E7E6D case 8
0x8E7F21: call    FormHeapAlloc
0x8E7F26: add     esp, 4
0x8E7F29: test    eax, eax
0x8E7F2B: jz      short def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7F2D: mov     ecx, eax
0x8E7F2F: jmp     loc_8C0840
0x8E7F34: push    14h; jumptable 008E7E6D case 9
0x8E7F36: call    FormHeapAlloc
0x8E7F3B: add     esp, 4
0x8E7F3E: test    eax, eax
0x8E7F40: jz      short def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7F42: mov     ecx, eax
0x8E7F44: jmp     loc_8C0330
0x8E7F49: push    14h; jumptable 008E7E6D case 10
0x8E7F4B: call    FormHeapAlloc
0x8E7F50: add     esp, 4
0x8E7F53: test    eax, eax
0x8E7F55: jz      short def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7F57: mov     ecx, eax
0x8E7F59: jmp     loc_8C22D0
0x8E7F5E: push    14h; jumptable 008E7E6D case 12
0x8E7F60: call    FormHeapAlloc
0x8E7F65: add     esp, 4
0x8E7F68: test    eax, eax
0x8E7F6A: jz      short def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7F6C: mov     ecx, eax
0x8E7F6E: jmp     loc_8BFA80
0x8E7F73: push    14h; jumptable 008E7E6D case 13
0x8E7F75: call    FormHeapAlloc
0x8E7F7A: add     esp, 4
0x8E7F7D: test    eax, eax
0x8E7F7F: jz      short def_8E7E6D; jumptable 008E7E6D default case, cases 5,11
0x8E7F81: mov     ecx, eax
0x8E7F83: jmp     loc_8BF360
0x8E7F88: xor     eax, eax; jumptable 008E7E6D default case, cases 5,11
0x8E7F8A: retn
0x539B60: mov     eax, ecx
0x539B62: xor     ecx, ecx
0x539B64: mov     [eax+4], ecx
0x539B67: mov     [eax+0Ch], ecx
0x539B6A: mov     [eax+10h], ecx
0x539B6D: mov     dword ptr [eax+8], 1
0x539B74: mov     dword ptr [eax], offset ??_7hkLimitedHingeConstraintCinfo@@6B@; const hkLimitedHingeConstraintCinfo::`vftable'
0x539B7A: retn
0x8BF360: mov     eax, ecx
0x8BF362: xor     ecx, ecx
0x8BF364: mov     [eax+4], ecx
0x8BF367: mov     [eax+0Ch], ecx
0x8BF36A: mov     [eax+10h], ecx
0x8BF36D: mov     dword ptr [eax+8], 1
0x8BF374: mov     dword ptr [eax], offset ??_7hkMalleableConstraintCinfo@@6B@; const hkMalleableConstraintCinfo::`vftable'
0x8BF37A: retn
0x8BFA80: mov     eax, ecx
0x8BFA82: xor     ecx, ecx
0x8BFA84: mov     [eax+4], ecx
0x8BFA87: mov     [eax+0Ch], ecx
0x8BFA8A: mov     [eax+10h], ecx
0x8BFA8D: mov     dword ptr [eax+8], 1
0x8BFA94: mov     dword ptr [eax], offset ??_7hkBreakableConstraintCinfo@@6B@; const hkBreakableConstraintCinfo::`vftable'
0x8BFA9A: retn
0x8C0330: mov     eax, ecx
0x8C0332: xor     ecx, ecx
0x8C0334: mov     [eax+4], ecx
0x8C0337: mov     [eax+0Ch], ecx
0x8C033A: mov     [eax+10h], ecx
0x8C033D: mov     dword ptr [eax+8], 1
0x8C0344: mov     dword ptr [eax], offset ??_7hkWheelConstraintCinfo@@6B@; const hkWheelConstraintCinfo::`vftable'
0x8C034A: retn
0x8C0840: mov     eax, ecx
0x8C0842: xor     ecx, ecx
0x8C0844: mov     [eax+4], ecx
0x8C0847: mov     [eax+0Ch], ecx
0x8C084A: mov     [eax+10h], ecx
0x8C084D: mov     dword ptr [eax+8], 1
0x8C0854: mov     dword ptr [eax], offset ??_7hkStiffSpringConstraintCinfo@@6B@; const hkStiffSpringConstraintCinfo::`vftable'
0x8C085A: retn
0x8C1250: mov     eax, ecx
0x8C1252: xor     ecx, ecx
0x8C1254: mov     [eax+4], ecx
0x8C1257: mov     [eax+0Ch], ecx
0x8C125A: mov     [eax+10h], ecx
0x8C125D: mov     dword ptr [eax+8], 1
0x8C1264: mov     dword ptr [eax], offset ??_7hkRagdollConstraintCinfo@@6B@; const hkRagdollConstraintCinfo::`vftable'
0x8C126A: retn
0x8C1C90: mov     eax, ecx
0x8C1C92: xor     ecx, ecx
0x8C1C94: mov     [eax+4], ecx
0x8C1C97: mov     [eax+0Ch], ecx
0x8C1C9A: mov     [eax+10h], ecx
0x8C1C9D: mov     dword ptr [eax+8], 1
0x8C1CA4: mov     dword ptr [eax], offset ??_7hkPrismaticConstraintCinfo@@6B@; const hkPrismaticConstraintCinfo::`vftable'
0x8C1CAA: retn
0x8C22D0: mov     eax, ecx
0x8C22D2: xor     ecx, ecx
0x8C22D4: mov     [eax+4], ecx
0x8C22D7: mov     [eax+0Ch], ecx
0x8C22DA: mov     [eax+10h], ecx
0x8C22DD: mov     dword ptr [eax+8], 1
0x8C22E4: mov     dword ptr [eax], offset ??_7hkGenericConstraintCinfo@@6B@; const hkGenericConstraintCinfo::`vftable'
0x8C22EA: retn
0x8C2B20: mov     eax, ecx
0x8C2B22: xor     ecx, ecx
0x8C2B24: mov     [eax+4], ecx
0x8C2B27: mov     [eax+0Ch], ecx
0x8C2B2A: mov     [eax+10h], ecx
0x8C2B2D: mov     dword ptr [eax+8], 1
0x8C2B34: mov     dword ptr [eax], offset ??_7hkHingeConstraintCinfo@@6B@; const hkHingeConstraintCinfo::`vftable'
0x8C2B3A: retn
0x8C3290: mov     eax, ecx
0x8C3292: xor     ecx, ecx
0x8C3294: mov     [eax+4], ecx
0x8C3297: mov     [eax+0Ch], ecx
0x8C329A: mov     [eax+10h], ecx
0x8C329D: mov     dword ptr [eax+8], 1
0x8C32A4: mov     dword ptr [eax], offset ??_7hkBallAndSocketConstraintCinfo@@6B@; const hkBallAndSocketConstraintCinfo::`vftable'
0x8C32AA: retn
0x8E7E20: mov     eax, ecx
0x8E7E22: xor     ecx, ecx
0x8E7E24: mov     [eax+4], ecx
0x8E7E27: mov     [eax+0Ch], ecx
0x8E7E2A: mov     [eax+10h], ecx
0x8E7E2D: mov     dword ptr [eax+8], 1
0x8E7E34: mov     dword ptr [eax], offset ??_7hkPointToPathConstraintCinfo@@6B@; const hkPointToPathConstraintCinfo::`vftable'
0x8E7E3A: retn
0x8E7E40: mov     eax, ecx
0x8E7E42: xor     ecx, ecx
0x8E7E44: mov     [eax+4], ecx
0x8E7E47: mov     [eax+0Ch], ecx
0x8E7E4A: mov     [eax+10h], ecx
0x8E7E4D: mov     dword ptr [eax+8], 1
0x8E7E54: mov     dword ptr [eax], offset ??_7hkPoweredHingeConstraintCinfo@@6B@; const hkPoweredHingeConstraintCinfo::`vftable'
0x8E7E5A: retn
