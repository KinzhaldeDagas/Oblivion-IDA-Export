0x693880: push    0FFFFFFFFh; Verified (Oblivion): factory creates ActiveEffect objects with the DisintegrateWeaponEffect vtable. Its existence corroborates, but does not alone prove, the effect-code interpretation at 0x45574944.
0x693882: push    offset SEH_8C62B0
0x693887: mov     eax, large fs:0
0x69388D: push    eax
0x69388E: push    ecx
0x69388F: push    esi
0x693890: mov     eax, ds:0B30AACh
0x693895: xor     eax, esp
0x693897: push    eax
0x693898: lea     eax, [esp+18h+var_C]
0x69389C: mov     large fs:0, eax
0x6938A2: push    38h ; '8'; Size
0x6938A4: call    FormHeapAlloc
0x6938A9: mov     esi, eax
0x6938AB: add     esp, 4
0x6938AE: mov     [esp+18h+var_10], esi
0x6938B2: xor     eax, eax
0x6938B4: cmp     esi, eax
0x6938B6: mov     [esp+18h+var_4], eax
0x6938BA: jz      short loc_6938DA
0x6938BC: mov     eax, [esp+18h+effectItem]
0x6938C0: mov     ecx, [esp+18h+magicItem]
0x6938C4: mov     edx, [esp+18h+caster]
0x6938C8: push    eax
0x6938C9: push    ecx
0x6938CA: push    edx
0x6938CB: mov     ecx, esi; this
0x6938CD: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6938D2: mov     dword ptr [esi], offset ??_7DisintegrateWeaponEffect@@6B@; const DisintegrateWeaponEffect::`vftable'
0x6938D8: mov     eax, esi
0x6938DA: mov     ecx, [esp+18h+var_C]
0x6938DE: mov     large fs:0, ecx
0x6938E5: pop     ecx
0x6938E6: pop     esi
0x6938E7: add     esp, 10h
0x6938EA: retn
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
