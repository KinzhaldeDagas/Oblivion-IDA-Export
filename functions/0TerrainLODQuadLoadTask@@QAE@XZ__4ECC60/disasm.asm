0x4ECC60: push    0FFFFFFFFh; Verified TerrainLODQuadLoadTask layout/constructor: 0x48 bytes; +0x2C owning WorldSpace FormID, +0x30/+0x34 tile-file X/Y, +0x38 quad-data context, +0x3C loaded mesh node, +0x40/+0x44 generated color/normal textures.
0x4ECC62: push    offset ??0TerrainLODQuadLoadTask@@QAE@XZ_SEH
0x4ECC67: mov     eax, large fs:0
0x4ECC6D: push    eax
0x4ECC6E: sub     esp, 10Ch
0x4ECC74: mov     eax, ds:0B30AACh
0x4ECC79: xor     eax, esp
0x4ECC7B: mov     [esp+118h+var_10], eax
0x4ECC82: push    ebx
0x4ECC83: push    esi
0x4ECC84: mov     eax, ds:0B30AACh
0x4ECC89: xor     eax, esp
0x4ECC8B: push    eax
0x4ECC8C: lea     eax, [esp+124h+var_C]
0x4ECC93: mov     large fs:0, eax
0x4ECC99: mov     esi, ecx
0x4ECC9B: push    3
0x4ECC9D: mov     [esp+128h+var_118], esi
0x4ECCA1: call    sub_436FA0
0x4ECCA6: mov     eax, [esp+124h+worldspaceLODKey]
0x4ECCAD: mov     ecx, [esp+124h+tileFileX]
0x4ECCB4: mov     edx, [esp+124h+tileFileY]
0x4ECCBB: xor     ebx, ebx
0x4ECCBD: mov     [esi+2Ch], eax
0x4ECCC0: mov     eax, [esp+124h+quadData]
0x4ECCC7: mov     dword ptr [esi], offset ??_7TerrainLODQuadLoadTask@@6B@; const TerrainLODQuadLoadTask::`vftable'
0x4ECCCD: mov     [esi+28h], bl
0x4ECCD0: mov     [esi+30h], ecx
0x4ECCD3: mov     [esi+34h], edx
0x4ECCD6: mov     [esi+38h], eax
0x4ECCD9: mov     [esp+124h+var_4], ebx
0x4ECCE0: mov     [esi+3Ch], ebx
0x4ECCE3: mov     [esi+40h], ebx
0x4ECCE6: mov     [esi+44h], ebx
0x4ECCE9: mov     ecx, [esi+34h]
0x4ECCEC: mov     edx, [esi+30h]
0x4ECCEF: mov     eax, [esi+2Ch]
0x4ECCF2: push    20h ; ' '
0x4ECCF4: push    ecx
0x4ECCF5: push    edx
0x4ECCF6: push    eax
0x4ECCF7: lea     ecx, [esp+134h+var_114]
0x4ECCFB: push    offset aMeshesLandscap; "Meshes\\Landscape\\LOD\\%i.%02i.%02i.%i"...
0x4ECD00: push    ecx
0x4ECD01: mov     byte ptr [esp+13Ch+var_4], 3
0x4ECD09: call    __sprintf; Verified NIF path format: `Meshes\\Landscape\\LOD\\<worldspace-key>.<tileFileX>.<tileFileY>.32.NIF`; tileFileX/Y are quadX/quadY multiplied by 32.
0x4ECD0E: add     esp, 18h
0x4ECD11: lea     edx, [esp+124h+var_114]
0x4ECD15: push    edx
0x4ECD16: mov     ecx, esi
0x4ECD18: call    sub_434600; QueuedFileEntry path copy helper. Allocates and copies source path string into entry +0x20.
0x4ECD1D: push    1
0x4ECD1F: push    ebx
0x4ECD20: mov     ecx, esi
0x4ECD22: call    sub_434CB0; QueuedFileEntry archive lookup helper. Hashes copied path at +0x20 and stores resolved archive/file entry pointer at +0x24.
0x4ECD27: mov     eax, esi
0x4ECD29: mov     ecx, [esp+124h+var_C]
0x4ECD30: mov     large fs:0, ecx
0x4ECD37: pop     ecx
0x4ECD38: pop     esi
0x4ECD39: pop     ebx
0x4ECD3A: mov     ecx, [esp+118h+var_10]
0x4ECD41: xor     ecx, esp
0x4ECD43: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4ECD48: add     esp, 118h
0x4ECD4E: retn    10h
0x9B64D0: mov     ecx, [ebp-118h]; this
0x9B64D6: jmp     ??1LipTask@@UAE@XZ; LipTask::~LipTask(void)
0x9B64DB: mov     ecx, [ebp-118h]
0x9B64E1: add     ecx, 3Ch ; '<'; slot
0x9B64E4: jmp     NiPointerSlot_Release
0x9B64E9: mov     ecx, [ebp-118h]
0x9B64EF: add     ecx, 40h ; '@'; slot
0x9B64F2: jmp     NiPointerSlot_Release
0x9B64F7: mov     ecx, [ebp-118h]
0x9B64FD: add     ecx, 44h ; 'D'; slot
0x9B6500: jmp     NiPointerSlot_Release
0x9B6505: mov     edx, [esp+worldspaceLODKey]
0x9B6509: lea     eax, [edx-114h]
0x9B650F: mov     ecx, [edx-118h]
0x9B6515: xor     ecx, eax
0x9B6517: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B651C: add     eax, 8
0x9B651F: mov     ecx, [edx-4]
0x9B6522: xor     ecx, eax
0x9B6524: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6529: mov     eax, offset stru_AE13D8
0x9B652E: jmp     ___CxxFrameHandler3
