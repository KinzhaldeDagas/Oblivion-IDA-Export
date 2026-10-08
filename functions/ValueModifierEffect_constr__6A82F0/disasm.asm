0x6A82F0: mov     eax, [esp+arg_4]
0x6A82F4: push    esi
0x6A82F5: push    edi
0x6A82F6: mov     edi, [esp+8+arg_8]
0x6A82FA: push    edi
0x6A82FB: mov     esi, ecx
0x6A82FD: mov     ecx, [esp+0Ch+arg_0]
0x6A8301: push    eax
0x6A8302: push    ecx
0x6A8303: mov     ecx, esi; this
0x6A8305: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6A830A: mov     dword ptr [esi], offset ??_7ValueModifierEffect@@6B@; const ValueModifierEffect::`vftable'
0x6A8310: mov     eax, [edi+1Ch]
0x6A8313: test    byte ptr [eax+5Bh], 1
0x6A8317: jz      short ValueModifierEffect_constr___OverrideAV
0x6A8319: mov     edx, [eax+60h]
0x6A831C: mov     [esi+38h], edx
0x6A831F: jmp     short loc_6A8327
