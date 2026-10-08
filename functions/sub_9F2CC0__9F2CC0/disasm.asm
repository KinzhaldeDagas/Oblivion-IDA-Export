0x9F2CC0: push    offset aOfferRefused; "Offer refused"
0x9F2CC5: push    offset aSofferrefused; "sOfferRefused"
0x9F2CCA: mov     ecx, 0B38DB8h; self
0x9F2CCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2CD4: push    offset sub_A22290; void (__cdecl *)()
0x9F2CD9: call    _atexit
0x9F2CDE: pop     ecx
0x9F2CDF: retn
