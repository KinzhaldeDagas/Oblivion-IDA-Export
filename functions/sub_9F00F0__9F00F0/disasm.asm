0x9F00F0: push    offset aYouResolveToCo; "You resolve to continue pushing yoursel"...
0x9F00F5: push    offset aSlevelup7; "sLevelUp7"
0x9F00FA: mov     ecx, offset stru_B38328; self
0x9F00FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0104: push    offset sub_A20D70; void (__cdecl *)()
0x9F0109: call    _atexit
0x9F010E: pop     ecx
0x9F010F: retn
