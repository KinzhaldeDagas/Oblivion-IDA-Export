0x4ECB70: push    0FFFFFFFFh; Verified async completion: obtains the loaded NIF node from the TerrainLODQuadLoadTask, stores it in quad.terrainLODNode (+0x2C), sets state LoadedDetached (2), and releases quadData's task reference.
0x4ECB72: push    offset SEH_70B000
0x4ECB77: mov     eax, large fs:0
0x4ECB7D: push    eax
0x4ECB7E: push    ecx
0x4ECB7F: push    ebx
0x4ECB80: push    esi
0x4ECB81: push    edi
0x4ECB82: mov     eax, ds:0B30AACh
0x4ECB87: xor     eax, esp
0x4ECB89: push    eax
0x4ECB8A: lea     eax, [esp+20h+var_C]
0x4ECB8E: mov     large fs:0, eax
0x4ECB94: mov     edi, ecx
0x4ECB96: mov     ecx, [edi+4]
0x4ECB99: lea     eax, [esp+20h+var_10]
0x4ECB9D: push    eax
0x4ECB9E: call    sub_4EC960
0x4ECBA3: mov     ebx, [eax]
0x4ECBA5: mov     esi, [edi+2Ch]
0x4ECBA8: cmp     esi, ebx
0x4ECBAA: mov     [esp+20h+var_4], 0
0x4ECBB2: jz      short loc_4ECBE5
0x4ECBB4: test    esi, esi
0x4ECBB6: jz      short loc_4ECBD4
0x4ECBB8: lea     ecx, [esi+4]
0x4ECBBB: push    ecx; lpAddend
0x4ECBBC: call    dword ptr ds:0A2807Ch
0x4ECBC2: test    eax, eax
0x4ECBC4: jnz     short loc_4ECBD4
0x4ECBC6: test    esi, esi
0x4ECBC8: jz      short loc_4ECBD4
0x4ECBCA: mov     edx, [esi]
0x4ECBCC: mov     eax, [edx]
0x4ECBCE: push    1
0x4ECBD0: mov     ecx, esi
0x4ECBD2: call    eax
0x4ECBD4: test    ebx, ebx
0x4ECBD6: mov     [edi+2Ch], ebx
0x4ECBD9: jz      short loc_4ECBE5
0x4ECBDB: add     ebx, 4
0x4ECBDE: push    ebx; lpAddend
0x4ECBDF: call    dword ptr ds:0A28078h
0x4ECBE5: mov     esi, [esp+20h+var_10]
0x4ECBE9: test    esi, esi
0x4ECBEB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4ECBF3: jz      short loc_4ECC11
0x4ECBF5: lea     ecx, [esi+4]
0x4ECBF8: push    ecx; lpAddend
0x4ECBF9: call    dword ptr ds:0A2807Ch
0x4ECBFF: test    eax, eax
0x4ECC01: jnz     short loc_4ECC11
0x4ECC03: test    esi, esi
0x4ECC05: jz      short loc_4ECC11
0x4ECC07: mov     edx, [esi]
0x4ECC09: mov     eax, [edx]
0x4ECC0B: push    1
0x4ECC0D: mov     ecx, esi
0x4ECC0F: call    eax
0x4ECC11: mov     dword ptr [edi+8], 2; Verified successful-load transition: TerrainLODQuadLoadTask_ApplyLoadedMesh stores the loaded NiAVObject at quad +0x2C and sets state to LoadedDetached (2).
0x4ECC18: mov     esi, [edi+4]
0x4ECC1B: test    esi, esi
0x4ECC1D: jz      short loc_4ECC42
0x4ECC1F: lea     ecx, [esi+8]
0x4ECC22: push    ecx; lpAddend
0x4ECC23: call    dword ptr ds:0A2807Ch
0x4ECC29: test    eax, eax
0x4ECC2B: jnz     short loc_4ECC3B
0x4ECC2D: test    esi, esi
0x4ECC2F: jz      short loc_4ECC3B
0x4ECC31: mov     edx, [esi]
0x4ECC33: mov     eax, [edx]
0x4ECC35: push    1
0x4ECC37: mov     ecx, esi
0x4ECC39: call    eax
0x4ECC3B: mov     dword ptr [edi+4], 0
0x4ECC42: mov     ecx, dword ptr [esp+20h+var_C]
0x4ECC46: mov     large fs:0, ecx
0x4ECC4D: pop     ecx
0x4ECC4E: pop     edi
0x4ECC4F: pop     esi
0x4ECC50: pop     ebx
0x4ECC51: add     esp, 10h
0x4ECC54: retn
0x9CA9B0: lea     ecx, [ebp-10h]; slot
0x9CA9B3: jmp     NiPointerSlot_Release
0x9CA9B8: mov     edx, [esp+arg_4]
0x9CA9BC: lea     eax, [edx-10h]
0x9CA9BF: mov     ecx, [edx-14h]
0x9CA9C2: xor     ecx, eax
0x9CA9C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA9C9: mov     eax, offset stru_AF3038
0x9CA9CE: jmp     ___CxxFrameHandler3
