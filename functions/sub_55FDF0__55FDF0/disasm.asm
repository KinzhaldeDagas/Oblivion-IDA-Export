0x55FDF0: push    0FFFFFFFFh; Verified canopy-shadow path plus version difference: both games use Data\\Textures\\Trees\\CanopyShadow.dds and a white 16x16 fallback. Fallout loads through TES::CreateTextureImage and also updates BSShaderManager::pProjectedShadowTexture; Oblivion loads through OB_TES_LoadOrFindSourceTexture and stores through its renderer helper. Oblivion's adjacent renderer-resource global remains Unknown.
0x55FDF2: push    offset SEH_55FDF0
0x55FDF7: mov     eax, large fs:0
0x55FDFD: push    eax
0x55FDFE: sub     esp, 0Ch
0x55FE01: push    ebx
0x55FE02: push    ebp
0x55FE03: push    esi
0x55FE04: push    edi
0x55FE05: mov     eax, ds:0B30AACh
0x55FE0A: xor     eax, esp
0x55FE0C: push    eax
0x55FE0D: lea     eax, [esp+2Ch+var_C]
0x55FE11: mov     large fs:0, eax
0x55FE17: xor     esi, esi
0x55FE19: mov     [esp+2Ch+var_18], esi
0x55FE1D: cmp     ds:0B39E04h, esi
0x55FE23: jnz     short loc_55FE2E
0x55FE25: push    esi; recreate
0x55FE26: call    BSTreeManager_Create; Verified singleton Create(recreate): optionally destroys/frees an existing BSTreeManager, allocates 0x28 bytes, runs BSTreeManager_ctor, and stores the instance.
0x55FE2B: add     esp, 4
0x55FE2E: mov     eax, ds:0B39E04h
0x55FE33: mov     eax, [eax+4]
0x55FE36: cmp     eax, esi
0x55FE38: jnz     loc_55FF2D
0x55FE3E: mov     ecx, ds:0B333A0h
0x55FE44: cmp     ecx, esi
0x55FE46: jz      short loc_55FE69
0x55FE48: push    esi; searchArchives
0x55FE49: push    1; allowMissing
0x55FE4B: push    offset aDataTexturesTr; "Data\\Textures\\Trees\\CanopyShadow.dds"
0x55FE50: lea     edx, [esp+38h+outTexture]
0x55FE54: push    edx; outTexture
0x55FE55: call    OB_TES_LoadOrFindSourceTexture_010201A0; TES texture cache/load helper: checks the global texture map, optionally verifies file existence via FileFinder, loads NiSourceTexture by filename, caches it, and returns a refcounted texture pointer.
0x55FE5A: mov     [esp+2Ch+var_4], esi
0x55FE5E: mov     esi, [esp+2Ch+var_14]
0x55FE62: mov     ebx, 1
0x55FE67: jmp     short loc_55FE7E
0x55FE69: mov     [esp+2Ch+var_14], esi
0x55FE6D: lea     eax, [esp+2Ch+var_14]
0x55FE71: mov     [esp+2Ch+var_4], 1
0x55FE79: mov     ebx, 2
0x55FE7E: cmp     dword ptr ds:0B39E04h, 0
0x55FE85: mov     edi, [eax]
0x55FE87: mov     [esp+2Ch+var_18], ebx
0x55FE8B: jnz     short loc_55FE97
0x55FE8D: push    0; recreate
0x55FE8F: call    BSTreeManager_Create; Verified singleton Create(recreate): optionally destroys/frees an existing BSTreeManager, allocates 0x28 bytes, runs BSTreeManager_ctor, and stores the instance.
0x55FE94: add     esp, 4
0x55FE97: mov     ecx, ds:0B39E04h
0x55FE9D: push    edi; a2
0x55FE9E: add     ecx, 4; this
0x55FEA1: call    NiSmartPointer_Set??
0x55FEA6: test    bl, 2
0x55FEA9: mov     [esp+2Ch+var_4], 0
0x55FEB1: jz      short loc_55FED6
0x55FEB3: and     ebx, 0FFFFFFFDh
0x55FEB6: test    esi, esi
0x55FEB8: mov     [esp+2Ch+var_18], ebx
0x55FEBC: jz      short loc_55FED6
0x55FEBE: lea     eax, [esi+4]
0x55FEC1: push    eax; lpAddend
0x55FEC2: call    dword ptr ds:0A2807Ch
0x55FEC8: test    eax, eax
0x55FECA: jnz     short loc_55FED6
0x55FECC: mov     edx, [esi]
0x55FECE: mov     eax, [edx]
0x55FED0: push    1
0x55FED2: mov     ecx, esi
0x55FED4: call    eax
0x55FED6: or      ebp, 0FFFFFFFFh
0x55FED9: test    bl, 1
0x55FEDC: mov     [esp+2Ch+var_4], ebp
0x55FEE0: jz      short loc_55FF06
0x55FEE2: mov     esi, [esp+2Ch+outTexture]
0x55FEE6: test    esi, esi
0x55FEE8: jz      short loc_55FF06
0x55FEEA: lea     ecx, [esi+4]
0x55FEED: push    ecx; lpAddend
0x55FEEE: call    dword ptr ds:0A2807Ch
0x55FEF4: test    eax, eax
0x55FEF6: jnz     short loc_55FF06
0x55FEF8: test    esi, esi
0x55FEFA: jz      short loc_55FF06
0x55FEFC: mov     edx, [esi]
0x55FEFE: mov     eax, [edx]
0x55FF00: push    1
0x55FF02: mov     ecx, esi
0x55FF04: call    eax
0x55FF06: cmp     dword ptr ds:0B39E04h, 0
0x55FF0D: jnz     short loc_55FF19
0x55FF0F: push    0; recreate
0x55FF11: call    BSTreeManager_Create; Verified singleton Create(recreate): optionally destroys/frees an existing BSTreeManager, allocates 0x28 bytes, runs BSTreeManager_ctor, and stores the instance.
0x55FF16: add     esp, 4
0x55FF19: mov     ecx, ds:0B39E04h
0x55FF1F: mov     eax, [ecx+4]
0x55FF22: push    eax
0x55FF23: call    sub_55E340
0x55FF28: add     esp, 4
0x55FF2B: jmp     short loc_55FF30
0x55FF2D: or      ebp, 0FFFFFFFFh
0x55FF30: cmp     dword ptr ds:0B39E04h, 0
0x55FF37: jnz     short loc_55FF43
0x55FF39: push    0; recreate
0x55FF3B: call    BSTreeManager_Create; Verified singleton Create(recreate): optionally destroys/frees an existing BSTreeManager, allocates 0x28 bytes, runs BSTreeManager_ctor, and stores the instance.
0x55FF40: add     esp, 4
0x55FF43: mov     edx, ds:0B39E04h
0x55FF49: mov     eax, [edx+4]
0x55FF4C: test    eax, eax
0x55FF4E: jnz     loc_5600B9
0x55FF54: push    70h ; 'p'; Size
0x55FF56: call    FormHeapAlloc
0x55FF5B: add     esp, 4
0x55FF5E: mov     [esp+2Ch+var_14], eax
0x55FF62: test    eax, eax
0x55FF64: mov     [esp+2Ch+var_4], 2
0x55FF6C: jz      short loc_55FF86
0x55FF6E: push    1
0x55FF70: push    1
0x55FF72: push    offset unk_B25E48
0x55FF77: push    10h
0x55FF79: push    10h
0x55FF7B: mov     ecx, eax
0x55FF7D: call    NiPixelData__NiPixelData
0x55FF82: mov     esi, eax
0x55FF84: jmp     short loc_55FF88
0x55FF86: xor     esi, esi
0x55FF88: mov     eax, [esi+5Ch]
0x55FF8B: mov     eax, [eax]
0x55FF8D: add     eax, [esi+50h]
0x55FF90: mov     [esp+2Ch+var_4], ebp
0x55FF94: add     eax, 2
0x55FF97: mov     edi, 10h
0x55FF9C: mov     dl, 0FFh
0x55FF9E: mov     edi, edi
0x55FFA0: mov     ecx, 10h
0x55FFA5: mov     [eax-2], dl
0x55FFA8: mov     [eax-1], dl
0x55FFAB: mov     [eax], dl
0x55FFAD: add     eax, 3
0x55FFB0: sub     ecx, 1
0x55FFB3: jnz     short loc_55FFA5
0x55FFB5: sub     edi, 1
0x55FFB8: jnz     short loc_55FFA0
0x55FFBA: add     dword ptr [esi+68h], 1
0x55FFBE: mov     eax, ds:0B39E04h
0x55FFC3: test    eax, eax
0x55FFC5: jnz     short loc_55FFF5
0x55FFC7: push    28h ; '('; Size
0x55FFC9: call    FormHeapAlloc
0x55FFCE: add     esp, 4
0x55FFD1: mov     [esp+2Ch+var_14], eax
0x55FFD5: test    eax, eax
0x55FFD7: mov     [esp+2Ch+var_4], 3
0x55FFDF: jz      short loc_55FFEA
0x55FFE1: mov     ecx, eax; this
0x55FFE3: call    BSTreeManager_ctor; Verified Oblivion manager layout is 0x28 bytes with modelCacheByTree at +0 and pendingReferenceNodes at +0x24; constructor initializes shared Ni properties and the TESObjectREFR* -> BSTreeNode* map. Fallout's manager size/field offsets differ. Confidence applies to these local offsets and constructor stores.
0x55FFE8: jmp     short loc_55FFEC
0x55FFEA: xor     eax, eax
0x55FFEC: mov     [esp+2Ch+var_4], ebp
0x55FFF0: mov     ds:0B39E04h, eax
0x55FFF5: push    offset OB_TES_DefaultSourceTextureFormatPrefs_010201A0; a2
0x55FFFA: push    esi; a1
0x55FFFB: mov     ebx, eax
0x55FFFD: call    NiSourceTexture__LoadTexturePixelData
0x560002: mov     esi, [ebx+4]
0x560005: mov     ebp, ds:0A28078h
0x56000B: mov     edi, eax
0x56000D: add     esp, 8
0x560010: cmp     esi, edi
0x560012: jz      short loc_560041
0x560014: test    esi, esi
0x560016: jz      short loc_560034
0x560018: lea     ecx, [esi+4]
0x56001B: push    ecx; lpAddend
0x56001C: call    dword ptr ds:0A2807Ch
0x560022: test    eax, eax
0x560024: jnz     short loc_560034
0x560026: test    esi, esi
0x560028: jz      short loc_560034
0x56002A: mov     edx, [esi]
0x56002C: mov     eax, [edx]
0x56002E: push    1
0x560030: mov     ecx, esi
0x560032: call    eax
0x560034: test    edi, edi
0x560036: mov     [ebx+4], edi
0x560039: jz      short loc_560041
0x56003B: add     edi, 4
0x56003E: push    edi; lpAddend
0x56003F: call    ebp ; InterlockedIncrement
0x560041: mov     eax, ds:0B39E04h
0x560046: test    eax, eax
0x560048: jnz     short loc_56007C
0x56004A: push    28h ; '('; Size
0x56004C: call    FormHeapAlloc
0x560051: add     esp, 4
0x560054: mov     [esp+2Ch+var_14], eax
0x560058: test    eax, eax
0x56005A: mov     [esp+2Ch+var_4], 4
0x560062: jz      short loc_56006D
0x560064: mov     ecx, eax; this
0x560066: call    BSTreeManager_ctor; Verified Oblivion manager layout is 0x28 bytes with modelCacheByTree at +0 and pendingReferenceNodes at +0x24; constructor initializes shared Ni properties and the TESObjectREFR* -> BSTreeNode* map. Fallout's manager size/field offsets differ. Confidence applies to these local offsets and constructor stores.
0x56006B: jmp     short loc_56006F
0x56006D: xor     eax, eax
0x56006F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x560077: mov     ds:0B39E04h, eax
0x56007C: mov     edi, [eax+4]
0x56007F: mov     esi, ds:0B43108h
0x560085: cmp     esi, edi
0x560087: jz      short loc_5600B9
0x560089: test    esi, esi
0x56008B: jz      short loc_5600A9
0x56008D: lea     ecx, [esi+4]
0x560090: push    ecx; lpAddend
0x560091: call    dword ptr ds:0A2807Ch
0x560097: test    eax, eax
0x560099: jnz     short loc_5600A9
0x56009B: test    esi, esi
0x56009D: jz      short loc_5600A9
0x56009F: mov     edx, [esi]
0x5600A1: mov     eax, [edx]
0x5600A3: push    1
0x5600A5: mov     ecx, esi
0x5600A7: call    eax
0x5600A9: test    edi, edi
0x5600AB: mov     ds:0B43108h, edi
0x5600B1: jz      short loc_5600B9
0x5600B3: add     edi, 4
0x5600B6: push    edi; lpAddend
0x5600B7: call    ebp ; InterlockedIncrement
0x5600B9: mov     eax, ds:0B39E04h
0x5600BE: test    eax, eax
0x5600C0: jnz     short loc_5600EC
0x5600C2: push    28h ; '('; Size
0x5600C4: call    FormHeapAlloc
0x5600C9: add     esp, 4
0x5600CC: mov     [esp+2Ch+outTexture], eax
0x5600D0: test    eax, eax
0x5600D2: mov     [esp+2Ch+var_4], 5
0x5600DA: jz      short loc_5600E5
0x5600DC: mov     ecx, eax; this
0x5600DE: call    BSTreeManager_ctor; Verified Oblivion manager layout is 0x28 bytes with modelCacheByTree at +0 and pendingReferenceNodes at +0x24; constructor initializes shared Ni properties and the TESObjectREFR* -> BSTreeNode* map. Fallout's manager size/field offsets differ. Confidence applies to these local offsets and constructor stores.
0x5600E3: jmp     short loc_5600E7
0x5600E5: xor     eax, eax
0x5600E7: mov     ds:0B39E04h, eax
0x5600EC: mov     eax, [eax+4]
0x5600EF: mov     ecx, [esp+2Ch+var_C]
0x5600F3: mov     large fs:0, ecx
0x5600FA: pop     ecx
0x5600FB: pop     edi
0x5600FC: pop     esi
0x5600FD: pop     ebp
0x5600FE: pop     ebx
0x5600FF: add     esp, 18h
0x560102: retn
0x9BCCF0: mov     eax, [ebp-18h]
0x9BCCF3: and     eax, 1
0x9BCCF6: jz      locret_9BCD08
0x9BCCFC: and     dword ptr [ebp-18h], 0FFFFFFFEh
0x9BCD00: lea     ecx, [ebp-10h]; slot
0x9BCD03: jmp     NiPointerSlot_Release
0x9BCD08: retn
0x9BCD09: mov     eax, [ebp-18h]
0x9BCD0C: and     eax, 2
0x9BCD0F: jz      locret_9BCD21
0x9BCD15: and     dword ptr [ebp-18h], 0FFFFFFFDh
0x9BCD19: lea     ecx, [ebp-14h]; slot
0x9BCD1C: jmp     NiPointerSlot_Release
0x9BCD21: retn
0x9BCD22: mov     eax, [ebp-14h]
0x9BCD25: push    eax
0x9BCD26: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BCD2B: pop     ecx
0x9BCD2C: retn
0x9BCD2D: mov     eax, [ebp-14h]
0x9BCD30: push    eax
0x9BCD31: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BCD36: pop     ecx
0x9BCD37: retn
0x9BCD38: mov     eax, [ebp-14h]
0x9BCD3B: push    eax
0x9BCD3C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BCD41: pop     ecx
0x9BCD42: retn
0x9BCD43: mov     eax, [ebp-10h]
0x9BCD46: push    eax
0x9BCD47: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BCD4C: pop     ecx
0x9BCD4D: retn
0x9BCD4E: mov     edx, [esp+arg_4]
0x9BCD52: lea     eax, [edx-1Ch]
0x9BCD55: mov     ecx, [edx-20h]
0x9BCD58: xor     ecx, eax
0x9BCD5A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCD5F: mov     eax, offset stru_AE6834
0x9BCD64: jmp     ___CxxFrameHandler3
