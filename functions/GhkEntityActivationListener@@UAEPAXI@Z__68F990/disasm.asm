0x68F990: test    byte ptr [esp+arg_0], 1
0x68F995: push    esi
0x68F996: mov     esi, ecx
0x68F998: mov     dword ptr [esi], offset ??_7hkEntityActivationListener@@6B@; const hkEntityActivationListener::`vftable'
0x68F99E: jz      short loc_68F9A9
0x68F9A0: push    esi
0x68F9A1: call    FormHeapFree
0x68F9A6: add     esp, 4
0x68F9A9: mov     eax, esi
0x68F9AB: pop     esi
0x68F9AC: retn    4
