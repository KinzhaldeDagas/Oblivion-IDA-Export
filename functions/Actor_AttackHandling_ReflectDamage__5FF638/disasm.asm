0x5FF638: test    ebp, ebp; Physical-hit reflect damage branch. Vanilla tests EBP first and skips reflect damage when EBP is nonzero, matching projectile hits.
0x5FF63A: jnz     Actor_AttackHandling___CalcArmorRating; AVU hook site: replaces vanilla projectile-skip branch. AVU preserves vanilla by default through favuReflectDamageProjectileMult=0, while allowing configured projectile reflection.
0x5FF640: mov     edx, [esi]
0x5FF642: mov     eax, [edx+284h]
0x5FF648: push    3Bh ; ';'; Vanilla reads target current integer AV 0x3B ReflectDamage and skips the branch when the integer value is <= 0.
0x5FF64A: mov     ecx, esi
0x5FF64C: call    eax
0x5FF64E: test    eax, eax
0x5FF650: jle     Actor_AttackHandling___CalcArmorRating
0x5FF656: mov     edx, [esi]
0x5FF658: mov     eax, [edx+288h]
0x5FF65E: push    3Bh ; ';'; Vanilla rereads target current float AV 0x3B ReflectDamage, divides by 100, and multiplies incoming health damage by that factor.
0x5FF660: mov     ecx, esi
0x5FF662: call    eax
0x5FF664: fdiv    qword ptr ds:0A309F0h
0x5FF66A: fstp    [esp+arg_4C]
0x5FF66E: fld     [esp+arg_4C]
0x5FF672: fmul    [esp+arg_14]
0x5FF676: fstp    [esp+arg_1C]; int
0x5FF67A: fldz
0x5FF67C: fld     [esp+arg_1C]
0x5FF680: fcom    st(1)
0x5FF682: fnstsw  ax
0x5FF684: test    ah, 41h
0x5FF687: jnz     Actor_AttackHandling___CalcArmorRating_
0x5FF68D: mov     edx, [edi]; Vanilla calls attacker vtbl+0x220 OnPhysicalHit(reflectedDamage, 0, target) before subtracting reflectedDamage from target incoming damage.
0x5FF68F: fxch    st(1)
0x5FF691: mov     eax, [edx+220h]
0x5FF697: push    esi
0x5FF698: sub     esp, 8
0x5FF69B: fstp    [esp+0Ch+var_8]
0x5FF69F: mov     ecx, edi
0x5FF6A1: fstp    [esp+0Ch+var_C]
0x5FF6A4: call    eax
0x5FF6A6: cmp     byte ptr ds:0B3B908h, 0; ReflectDamage continuation: subtract reflected/blocked damage from incoming target damage, then optionally prints the console message.
0x5FF6AD: fld     [esp+arg_14]
0x5FF6B1: fsub    [esp+arg_1C]
0x5FF6B5: fstp    [esp+arg_14]; int
0x5FF6B9: jz      short Actor_AttackHandling___CalcArmorRating
0x5FF6BB: mov     ecx, esi; this
0x5FF6BD: call    TESObjectREFR_GetName
0x5FF6C2: push    eax
0x5FF6C3: push    8
0x5FF6C5: call    ActorValue_GetName; Return the localized actor-value display name through g_actorValueNameSettings. Native skills occupy the contiguous SkillActorValue range 0x0C..0x20.
0x5FF6CA: add     esp, 4
0x5FF6CD: push    eax
0x5FF6CE: mov     ecx, edi; this
0x5FF6D0: call    TESObjectREFR_GetName
0x5FF6D5: push    eax
0x5FF6D6: push    offset a_20sReflected_; "%.20s reflected %.1f points of %s damag"...
0x5FF6DB: call    Interface_ConsolePrint
0x5FF6E0: add     esp, 10h
0x5FF6E3: jmp     short Actor_AttackHandling___CalcArmorRating
