0x9F03B0: push    offset aSpecializati_0; "Specialization: "
0x9F03B5: push    offset aSclassspeciali; "sClassSpecialization"
0x9F03BA: mov     ecx, offset stru_B383D8; self
0x9F03BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F03C4: push    offset sub_A20ED0; void (__cdecl *)()
0x9F03C9: call    _atexit
0x9F03CE: pop     ecx
0x9F03CF: retn
