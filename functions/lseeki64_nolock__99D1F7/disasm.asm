0x99D1F7: push    ebp
0x99D1F8: mov     ebp, esp
0x99D1FA: push    ecx
0x99D1FB: push    ecx
0x99D1FC: mov     eax, [ebp+arg_4]
0x99D1FF: push    esi
0x99D200: mov     esi, [ebp+arg_0]
0x99D203: mov     [ebp+lDistanceToMove], eax
0x99D206: mov     eax, [ebp+arg_8]
0x99D209: push    edi
0x99D20A: push    esi; int
0x99D20B: mov     [ebp+DistanceToMoveHigh], eax
0x99D20E: call    __get_osfhandle
0x99D213: or      edi, 0FFFFFFFFh
0x99D216: cmp     eax, edi
0x99D218: pop     ecx
0x99D219: jnz     short loc_99D22C
0x99D21B: call    __errno
0x99D220: mov     dword ptr [eax], 9
0x99D226: mov     eax, edi
0x99D228: mov     edx, edi
0x99D22A: jmp     short loc_99D276
0x99D22C: push    [ebp+dwMoveMethod]; dwMoveMethod
0x99D22F: lea     ecx, [ebp+DistanceToMoveHigh]
0x99D232: push    ecx; lpDistanceToMoveHigh
0x99D233: push    [ebp+lDistanceToMove]; lDistanceToMove
0x99D236: push    eax; hFile
0x99D237: call    ds:SetFilePointer
0x99D23D: cmp     eax, edi
0x99D23F: mov     [ebp+lDistanceToMove], eax
0x99D242: jnz     short loc_99D257
0x99D244: call    ds:GetLastError
0x99D24A: test    eax, eax
0x99D24C: jz      short loc_99D257
0x99D24E: push    eax
0x99D24F: call    __dosmaperr
0x99D254: pop     ecx
0x99D255: jmp     short loc_99D226
0x99D257: mov     eax, esi
0x99D259: and     esi, 1Fh
0x99D25C: imul    esi, 28h ; '('
0x99D25F: sar     eax, 5
0x99D262: mov     eax, dword_BAAAC0[eax*4]
0x99D269: lea     eax, [eax+esi+4]
0x99D26D: and     byte ptr [eax], 0FDh
0x99D270: mov     eax, [ebp+lDistanceToMove]
0x99D273: mov     edx, [ebp+DistanceToMoveHigh]
0x99D276: pop     edi
0x99D277: pop     esi
0x99D278: leave
0x99D279: retn
