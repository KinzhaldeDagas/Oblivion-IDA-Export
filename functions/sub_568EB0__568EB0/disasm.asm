0x568EB0: fld     [esp+arg_8]
0x568EB4: push    esi
0x568EB5: push    edi
0x568EB6: call    Double_To_SInt32
0x568EBB: mov     ecx, [esp+8+arg_0]
0x568EBF: mov     esi, eax
0x568EC1: cmp     esi, ecx
0x568EC3: mov     eax, [esp+8+arg_4]
0x568EC7: lea     edi, [ecx+eax]
0x568ECA: mov     [esp+8+arg_8], edi
0x568ECE: jz      short loc_568F08
0x568ED0: fild    [esp+8+arg_8]
0x568ED4: fstp    [esp+8+arg_8]
0x568ED8: fld     dword ptr ds:0A675E4h
0x568EDE: fld     [esp+8+arg_8]
0x568EE2: fcom    st(1)
0x568EE4: fnstsw  ax
0x568EE6: fstp    st(1)
0x568EE8: test    ah, 41h
0x568EEB: jnz     short loc_568F0D
0x568EED: cmp     esi, ecx
0x568EEF: jg      short loc_568F02
0x568EF1: fsub    qword ptr ds:0A2F920h
0x568EF7: call    Double_To_SInt32
0x568EFC: cmp     esi, eax
0x568EFE: jge     short loc_568F13
0x568F00: jmp     short loc_568F04
0x568F02: fstp    st
0x568F04: cmp     esi, edi
0x568F06: jge     short loc_568F13
0x568F08: pop     edi
0x568F09: mov     al, 1
0x568F0B: pop     esi
0x568F0C: retn
0x568F0D: cmp     esi, ecx
0x568F0F: fstp    st
0x568F11: jg      short loc_568F04
0x568F13: pop     edi
0x568F14: xor     al, al
0x568F16: pop     esi
0x568F17: retn
