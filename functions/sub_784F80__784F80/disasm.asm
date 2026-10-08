0x784F80: mov     eax, [esp+other]; Oblivion 1.2.0.416: std::out_of_range copy constructor. Copies the std::logic_error base through 0x414900, then installs the out_of_range vftable; both observed objects retain the same 0x28-byte layout.
0x784F84: push    esi
0x784F85: push    eax; other
0x784F86: mov     esi, ecx
0x784F88: call    OB_std_logic_error_CopyCtor_010201A0; Oblivion 1.2.0.416: std::logic_error copy constructor. Copies the 0x0C-byte std::exception base, installs the logic_error vftable, initializes the 28-byte SSO message at +0x0C, then assigns the source message.
0x784F8D: mov     dword ptr [esi], offset ??_7out_of_range@std@@6B@; const std::out_of_range::`vftable'
0x784F93: mov     eax, esi
0x784F95: pop     esi
0x784F96: retn    4
