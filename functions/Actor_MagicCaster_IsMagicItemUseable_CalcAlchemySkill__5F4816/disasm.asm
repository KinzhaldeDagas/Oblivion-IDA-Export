0x5F4816: mov     ecx, [esp+arg_10]
0x5F481A: push    13h
0x5F481C: add     ecx, 0FFFFFFA4h
0x5F481F: call    Actor_GetLuckModifiedBaseAV
0x5F4824: fstp    [esp+arg_24]
0x5F4828: mov     esi, [esp+arg_1C]
0x5F482C: test    esi, esi
0x5F482E: jz      short Actor_MagicCaster_IsMagicItemUseable___ActorMagicCaster_IsAbleToCast_Return1; jumptable 005F475F default case, cases 1,4,7
0x5F4830: fld     [esp+arg_24]
0x5F4834: push    ecx
0x5F4835: fstp    [esp+4+var_4]; float
0x5F4838: call    Calc_WortcraftAlchemyFactor
0x5F483D: fstp    dword ptr [esi]
0x5F483F: add     esp, 4
