0x6A7F30: push    0FFFFFFFFh
0x6A7F32: push    offset SEH_8C62B0
0x6A7F37: mov     eax, large fs:0
0x6A7F3D: push    eax
0x6A7F3E: push    ecx
0x6A7F3F: push    esi
0x6A7F40: mov     eax, ds:0B30AACh
0x6A7F45: xor     eax, esp
0x6A7F47: push    eax
0x6A7F48: lea     eax, [esp+18h+var_C]
0x6A7F4C: mov     large fs:0, eax
0x6A7F52: push    3Ch ; '<'; Size
0x6A7F54: call    FormHeapAlloc
0x6A7F59: mov     esi, eax
0x6A7F5B: add     esp, 4
0x6A7F5E: mov     [esp+18h+var_10], esi
0x6A7F62: test    esi, esi
0x6A7F64: mov     [esp+18h+var_4], 0
0x6A7F6C: jz      short loc_6A7FA1
0x6A7F6E: mov     eax, [esp+18h+effectItem]
0x6A7F72: mov     ecx, [esp+18h+magicItem]
0x6A7F76: mov     edx, [esp+18h+caster]
0x6A7F7A: push    eax
0x6A7F7B: push    ecx
0x6A7F7C: push    edx
0x6A7F7D: mov     ecx, esi; this
0x6A7F7F: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6A7F84: mov     dword ptr [esi], offset ??_7TurnUndeadEffect@@6B@; const TurnUndeadEffect::`vftable'
0x6A7F8A: mov     byte ptr [esi+38h], 0
0x6A7F8E: mov     eax, esi
0x6A7F90: mov     ecx, [esp+18h+var_C]
0x6A7F94: mov     large fs:0, ecx
0x6A7F9B: pop     ecx
0x6A7F9C: pop     esi
0x6A7F9D: add     esp, 10h
0x6A7FA0: retn
0x6A7FA1: xor     eax, eax
0x6A7FA3: mov     ecx, [esp+18h+var_C]
0x6A7FA7: mov     large fs:0, ecx
0x6A7FAE: pop     ecx
0x6A7FAF: pop     esi
0x6A7FB0: add     esp, 10h
0x6A7FB3: retn
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
