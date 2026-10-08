0x6937F0: push    0FFFFFFFFh
0x6937F2: push    offset SEH_8C8970
0x6937F7: mov     eax, large fs:0
0x6937FD: push    eax
0x6937FE: push    ecx
0x6937FF: push    esi
0x693800: push    edi
0x693801: mov     eax, ds:0B30AACh
0x693806: xor     eax, esp
0x693808: push    eax
0x693809: lea     eax, [esp+1Ch+var_C]
0x69380D: mov     large fs:0, eax
0x693813: mov     edi, ecx
0x693815: push    38h ; '8'; Size
0x693817: call    FormHeapAlloc
0x69381C: mov     esi, eax
0x69381E: add     esp, 4
0x693821: mov     [esp+1Ch+var_10], esi
0x693825: test    esi, esi
0x693827: mov     [esp+1Ch+var_4], 0
0x69382F: jz      short loc_69384C
0x693831: mov     eax, [edi+0Ch]
0x693834: mov     ecx, [edi+8]
0x693837: mov     edx, [edi+24h]
0x69383A: push    eax
0x69383B: push    ecx
0x69383C: push    edx
0x69383D: mov     ecx, esi; this
0x69383F: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x693844: mov     dword ptr [esi], offset ??_7DisintegrateWeaponEffect@@6B@; const DisintegrateWeaponEffect::`vftable'
0x69384A: jmp     short loc_69384E
0x69384C: xor     esi, esi
0x69384E: push    esi
0x69384F: mov     ecx, edi
0x693851: mov     [esp+20h+var_4], 0FFFFFFFFh
0x693859: call    ActiveEffect_Base_CopyTo; Verified ActiveEffect_Base_CopyTo copies fields through object +0x30 (boundObjectOrParentForm) and stops there; it does not copy hitEffectList at +0x34. ActiveEffect_Ctor zeroes +0x34. The registered-effect vtables' copy slots either call this routine directly or call derived copy helpers that chain to it; inspected helpers copy their own fields but do not write +0x34. Therefore standard ActiveEffect clones start with an independent empty hit-effect list.
0x69385E: mov     eax, esi
0x693860: mov     ecx, [esp+1Ch+var_C]
0x693864: mov     large fs:0, ecx
0x69386B: pop     ecx
0x69386C: pop     edi
0x69386D: pop     esi
0x69386E: add     esp, 10h
0x693871: retn
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
