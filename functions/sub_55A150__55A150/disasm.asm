0x55A150: push    esi
0x55A151: mov     esi, ecx
0x55A153: mov     eax, [esi+4]
0x55A156: test    eax, eax
0x55A158: mov     dword ptr [esi], offset ??_7BSFaceGenMorphDifferential@@6B@; const BSFaceGenMorphDifferential::`vftable'
0x55A15E: jz      short loc_55A169
0x55A160: push    eax
0x55A161: call    FormHeapFree
0x55A166: add     esp, 4
0x55A169: test    [esp+4+arg_0], 1
0x55A16E: mov     dword ptr [esi], offset ??_7BSFaceGenMorph@@6B@; const BSFaceGenMorph::`vftable'
0x55A174: jz      short loc_55A17F
0x55A176: push    esi
0x55A177: call    FormHeapFree
0x55A17C: add     esp, 4
0x55A17F: mov     eax, esi
0x55A181: pop     esi
0x55A182: retn    4
