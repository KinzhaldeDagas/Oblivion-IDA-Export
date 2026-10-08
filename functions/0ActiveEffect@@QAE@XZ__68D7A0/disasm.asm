0x68D7A0: push    ebx; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x68D7A1: push    esi
0x68D7A2: mov     esi, ecx
0x68D7A4: mov     ecx, [esp+8+arg_4]
0x68D7A8: mov     dword ptr [esi], offset ??_7ActiveEffect@@6B@; const ActiveEffect::`vftable'
0x68D7AE: mov     [esi+8], ecx
0x68D7B1: mov     eax, [ecx]
0x68D7B3: mov     edx, [eax+18h]
0x68D7B6: push    edi
0x68D7B7: call    edx
0x68D7B9: fldz
0x68D7BB: mov     edi, [esp+0Ch+arg_8]
0x68D7BF: fstp    dword ptr [esi+4]
0x68D7C2: xor     ebx, ebx
0x68D7C4: mov     ecx, edi
0x68D7C6: mov     [esi+28h], eax
0x68D7C9: mov     [esi+0Ch], edi
0x68D7CC: mov     [esi+10h], bl; Verified ActiveEffect lifecycle field: constructor initializes bApplied=false; ProcessEffect calls Apply (+0x38) before setting it true after first successful application.
0x68D7CF: mov     [esi+11h], bl; Verified ActiveEffect lifecycle field: constructor initializes bTerminated=false. Expiration, target-death handling, or ActiveEffect_Base_Remove set it true; MagicTarget_ProcessEffects then unlinks/destroys the effect.
0x68D7D2: mov     [esi+12h], bl; Verified ActiveEffect lifecycle field: constructor initializes bRemoved=false; RemoveEffect sets it after the virtual onRemove hook and target-side cleanup.
0x68D7D5: call    EffectItem_GetMagnitude
0x68D7DA: mov     [esp+0Ch+arg_4], eax
0x68D7DE: fild    [esp+0Ch+arg_4]
0x68D7E2: mov     ecx, edi
0x68D7E4: fstp    dword ptr [esi+18h]
0x68D7E7: call    EffectItem_GetDuration; OBMEFix verification 2026-05-26: ActiveEffect ctor reads EffectItem duration and stores it at this+0x1C before IsTargetValid is called by MagicTarget_AddEffect.
0x68D7EC: mov     [esp+0Ch+arg_4], eax; OBMEFix verification 2026-05-30: ActiveEffect ctor reads EffectItem duration before MagicTarget_AddEffect calls vtable +0x34; OBMEFix can use activeEffect->duration in the creation guard.
0x68D7F0: fild    [esp+0Ch+arg_4]
0x68D7F4: mov     eax, [esp+0Ch+arg_0]
0x68D7F8: mov     [esi+24h], eax
0x68D7FB: pop     edi
0x68D7FC: mov     [esi+20h], ebx
0x68D7FF: fstp    dword ptr [esi+1Ch]
0x68D802: mov     [esi+2Ch], ebx
0x68D805: mov     [esi+30h], ebx
0x68D808: mov     [esi+34h], ebx
0x68D80B: mov     [esi+14h], ebx
0x68D80E: mov     eax, esi
0x68D810: pop     esi
0x68D811: pop     ebx
0x68D812: retn    0Ch
