0x4B3210: sub     esp, 108h
0x4B3216: mov     eax, ds:0B30AACh
0x4B321B: xor     eax, esp
0x4B321D: mov     [esp+108h+var_4], eax
0x4B3224: push    ebx
0x4B3225: mov     ebx, [esp+10Ch+arg_0]
0x4B322C: push    esi
0x4B322D: mov     esi, ecx
0x4B322F: cmp     esi, ds:0B35EA4h
0x4B3235: jz      short loc_4B323F
0x4B3237: cmp     esi, ds:0B35EB4h
0x4B323D: jnz     short loc_4B3241
0x4B323F: xor     ebx, ebx
0x4B3241: push    edi
0x4B3242: push    ebx
0x4B3243: push    esi
0x4B3244: call    sub_4693E0
0x4B3249: mov     edi, eax
0x4B324B: add     esp, 8
0x4B324E: test    edi, edi
0x4B3250: jnz     short loc_4B325D
0x4B3252: push    esi
0x4B3253: call    GetFormModelPAth
0x4B3258: add     esp, 4
0x4B325B: mov     edi, eax
0x4B325D: test    ebx, ebx
0x4B325F: jz      short loc_4B32CC
0x4B3261: mov     ecx, ebx; this
0x4B3263: call    TESObjectREFR_GetScale
0x4B3268: fcomp   dword ptr ds:0A2F948h
0x4B326E: fnstsw  ax
0x4B3270: test    ah, 44h
0x4B3273: jnp     short loc_4B32CC
0x4B3275: lea     eax, [esp+114h+var_108]
0x4B3279: push    eax
0x4B327A: push    ebx
0x4B327B: mov     ecx, esi
0x4B327D: call    sub_4B2B00
0x4B3282: push    1
0x4B3284: push    1
0x4B3286: lea     ecx, [esp+11Ch+var_108]
0x4B328A: push    ecx
0x4B328B: mov     ecx, ds:0B33A1Ch
0x4B3291: call    QueuedModelLoader_RemoveModel
0x4B3296: mov     ecx, ds:0B33A1Ch
0x4B329C: lea     edx, [esp+114h+var_108]
0x4B32A0: push    edx
0x4B32A1: call    ModelLoader_IsModelLoaded??
0x4B32A6: test    eax, eax
0x4B32A8: jnz     short loc_4B32C3
0x4B32AA: mov     ecx, ds:0B33A1Ch
0x4B32B0: push    1
0x4B32B2: push    1
0x4B32B4: push    edi
0x4B32B5: call    QueuedModelLoader_RemoveModel
0x4B32BA: sub     dword ptr ds:0B35AC4h, 1
0x4B32C1: jmp     short loc_4B32DC
0x4B32C3: sub     dword ptr ds:0B35AC8h, 1
0x4B32CA: jmp     short loc_4B32DC
0x4B32CC: mov     ecx, ds:0B33A1Ch
0x4B32D2: push    1
0x4B32D4: push    1
0x4B32D6: push    edi
0x4B32D7: call    QueuedModelLoader_RemoveModel
0x4B32DC: cmp     byte ptr [esi+4], 23h ; '#'
0x4B32E0: pop     edi
0x4B32E1: jnz     short loc_4B32F2
0x4B32E3: cmp     ebx, ds:0B333C4h
0x4B32E9: jz      short loc_4B32F2
0x4B32EB: mov     ecx, esi
0x4B32ED: call    sub_522260
0x4B32F2: mov     ecx, [esp+110h+var_4]
0x4B32F9: pop     esi
0x4B32FA: pop     ebx
0x4B32FB: xor     ecx, esp
0x4B32FD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B3302: add     esp, 108h
0x4B3308: retn    4
