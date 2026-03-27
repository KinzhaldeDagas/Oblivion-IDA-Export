0x4B2A00: push    esi
0x4B2A01: mov     esi, ecx
0x4B2A03: test    esi, esi
0x4B2A05: jnz     short loc_4B2A0B
0x4B2A07: xor     al, al
0x4B2A09: pop     esi
0x4B2A0A: retn
0x4B2A0B: movzx   eax, byte ptr [esi+4]
0x4B2A0F: add     eax, 0FFFFFFEEh; switch 24 cases
0x4B2A12: cmp     eax, 17h
0x4B2A15: ja      def_4B2A22; jumptable 004B2A22 default case, cases 19-23,25,27,29-40
0x4B2A1B: movzx   eax, ds:byte_4B2ADC[eax]
0x4B2A22: jmp     ds:jpt_4B2A22[eax*4]; switch jump
0x4B2A29: cmp     ds:0B35EBCh, esi; jumptable 004B2A22 case 24
0x4B2A2F: jnz     def_4B2A22; jumptable 004B2A22 default case, cases 19-23,25,27,29-40
0x4B2A35: mov     al, 1; jumptable 004B2A22 case 41
0x4B2A37: pop     esi
0x4B2A38: retn
0x4B2A39: cmp     ds:0B35EA4h, esi; jumptable 004B2A22 case 28
0x4B2A3F: jz      short loc_4B2A81
0x4B2A41: cmp     ds:0B35EB4h, esi
0x4B2A47: jz      short loc_4B2A81
0x4B2A49: cmp     ds:0B35EC0h, esi
0x4B2A4F: jz      short loc_4B2A81
0x4B2A51: cmp     ds:0B35EC4h, esi
0x4B2A57: jz      short loc_4B2A81
0x4B2A59: cmp     ds:0B35EB8h, esi
0x4B2A5F: jz      short loc_4B2A81
0x4B2A61: cmp     ds:0B35EA8h, esi
0x4B2A67: jz      short loc_4B2A81
0x4B2A69: cmp     ds:0B35ED4h, esi
0x4B2A6F: jz      short loc_4B2A81
0x4B2A71: cmp     ds:0B35EACh, esi
0x4B2A77: jz      short loc_4B2A81
0x4B2A79: cmp     ds:0B35EB0h, esi
0x4B2A7F: jnz     short def_4B2A22; jumptable 004B2A22 default case, cases 19-23,25,27,29-40
0x4B2A81: mov     al, 1
0x4B2A83: pop     esi
0x4B2A84: retn
0x4B2A85: push    offset aEditormarker_n; jumptable 004B2A22 case 18
0x4B2A8A: push    esi
0x4B2A8B: call    GetFormModelPAth
0x4B2A90: add     esp, 4
0x4B2A93: push    eax; Str1
0x4B2A94: call    __strcmp
0x4B2A99: add     esp, 8
0x4B2A9C: test    eax, eax
0x4B2A9E: jnz     short def_4B2A22; jumptable 004B2A22 default case, cases 19-23,25,27,29-40
0x4B2AA0: mov     al, 1
0x4B2AA2: pop     esi
0x4B2AA3: retn
0x4B2AA4: push    esi; jumptable 004B2A22 case 26
0x4B2AA5: call    sub_46DA90
0x4B2AAA: add     esp, 4
0x4B2AAD: test    eax, eax
0x4B2AAF: jnz     short def_4B2A22; jumptable 004B2A22 default case, cases 19-23,25,27,29-40
0x4B2AB1: mov     al, 1
0x4B2AB3: pop     esi
0x4B2AB4: retn
0x4B2AB5: mov     esi, [esi+0Ch]; jumptable 004B2A22 default case, cases 19-23,25,27,29-40
0x4B2AB8: add     esi, 0FFFFFF9Ch
0x4B2ABB: cmp     esi, 13h
0x4B2ABE: setbe   al
0x4B2AC1: pop     esi
0x4B2AC2: retn
