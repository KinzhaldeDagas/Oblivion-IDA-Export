0x9816F9: push    ebp
0x9816FA: mov     ebp, [esp+4+Size]
0x9816FE: cmp     ebp, 0FFFFFFE0h
0x981701: ja      loc_9817A6
0x981707: push    ebx
0x981708: mov     ebx, ds:0A28194h
0x98170E: push    esi
0x98170F: push    edi
0x981710: xor     esi, esi
0x981712: cmp     ds:0BAA2ACh, esi
0x981718: mov     edi, ebp
0x98171A: jnz     short loc_981734
0x98171C: call    __FF_MSGBANNER
0x981721: push    1Eh
0x981723: call    __NMSG_WRITE
0x981728: push    0FFh; uExitCode
0x98172D: call    ___crtExitProcess
0x981732: pop     ecx
0x981733: pop     ecx
0x981734: mov     eax, ds:0BAABC0h
0x981739: cmp     eax, 1
0x98173C: jnz     short loc_98174C
0x98173E: cmp     ebp, esi
0x981740: jz      short loc_981746
0x981742: mov     eax, ebp
0x981744: jmp     short loc_981749
0x981746: xor     eax, eax
0x981748: inc     eax
0x981749: push    eax
0x98174A: jmp     short loc_98176A
0x98174C: cmp     eax, 3
0x98174F: jnz     short loc_98175C
0x981751: push    ebp
0x981752: call    _V6_HeapAlloc
0x981757: cmp     eax, esi
0x981759: pop     ecx
0x98175A: jnz     short loc_981773
0x98175C: cmp     ebp, esi
0x98175E: jnz     short loc_981763
0x981760: xor     edi, edi
0x981762: inc     edi
0x981763: add     edi, 0Fh
0x981766: and     edi, 0FFFFFFF0h
0x981769: push    edi; dwBytes
0x98176A: push    esi; dwFlags
0x98176B: push    dword ptr ds:0BAA2ACh; hHeap
0x981771: call    ebx ; HeapAlloc
0x981773: mov     esi, eax
0x981775: test    esi, esi
0x981777: jnz     short loc_98179F
0x981779: cmp     ds:0BAA5C8h, eax
0x98177F: push    0Ch
0x981781: pop     edi
0x981782: jz      short loc_981791
0x981784: push    ebp
0x981785: call    __callnewh
0x98178A: test    eax, eax
0x98178C: pop     ecx
0x98178D: jnz     short loc_981710
0x98178F: jmp     short loc_981798
0x981791: call    __errno
0x981796: mov     [eax], edi
0x981798: call    __errno
0x98179D: mov     [eax], edi
0x98179F: pop     edi
0x9817A0: mov     eax, esi
0x9817A2: pop     esi
0x9817A3: pop     ebx
0x9817A4: pop     ebp
0x9817A5: retn
0x9817A6: push    ebp
0x9817A7: call    __callnewh
0x9817AC: pop     ecx
0x9817AD: call    __errno
0x9817B2: mov     dword ptr [eax], 0Ch
0x9817B8: xor     eax, eax
0x9817BA: pop     ebp
0x9817BB: retn
