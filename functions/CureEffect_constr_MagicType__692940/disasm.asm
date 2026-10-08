0x692940: mov     eax, [esp+arg_8]
0x692944: mov     edx, [esp+arg_0]
0x692948: push    esi
0x692949: mov     esi, ecx
0x69294B: mov     ecx, [esp+4+arg_4]
0x69294F: push    eax
0x692950: push    ecx
0x692951: push    edx
0x692952: mov     ecx, esi; this
0x692954: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x692959: mov     eax, [esp+4+arg_C]
0x69295D: mov     [esi+38h], eax
0x692960: mov     dword ptr [esi], offset ??_7CureEffect@@6B@; const CureEffect::`vftable'
0x692966: mov     dword ptr [esi+3Ch], 0FFFFFFFFh
0x69296D: mov     eax, esi
0x69296F: pop     esi
0x692970: retn    10h
