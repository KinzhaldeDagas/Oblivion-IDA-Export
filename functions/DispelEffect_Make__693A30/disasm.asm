0x693A30: push    0FFFFFFFFh
0x693A32: push    offset SEH_8C62B0
0x693A37: mov     eax, large fs:0
0x693A3D: push    eax
0x693A3E: push    ecx
0x693A3F: push    esi
0x693A40: mov     eax, ds:0B30AACh
0x693A45: xor     eax, esp
0x693A47: push    eax
0x693A48: lea     eax, [esp+18h+var_C]
0x693A4C: mov     large fs:0, eax
0x693A52: push    38h ; '8'; Size
0x693A54: call    FormHeapAlloc
0x693A59: mov     esi, eax
0x693A5B: add     esp, 4
0x693A5E: mov     [esp+18h+var_10], esi
0x693A62: xor     eax, eax
0x693A64: cmp     esi, eax
0x693A66: mov     [esp+18h+var_4], eax
0x693A6A: jz      short loc_693A8A
0x693A6C: mov     eax, [esp+18h+effectItem]
0x693A70: mov     ecx, [esp+18h+magicItem]
0x693A74: mov     edx, [esp+18h+caster]
0x693A78: push    eax
0x693A79: push    ecx
0x693A7A: push    edx
0x693A7B: mov     ecx, esi; this
0x693A7D: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x693A82: mov     dword ptr [esi], offset ??_7DispelEffect@@6B@; const DispelEffect::`vftable'
0x693A88: mov     eax, esi
0x693A8A: mov     ecx, [esp+18h+var_C]
0x693A8E: mov     large fs:0, ecx
0x693A95: pop     ecx
0x693A96: pop     esi
0x693A97: add     esp, 10h
0x693A9A: retn
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
