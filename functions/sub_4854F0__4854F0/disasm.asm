0x4854F0: push    ebx
0x4854F1: push    esi
0x4854F2: mov     esi, ecx
0x4854F4: mov     eax, [esi+8]
0x4854F7: push    eax
0x4854F8: xor     bl, bl
0x4854FA: call    sub_4691B0
0x4854FF: add     esp, 4
0x485502: test    eax, eax
0x485504: jz      short loc_485516
0x485506: mov     ecx, eax
0x485508: call    TESBipedModelForm_IsPlayable
0x48550D: test    al, al
0x48550F: jnz     short loc_485516
0x485511: pop     esi
0x485512: pop     ebx
0x485513: retn    14h
0x485516: cmp     dword ptr [esi+8], 0
0x48551A: push    ebp
0x48551B: jz      short loc_485549
0x48551D: mov     ecx, [esi+8]
0x485520: mov     edx, [ecx]
0x485522: mov     eax, [edx+78h]
0x485525: call    eax
0x485527: test    al, al
0x485529: jz      short loc_485549
0x48552B: mov     eax, ds:0B333C4h
0x485530: cmp     byte ptr [eax+200h], 0
0x485537: jz      short loc_48554E
0x485539: mov     ebp, [esp+0Ch+a2]
0x48553D: cmp     ebp, eax
0x48553F: jnz     short loc_485556
0x485541: pop     ebp
0x485542: pop     esi
0x485543: xor     al, al
0x485545: pop     ebx
0x485546: retn    14h
0x485549: mov     eax, ds:0B333C4h
0x48554E: mov     ebp, [esp+0Ch+a2]
0x485552: cmp     ebp, eax
0x485554: jz      short loc_48556D
0x485556: mov     eax, [esi]
0x485558: test    eax, eax
0x48555A: jz      short loc_48556D
0x48555C: mov     eax, [eax]
0x48555E: test    eax, eax
0x485560: jz      short loc_48556D
0x485562: mov     ecx, eax
0x485564: call    sub_41DF50
0x485569: test    al, al
0x48556B: jnz     short loc_485541
0x48556D: cmp     [esp+0Ch+a5], 0
0x485572: jz      short loc_48557C
0x485574: pop     ebp
0x485575: pop     esi
0x485576: mov     al, 1
0x485578: pop     ebx
0x485579: retn    14h
0x48557C: cmp     [esp+0Ch+a3], 0
0x485581: push    edi
0x485582: jnz     short loc_48559B
0x485584: push    0
0x485586: mov     ecx, esi
0x485588: call    ContainerEntryExtraData_HasWorn
0x48558D: pop     edi
0x48558E: test    al, al
0x485590: pop     ebp
0x485591: setz    bl
0x485594: pop     esi
0x485595: mov     al, bl
0x485597: pop     ebx
0x485598: retn    14h
0x48559B: mov     eax, [esi]
0x48559D: test    eax, eax
0x48559F: jz      short loc_4855FA
0x4855A1: mov     edi, [eax]
0x4855A3: test    edi, edi
0x4855A5: jz      short loc_4855FA
0x4855A7: mov     ecx, edi
0x4855A9: call    ExtraDataList_GetOwner
0x4855AE: test    eax, eax
0x4855B0: jz      short loc_4855FA
0x4855B2: mov     ecx, edi
0x4855B4: call    ExtraDataList_GetOwner
0x4855B9: test    eax, eax
0x4855BB: jz      short loc_4855FA
0x4855BD: mov     ecx, ds:0B333C4h
0x4855C3: mov     edx, [ecx]
0x4855C5: mov     eax, [edx+170h]
0x4855CB: call    eax
0x4855CD: mov     ecx, esi
0x4855CF: mov     edi, eax
0x4855D1: call    sub_484B70
0x4855D6: cmp     eax, edi
0x4855D8: jz      short loc_4855FA
0x4855DA: mov     edx, [ebp+0]
0x4855DD: mov     eax, [edx+284h]
0x4855E3: push    24h ; '$'
0x4855E5: mov     ecx, ebp
0x4855E7: call    eax
0x4855E9: cmp     eax, ds:0B36C30h
0x4855EF: jle     short loc_4855FA
0x4855F1: pop     edi
0x4855F2: pop     ebp
0x4855F3: pop     esi
0x4855F4: xor     al, al
0x4855F6: pop     ebx
0x4855F7: retn    14h
0x4855FA: mov     ecx, [esi+8]
0x4855FD: push    ecx
0x4855FE: push    0; a2
0x485600: mov     ecx, ebp; this
0x485602: call    Actor_GetActorBaseForm
0x485607: mov     ecx, eax
0x485609: add     ecx, 68h ; 'h'
0x48560C: call    TESAIForm_OffersServiceForItem
0x485611: test    al, al
0x485613: jz      short loc_485617
0x485615: mov     bl, 1
0x485617: mov     ecx, ds:0B333C4h
0x48561D: push    1Dh
0x48561F: call    Actor_GetSkillMasteryLevel
0x485624: cmp     eax, 2
0x485627: jl      short loc_48562B
0x485629: mov     bl, 1
0x48562B: mov     eax, [esi]
0x48562D: test    eax, eax
0x48562F: jz      short loc_485635
0x485631: mov     edi, [eax]
0x485633: jmp     short loc_485637
0x485635: xor     edi, edi
0x485637: push    0
0x485639: mov     ecx, esi
0x48563B: call    ContainerEntryExtraData_HasWorn
0x485640: test    al, al
0x485642: jz      short loc_485655
0x485644: test    edi, edi
0x485646: jz      short loc_485655
0x485648: mov     ecx, edi
0x48564A: call    sub_41DF40
0x48564F: test    al, al
0x485651: jz      short loc_485655
0x485653: xor     bl, bl
0x485655: pop     edi
0x485656: pop     ebp
0x485657: pop     esi
0x485658: mov     al, bl
0x48565A: pop     ebx
0x48565B: retn    14h
