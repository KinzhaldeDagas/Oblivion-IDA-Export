0x5FF626: push    80h ; '€'
0x5FF62B: lea     eax, [esi+44h]
0x5FF62E: push    eax
0x5FF62F: push    edi
0x5FF630: call    Script_AddEventToExtraScript; RealArenaTraining: actor melee OnHit event. Args: source attacker=EDI, targetExtra=ESI+0x44, mask=0x80.
0x5FF635: add     esp, 0Ch
