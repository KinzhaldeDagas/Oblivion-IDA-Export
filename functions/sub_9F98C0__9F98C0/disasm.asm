0x9F98C0: push    offset aAlchemy; "Alchemy"
0x9F98C5: push    offset aSskillnamealch; "sSkillNameAlchemy"
0x9F98CA: mov     ecx, offset g_sSkillNameAlchemy; self
0x9F98CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F98D4: push    offset sub_A239D0; void (__cdecl *)()
0x9F98D9: call    _atexit
0x9F98DE: pop     ecx
0x9F98DF: retn
