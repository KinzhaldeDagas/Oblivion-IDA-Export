0x536EE0: push    esi
0x536EE1: mov     esi, [esp+4+arg_0]
0x536EE5: mov     eax, [esi+10h]
0x536EE8: test    eax, eax
0x536EEA: push    edi
0x536EEB: mov     edi, ecx
0x536EED: jz      short loc_536EFF
0x536EEF: mov     ecx, [esp+8+arg_4]
0x536EF3: cmp     [eax+0Ch], ecx
0x536EF6: jz      short loc_536EFF
0x536EF8: mov     eax, [eax+4]
0x536EFB: test    eax, eax
0x536EFD: jnz     short loc_536EF3
0x536EFF: push    eax
0x536F00: mov     ecx, esi
0x536F02: call    sub_536A10
0x536F07: cmp     dword ptr [esi+10h], 0
0x536F0B: jnz     short loc_536F15
0x536F0D: push    esi
0x536F0E: mov     ecx, edi
0x536F10: call    sub_536D30
0x536F15: pop     edi
0x536F16: pop     esi
0x536F17: retn    8
