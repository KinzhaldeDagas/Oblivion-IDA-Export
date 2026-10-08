0x6A4D10: push    0FFFFFFFFh
0x6A4D12: push    offset SEH_8C62B0
0x6A4D17: mov     eax, large fs:0
0x6A4D1D: push    eax
0x6A4D1E: push    ecx
0x6A4D1F: push    esi
0x6A4D20: mov     eax, ds:0B30AACh
0x6A4D25: xor     eax, esp
0x6A4D27: push    eax
0x6A4D28: lea     eax, [esp+18h+var_C]
0x6A4D2C: mov     large fs:0, eax
0x6A4D32: push    38h ; '8'; Size
0x6A4D34: call    FormHeapAlloc
0x6A4D39: mov     esi, eax
0x6A4D3B: add     esp, 4
0x6A4D3E: mov     [esp+18h+var_10], esi
0x6A4D42: xor     eax, eax
0x6A4D44: cmp     esi, eax
0x6A4D46: mov     [esp+18h+var_4], eax
0x6A4D4A: jz      short loc_6A4D6A
0x6A4D4C: mov     eax, [esp+18h+effectItem]
0x6A4D50: mov     ecx, [esp+18h+magicItem]
0x6A4D54: mov     edx, [esp+18h+caster]
0x6A4D58: push    eax
0x6A4D59: push    ecx
0x6A4D5A: push    edx
0x6A4D5B: mov     ecx, esi; this
0x6A4D5D: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6A4D62: mov     dword ptr [esi], offset ??_7SoulTrapEffect@@6B@; const SoulTrapEffect::`vftable'
0x6A4D68: mov     eax, esi
0x6A4D6A: mov     ecx, [esp+18h+var_C]
0x6A4D6E: mov     large fs:0, ecx
0x6A4D75: pop     ecx
0x6A4D76: pop     esi
0x6A4D77: add     esp, 10h
0x6A4D7A: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
