0x9F3310: push    0FFFFFFFFh
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
0x9F3355: mov     ecx, eax
0x9F3357: call    GameSetting_ConstrAndReg
0x9F335C: jmp     short loc_9F3360
0x9F335E: xor     eax, eax
0x9F3360: push    8; Size
0x9F3362: mov     [esp+18h+var_4], 0FFFFFFFFh
0x9F336A: mov     dword_B39548, eax
0x9F336F: call    FormHeapAlloc
0x9F3374: add     esp, 4
0x9F3377: mov     [esp+14h+var_10], eax
0x9F337B: test    eax, eax
0x9F337D: mov     [esp+14h+var_4], 1
0x9F3385: jz      short loc_9F339A
0x9F3387: push    offset aMouse; "Mouse"
0x9F338C: push    offset aSdevicemouse; "sDeviceMouse"
0x9F3391: mov     ecx, eax
0x9F3393: call    GameSetting_ConstrAndReg
0x9F3398: jmp     short loc_9F339C
0x9F339A: xor     eax, eax
0x9F339C: push    8; Size
0x9F339E: mov     [esp+18h+var_4], 0FFFFFFFFh
0x9F33A6: mov     dword_B3954C, eax
0x9F33AB: call    FormHeapAlloc
0x9F33B0: add     esp, 4
0x9F33B3: mov     [esp+14h+var_10], eax
0x9F33B7: test    eax, eax
0x9F33B9: mov     [esp+14h+var_4], 2
0x9F33C1: jz      short loc_9F33E9
0x9F33C3: push    offset aJoystick; "Joystick"
0x9F33C8: push    offset aSdevicejoystic; "sDeviceJoystick"
0x9F33CD: mov     ecx, eax
0x9F33CF: call    GameSetting_ConstrAndReg
0x9F33D4: mov     dword_B39550, eax
0x9F33D9: mov     ecx, [esp+14h+var_C]
0x9F33DD: mov     large fs:0, ecx
0x9F33E4: pop     ecx
0x9F33E5: add     esp, 10h
0x9F33E8: retn
0x9F33E9: xor     eax, eax
0x9F33EB: mov     dword_B39550, eax
0x9F33F0: mov     ecx, [esp+14h+var_C]
0x9F33F4: mov     large fs:0, ecx
0x9F33FB: pop     ecx
0x9F33FC: add     esp, 10h
0x9F33FF: retn
