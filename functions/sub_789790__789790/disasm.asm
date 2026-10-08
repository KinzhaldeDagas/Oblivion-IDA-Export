0x789790: mov     eax, [esp+source]; Oblivion IdvFileError copy constructor: copies the binary runtime_error base/message then installs IdvFileError vftable.
0x789794: push    esi
0x789795: push    eax; source
0x789796: mov     esi, ecx
0x789798: call    OB_std_runtime_error_CopyCtor_010201A0; Oblivion runtime_error copy constructor: copies the std::exception base, installs runtime_error vftable, initializes the embedded 28-byte SSO string, and copies the source message.
0x78979D: mov     dword ptr [esi], offset ??_7IdvFileError@@6B@; const IdvFileError::`vftable'
0x7897A3: mov     eax, esi
0x7897A5: pop     esi
0x7897A6: retn    4
