0x55A6B0: push    esi
0x55A6B1: mov     esi, ecx
0x55A6B3: mov     eax, [esi+4]
0x55A6B6: test    eax, eax
0x55A6B8: mov     dword ptr [esi], offset ??_7BSFaceGenMorphStatistical@@6B@; const BSFaceGenMorphStatistical::`vftable'
0x55A6BE: jz      short loc_55A6C9
0x55A6C0: push    eax
0x55A6C1: call    FormHeapFree
0x55A6C6: add     esp, 4
0x55A6C9: test    [esp+4+arg_0], 1
0x55A6CE: mov     dword ptr [esi], offset ??_7BSFaceGenMorph@@6B@; const BSFaceGenMorph::`vftable'
0x55A6D4: jz      short loc_55A6DF
0x55A6D6: push    esi
0x55A6D7: call    FormHeapFree
0x55A6DC: add     esp, 4
0x55A6DF: mov     eax, esi
0x55A6E1: pop     esi
0x55A6E2: retn    4
