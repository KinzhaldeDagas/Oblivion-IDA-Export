0x418E70: mov     eax, [esp+other]
0x418E74: push    esi
0x418E75: push    eax; other
0x418E76: mov     esi, ecx
0x418E78: call    OB_std_logic_error_CopyCtor_010201A0; Oblivion 1.2.0.416: std::logic_error copy constructor. Copies the 0x0C-byte std::exception base, installs the logic_error vftable, initializes the 28-byte SSO message at +0x0C, then assigns the source message.
0x418E7D: mov     dword ptr [esi], offset ??_7exNoRangeFlags@EffectSettingCollection@@6B@; const EffectSettingCollection::exNoRangeFlags::`vftable'
0x418E83: mov     eax, esi
0x418E85: pop     esi
0x418E86: retn    4
