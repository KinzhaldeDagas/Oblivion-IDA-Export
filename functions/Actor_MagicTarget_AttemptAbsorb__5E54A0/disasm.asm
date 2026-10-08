0x5E54A0: push    ecx; AVU decode: MagicTarget::AttemptAbsorb. ECX is MagicTarget subobject; owning Actor is ECX-0x68. Rolls Game_RandomLargeInteger()%100 against current AV 0x34 SpellAbsorbChance.
0x5E54A1: push    esi
0x5E54A2: push    edi
0x5E54A3: push    0; Seed
0x5E54A5: mov     esi, ecx
0x5E54A7: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x5E54AC: cdq
0x5E54AD: mov     ecx, 64h ; 'd'
0x5E54B2: idiv    ecx
0x5E54B4: add     esi, 0FFFFFF98h
0x5E54B7: add     esp, 4
0x5E54BA: push    34h ; '4'
0x5E54BC: mov     ecx, esi
0x5E54BE: mov     edi, edx
0x5E54C0: mov     edx, [esi]
0x5E54C2: mov     eax, [edx+284h]
0x5E54C8: call    eax
0x5E54CA: cmp     [esp+0Ch+arg_C], 0; AVU hook site: EAX holds current SpellAbsorbChance from actor vtbl+0x284, EDI holds 0..99 roll. Original code checks reflected flag at stack arg_C before comparing.
0x5E54CF: mov     [esp+0Ch+var_4], eax
0x5E54D3: jz      short loc_5E54E4
0x5E54D5: fild    [esp+0Ch+var_4]; If reflected flag is set, vanilla multiplies the integer absorb chance by fReflectedAbsorbChanceReduction, then calls Double_To_SInt32 before the roll compare.
0x5E54D9: fmul    dword ptr ds:0B38290h
0x5E54DF: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5E54E4: cmp     edi, eax; Spell absorption succeeds when the 0..99 engine roll is below current actor value 0x34; success negates the effect and refunds its magicka cost.
0x5E54E6: jge     short Actor_MagicTarget_AttemptAbsorb___Return_0
0x5E54E8: mov     ecx, [esp+0Ch+arg_8]
0x5E54EC: mov     ecx, [ecx+0Ch]
0x5E54EF: mov     edi, [esi]
0x5E54F1: push    0
0x5E54F3: push    0
0x5E54F5: call    EffectItem_MagickaCostForCaster
0x5E54FA: mov     edx, [edi+2A4h]
0x5E5500: push    ecx
0x5E5501: fstp    [esp+14h+var_14]
0x5E5504: push    9
0x5E5506: mov     ecx, esi
0x5E5508: call    edx
0x5E550A: pop     edi
0x5E550B: mov     al, 1
0x5E550D: pop     esi
0x5E550E: pop     ecx
0x5E550F: retn    10h
