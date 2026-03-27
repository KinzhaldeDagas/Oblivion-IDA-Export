0x4AF730: push    ebp
0x4AF731: mov     ebp, esp
0x4AF733: sub     esp, 18h
0x4AF736: mov     eax, ds:0B30AACh
0x4AF73B: xor     eax, ebp
0x4AF73D: mov     [ebp+var_4], eax
0x4AF740: push    ebx
0x4AF741: push    esi
0x4AF742: push    edi
0x4AF743: mov     edi, [ebp+arg_0]
0x4AF746: mov     esi, ecx
0x4AF748: mov     ecx, edi
0x4AF74A: call    TESFile_GetRecordType
0x4AF74F: cmp     al, 25h ; '%'
0x4AF751: jz      short loc_4AF75A
0x4AF753: xor     al, al
0x4AF755: jmp     loc_4AF8A0
0x4AF75A: push    esi
0x4AF75B: mov     ecx, edi; this
0x4AF75D: call    TESFile_InitializeFormFromRecord
