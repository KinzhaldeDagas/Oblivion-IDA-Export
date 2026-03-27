0x46A5F0: push    ebp
0x46A5F1: mov     ebp, esp
0x46A5F3: push    ecx
0x46A5F4: mov     eax, ds:0B30AACh
0x46A5F9: xor     eax, ebp
0x46A5FB: mov     [ebp+var_4], eax
0x46A5FE: push    ebx
0x46A5FF: mov     ebx, [ebp+arg_0]
0x46A602: test    ebx, ebx
0x46A604: push    esi
0x46A605: push    edi
0x46A606: mov     edi, ecx
0x46A608: jz      TESDescription_LoadToCache___Done
0x46A60E: cmp     ds:0B33C04h, edi
0x46A614: jnz     short loc_46A648
0x46A616: mov     ax, ds:0B33C0Ch
0x46A61C: cmp     ax, 0FFFFh
0x46A620: jnz     short loc_46A63D
0x46A622: mov     eax, ds:0B33C08h
0x46A627: lea     edx, [eax+1]
0x46A62A: lea     ebx, [ebx+0]
0x46A630: mov     cl, [eax]
0x46A632: add     eax, 1
0x46A635: test    cl, cl
0x46A637: jnz     short loc_46A630
0x46A639: sub     eax, edx
0x46A63B: jmp     short loc_46A640
0x46A63D: movzx   eax, ax
0x46A640: test    eax, eax
0x46A642: jnz     TESDescription_LoadToCache___Done
0x46A648: push    0; a3
0x46A64A: push    0; a2
0x46A64C: mov     ecx, offset TESDescription_CachedDesc; this
0x46A651: mov     ds:0B33C04h, edi
0x46A657: call    BSStringT_Set
0x46A65C: push    0FFFFFFFFh; a2
0x46A65E: mov     ecx, ebx; this
0x46A660: call    TESForm_GetOverrideFile
0x46A665: test    eax, eax
0x46A667: jz      short TESDescription_LoadToCache___Done
0x46A669: cmp     dword ptr [edi+4], 0
0x46A66D: jz      short TESDescription_LoadToCache___Done
0x46A66F: mov     ecx, eax
0x46A671: call    sub_4520F0
0x46A676: mov     esi, eax
0x46A678: mov     eax, [edi+4]
0x46A67B: push    eax; Buffer
0x46A67C: mov     ecx, esi
0x46A67E: call    TESFIle_JumpToRecord
0x46A683: test    al, al
0x46A685: jz      short TESDescription_LoadToCache___Done
0x46A687: mov     ecx, esi
0x46A689: call    TESFile_GetRecordType
0x46A68E: movzx   ecx, byte ptr [ebx+4]
0x46A692: lea     ecx, [ecx+ecx*2]
0x46A695: cmp     al, ds:0B05E00h[ecx*4]
0x46A69C: jnz     short TESDescription_LoadToCache___Done
0x46A69E: mov     edi, [ebp+arg_4]
0x46A6A1: mov     ecx, esi
0x46A6A3: call    TESFile_GetChunkType
0x46A6A8: cmp     eax, edi
0x46A6AA: jz      short loc_46A6B9
0x46A6AC: mov     ecx, esi
0x46A6AE: call    TESFile_GetNextChunk
0x46A6B3: test    al, al
0x46A6B5: jnz     short loc_46A6A1
0x46A6B7: jmp     short TESDescription_LoadToCache___Done
0x46A6B9: mov     eax, [esi+254h]
0x46A6BF: call    __alloca?
0x46A6C4: mov     edi, esp
0x46A6C6: push    0; a4
0x46A6C8: push    edi; Dst
0x46A6C9: mov     ecx, esi; a1
0x46A6CB: call    TESFile_GetChunkData
0x46A6D0: push    0; a3
0x46A6D2: push    edi; a2
0x46A6D3: mov     ecx, offset TESDescription_CachedDesc; this
0x46A6D8: call    BSStringT_Set
