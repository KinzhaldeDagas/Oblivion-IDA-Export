0x451210: push    esi
0x451211: push    edi
0x451212: mov     esi, ecx
0x451214: xor     edi, edi
0x451216: cmp     [esi+23Ch], edi
0x45121C: jnz     short loc_45123E
0x45121E: call    TESFile_LoadRecordHeader
0x451223: test    al, al
0x451225: jnz     short loc_45122B
0x451227: xor     eax, eax
0x451229: jmp     short TESFile_InitializeFormFromRecord___SetFormData
0x45122B: mov     ecx, esi; this
0x45122D: mov     [esi+250h], edi
0x451233: mov     [esi+254h], edi
0x451239: call    TESFile_LoadChunkHeader
0x45123E: mov     eax, [esi+23Ch]
0x451244: push    eax
0x451245: call    TESForm_GetFormTypeFromChunkType
0x45124A: add     esp, 4
0x45124D: mov     edi, [esp+8+arg_0]
0x451251: mov     ecx, [edi+8]
0x451254: shr     ecx, 0Eh
0x451257: test    cl, 1
0x45125A: mov     [edi+4], al
0x45125D: jz      short loc_451270
0x45125F: mov     edx, [esi+244h]
0x451265: or      edx, 4000h
0x45126B: mov     [edi+8], edx
0x45126E: jmp     short TESFile_InitializeFormFromRecord___SetFormID
0x451270: mov     eax, [esi+244h]
0x451276: mov     [edi+8], eax
0x451279: mov     ecx, [esi+248h]
0x45127F: push    1
0x451281: push    ecx
0x451282: mov     ecx, edi
0x451284: call    TESForm_SetFormID
0x451289: push    esi
0x45128A: mov     ecx, edi
0x45128C: call    sub_46B6C0
0x451291: pop     edi
0x451292: pop     esi
0x451293: retn    4
