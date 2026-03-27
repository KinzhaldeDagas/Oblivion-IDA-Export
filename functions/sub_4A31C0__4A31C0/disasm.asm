0x4A31C0: push    ebp
0x4A31C1: mov     ebp, esp
0x4A31C3: push    0FFFFFFFFh
0x4A31C5: push    offset SEH_4A31C0
0x4A31CA: mov     eax, large fs:0
0x4A31D0: push    eax
0x4A31D1: sub     esp, 10h
0x4A31D4: mov     eax, ds:0B30AACh
0x4A31D9: xor     eax, ebp
0x4A31DB: mov     [ebp+var_10], eax
0x4A31DE: push    ebx
0x4A31DF: push    esi
0x4A31E0: push    edi
0x4A31E1: push    eax
0x4A31E2: lea     eax, [ebp+var_C]
0x4A31E5: mov     large fs:0, eax
0x4A31EB: mov     ebx, ecx
0x4A31ED: mov     edi, [ebp+a1]
0x4A31F0: mov     ecx, edi
0x4A31F2: call    TESFile_GetRecordType
0x4A31F7: xor     esi, esi
0x4A31F9: cmp     al, 2Fh ; '/'
0x4A31FB: mov     [ebp+var_1C], esi
0x4A31FE: jz      short loc_4A3207
0x4A3200: xor     al, al
0x4A3202: jmp     loc_4A3405
0x4A3207: push    ebx
0x4A3208: mov     ecx, edi
0x4A320A: call    TESFile_InitializeFormFromRecord
0x4A320F: push    esi; a2
0x4A3210: mov     ecx, ebx; this
0x4A3212: call    TESForm_SetIsLinked
0x4A3217: mov     ecx, edi
0x4A3219: call    TESFile_GetChunkType
0x4A321E: cmp     eax, esi
0x4A3220: jz      loc_4A33C0
0x4A3226: jmp     short loc_4A3230
0x4A3228: align 10h
0x4A3230: cmp     eax, 4D414E57h
0x4A3235: jg      loc_4A335D
0x4A323B: jz      loc_4A3323
0x4A3241: cmp     eax, 444D4452h
0x4A3246: jg      short loc_4A32AF
0x4A3248: jz      loc_4A3392
0x4A324E: cmp     eax, 424F4452h
0x4A3253: jz      loc_4A3392
0x4A3259: cmp     eax, 44494445h
0x4A325E: jz      short loc_4A3281
0x4A3260: cmp     eax, 444C5052h
0x4A3265: jnz     loc_4A33A6
0x4A326B: mov     ecx, [ebp+var_1C]
0x4A326E: cmp     ecx, esi
0x4A3270: jz      loc_4A33A6
0x4A3276: push    edi
0x4A3277: call    sub_4A6F40
0x4A327C: jmp     loc_4A33A6
0x4A3281: mov     eax, [edi+254h]
0x4A3287: call    __alloca?
0x4A328C: mov     esi, esp
0x4A328E: push    200h; a4
0x4A3293: push    esi; Dst
0x4A3294: mov     ecx, edi; a1
0x4A3296: call    TESFile_GetChunkData
0x4A329B: mov     eax, [ebx]
0x4A329D: mov     edx, [eax+0D8h]
0x4A32A3: push    esi
0x4A32A4: mov     ecx, ebx
0x4A32A6: call    edx
0x4A32A8: xor     esi, esi
0x4A32AA: jmp     loc_4A33A6
0x4A32AF: cmp     eax, 44534452h
0x4A32B4: jz      loc_4A3392
0x4A32BA: cmp     eax, 494C5052h
0x4A32BF: jz      short loc_4A32D1
0x4A32C1: cmp     eax, 4A4F4452h
0x4A32C6: jz      loc_4A3392
0x4A32CC: jmp     loc_4A33A6
0x4A32D1: lea     eax, [ebp+var_18]
0x4A32D4: push    eax
0x4A32D5: mov     ecx, edi
0x4A32D7: mov     [ebp+var_18], esi
0x4A32DA: call    TESFile_GetChunkData4
0x4A32DF: push    28h ; '('; Size
0x4A32E1: call    FormHeapAlloc
0x4A32E6: add     esp, 4
0x4A32E9: mov     [ebp+var_14], eax
0x4A32EC: cmp     eax, esi
0x4A32EE: mov     [ebp+var_4], esi
0x4A32F1: jz      short loc_4A32FE
0x4A32F3: push    1
0x4A32F5: mov     ecx, eax
0x4A32F7: call    sub_4A6DE0
0x4A32FC: mov     esi, eax
0x4A32FE: mov     ecx, [ebp+var_18]
0x4A3301: push    ecx
0x4A3302: mov     ecx, esi
0x4A3304: mov     [ebp+var_4], 0FFFFFFFFh
0x4A330B: mov     [ebp+var_1C], esi
0x4A330E: call    sub_4A6D70
0x4A3313: mov     ecx, [ebx+1Ch]
0x4A3316: push    esi
0x4A3317: call    BSSimpleList_PushBack
0x4A331C: xor     esi, esi
0x4A331E: jmp     loc_4A33A6
0x4A3323: lea     edx, [ebp+var_14]
0x4A3326: push    edx
0x4A3327: mov     ecx, edi
0x4A3329: mov     [ebp+var_14], esi
0x4A332C: call    TESFile_GetChunkData4
0x4A3331: mov     ecx, [ebp+var_14]
0x4A3334: cmp     ecx, esi
0x4A3336: mov     [ebx+20h], ecx
0x4A3339: jz      short loc_4A33A6
0x4A333B: mov     eax, [ebx+8]
0x4A333E: shr     eax, 6
0x4A3341: test    al, 1
0x4A3343: jz      short loc_4A33A6
0x4A3345: mov     edx, ds:0B33A98h
0x4A334B: cmp     byte ptr [edx+0CD7h], 0
0x4A3352: jnz     short loc_4A33A6
0x4A3354: push    1
0x4A3356: call    sub_4EF170
0x4A335B: jmp     short loc_4A33A6
0x4A335D: cmp     eax, 53474452h
0x4A3362: jg      short loc_4A337D
0x4A3364: jz      short loc_4A3392
0x4A3366: cmp     eax, 4E4C4452h
0x4A336B: jz      short loc_4A3392
0x4A336D: cmp     eax, 4E4F4349h
0x4A3372: jz      short loc_4A3392
0x4A3374: cmp     eax, 504D4452h
0x4A3379: jz      short loc_4A3392
0x4A337B: jmp     short loc_4A33A6
0x4A337D: cmp     eax, 54414452h
0x4A3382: jz      short loc_4A3392
0x4A3384: cmp     eax, 544F4452h
0x4A3389: jz      short loc_4A3392
0x4A338B: cmp     eax, 54574452h
0x4A3390: jnz     short loc_4A33A6
0x4A3392: mov     eax, ds:0B33A98h
0x4A3397: mov     ecx, [eax+0CD8h]
0x4A339D: mov     edx, [ecx]
0x4A339F: mov     eax, [edx+20h]
0x4A33A2: push    ebx
0x4A33A3: push    edi
0x4A33A4: call    eax
0x4A33A6: mov     ecx, edi
0x4A33A8: call    TESFile_GetNextChunk
0x4A33AD: test    al, al
0x4A33AF: jz      short loc_4A33C0
0x4A33B1: mov     ecx, edi
0x4A33B3: call    TESFile_GetChunkType
0x4A33B8: cmp     eax, esi
0x4A33BA: jnz     loc_4A3230
0x4A33C0: mov     esi, [ebx+1Ch]
0x4A33C3: test    esi, esi
0x4A33C5: jz      short loc_4A3403
0x4A33C7: mov     ecx, [esi]
0x4A33C9: test    ecx, ecx
0x4A33CB: jz      short loc_4A3403
0x4A33CD: push    1
0x4A33CF: call    sub_4A78A0
0x4A33D4: test    al, al
0x4A33D6: jnz     short loc_4A33FC
0x4A33D8: mov     esi, [esi]
0x4A33DA: mov     ecx, [ebx+1Ch]
0x4A33DD: push    esi
0x4A33DE: call    BSSimpleList_Remove
0x4A33E3: test    esi, esi
0x4A33E5: jz      short loc_4A33F7
0x4A33E7: mov     ecx, esi
0x4A33E9: call    sub_4A76F0
0x4A33EE: push    esi
0x4A33EF: call    FormHeapFree
0x4A33F4: add     esp, 4
0x4A33F7: mov     esi, [ebx+1Ch]
0x4A33FA: jmp     short loc_4A33FF
0x4A33FC: mov     esi, [esi+4]
0x4A33FF: test    esi, esi
0x4A3401: jnz     short loc_4A33C7
0x4A3403: mov     al, 1
0x4A3405: lea     esp, [ebp-2Ch]
0x4A3408: mov     ecx, [ebp+var_C]
0x4A340B: mov     large fs:0, ecx
0x4A3412: pop     ecx
0x4A3413: pop     edi
0x4A3414: pop     esi
0x4A3415: pop     ebx
0x4A3416: mov     ecx, [ebp+var_10]
0x4A3419: xor     ecx, ebp
0x4A341B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A3420: mov     esp, ebp
0x4A3422: pop     ebp
0x4A3423: retn    4
