0x4C9C80: push    esi
0x4C9C81: xor     esi, esi
0x4C9C83: test    byte ptr [ecx+24h], 1
0x4C9C87: jnz     short loc_4C9CE4
0x4C9C89: push    edi
0x4C9C8A: mov     edi, [esp+8+arg_0]
0x4C9C8E: fld     dword ptr [edi]
0x4C9C90: fld     qword ptr ds:0A37650h
0x4C9C96: call    unknown_libname_14
0x4C9C9B: fstp    [esp+8+arg_0]
0x4C9C9F: fld     [esp+8+arg_0]
0x4C9CA3: call    Double_To_SInt32
0x4C9CA8: cdq
0x4C9CA9: xor     eax, edx
0x4C9CAB: sub     eax, edx
0x4C9CAD: cmp     eax, 800h
0x4C9CB2: jle     short loc_4C9CB9
0x4C9CB4: mov     esi, 1
0x4C9CB9: fld     dword ptr [edi+4]
0x4C9CBC: fld     qword ptr ds:0A37650h
0x4C9CC2: call    unknown_libname_14
0x4C9CC7: fstp    [esp+8+arg_0]
0x4C9CCB: fld     [esp+8+arg_0]
0x4C9CCF: call    Double_To_SInt32
0x4C9CD4: cdq
0x4C9CD5: xor     eax, edx
0x4C9CD7: sub     eax, edx
0x4C9CD9: cmp     eax, 800h
0x4C9CDE: pop     edi
0x4C9CDF: jle     short loc_4C9CE4
0x4C9CE1: add     esi, 2
0x4C9CE4: mov     eax, esi
0x4C9CE6: pop     esi
0x4C9CE7: retn    4
