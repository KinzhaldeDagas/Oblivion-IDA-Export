0x6A3410: push    0FFFFFFFFh; Verified OpenEffect clone: allocates 0x38 bytes, copies the base ActiveEffect state, restores OpenEffect_vftable, invokes the base CopyTo hook, and returns the clone.
0x6A3412: push    offset SEH_8C8970
0x6A3417: mov     eax, large fs:0
0x6A341D: push    eax
0x6A341E: push    ecx
0x6A341F: push    esi
0x6A3420: push    edi
0x6A3421: mov     eax, ds:0B30AACh
0x6A3426: xor     eax, esp
0x6A3428: push    eax
0x6A3429: lea     eax, [esp+1Ch+var_C]
0x6A342D: mov     large fs:0, eax
0x6A3433: mov     esi, ecx
0x6A3435: push    38h ; '8'; Size
0x6A3437: call    FormHeapAlloc
0x6A343C: mov     edi, eax
0x6A343E: add     esp, 4
0x6A3441: mov     [esp+1Ch+var_10], edi
0x6A3445: test    edi, edi
0x6A3447: mov     [esp+1Ch+var_4], 0
0x6A344F: jz      short loc_6A346C
0x6A3451: mov     eax, [esi+0Ch]
0x6A3454: mov     ecx, [esi+8]
0x6A3457: mov     edx, [esi+24h]
0x6A345A: push    eax
0x6A345B: push    ecx
0x6A345C: push    edx
0x6A345D: mov     ecx, edi; this
0x6A345F: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6A3464: mov     dword ptr [edi], offset OpenEffect_vftable
0x6A346A: jmp     short loc_6A346E
0x6A346C: xor     edi, edi
0x6A346E: mov     eax, [esi]
0x6A3470: mov     edx, [eax+2Ch]
0x6A3473: push    edi
0x6A3474: mov     ecx, esi
0x6A3476: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A347E: call    edx
0x6A3480: mov     eax, edi
0x6A3482: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A3486: mov     large fs:0, ecx
0x6A348D: pop     ecx
0x6A348E: pop     edi
0x6A348F: pop     esi
0x6A3490: add     esp, 10h
0x6A3493: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
