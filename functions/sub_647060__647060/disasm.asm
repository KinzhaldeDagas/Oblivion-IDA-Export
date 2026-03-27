0x647060: mov     eax, [esp+arg_4]
0x647064: push    ebx
0x647065: mov     ebx, [esp+4+arg_0]
0x647069: push    ebp
0x64706A: push    esi
0x64706B: push    edi
0x64706C: push    eax
0x64706D: push    ebx
0x64706E: mov     edi, ecx
0x647070: call    sub_60D0E0
0x647075: mov     ecx, ds:0B33B00h
0x64707B: movzx   esi, ax
0x64707E: mov     [esp+10h+arg_4], esi
0x647082: movzx   ebp, si
0x647085: call    sub_45A170
0x64708A: test    al, al
0x64708C: jz      short loc_647091
0x64708E: add     esi, 6
0x647091: mov     ecx, ds:0B33B00h
0x647097: mov     al, [ecx+7Ch]
0x64709A: add     esi, 0Bh
0x64709D: cmp     al, 34h ; '4'
0x64709F: jb      short loc_6470A4
0x6470A1: add     esi, 1
0x6470A4: cmp     al, 37h ; '7'
0x6470A6: jb      short loc_6470AB
0x6470A8: add     esi, 1
0x6470AB: cmp     al, 4Bh ; 'K'
0x6470AD: jb      short loc_6470B2
0x6470AF: add     esi, 4
0x6470B2: cmp     al, 4Fh ; 'O'
0x6470B4: jb      short loc_6470B9
0x6470B6: add     esi, 8
0x6470B9: cmp     al, 56h ; 'V'
0x6470BB: jb      short loc_6470C0
0x6470BD: add     esi, 4
0x6470C0: add     esi, 8
0x6470C3: test    ebx, 400000h
0x6470C9: mov     [esp+10h+arg_4], esi
0x6470CD: jz      short loc_6470EE
0x6470CF: lea     ecx, [edi+70h]
0x6470D2: call    AVCollection_GetSaveSize
0x6470D7: mov     ecx, ds:0B33B00h
0x6470DD: mov     di, si
0x6470E0: add     di, ax
0x6470E3: mov     word ptr [esp+10h+arg_4], di
0x6470E8: mov     esi, [esp+10h+arg_4]
0x6470EC: jmp     short loc_6470F3
0x6470EE: mov     di, word ptr [esp+10h+arg_4]
0x6470F3: mov     al, [ecx+7Ch]
0x6470F6: cmp     al, 74h ; 't'
0x6470F8: jb      short loc_647104
0x6470FA: add     esi, 4
0x6470FD: mov     [esp+10h+arg_4], esi
0x647101: mov     di, si
0x647104: cmp     al, 76h ; 'v'
0x647106: jb      short loc_647112
0x647108: add     esi, 1
0x64710B: mov     [esp+10h+arg_4], esi
0x64710F: mov     di, si
0x647112: cmp     byte ptr ds:0B05BACh, 0
0x647119: jz      short loc_64718E
0x64711B: mov     esi, [ecx+84h]
0x647121: test    esi, esi
0x647123: jz      short loc_64716E
0x647125: mov     ecx, [esi]
0x647127: push    ecx; a1
0x647128: call    TESForm_LookupByFormID
0x64712D: mov     edx, [esi+5]
0x647130: add     esp, 4
0x647133: push    offset a_AiLowprocess_; ".\\AI\\LowProcess.cpp"
0x647138: push    0ED8h
0x64713D: push    edx
0x64713E: mov     edx, [eax]
0x647140: mov     ecx, eax
0x647142: mov     eax, [edx+0D4h]
0x647148: call    eax
0x64714A: mov     ecx, [esi]
0x64714C: push    eax
0x64714D: movzx   edx, bp
0x647150: movzx   eax, di
0x647153: push    ecx
0x647154: sub     eax, edx
0x647156: push    eax; ArgList
0x647157: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x64715C: call    sub_40FEC0
0x647161: add     esp, 1Ch
0x647164: mov     ax, di
0x647167: pop     edi
0x647168: pop     esi
0x647169: pop     ebp
0x64716A: pop     ebx
0x64716B: retn    8
0x64716E: movzx   ecx, bp
0x647171: push    offset a_AiLowprocess_; ".\\AI\\LowProcess.cpp"
0x647176: movzx   edx, di
0x647179: push    0ED8h
0x64717E: sub     edx, ecx
0x647180: push    edx; ArgList
0x647181: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x647186: call    sub_40FEC0
0x64718B: add     esp, 10h
0x64718E: mov     ax, di
0x647191: pop     edi
0x647192: pop     esi
0x647193: pop     ebp
0x647194: pop     ebx
0x647195: retn    8
