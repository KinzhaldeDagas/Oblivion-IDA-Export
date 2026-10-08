0x9F32B0: push    offset aXbox360Control; [Controller decode 2026-07-09] Initializes game setting sXBox360Controller = Xbox 360 Controller. UI label only; not evidence of XInput polling and not related to IsXBox.
0x9F32B5: push    offset aSxbox360contro; "sXBox360Controller"
0x9F32BA: mov     ecx, offset stru_B38F00; self
0x9F32BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F32C4: push    offset GameSetting_Destroy_sXBox360Controller; void (__cdecl *)()
0x9F32C9: call    _atexit
0x9F32CE: pop     ecx
0x9F32CF: retn
