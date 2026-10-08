0x68F1D0: mov     eax, [esp+other]
0x68F1D4: push    esi
0x68F1D5: push    eax; other
0x68F1D6: mov     esi, ecx
0x68F1D8: call    OB_std_logic_error_CopyCtor_010201A0; Oblivion 1.2.0.416: std::logic_error copy constructor. Copies the 0x0C-byte std::exception base, installs the logic_error vftable, initializes the 28-byte SSO message at +0x0C, then assigns the source message.
0x68F1DD: mov     dword ptr [esi], offset ??_7exUnregisteredActiveEffect@ActiveEffect@@6B@; const ActiveEffect::exUnregisteredActiveEffect::`vftable'
0x68F1E3: mov     eax, esi
0x68F1E5: pop     esi
0x68F1E6: retn    4
