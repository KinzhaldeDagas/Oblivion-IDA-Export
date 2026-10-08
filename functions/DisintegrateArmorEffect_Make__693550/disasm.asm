0x693550: push    0FFFFFFFFh
0x693552: push    offset SEH_8C62B0
0x693557: mov     eax, large fs:0
0x69355D: push    eax
0x69355E: push    ecx
0x69355F: push    esi
0x693560: mov     eax, ds:0B30AACh
0x693565: xor     eax, esp
0x693567: push    eax
0x693568: lea     eax, [esp+18h+var_C]
0x69356C: mov     large fs:0, eax
0x693572: push    3Ch ; '<'; Size
0x693574: call    FormHeapAlloc
0x693579: mov     esi, eax
0x69357B: add     esp, 4
0x69357E: mov     [esp+18h+var_10], esi
0x693582: test    esi, esi
0x693584: mov     [esp+18h+var_4], 0
0x69358C: jz      short loc_6935C4
0x69358E: mov     eax, [esp+18h+effectItem]
0x693592: mov     ecx, [esp+18h+magicItem]
0x693596: mov     edx, [esp+18h+caster]
0x69359A: push    eax
0x69359B: push    ecx
0x69359C: push    edx
0x69359D: mov     ecx, esi; this
0x69359F: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6935A4: mov     dword ptr [esi], offset ??_7DisintegrateArmorEffect@@6B@; const DisintegrateArmorEffect::`vftable'
0x6935AA: mov     dword ptr [esi+38h], 0
0x6935B1: mov     eax, esi
0x6935B3: mov     ecx, [esp+18h+var_C]
0x6935B7: mov     large fs:0, ecx
0x6935BE: pop     ecx
0x6935BF: pop     esi
0x6935C0: add     esp, 10h
0x6935C3: retn
0x6935C4: xor     eax, eax
0x6935C6: mov     ecx, [esp+18h+var_C]
0x6935CA: mov     large fs:0, ecx
0x6935D1: pop     ecx
0x6935D2: pop     esi
0x6935D3: add     esp, 10h
0x6935D6: retn
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
