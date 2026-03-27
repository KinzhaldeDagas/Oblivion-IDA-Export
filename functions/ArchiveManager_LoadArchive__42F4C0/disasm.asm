0x42F4C0: push    0FFFFFFFFh
0x42F4C2: push    offset ArchiveManager_LoadArchive_SEH
0x42F4C7: mov     eax, large fs:0
0x42F4CD: push    eax
0x42F4CE: sub     esp, 10Ch
0x42F4D4: mov     eax, ___security_cookie
0x42F4D9: xor     eax, esp
0x42F4DB: mov     [esp+118h+var_10], eax
0x42F4E2: push    esi
0x42F4E3: mov     eax, ___security_cookie
0x42F4E8: xor     eax, esp
0x42F4EA: push    eax
0x42F4EB: lea     eax, [esp+120h+var_C]
0x42F4F2: mov     large fs:0, eax
0x42F4F8: cmp     bUseArchives_Archive, 0
0x42F4FF: mov     eax, [esp+120h+arg_0]
0x42F506: jz      loc_42F5E9
0x42F50C: mov     ecx, OBSE_g_FileFinder
0x42F512: test    ecx, ecx
0x42F514: jz      loc_42F5E9
0x42F51A: mov     edx, [ecx]
0x42F51C: push    0FFFFFFFFh
0x42F51E: push    1
0x42F520: lea     esi, [esp+128h+var_114]
0x42F524: push    esi
0x42F525: push    eax
0x42F526: mov     eax, [edx+4]
0x42F529: call    eax
0x42F52B: test    eax, eax
0x42F52D: jz      loc_42F5E9
0x42F533: push    280h; Size
0x42F538: call    FormHeapAlloc
0x42F53D: add     esp, 4
0x42F540: mov     [esp+120h+var_118], eax
0x42F544: test    eax, eax
0x42F546: mov     [esp+120h+var_4], 0
0x42F551: jz      short loc_42F570
0x42F553: mov     ecx, [esp+120h+arg_8]
0x42F55A: push    ecx
0x42F55B: push    0
0x42F55D: push    40000h
0x42F562: mov     edx, esi
0x42F564: push    edx
0x42F565: mov     ecx, eax; this
0x42F567: call    ??0Archive@@QAE@XZ; Archive::Archive(void)
0x42F56C: mov     esi, eax
0x42F56E: jmp     short loc_42F572
0x42F570: xor     esi, esi
0x42F572: test    esi, esi
0x42F574: mov     [esp+120h+var_4], 0FFFFFFFFh
0x42F57F: jz      short loc_42F5E9
0x42F581: cmp     byte ptr [esi+24h], 0
0x42F585: jz      short loc_42F5DF
0x42F587: test    byte ptr [esi+194h], 1
0x42F58E: jnz     short loc_42F5DF
0x42F590: mov     ecx, ArchiveList
0x42F596: test    ecx, ecx
0x42F598: jnz     short loc_42F5C1
0x42F59A: push    8; Size
0x42F59C: call    FormHeapAlloc
0x42F5A1: add     esp, 4
0x42F5A4: test    eax, eax
0x42F5A6: jz      short loc_42F5B7
0x42F5A8: mov     dword ptr [eax], 0
0x42F5AE: mov     dword ptr [eax+4], 0
0x42F5B5: jmp     short loc_42F5B9
0x42F5B7: xor     eax, eax
0x42F5B9: mov     ecx, eax
0x42F5BB: mov     ArchiveList, ecx
0x42F5C1: push    esi
0x42F5C2: call    BSSimpleList_PushBack
0x42F5C7: mov     ax, word ptr [esp+120h+arg_4]
0x42F5CF: test    ax, ax
0x42F5D2: jz      short loc_42F5DB
0x42F5D4: mov     [esi+174h], ax
0x42F5DB: mov     eax, esi
0x42F5DD: jmp     short loc_42F5EB
0x42F5DF: mov     eax, [esi]
0x42F5E1: mov     edx, [eax]
0x42F5E3: push    1
0x42F5E5: mov     ecx, esi
0x42F5E7: call    edx
0x42F5E9: xor     eax, eax
0x42F5EB: mov     ecx, dword ptr [esp+120h+var_C]
0x42F5F2: mov     large fs:0, ecx
0x42F5F9: pop     ecx
0x42F5FA: pop     esi
0x42F5FB: mov     ecx, [esp+118h+var_10]
0x42F602: xor     ecx, esp
0x42F604: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42F609: add     esp, 118h
0x42F60F: retn
