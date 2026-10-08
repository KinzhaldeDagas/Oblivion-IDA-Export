0x5F4816: mov     ecx, [esp+arg_10]; AVU decode: ingredient wortcraft Alchemy branch. Loads MagicCaster pointer from stack, subtracts 0x5C to recover owning Actor, pushes AV 0x13, then calls Actor_GetLuckModifiedBaseAV.
0x5F481A: push    13h; actorValue
0x5F481C: add     ecx, 0FFFFFFA4h; this
0x5F481F: call    Actor_GetLuckModifiedBaseAV; AVU hook site: wortcraft effective Alchemy. ECX is already owning Actor after MagicCaster-0x5C adjustment; stack arg is AV 0x13 Alchemy. Return is ST0 and callee cleans 4 bytes.
0x5F4824: fstp    [esp+arg_24]
0x5F4828: mov     esi, [esp+arg_1C]
0x5F482C: test    esi, esi
0x5F482E: jz      short Actor_MagicCaster_IsMagicItemUseable___ActorMagicCaster_IsAbleToCast_Return1; jumptable 005F475F default case, cases 1,4,7
0x5F4830: fld     [esp+arg_24]
0x5F4834: push    ecx
0x5F4835: fstp    [esp+4+var_4]; float
0x5F4838: call    Calc_WortcraftAlchemyFactor; AVU decode: Calc_WortcraftAlchemyFactor(effectiveAlchemy) returns fWortalchmult * effectiveAlchemy * fWortStrMult.
0x5F483D: fstp    dword ptr [esi]
0x5F483F: add     esp, 4
0x5F4842: pop     edi; jumptable 005F475F default case, cases 1,4,7
0x5F4843: pop     esi
0x5F4844: mov     al, 1
0x5F4846: pop     ebx
0x5F4847: add     esp, 0Ch
0x5F484A: retn    10h
