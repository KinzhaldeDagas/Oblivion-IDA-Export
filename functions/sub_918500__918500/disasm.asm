0x918500: test    [esp+arg_0], 1
0x918505: push    esi
0x918506: mov     esi, ecx
0x918508: mov     dword ptr [esi], offset off_A9D1C0
0x91850E: jz      short loc_918519
0x918510: push    esi
0x918511: call    FormHeapFree
0x918516: add     esp, 4
0x918519: mov     eax, esi
0x91851B: pop     esi
0x91851C: retn    4
