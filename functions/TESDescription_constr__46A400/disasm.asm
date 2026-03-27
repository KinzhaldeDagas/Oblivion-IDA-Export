0x46A400: push    esi
0x46A401: mov     esi, ecx
0x46A403: mov     dword ptr [esi], offset ??_7TESDescription@@6B@; const TESDescription::`vftable'
0x46A409: mov     eax, ds:0B33C08h
0x46A40E: push    eax
0x46A40F: call    FormHeapFree
0x46A414: xor     eax, eax
0x46A416: mov     ds:0B33C08h, eax
0x46A41B: mov     ds:0B33C0Eh, ax
0x46A421: mov     ds:0B33C0Ch, ax
0x46A427: mov     ds:0B33C04h, eax
0x46A42C: mov     [esi+4], eax
0x46A42F: add     esp, 4
0x46A432: mov     eax, esi
0x46A434: pop     esi
0x46A435: retn
