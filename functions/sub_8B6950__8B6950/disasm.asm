0x8B6950: cmp     [esp+arg_0], 0
0x8B6955: push    esi
0x8B6956: mov     esi, ecx
0x8B6958: jz      short loc_8B696D
0x8B695A: mov     eax, [esi+0Ch]
0x8B695D: push    eax
0x8B695E: call    FormHeapFree
0x8B6963: add     esp, 4
0x8B6966: mov     dword ptr [esi+0Ch], 0
0x8B696D: pop     esi
0x8B696E: retn    4
