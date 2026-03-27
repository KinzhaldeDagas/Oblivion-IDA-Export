0x45BA00: push    ecx
0x45BA01: push    ebx
0x45BA02: mov     ebx, [esp+8+Dst]
0x45BA06: push    ebp
0x45BA07: push    edi
0x45BA08: mov     edi, [esp+10h+Size]
0x45BA0C: mov     ebp, ecx
0x45BA0E: mov     eax, [ebp+14h]
0x45BA11: push    edi; Size
0x45BA12: push    eax; Src
0x45BA13: push    ebx; Dst
0x45BA14: mov     [esp+1Ch+var_1], 0
0x45BA19: call    _memcpy
0x45BA1E: add     esp, 0Ch
0x45BA21: cmp     byte ptr [ebp+7Dh], 0
0x45BA25: jz      short SaveLoad_LoadFormID___AdvanceBuffer
0x45BA27: mov     eax, edi
0x45BA29: shr     eax, 2
0x45BA2C: push    esi
0x45BA2D: mov     [esp+14h+Dst], eax
0x45BA31: mov     esi, 0
0x45BA36: jz      short SaveLoad_LoadFormID___AdvanceBuffer_
0x45BA38: jmp     short SaveLoad_LoadFormID___IrefLoop_Top
