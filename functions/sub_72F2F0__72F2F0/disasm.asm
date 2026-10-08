0x72F2F0: push    0FFFFFFFFh
0x72F2F2: push    offset SEH_72F2F0
0x72F2F7: mov     eax, large fs:0
0x72F2FD: push    eax
0x72F2FE: sub     esp, 10h
0x72F301: push    ebx
0x72F302: push    ebp
0x72F303: push    esi
0x72F304: push    edi
0x72F305: mov     eax, ds:0B30AACh
0x72F30A: xor     eax, esp
0x72F30C: push    eax
0x72F30D: lea     eax, [esp+30h+var_C]
0x72F311: mov     large fs:0, eax
0x72F317: mov     ebp, ecx
0x72F319: xor     eax, eax
0x72F31B: xor     esi, esi
0x72F31D: mov     [esp+30h+var_18], esi
0x72F321: mov     [esp+30h+var_14], eax
0x72F325: mov     [esp+30h+var_10], eax
0x72F329: cmp     [ebp+40h], eax
0x72F32C: mov     [esp+30h+var_4], eax
0x72F330: mov     [esp+30h+var_1C], eax
0x72F334: jbe     loc_72F3F3
0x72F33A: xor     edi, edi
0x72F33C: lea     esp, [esp+0]
0x72F340: mov     ecx, [ebp+44h]
0x72F343: xor     ebx, ebx
0x72F345: cmp     [edi+ecx+48h], ax
0x72F34A: jbe     short loc_72F3B8
0x72F34C: lea     esp, [esp+0]
0x72F350: mov     ecx, [edi+ecx+44h]
0x72F354: movzx   ecx, word ptr [ecx+ebx*8]
0x72F358: lea     edx, [ecx+ecx*2]
0x72F35B: mov     ecx, [esp+30h+arg_0]
0x72F35F: lea     esi, [ecx+edx*4]
0x72F362: mov     ecx, [esp+30h+var_14]
0x72F366: cmp     eax, ecx
0x72F368: jnz     short loc_72F384
0x72F36A: test    ecx, ecx
0x72F36C: lea     eax, [ecx+ecx]
0x72F36F: ja      short loc_72F376
0x72F371: mov     eax, 1
0x72F376: push    eax
0x72F377: lea     ecx, [esp+34h+var_18]
0x72F37B: call    sub_72F0F0
0x72F380: mov     eax, [esp+30h+var_10]
0x72F384: mov     ecx, [esp+30h+var_18]
0x72F388: lea     edx, [eax+eax*2]
0x72F38B: lea     ecx, [ecx+edx*4]
0x72F38E: mov     edx, [esi]
0x72F390: mov     [ecx], edx
0x72F392: mov     edx, [esi+4]
0x72F395: mov     [ecx+4], edx
0x72F398: mov     edx, [esi+8]
0x72F39B: mov     [ecx+8], edx
0x72F39E: mov     ecx, [ebp+44h]
0x72F3A1: movzx   edx, word ptr [edi+ecx+48h]
0x72F3A6: add     eax, 1
0x72F3A9: add     ebx, 1
0x72F3AC: cmp     ebx, edx
0x72F3AE: mov     [esp+30h+var_10], eax
0x72F3B2: jb      short loc_72F350
0x72F3B4: mov     esi, [esp+30h+var_18]
0x72F3B8: push    esi; vertices
0x72F3B9: push    eax; vertexCount
0x72F3BA: mov     eax, [ebp+44h]
0x72F3BD: lea     ecx, [edi+eax+34h]; self
0x72F3C1: call    NiSphere_ComputeFromVertices; Local bounding sphere for contiguous NiPoint3 array: midpoint of component minima/maxima; radius=max vertex distance to midpoint; zero-count case clears sphere. Writes sphere only, not NiAVObject world bounds or renderer dirty flags. Prettier Faces invokes after morph on direct CPU vertex data; propagation of world bounds remains a separate runtime verification requirement.
0x72F3C6: mov     ecx, [ebp+44h]
0x72F3C9: lea     eax, [edi+ecx]
0x72F3CC: lea     ecx, [eax+34h]; output
0x72F3CF: push    eax; transform
0x72F3D0: push    ecx; input
0x72F3D1: call    NiBound_TransformInto
0x72F3D6: mov     ecx, [esp+30h+var_1C]
0x72F3DA: add     ecx, 1
0x72F3DD: xor     eax, eax
0x72F3DF: add     edi, 4Ch ; 'L'
0x72F3E2: cmp     ecx, [ebp+40h]
0x72F3E5: mov     [esp+30h+var_10], eax
0x72F3E9: mov     [esp+30h+var_1C], ecx
0x72F3ED: jb      loc_72F340
0x72F3F3: push    esi
0x72F3F4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x72F3F9: add     esp, 4
0x72F3FC: mov     ecx, [esp+30h+var_C]
0x72F400: mov     large fs:0, ecx
0x72F407: pop     ecx
0x72F408: pop     edi
0x72F409: pop     esi
0x72F40A: pop     ebp
0x72F40B: pop     ebx
0x72F40C: add     esp, 1Ch
0x72F40F: retn    4
0x9CA740: lea     ecx, [ebp-18h]; void *
0x9CA743: jmp     sub_6C4090
0x9CA748: mov     edx, [esp+arg_4]
0x9CA74C: lea     eax, [edx-20h]
0x9CA74F: mov     ecx, [edx-24h]
0x9CA752: xor     ecx, eax
0x9CA754: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA759: mov     eax, offset stru_AF2E00
0x9CA75E: jmp     ___CxxFrameHandler3
