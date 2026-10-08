0x6A3550: push    0FFFFFFFFh; Verified OpenEffect factory: allocates a 0x38-byte ActiveEffect-sized object, calls ActiveEffect_Ctor, installs OpenEffect_vftable, and returns the concrete OpenEffect subclass.
0x6A3552: push    offset SEH_8C62B0
0x6A3557: mov     eax, large fs:0
0x6A355D: push    eax
0x6A355E: push    ecx
0x6A355F: push    esi
0x6A3560: mov     eax, ds:0B30AACh
0x6A3565: xor     eax, esp
0x6A3567: push    eax
0x6A3568: lea     eax, [esp+18h+var_C]
0x6A356C: mov     large fs:0, eax
0x6A3572: push    38h ; '8'; Size
0x6A3574: call    FormHeapAlloc
0x6A3579: mov     esi, eax
0x6A357B: add     esp, 4
0x6A357E: mov     [esp+18h+var_10], esi
0x6A3582: xor     eax, eax
0x6A3584: cmp     esi, eax
0x6A3586: mov     [esp+18h+var_4], eax
0x6A358A: jz      short loc_6A35AA
0x6A358C: mov     eax, [esp+18h+effectItem]
0x6A3590: mov     ecx, [esp+18h+magicItem]
0x6A3594: mov     edx, [esp+18h+caster]
0x6A3598: push    eax
0x6A3599: push    ecx
0x6A359A: push    edx
0x6A359B: mov     ecx, esi; this
0x6A359D: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6A35A2: mov     dword ptr [esi], offset OpenEffect_vftable
0x6A35A8: mov     eax, esi
0x6A35AA: mov     ecx, [esp+18h+var_C]
0x6A35AE: mov     large fs:0, ecx
0x6A35B5: pop     ecx
0x6A35B6: pop     esi
0x6A35B7: add     esp, 10h
0x6A35BA: retn
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
