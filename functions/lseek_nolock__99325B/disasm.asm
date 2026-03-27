0x99325B: push    esi
0x99325C: mov     esi, [esp+4+arg_0]
0x993260: push    esi; int
0x993261: call    __get_osfhandle
0x993266: cmp     eax, 0FFFFFFFFh
0x993269: pop     ecx
0x99326A: jnz     short loc_99327C
0x99326C: call    __errno
0x993271: mov     dword ptr [eax], 9
0x993277: or      eax, 0FFFFFFFFh
0x99327A: pop     esi
0x99327B: retn
0x99327C: push    edi
0x99327D: push    [esp+8+dwMoveMethod]; dwMoveMethod
0x993281: push    0; lpDistanceToMoveHigh
0x993283: push    [esp+10h+lDistanceToMove]; lDistanceToMove
0x993287: push    eax; hFile
0x993288: call    ds:SetFilePointer
0x99328E: mov     edi, eax
0x993290: cmp     edi, 0FFFFFFFFh
0x993293: jnz     short loc_99329D
0x993295: call    ds:GetLastError
0x99329B: jmp     short loc_99329F
0x99329D: xor     eax, eax
0x99329F: test    eax, eax
0x9932A1: jz      short loc_9932AF
0x9932A3: push    eax
0x9932A4: call    __dosmaperr
0x9932A9: pop     ecx
0x9932AA: or      eax, 0FFFFFFFFh
0x9932AD: jmp     short loc_9932CA
0x9932AF: mov     eax, esi
0x9932B1: and     esi, 1Fh
0x9932B4: imul    esi, 28h ; '('
0x9932B7: sar     eax, 5
0x9932BA: mov     eax, dword_BAAAC0[eax*4]
0x9932C1: lea     eax, [eax+esi+4]
0x9932C5: and     byte ptr [eax], 0FDh
0x9932C8: mov     eax, edi
0x9932CA: pop     edi
0x9932CB: pop     esi
0x9932CC: retn
