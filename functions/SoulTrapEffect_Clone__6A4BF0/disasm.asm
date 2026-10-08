0x6A4BF0: push    0FFFFFFFFh
0x6A4BF2: push    offset SEH_8C8970
0x6A4BF7: mov     eax, large fs:0
0x6A4BFD: push    eax
0x6A4BFE: push    ecx
0x6A4BFF: push    esi
0x6A4C00: push    edi
0x6A4C01: mov     eax, ds:0B30AACh
0x6A4C06: xor     eax, esp
0x6A4C08: push    eax
0x6A4C09: lea     eax, [esp+1Ch+var_C]
0x6A4C0D: mov     large fs:0, eax
0x6A4C13: mov     esi, ecx
0x6A4C15: push    38h ; '8'; Size
0x6A4C17: call    FormHeapAlloc
0x6A4C1C: mov     edi, eax
0x6A4C1E: add     esp, 4
0x6A4C21: mov     [esp+1Ch+var_10], edi
0x6A4C25: test    edi, edi
0x6A4C27: mov     [esp+1Ch+var_4], 0
0x6A4C2F: jz      short loc_6A4C4C
0x6A4C31: mov     eax, [esi+0Ch]
0x6A4C34: mov     ecx, [esi+8]
0x6A4C37: mov     edx, [esi+24h]
0x6A4C3A: push    eax
0x6A4C3B: push    ecx
0x6A4C3C: push    edx
0x6A4C3D: mov     ecx, edi; this
0x6A4C3F: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6A4C44: mov     dword ptr [edi], offset ??_7SoulTrapEffect@@6B@; const SoulTrapEffect::`vftable'
0x6A4C4A: jmp     short loc_6A4C4E
0x6A4C4C: xor     edi, edi
0x6A4C4E: mov     eax, [esi]
0x6A4C50: mov     edx, [eax+2Ch]
0x6A4C53: push    edi
0x6A4C54: mov     ecx, esi
0x6A4C56: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A4C5E: call    edx
0x6A4C60: mov     eax, edi
0x6A4C62: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A4C66: mov     large fs:0, ecx
0x6A4C6D: pop     ecx
0x6A4C6E: pop     edi
0x6A4C6F: pop     esi
0x6A4C70: add     esp, 10h
0x6A4C73: retn
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
