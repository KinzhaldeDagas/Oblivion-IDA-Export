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
