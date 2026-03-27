0x5AE240: sub     esp, 714h
0x5AE246: mov     eax, ds:0B30AACh
0x5AE24B: xor     eax, esp
0x5AE24D: mov     [esp+714h+var_4], eax
0x5AE254: mov     eax, ds:0B33B00h
0x5AE259: test    byte ptr [eax+1Ah], 1
0x5AE25D: push    ebx; a3
0x5AE25E: push    esi; a3
0x5AE25F: push    edi; a3
0x5AE260: mov     ebx, ecx
0x5AE262: jnz     loc_5AE408
0x5AE268: mov     ecx, [esp+720h+arg_0]
0x5AE26F: cmp     ecx, 0FFFFFFFFh
0x5AE272: mov     esi, [ebx+54h]
0x5AE275: jnz     short loc_5AE2A1
0x5AE277: fld1
0x5AE279: push    ecx
0x5AE27A: mov     ecx, [ebx+40h]; this
0x5AE27D: fstp    [esp+724h+a2]; a3
0x5AE280: push    0FA1h; a2
0x5AE285: call    Tile_SetFloat
0x5AE28A: mov     ecx, [ebx+44h]
0x5AE28D: push    offset EmptyString
0x5AE292: push    0FDEh
0x5AE297: call    Tile_SetString
0x5AE29C: jmp     loc_5AE408
0x5AE2A1: xor     eax, eax
0x5AE2A3: test    esi, esi
0x5AE2A5: jz      loc_5AE408
0x5AE2AB: jmp     short loc_5AE2B0
0x5AE2AD: align 10h
0x5AE2B0: cmp     dword ptr [esi], 0
0x5AE2B3: jz      loc_5AE408
0x5AE2B9: cmp     ecx, eax
0x5AE2BB: jz      short loc_5AE2CC
0x5AE2BD: mov     esi, [esi+4]
0x5AE2C0: add     eax, 1
0x5AE2C3: test    esi, esi
0x5AE2C5: jnz     short loc_5AE2B0
0x5AE2C7: jmp     loc_5AE408
0x5AE2CC: mov     ecx, [ebx+40h]
0x5AE2CF: push    0; int
0x5AE2D1: push    offset ??_R0?AVTileImage@@@8; struct TypeDescriptor *
0x5AE2D6: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5AE2DB: push    0; int
0x5AE2DD: push    ecx; void *
0x5AE2DE: call    OblivionDynamicCast
0x5AE2E3: mov     edi, eax
0x5AE2E5: add     esp, 14h
0x5AE2E8: test    edi, edi
0x5AE2EA: jz      short loc_5AE316
0x5AE2EC: push    ecx
0x5AE2ED: mov     eax, esp
0x5AE2EF: mov     ecx, edi
0x5AE2F1: mov     [esp+724h+var_710], esp
0x5AE2F5: mov     dword ptr [eax], 0
0x5AE2FB: call    sub_591A80
0x5AE300: fld     dword ptr ds:0A379B4h
0x5AE306: push    ecx
0x5AE307: fstp    [esp+724h+a2]; a3
0x5AE30A: push    0FA1h; a2
0x5AE30F: mov     ecx, edi; this
0x5AE311: call    Tile_SetFloat
0x5AE316: mov     esi, [esi]
0x5AE318: push    0; char
0x5AE31A: lea     edx, [esp+724h+var_714]
0x5AE31E: push    edx; int
0x5AE31F: push    0; int
0x5AE321: lea     eax, [esp+72Ch+var_4B4]
0x5AE328: push    eax; int
0x5AE329: lea     ecx, [esp+730h+var_70C]
0x5AE32D: push    ecx; int
0x5AE32E: lea     edx, [esp+4D8h]
0x5AE335: push    edx; void *
0x5AE336: lea     eax, [esp+738h+var_5E0]
0x5AE33D: push    eax; int
0x5AE33E: lea     ecx, [esp+73Ch+Dst]
0x5AE345: push    ecx; Dst
0x5AE346: mov     ecx, ds:0B33B00h
0x5AE34C: push    0; int
0x5AE34E: push    esi; int
0x5AE34F: call    sub_4610F0
0x5AE354: mov     esi, eax
0x5AE356: lea     edx, [esp+720h+var_4B4]
0x5AE35D: push    edx
0x5AE35E: lea     eax, [esp+724h+var_70C]
0x5AE362: push    eax
0x5AE363: lea     ecx, [esp+4CCh]
0x5AE36A: push    ecx
0x5AE36B: lea     edx, [esp+72Ch+var_5E0]
0x5AE372: push    edx
0x5AE373: lea     eax, [esp+730h+Dst]
0x5AE37A: push    eax
0x5AE37B: lea     ecx, [esp+604h]
0x5AE382: push    offset aSSSSS; "%s\n%s\n%s\n%s\n%s"
0x5AE387: push    ecx
0x5AE388: call    __sprintf
0x5AE38D: mov     ecx, [ebx+44h]
0x5AE390: add     esp, 1Ch
0x5AE393: lea     edx, [esp+5F0h]
0x5AE39A: push    edx
0x5AE39B: push    0FDEh
0x5AE3A0: call    Tile_SetString
0x5AE3A5: fild    [esp+720h+var_714]
0x5AE3A9: push    ecx
0x5AE3AA: mov     ecx, [ebx+40h]; this
0x5AE3AD: fstp    [esp+724h+a2]; a3
0x5AE3B0: push    0FAEh; a2
0x5AE3B5: call    Tile_SetFloat
0x5AE3BA: test    edi, edi
0x5AE3BC: jz      short loc_5AE3FD
0x5AE3BE: push    ecx
0x5AE3BF: mov     ecx, esp
0x5AE3C1: mov     [esp+724h+var_710], esp
0x5AE3C5: push    esi
0x5AE3C6: call    sub_405070
0x5AE3CB: mov     ecx, edi
0x5AE3CD: call    sub_591A80
0x5AE3D2: test    esi, esi
0x5AE3D4: jnz     short loc_5AE401
0x5AE3D6: fld1
0x5AE3D8: push    ecx
0x5AE3D9: fstp    [esp+724h+a2]; a3
0x5AE3DC: mov     ecx, edi; this
0x5AE3DE: push    0FA1h; a2
0x5AE3E3: call    Tile_SetFloat
0x5AE3E8: mov     eax, ds:0B38750h
0x5AE3ED: mov     ecx, [ebx+44h]
0x5AE3F0: push    eax
0x5AE3F1: push    0FDEh
0x5AE3F6: call    Tile_SetString
0x5AE3FB: jmp     short loc_5AE408
0x5AE3FD: test    esi, esi
0x5AE3FF: jz      short loc_5AE408
0x5AE401: mov     ecx, esi
0x5AE403: call    sub_401050
0x5AE408: mov     ecx, [esp+720h+var_4]
0x5AE40F: pop     edi
0x5AE410: pop     esi
0x5AE411: pop     ebx
0x5AE412: xor     ecx, esp
0x5AE414: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5AE419: add     esp, 714h
0x5AE41F: retn    4
