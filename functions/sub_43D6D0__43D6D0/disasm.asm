0x43D6D0: mov     eax, [esp+other]
0x43D6D4: push    esi
0x43D6D5: push    eax; other
0x43D6D6: mov     esi, ecx
0x43D6D8: call    OB_std_logic_error_CopyCtor_010201A0; Oblivion 1.2.0.416: std::logic_error copy constructor. Copies the 0x0C-byte std::exception base, installs the logic_error vftable, initializes the 28-byte SSO message at +0x0C, then assigns the source message.
0x43D6DD: mov     dword ptr [esi], offset ??_7length_error@std@@6B@; const std::length_error::`vftable'
0x43D6E3: mov     eax, esi
0x43D6E5: pop     esi
0x43D6E6: retn    4
