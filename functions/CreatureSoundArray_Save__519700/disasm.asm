0x519700: push    ebx
0x519701: push    ebp
0x519702: push    esi
0x519703: push    edi
0x519704: mov     ebp, ecx
0x519706: xor     ebx, ebx
0x519708: xor     esi, esi
0x51970A: cmp     ebx, 9
0x51970D: ja      short loc_519713
0x51970F: mov     esi, [ebp+ebx*4+0]
0x519713: test    esi, esi
0x519715: jz      short loc_51976D
0x519717: cmp     dword ptr [esi+4], 0
0x51971B: jnz     short loc_519722
0x51971D: cmp     dword ptr [esi], 0
0x519720: jz      short loc_51976D
0x519722: push    ebx
0x519723: push    54445343h
0x519728: call    TESForm_PutCurrentChunkData4
0x51972D: add     esp, 8
0x519730: cmp     dword ptr [esi+4], 0
0x519734: jnz     short loc_51973B
0x519736: cmp     dword ptr [esi], 0
0x519739: jz      short loc_51976D
0x51973B: mov     edi, [esi]
0x51973D: mov     ecx, [edi]
0x51973F: xor     eax, eax
0x519741: test    ecx, ecx
0x519743: jz      short loc_519748
0x519745: mov     eax, [ecx+0Ch]
0x519748: push    eax
0x519749: push    49445343h
0x51974E: call    TESForm_PutCurrentChunkData4
0x519753: push    1; Size
0x519755: add     edi, 4
0x519758: push    edi; Src
0x519759: push    43445343h; int
0x51975E: call    TESForm_PutFormRecordChunkData
0x519763: mov     esi, [esi+4]
0x519766: add     esp, 14h
0x519769: test    esi, esi
0x51976B: jnz     short loc_519730
0x51976D: add     ebx, 1
0x519770: cmp     ebx, 0Ah
0x519773: jl      short loc_519708
0x519775: pop     edi
0x519776: pop     esi
0x519777: pop     ebp
0x519778: pop     ebx
0x519779: retn
