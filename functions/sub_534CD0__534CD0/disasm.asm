0x534CD0: mov     eax, [esp+Str]
0x534CD4: push    esi
0x534CD5: xor     esi, esi
0x534CD7: movsx   ecx, ds:byte_A56278[esi]
0x534CDE: push    ecx; Ch
0x534CDF: push    eax; Str
0x534CE0: call    j__strrchr
0x534CE5: add     esp, 8
0x534CE8: test    eax, eax
0x534CEA: jz      short loc_534CEF
0x534CEC: add     eax, 1
0x534CEF: add     esi, 1
0x534CF2: cmp     esi, 2
0x534CF5: jl      short loc_534CD7
0x534CF7: pop     esi
0x534CF8: retn    4
