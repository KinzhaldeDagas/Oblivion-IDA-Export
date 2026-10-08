0x9F9880: push    offset aHandToHand_0; "Hand To Hand"
0x9F9885: push    offset aSskillnamehand; "sSkillNameHandToHand"
0x9F988A: mov     ecx, offset g_sSkillNameHandToHand; self
0x9F988F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9894: push    offset sub_A239B0; void (__cdecl *)()
0x9F9899: call    _atexit
0x9F989E: pop     ecx
0x9F989F: retn
