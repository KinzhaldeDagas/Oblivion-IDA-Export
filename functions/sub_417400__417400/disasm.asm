0x417400: mov     eax, [esp+other]
0x417404: push    esi
0x417405: push    eax; other
0x417406: mov     esi, ecx
0x417408: call    OB_std_logic_error_CopyCtor_010201A0; Oblivion 1.2.0.416: std::logic_error copy constructor. Copies the 0x0C-byte std::exception base, installs the logic_error vftable, initializes the 28-byte SSO message at +0x0C, then assigns the source message.
0x41740D: mov     dword ptr [esi], offset ??_7exMultipleAssociatedFlags@EffectSettingCollection@@6B@; const EffectSettingCollection::exMultipleAssociatedFlags::`vftable'
0x417413: mov     eax, esi
0x417415: pop     esi
0x417416: retn    4
