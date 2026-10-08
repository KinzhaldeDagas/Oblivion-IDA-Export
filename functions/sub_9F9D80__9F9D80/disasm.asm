0x9F9D80: push    offset aHandToHandDesc; "Hand To Hand Description"
0x9F9D85: push    offset aSskilldeschand; "sSkillDescHandToHand"
0x9F9D8A: mov     ecx, offset stru_B3A1FC; self
0x9F9D8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9D94: push    offset sub_A23C30; void (__cdecl *)()
0x9F9D99: call    _atexit
0x9F9D9E: pop     ecx
0x9F9D9F: retn
