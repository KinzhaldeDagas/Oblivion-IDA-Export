0x6EC2F0: push    esi
0x6EC2F1: mov     esi, ecx
0x6EC2F3: mov     dword ptr [esi], offset ??_7NiKeyBasedInterpolator@@6B@; const NiKeyBasedInterpolator::`vftable'
0x6EC2F9: call    sub_6EBA30
0x6EC2FE: test    byte ptr [esp+4+arg_0], 1
0x6EC303: jz      short loc_6EC30E
0x6EC305: push    esi
0x6EC306: call    FormHeapFree
0x6EC30B: add     esp, 4
0x6EC30E: mov     eax, esi
0x6EC310: pop     esi
0x6EC311: retn    4
