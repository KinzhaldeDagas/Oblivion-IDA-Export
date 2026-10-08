0x6F8AD0: mov     eax, [esp+source]
0x6F8AD4: push    esi
0x6F8AD5: push    eax; source
0x6F8AD6: mov     esi, ecx
0x6F8AD8: call    OB_std_runtime_error_CopyCtor_010201A0; Oblivion runtime_error copy constructor: copies the std::exception base, installs runtime_error vftable, initializes the embedded 28-byte SSO string, and copies the source message.
0x6F8ADD: mov     dword ptr [esi], offset ??_7failure@ios_base@std@@6B@; const std::ios_base::failure::`vftable'
0x6F8AE3: mov     eax, esi
0x6F8AE5: pop     esi
0x6F8AE6: retn    4
