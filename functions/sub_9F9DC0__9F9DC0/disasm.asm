0x9F9DC0: push    offset aAlchemyDescrip; "Alchemy Description"
0x9F9DC5: push    offset aSskilldescalch; "sSkillDescAlchemy"
0x9F9DCA: mov     ecx, offset stru_B3A20C; self
0x9F9DCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9DD4: push    offset sub_A23C50; void (__cdecl *)()
0x9F9DD9: call    _atexit
0x9F9DDE: pop     ecx
0x9F9DDF: retn
