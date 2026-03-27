0x4ECC60: push    0FFFFFFFFh
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
0x4ECCA6: mov     eax, [esp+124h+arg_4]
0x4ECCAD: mov     ecx, [esp+124h+arg_8]
0x4ECCB4: mov     edx, [esp+124h+arg_C]
0x4ECCBB: xor     ebx, ebx
0x4ECCBD: mov     [esi+2Ch], eax
0x4ECCC0: mov     eax, [esp+124h+arg_0]
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
0x4ECD09: call    __sprintf
0x4ECD0E: add     esp, 18h
0x4ECD11: lea     edx, [esp+124h+var_114]
0x4ECD15: push    edx
0x4ECD16: mov     ecx, esi
0x4ECD18: call    sub_434600
0x4ECD1D: push    1
0x4ECD1F: push    ebx
0x4ECD20: mov     ecx, esi
0x4ECD22: call    sub_434CB0
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
