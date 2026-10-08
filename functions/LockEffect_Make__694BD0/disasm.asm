0x694BD0: push    0FFFFFFFFh; Verified LockEffect factory: allocates an ActiveEffect-sized 0x38-byte object, calls ActiveEffect_Ctor with caster/magic/effect item, installs LockEffect_vftable, and returns it as the concrete LockEffect subclass.
0x694BD2: push    offset SEH_8C62B0
0x694BD7: mov     eax, large fs:0
0x694BDD: push    eax
0x694BDE: push    ecx
0x694BDF: push    esi
0x694BE0: mov     eax, ds:0B30AACh
0x694BE5: xor     eax, esp
0x694BE7: push    eax
0x694BE8: lea     eax, [esp+18h+var_C]
0x694BEC: mov     large fs:0, eax
0x694BF2: push    38h ; '8'; Size
0x694BF4: call    FormHeapAlloc
0x694BF9: mov     esi, eax
0x694BFB: add     esp, 4
0x694BFE: mov     [esp+18h+var_10], esi
0x694C02: xor     eax, eax
0x694C04: cmp     esi, eax
0x694C06: mov     [esp+18h+var_4], eax
0x694C0A: jz      short loc_694C2A
0x694C0C: mov     eax, [esp+18h+effectItem]
0x694C10: mov     ecx, [esp+18h+magicItem]
0x694C14: mov     edx, [esp+18h+caster]
0x694C18: push    eax
0x694C19: push    ecx
0x694C1A: push    edx
0x694C1B: mov     ecx, esi; this
0x694C1D: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x694C22: mov     dword ptr [esi], offset LockEffect_vftable
0x694C28: mov     eax, esi
0x694C2A: mov     ecx, [esp+18h+var_C]
0x694C2E: mov     large fs:0, ecx
0x694C35: pop     ecx
0x694C36: pop     esi
0x694C37: add     esp, 10h
0x694C3A: retn
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
