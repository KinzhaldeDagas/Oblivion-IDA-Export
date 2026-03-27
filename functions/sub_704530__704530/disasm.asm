0x704530: push    0FFFFFFFFh
0x704532: push    offset SEH_704530
0x704537: mov     eax, large fs:0
0x70453D: push    eax
0x70453E: push    ecx
0x70453F: push    ebx
0x704540: push    ebp
0x704541: push    esi
0x704542: push    edi
0x704543: mov     eax, ds:0B30AACh
0x704548: xor     eax, esp
0x70454A: push    eax
0x70454B: lea     eax, [esp+24h+var_C]
0x70454F: mov     large fs:0, eax
0x704555: mov     edi, ecx
0x704557: mov     [esp+24h+var_10], edi
0x70455B: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x704560: xor     ebx, ebx
0x704562: mov     dword ptr [edi], offset ??_7NiTexturingProperty@@6B@; const NiTexturingProperty::`vftable'
0x704568: mov     [edi+18h], bx
0x70456C: lea     esi, [edi+1Ch]
0x70456F: xor     ecx, ecx
0x704571: mov     eax, 7
0x704576: mov     [esi+8], ax
0x70457A: mov     edx, 4
0x70457F: mul     edx
0x704581: seto    cl
0x704584: mov     [esp+24h+var_4], ebx
0x704588: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVMap@NiTexturingProperty@@@@6B@; const NiTArray<NiTexturingProperty::Map *>::`vftable'
0x70458E: mov     word ptr [esi+0Eh], 1
0x704594: mov     [esi+0Ah], bx
0x704598: mov     [esi+0Ch], bx
0x70459C: neg     ecx
0x70459E: or      ecx, eax
0x7045A0: push    ecx; Size
0x7045A1: call    FormHeapAlloc
0x7045A6: add     esp, 4
0x7045A9: mov     [esi+4], eax
0x7045AC: mov     eax, [esp+24h+arg_4]
0x7045B0: cmp     eax, ebx
0x7045B2: push    1; char
0x7045B4: mov     byte ptr [esp+28h+var_4], 1
0x7045B9: mov     [edi+2Ch], ebx
0x7045BC: push    offset dword_B256D0; int
0x7045C1: jz      short loc_704620
0x7045C3: push    eax
0x7045C4: call    NiSourceTexture__LoadTextureNothing
0x7045C9: mov     ebp, eax
0x7045CB: add     esp, 0Ch
0x7045CE: cmp     ebp, ebx
0x7045D0: mov     [esp+24h+arg_4], ebp
0x7045D4: jz      short loc_7045E0
0x7045D6: lea     eax, [ebp+4]
0x7045D9: push    eax; lpAddend
0x7045DA: call    dword ptr ds:0A28078h
0x7045E0: mov     ecx, ds:0B3FAC8h
0x7045E6: mov     edx, [ecx]
0x7045E8: mov     eax, [esp+24h+Src]
0x7045EC: mov     edx, [edx+4]
0x7045EF: push    ebx
0x7045F0: push    eax
0x7045F1: mov     byte ptr [esp+2Ch+var_4], 2
0x7045F6: call    edx
0x7045F8: cmp     ebp, ebx
0x7045FA: mov     [esp+24h+Src], eax
0x7045FE: mov     byte ptr [esp+24h+var_4], 1
0x704603: jz      short loc_704631
0x704605: lea     eax, [ebp+4]
0x704608: push    eax; lpAddend
0x704609: call    dword ptr ds:0A2807Ch
0x70460F: test    eax, eax
0x704611: jnz     short loc_704631
0x704613: mov     edx, [ebp+0]
0x704616: mov     eax, [edx]
0x704618: push    1
0x70461A: mov     ecx, ebp
0x70461C: call    eax
0x70461E: jmp     short loc_704631
0x704620: mov     ecx, [esp+2Ch+Src]
0x704624: push    ecx; Src
0x704625: call    NiSourceTexture__LoadTextureByFilename
0x70462A: add     esp, 0Ch
0x70462D: mov     [esp+24h+Src], eax
0x704631: push    10h; Size
0x704633: call    FormHeapAlloc
0x704638: mov     ebp, eax
0x70463A: add     esp, 4
0x70463D: cmp     ebp, ebx
0x70463F: jz      short loc_704678
0x704641: mov     eax, [esp+24h+Src]
0x704645: cmp     eax, ebx
0x704647: mov     dword ptr [ebp+0], offset ??_7Map@NiTexturingProperty@@6B@; const NiTexturingProperty::Map::`vftable'
0x70464E: mov     [ebp+4], bx
0x704652: mov     [ebp+8], eax
0x704655: jz      short loc_704661
0x704657: add     eax, 4
0x70465A: push    eax; lpAddend
0x70465B: call    dword ptr ds:0A28078h
0x704661: mov     dx, [ebp+4]
0x704665: and     dx, 0F100h
0x70466A: or      dx, 3100h
0x70466F: mov     [ebp+0Ch], ebx
0x704672: mov     [ebp+4], dx
0x704676: jmp     short loc_70467A
0x704678: xor     ebp, ebp
0x70467A: cmp     [esi+8], bx
0x70467E: mov     [esp+24h+Src], ebp
0x704682: ja      short loc_704690
0x704684: movzx   eax, word ptr [esi+0Eh]
0x704688: push    eax
0x704689: mov     ecx, esi
0x70468B: call    NiTArray_SetSize
0x704690: lea     ecx, [esp+24h+Src]
0x704694: push    ecx
0x704695: push    ebx
0x704696: mov     ecx, esi
0x704698: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70469D: cmp     word ptr [esi+8], 1
0x7046A2: mov     [esp+24h+Src], ebx
0x7046A6: ja      short loc_7046B7
0x7046A8: movzx   edx, word ptr [esi+0Eh]
0x7046AC: add     edx, 1
0x7046AF: push    edx
0x7046B0: mov     ecx, esi
0x7046B2: call    NiTArray_SetSize
0x7046B7: lea     eax, [esp+24h+Src]
0x7046BB: push    eax
0x7046BC: push    1
0x7046BE: mov     ecx, esi
0x7046C0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7046C5: cmp     word ptr [esi+8], 2
0x7046CA: mov     [esp+24h+Src], ebx
0x7046CE: ja      short loc_7046DF
0x7046D0: movzx   ecx, word ptr [esi+0Eh]
0x7046D4: add     ecx, 2
0x7046D7: push    ecx
0x7046D8: mov     ecx, esi
0x7046DA: call    NiTArray_SetSize
0x7046DF: lea     edx, [esp+24h+Src]
0x7046E3: push    edx
0x7046E4: push    2
0x7046E6: mov     ecx, esi
0x7046E8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7046ED: cmp     word ptr [esi+8], 3
0x7046F2: mov     [esp+24h+Src], ebx
0x7046F6: ja      short loc_704707
0x7046F8: movzx   eax, word ptr [esi+0Eh]
0x7046FC: add     eax, 3
0x7046FF: push    eax
0x704700: mov     ecx, esi
0x704702: call    NiTArray_SetSize
0x704707: lea     ecx, [esp+24h+Src]
0x70470B: push    ecx
0x70470C: push    3
0x70470E: mov     ecx, esi
0x704710: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704715: cmp     word ptr [esi+8], 4
0x70471A: mov     [esp+24h+Src], ebx
0x70471E: ja      short loc_70472F
0x704720: movzx   edx, word ptr [esi+0Eh]
0x704724: add     edx, 4
0x704727: push    edx
0x704728: mov     ecx, esi
0x70472A: call    NiTArray_SetSize
0x70472F: lea     eax, [esp+24h+Src]
0x704733: push    eax
0x704734: push    4
0x704736: mov     ecx, esi
0x704738: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70473D: cmp     word ptr [esi+8], 5
0x704742: mov     [esp+24h+Src], ebx
0x704746: ja      short loc_704757
0x704748: movzx   ecx, word ptr [esi+0Eh]
0x70474C: add     ecx, 5
0x70474F: push    ecx
0x704750: mov     ecx, esi
0x704752: call    NiTArray_SetSize
0x704757: lea     edx, [esp+24h+Src]
0x70475B: push    edx
0x70475C: push    5
0x70475E: mov     ecx, esi
0x704760: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704765: cmp     word ptr [esi+8], 6
0x70476A: mov     [esp+24h+Src], ebx
0x70476E: ja      short loc_70477F
0x704770: movzx   eax, word ptr [esi+0Eh]
0x704774: add     eax, 6
0x704777: push    eax
0x704778: mov     ecx, esi
0x70477A: call    NiTArray_SetSize
0x70477F: lea     ecx, [esp+24h+Src]
0x704783: push    ecx
0x704784: push    6
0x704786: mov     ecx, esi
0x704788: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70478D: movzx   edx, word ptr [edi+26h]
0x704791: and     word ptr [edi+18h], 0F00Fh
0x704797: movzx   esi, word ptr [edi+18h]
0x70479B: mov     eax, 1
0x7047A0: cmp     edx, eax
0x7047A2: jbe     short loc_7047BE
0x7047A4: mov     ecx, [edi+20h]
0x7047A7: add     ecx, 4
0x7047AA: lea     ebx, [ebx+0]
0x7047B0: cmp     [ecx], ebx
0x7047B2: jnz     short loc_7047F0
0x7047B4: add     eax, 1
0x7047B7: add     ecx, 4
0x7047BA: cmp     eax, edx
0x7047BC: jb      short loc_7047B0
0x7047BE: and     esi, 0FFFEh
0x7047C4: mov     dx, si
0x7047C7: and     dx, 0FFF5h
0x7047CC: or      dx, 4
0x7047D0: mov     [edi+18h], si
0x7047D4: mov     [edi+18h], dx
0x7047D8: mov     eax, edi
0x7047DA: mov     ecx, [esp+24h+var_C]
0x7047DE: mov     large fs:0, ecx
0x7047E5: pop     ecx
0x7047E6: pop     edi
0x7047E7: pop     esi
0x7047E8: pop     ebp
0x7047E9: pop     ebx
0x7047EA: add     esp, 10h
0x7047ED: retn    8
0x7047F0: or      esi, 1
0x7047F3: jmp     short loc_7047C4
