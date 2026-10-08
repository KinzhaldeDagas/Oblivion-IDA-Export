0x6A8AD0: push    0FFFFFFFFh
0x6A8AD2: push    offset SEH_8C62B0
0x6A8AD7: mov     eax, large fs:0
0x6A8ADD: push    eax
0x6A8ADE: push    ecx
0x6A8ADF: push    esi
0x6A8AE0: mov     eax, ds:0B30AACh
0x6A8AE5: xor     eax, esp
0x6A8AE7: push    eax
0x6A8AE8: lea     eax, [esp+18h+var_C]
0x6A8AEC: mov     large fs:0, eax
0x6A8AF2: push    38h ; '8'; Size
0x6A8AF4: call    FormHeapAlloc
0x6A8AF9: mov     esi, eax
0x6A8AFB: add     esp, 4
0x6A8AFE: mov     [esp+18h+var_10], esi
0x6A8B02: xor     eax, eax
0x6A8B04: cmp     esi, eax
0x6A8B06: mov     [esp+18h+var_4], eax
0x6A8B0A: jz      short loc_6A8B2A
0x6A8B0C: mov     eax, [esp+18h+effectItem]
0x6A8B10: mov     ecx, [esp+18h+magicItem]
0x6A8B14: mov     edx, [esp+18h+caster]
0x6A8B18: push    eax
0x6A8B19: push    ecx
0x6A8B1A: push    edx
0x6A8B1B: mov     ecx, esi; this
0x6A8B1D: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6A8B22: mov     dword ptr [esi], offset ??_7VampirismEffect@@6B@; const VampirismEffect::`vftable'
0x6A8B28: mov     eax, esi
0x6A8B2A: mov     ecx, [esp+18h+var_C]
0x6A8B2E: mov     large fs:0, ecx
0x6A8B35: pop     ecx
0x6A8B36: pop     esi
0x6A8B37: add     esp, 10h
0x6A8B3A: retn
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
