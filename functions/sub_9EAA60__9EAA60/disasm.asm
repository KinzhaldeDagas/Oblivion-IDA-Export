0x9EAA60: push    0FFFFFFECh; Construct/register iActorLuckSkillBase with Oblivion default -20.
0x9EAA62: push    offset aIactorluckskil; "iActorLuckSkillBase"
0x9EAA67: mov     ecx, offset g_iActorLuckSkillBase; self
0x9EAA6C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EAA71: push    offset sub_A1EE30; void (__cdecl *)()
0x9EAA76: call    _atexit
0x9EAA7B: pop     ecx
0x9EAA7C: retn
