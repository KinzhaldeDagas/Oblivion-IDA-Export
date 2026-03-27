0x673AB6: xor     esi, esi; jumptable 00673A9C default case
0x673AB8: mov     edi, [esp+arg_C]
0x673ABC: mov     ecx, edi; this
0x673ABE: call    Actor__GetProcessLevel
0x673AC3: cmp     eax, ebx
0x673AC5: jnz     short loc_673AE2
0x673AC7: test    esi, esi
0x673AC9: jz      short loc_673AE2
0x673ACB: mov     eax, [esp+arg_1C]
0x673ACF: mov     ecx, [esp+arg_18]
0x673AD3: mov     edx, [esp+arg_14]
0x673AD7: push    eax
0x673AD8: push    ecx
0x673AD9: push    edx
0x673ADA: push    edi
0x673ADB: mov     ecx, esi
0x673ADD: call    sub_67B260
0x673AE2: pop     edi
0x673AE3: pop     esi
0x673AE4: pop     ebx
0x673AE5: retn    14h
