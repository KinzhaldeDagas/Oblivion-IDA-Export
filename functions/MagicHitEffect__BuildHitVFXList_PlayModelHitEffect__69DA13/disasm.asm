0x69DA13: mov     edi, [esp+arg_1C]
0x69DA17: mov     eax, [edi+14h]
0x69DA1A: shr     eax, 2
0x69DA1D: xor     ebp, ebp
0x69DA1F: test    al, 1
0x69DA21: jnz     MagicHitEffect?_BuildHitVFXList___PlayShaderHitEffect
0x69DA27: cmp     byte ptr ds:0B333B8h, 0
0x69DA2E: jnz     short MagicHitEffect?_BuildHitVFXList___PlayShaderHitEffect
0x69DA30: push    38h ; '8'; Size
0x69DA32: call    FormHeapAlloc
0x69DA37: mov     esi, eax
0x69DA39: add     esp, 4
0x69DA3C: mov     [esp+arg_1C], esi
0x69DA40: test    esi, esi
0x69DA42: mov     [esp+arg_14], ebp
0x69DA46: jz      short loc_69DA5F
0x69DA48: mov     ecx, [edi+20h]
0x69DA4B: mov     edx, [ecx]
0x69DA4D: mov     eax, [edx+4]
0x69DA50: push    edi
0x69DA51: call    eax
0x69DA53: push    eax
0x69DA54: mov     ecx, esi
0x69DA56: call    MagicModelHitEffect_constr_args
0x69DA5B: mov     esi, eax
0x69DA5D: jmp     short loc_69DA61
0x69DA5F: xor     esi, esi
0x69DA61: mov     edx, [esi]
0x69DA63: mov     eax, [edx+68h]
0x69DA66: mov     ecx, esi
0x69DA68: mov     [esp+arg_14], 0FFFFFFFFh
0x69DA70: call    eax
0x69DA72: test    al, al
0x69DA74: jz      short loc_69DAA2
0x69DA76: push    esi
0x69DA77: mov     ecx, offset ActorProcessManager_ptr
0x69DA7C: call    sub_678D30
0x69DA81: push    8; Size
0x69DA83: call    FormHeapAlloc
0x69DA88: add     esp, 4
0x69DA8B: test    eax, eax
0x69DA8D: jz      short loc_69DA9C
0x69DA8F: mov     [eax], esi
0x69DA91: mov     dword ptr [eax+4], 0
0x69DA98: mov     ebp, eax
0x69DA9A: jmp     short MagicHitEffect?_BuildHitVFXList___PlayShaderHitEffect
0x69DA9C: xor     eax, eax
0x69DA9E: mov     ebp, eax
0x69DAA0: jmp     short MagicHitEffect?_BuildHitVFXList___PlayShaderHitEffect
0x69DAA2: mov     edx, [esi]
0x69DAA4: mov     eax, [edx]
0x69DAA6: push    1
0x69DAA8: mov     ecx, esi
0x69DAAA: call    eax
