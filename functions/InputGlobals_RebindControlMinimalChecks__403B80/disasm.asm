0x403B80: push    ebx
0x403B81: mov     bl, [esp+4+newButton]
0x403B85: push    esi
0x403B86: mov     esi, dword ptr [esp+8+whichScheme]
0x403B8A: test    esi, esi
0x403B8C: push    edi
0x403B8D: mov     edi, ecx
0x403B8F: jnz     short loc_403BA0
0x403B91: cmp     bl, 0B7h ; '·'
0x403B94: jz      short loc_403BB8
0x403B96: cmp     bl, 1
0x403B99: jz      short loc_403BB8
0x403B9B: cmp     bl, 29h ; ')'
0x403B9E: jz      short loc_403BB8
0x403BA0: movzx   eax, bl
0x403BA3: push    eax; button
0x403BA4: push    esi; whichScheme
0x403BA5: call    InputGlobals__ClearControlButton
0x403BAA: imul    esi, 1Dh
0x403BAD: add     esi, dword ptr [esp+0Ch+whichCtrl]
0x403BB1: mov     [esi+edi+1B7Eh], bl
0x403BB8: pop     edi
0x403BB9: pop     esi
0x403BBA: pop     ebx
0x403BBB: retn    0Ch
