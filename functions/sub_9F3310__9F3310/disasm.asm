0x9F3310: push    0FFFFFFFFh; [Controller decode 2026-07-09] Initializes input-device label settings for keyboard, mouse, and joystick.
0x9F3312: push    offset SEH_9F3310
0x9F3317: mov     eax, large fs:0
0x9F331D: push    eax
0x9F331E: push    ecx
0x9F331F: mov     eax, ___security_cookie
0x9F3324: xor     eax, esp
0x9F3326: push    eax
0x9F3327: lea     eax, [esp+14h+var_C]
0x9F332B: mov     large fs:0, eax
0x9F3331: push    8; Size
0x9F3333: call    FormHeapAlloc
0x9F3338: add     esp, 4
0x9F333B: mov     [esp+14h+var_10], eax
0x9F333F: test    eax, eax
0x9F3341: mov     [esp+14h+var_4], 0
0x9F3349: jz      short loc_9F335E
0x9F334B: push    offset aKeyboard; "Keyboard"
0x9F3350: push    offset aSdevicekeyboar; "sDeviceKeyboard"
0x9F3355: mov     ecx, eax; self
0x9F3357: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F335C: jmp     short loc_9F3360
0x9F335E: xor     eax, eax
0x9F3360: push    8; Size
0x9F3362: mov     [esp+18h+var_4], 0FFFFFFFFh
0x9F336A: mov     dword ptr unk_B39548, eax
0x9F336F: call    FormHeapAlloc
0x9F3374: add     esp, 4
0x9F3377: mov     [esp+14h+var_10], eax
0x9F337B: test    eax, eax
0x9F337D: mov     [esp+14h+var_4], 1
0x9F3385: jz      short loc_9F339A
0x9F3387: push    offset aMouse; "Mouse"
0x9F338C: push    offset aSdevicemouse; "sDeviceMouse"
0x9F3391: mov     ecx, eax; self
0x9F3393: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F3398: jmp     short loc_9F339C
0x9F339A: xor     eax, eax
0x9F339C: push    8; Size
0x9F339E: mov     [esp+18h+var_4], 0FFFFFFFFh
0x9F33A6: mov     dword ptr unk_B3954C, eax
0x9F33AB: call    FormHeapAlloc
0x9F33B0: add     esp, 4
0x9F33B3: mov     [esp+14h+var_10], eax
0x9F33B7: test    eax, eax
0x9F33B9: mov     [esp+14h+var_4], 2
0x9F33C1: jz      short loc_9F33E9
0x9F33C3: push    offset aJoystick; "Joystick"
0x9F33C8: push    offset aSdevicejoystic; "sDeviceJoystick"
0x9F33CD: mov     ecx, eax; self
0x9F33CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F33D4: mov     dword ptr g_deviceLabelSetting_Joystick, eax
0x9F33D9: mov     ecx, [esp+14h+var_C]
0x9F33DD: mov     large fs:0, ecx
0x9F33E4: pop     ecx
0x9F33E5: add     esp, 10h
0x9F33E8: retn
0x9F33E9: xor     eax, eax
0x9F33EB: mov     dword ptr g_deviceLabelSetting_Joystick, eax
0x9F33F0: mov     ecx, [esp+14h+var_C]
0x9F33F4: mov     large fs:0, ecx
0x9F33FB: pop     ecx
0x9F33FC: add     esp, 10h
0x9F33FF: retn
0x9BA9F0: mov     eax, [ebp-10h]
0x9BA9F3: push    eax
0x9BA9F4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BA9F9: pop     ecx
0x9BA9FA: retn
0x9BA9FB: mov     eax, [ebp-10h]
0x9BA9FE: push    eax
0x9BA9FF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BAA04: pop     ecx
0x9BAA05: retn
0x9BAA06: mov     eax, [ebp-10h]
0x9BAA09: push    eax
0x9BAA0A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BAA0F: pop     ecx
0x9BAA10: retn
0x9BAA11: mov     edx, [esp+arg_4]
0x9BAA15: lea     eax, [edx-4]
0x9BAA18: mov     ecx, [edx-8]
0x9BAA1B: xor     ecx, eax
0x9BAA1D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BAA22: mov     eax, offset stru_AE4AB8
0x9BAA27: jmp     ___CxxFrameHandler3
