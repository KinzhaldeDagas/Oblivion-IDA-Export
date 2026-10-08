0x414980: mov     eax, [esp+other]
0x414984: push    esi
0x414985: push    eax; other
0x414986: mov     esi, ecx
0x414988: call    OB_std_logic_error_CopyCtor_010201A0; Oblivion 1.2.0.416: std::logic_error copy constructor. Copies the 0x0C-byte std::exception base, installs the logic_error vftable, initializes the 28-byte SSO message at +0x0C, then assigns the source message.
0x41498D: mov     dword ptr [esi], offset ??_7invalid_argument@std@@6B@; const std::invalid_argument::`vftable'
0x414993: mov     eax, esi
0x414995: pop     esi
0x414996: retn    4
