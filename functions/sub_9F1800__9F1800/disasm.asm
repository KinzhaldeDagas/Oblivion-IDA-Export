0x9F1800: push    offset aYouHaveCreated; "You have created a new potion"
0x9F1805: push    offset aSpotionsuccede; "sPotionSucceded"
0x9F180A: mov     ecx, 0B388E8h; self
0x9F180F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1814: push    offset sub_A218F0; void (__cdecl *)()
0x9F1819: call    _atexit
0x9F181E: pop     ecx
0x9F181F: retn
