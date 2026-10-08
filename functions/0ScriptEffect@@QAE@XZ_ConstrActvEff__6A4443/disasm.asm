0x6A4443: mov     esi, ecx
0x6A4445: mov     [esp+arg_8], esi
0x6A4449: mov     edi, [esp+arg_24]
0x6A444D: mov     eax, [esp+arg_20]
0x6A4451: mov     ecx, [esp+arg_1C]
0x6A4455: push    edi
0x6A4456: push    eax
0x6A4457: push    ecx
0x6A4458: mov     ecx, esi; this
0x6A445A: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6A445F: mov     ecx, edi
0x6A4461: mov     [esp+arg_14], 0
0x6A4469: mov     dword ptr [esi], offset ??_7ScriptEffect@@6B@; const ScriptEffect::`vftable'
