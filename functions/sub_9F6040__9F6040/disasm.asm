0x9F6040: push    0FFFFFFFFh; MorrowindDialogueText: user action string game setting registration block. Allocates 8-byte Setting objects and registers sUActn* keys into dword_B35574.
0x9F6042: push    offset SEH_9F6040
0x9F6047: mov     eax, large fs:0
0x9F604D: push    eax
0x9F604E: push    ecx
0x9F604F: push    esi
0x9F6050: mov     eax, ___security_cookie
0x9F6055: xor     eax, esp
0x9F6057: push    eax
0x9F6058: lea     eax, [esp+18h+var_C]
0x9F605C: mov     large fs:0, eax
0x9F6062: push    8; Size
0x9F6064: call    FormHeapAlloc
0x9F6069: add     esp, 4
0x9F606C: mov     [esp+18h+var_10], eax
0x9F6070: test    eax, eax
0x9F6072: mov     [esp+18h+var_4], 0
0x9F607A: jz      short loc_9F608F
0x9F607C: push    offset aForward_1; "Forward"
0x9F6081: push    offset aSuactnforward; "sUActnForward"
0x9F6086: mov     ecx, eax; self
0x9F6088: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F608D: jmp     short loc_9F6091
0x9F608F: xor     eax, eax
0x9F6091: or      esi, 0FFFFFFFFh
0x9F6094: push    8; Size
0x9F6096: mov     [esp+1Ch+var_4], esi
0x9F609A: mov     dword ptr g_controlActionLabelSetting_Forward, eax
0x9F609F: call    FormHeapAlloc
0x9F60A4: add     esp, 4
0x9F60A7: mov     [esp+18h+var_10], eax
0x9F60AB: test    eax, eax
0x9F60AD: mov     [esp+18h+var_4], 1
0x9F60B5: jz      short loc_9F60CA
0x9F60B7: push    offset aBack_0; "Back"
0x9F60BC: push    offset aSuactnback; "sUActnBack"
0x9F60C1: mov     ecx, eax; self
0x9F60C3: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F60C8: jmp     short loc_9F60CC
0x9F60CA: xor     eax, eax
0x9F60CC: push    8; Size
0x9F60CE: mov     [esp+1Ch+var_4], esi
0x9F60D2: mov     dword ptr g_controlActionLabelSetting_Back, eax
0x9F60D7: call    FormHeapAlloc
0x9F60DC: add     esp, 4
0x9F60DF: mov     [esp+18h+var_10], eax
0x9F60E3: test    eax, eax
0x9F60E5: mov     [esp+18h+var_4], 2
0x9F60ED: jz      short loc_9F6102
0x9F60EF: push    offset aSlideLeft; "Slide Left"
0x9F60F4: push    offset aSuactnsldleft; "sUActnSldleft"
0x9F60F9: mov     ecx, eax; self
0x9F60FB: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6100: jmp     short loc_9F6104
0x9F6102: xor     eax, eax
0x9F6104: push    8; Size
0x9F6106: mov     [esp+1Ch+var_4], esi
0x9F610A: mov     dword ptr g_controlActionLabelSetting_SlideLeft, eax
0x9F610F: call    FormHeapAlloc
0x9F6114: add     esp, 4
0x9F6117: mov     [esp+18h+var_10], eax
0x9F611B: test    eax, eax
0x9F611D: mov     [esp+18h+var_4], 3
0x9F6125: jz      short loc_9F613A
0x9F6127: push    offset aSlideRight; "Slide Right"
0x9F612C: push    offset aSuactnsldright; "sUActnSldright"
0x9F6131: mov     ecx, eax; self
0x9F6133: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6138: jmp     short loc_9F613C
0x9F613A: xor     eax, eax
0x9F613C: push    8; Size
0x9F613E: mov     [esp+1Ch+var_4], esi
0x9F6142: mov     dword ptr g_controlActionLabelSetting_SlideRight, eax
0x9F6147: call    FormHeapAlloc
0x9F614C: add     esp, 4
0x9F614F: mov     [esp+18h+var_10], eax
0x9F6153: test    eax, eax
0x9F6155: mov     [esp+18h+var_4], 4
0x9F615D: jz      short loc_9F6172
0x9F615F: push    offset aAttack_0; "Attack"
0x9F6164: push    offset aSuactnuse; "sUActnUse"
0x9F6169: mov     ecx, eax; self
0x9F616B: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6170: jmp     short loc_9F6174
0x9F6172: xor     eax, eax
0x9F6174: push    8; Size
0x9F6176: mov     [esp+1Ch+var_4], esi
0x9F617A: mov     dword ptr g_controlActionLabelSetting_Attack, eax
0x9F617F: call    FormHeapAlloc
0x9F6184: add     esp, 4
0x9F6187: mov     [esp+18h+var_10], eax
0x9F618B: test    eax, eax
0x9F618D: mov     [esp+18h+var_4], 5
0x9F6195: jz      short loc_9F61AA
0x9F6197: push    offset aActivate; "Activate"
0x9F619C: push    offset aSuactnactivate; "sUActnActivate"
0x9F61A1: mov     ecx, eax; self
0x9F61A3: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F61A8: jmp     short loc_9F61AC
0x9F61AA: xor     eax, eax
0x9F61AC: push    8; Size
0x9F61AE: mov     [esp+1Ch+var_4], esi
0x9F61B2: mov     dword ptr g_controlActionLabelSetting_Activate, eax
0x9F61B7: call    FormHeapAlloc
0x9F61BC: add     esp, 4
0x9F61BF: mov     [esp+18h+var_10], eax
0x9F61C3: test    eax, eax
0x9F61C5: mov     [esp+18h+var_4], 6
0x9F61CD: jz      short loc_9F61E2
0x9F61CF: push    offset aBlock_0; "Block"
0x9F61D4: push    offset aSuactnblock; "sUActnBlock"
0x9F61D9: mov     ecx, eax; self
0x9F61DB: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F61E0: jmp     short loc_9F61E4
0x9F61E2: xor     eax, eax
0x9F61E4: push    8; Size
0x9F61E6: mov     [esp+1Ch+var_4], esi
0x9F61EA: mov     dword ptr g_controlActionLabelSetting_Block, eax
0x9F61EF: call    FormHeapAlloc
0x9F61F4: add     esp, 4
0x9F61F7: mov     [esp+18h+var_10], eax
0x9F61FB: test    eax, eax
0x9F61FD: mov     [esp+18h+var_4], 7
0x9F6205: jz      short loc_9F621A
0x9F6207: push    offset aCast_0; "Cast"
0x9F620C: push    offset aSuactncast; "sUActnCast"
0x9F6211: mov     ecx, eax; self
0x9F6213: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6218: jmp     short loc_9F621C
0x9F621A: xor     eax, eax
0x9F621C: push    8; Size
0x9F621E: mov     [esp+1Ch+var_4], esi
0x9F6222: mov     dword ptr g_controlActionLabelSetting_Cast, eax
0x9F6227: call    FormHeapAlloc
0x9F622C: add     esp, 4
0x9F622F: mov     [esp+18h+var_10], eax
0x9F6233: test    eax, eax
0x9F6235: mov     [esp+18h+var_4], 8
0x9F623D: jz      short loc_9F6252
0x9F623F: push    offset aReadyWeapon; "Ready Weapon"
0x9F6244: push    offset aSuactnrdyitem; "sUActnRdyitem"
0x9F6249: mov     ecx, eax; self
0x9F624B: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6250: jmp     short loc_9F6254
0x9F6252: xor     eax, eax
0x9F6254: push    8; Size
0x9F6256: mov     [esp+1Ch+var_4], esi
0x9F625A: mov     dword ptr g_controlActionLabelSetting_ReadyWeapon, eax
0x9F625F: call    FormHeapAlloc
0x9F6264: add     esp, 4
0x9F6267: mov     [esp+18h+var_10], eax
0x9F626B: test    eax, eax
0x9F626D: mov     [esp+18h+var_4], 9
0x9F6275: jz      short loc_9F628A
0x9F6277: push    offset aSneak; "Sneak"
0x9F627C: push    offset aSuactncrouch; "sUActnCrouch"
0x9F6281: mov     ecx, eax; self
0x9F6283: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6288: jmp     short loc_9F628C
0x9F628A: xor     eax, eax
0x9F628C: push    8; Size
0x9F628E: mov     [esp+1Ch+var_4], esi
0x9F6292: mov     dword ptr g_controlActionLabelSetting_Sneak, eax
0x9F6297: call    FormHeapAlloc
0x9F629C: add     esp, 4
0x9F629F: mov     [esp+18h+var_10], eax
0x9F62A3: test    eax, eax
0x9F62A5: mov     [esp+18h+var_4], 0Ah
0x9F62AD: jz      short loc_9F62C2
0x9F62AF: push    offset off_A2FA0C; defaultValue
0x9F62B4: push    offset aSuactnrun; "sUActnRun"
0x9F62B9: mov     ecx, eax; self
0x9F62BB: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F62C0: jmp     short loc_9F62C4
0x9F62C2: xor     eax, eax
0x9F62C4: push    8; Size
0x9F62C6: mov     [esp+1Ch+var_4], esi
0x9F62CA: mov     dword ptr g_controlActionLabelSetting_Run, eax
0x9F62CF: call    FormHeapAlloc
0x9F62D4: add     esp, 4
0x9F62D7: mov     [esp+18h+var_10], eax
0x9F62DB: test    eax, eax
0x9F62DD: mov     [esp+18h+var_4], 0Bh
0x9F62E5: jz      short loc_9F62FA
0x9F62E7: push    offset aAlwaysRun; "Always Run"
0x9F62EC: push    offset aSuactntoggleru; "sUActnTogglerun"
0x9F62F1: mov     ecx, eax; self
0x9F62F3: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F62F8: jmp     short loc_9F62FC
0x9F62FA: xor     eax, eax
0x9F62FC: push    8; Size
0x9F62FE: mov     [esp+1Ch+var_4], esi
0x9F6302: mov     dword ptr g_controlActionLabelSetting_AlwaysRun, eax
0x9F6307: call    FormHeapAlloc
0x9F630C: add     esp, 4
0x9F630F: mov     [esp+18h+var_10], eax
0x9F6313: test    eax, eax
0x9F6315: mov     [esp+18h+var_4], 0Ch
0x9F631D: jz      short loc_9F6332
0x9F631F: push    offset aAutoMove; "Auto Move"
0x9F6324: push    offset aSuactnautomove; "sUActnAutomove"
0x9F6329: mov     ecx, eax; self
0x9F632B: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6330: jmp     short loc_9F6334
0x9F6332: xor     eax, eax
0x9F6334: push    8; Size
0x9F6336: mov     [esp+1Ch+var_4], esi
0x9F633A: mov     dword ptr g_controlActionLabelSetting_AutoMove, eax
0x9F633F: call    FormHeapAlloc
0x9F6344: add     esp, 4
0x9F6347: mov     [esp+18h+var_10], eax
0x9F634B: test    eax, eax
0x9F634D: mov     [esp+18h+var_4], 0Dh
0x9F6355: jz      short loc_9F636A
0x9F6357: push    offset aJump; "Jump"
0x9F635C: push    offset aSuactnjump; "sUActnJump"
0x9F6361: mov     ecx, eax; self
0x9F6363: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6368: jmp     short loc_9F636C
0x9F636A: xor     eax, eax
0x9F636C: push    8; Size
0x9F636E: mov     [esp+1Ch+var_4], esi
0x9F6372: mov     dword ptr g_controlActionLabelSetting_Jump, eax
0x9F6377: call    FormHeapAlloc
0x9F637C: add     esp, 4
0x9F637F: mov     [esp+18h+var_10], eax
0x9F6383: test    eax, eax
0x9F6385: mov     [esp+18h+var_4], 0Eh
0x9F638D: jz      short loc_9F63A2
0x9F638F: push    offset aChangeView; "Change View"
0x9F6394: push    offset aSuactntogglepo; "sUActnTogglepov"
0x9F6399: mov     ecx, eax; self
0x9F639B: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F63A0: jmp     short loc_9F63A4
0x9F63A2: xor     eax, eax
0x9F63A4: push    8; Size
0x9F63A6: mov     [esp+1Ch+var_4], esi
0x9F63AA: mov     dword ptr g_controlActionLabelSetting_ChangeView, eax
0x9F63AF: call    FormHeapAlloc
0x9F63B4: add     esp, 4
0x9F63B7: mov     [esp+18h+var_10], eax
0x9F63BB: test    eax, eax
0x9F63BD: mov     [esp+18h+var_4], 0Fh
0x9F63C5: jz      short loc_9F63DA
0x9F63C7: push    offset aJournal; "Journal"
0x9F63CC: push    offset aSuactnmenumode; "sUActnMenumode"
0x9F63D1: mov     ecx, eax; self
0x9F63D3: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F63D8: jmp     short loc_9F63DC
0x9F63DA: xor     eax, eax
0x9F63DC: push    8; Size
0x9F63DE: mov     [esp+1Ch+var_4], esi
0x9F63E2: mov     dword ptr g_controlActionLabelSetting_Journal, eax
0x9F63E7: call    FormHeapAlloc
0x9F63EC: add     esp, 4
0x9F63EF: mov     [esp+18h+var_10], eax
0x9F63F3: test    eax, eax
0x9F63F5: mov     [esp+18h+var_4], 10h
0x9F63FD: jz      short loc_9F6412
0x9F63FF: push    offset aWait; "Wait"
0x9F6404: push    offset aSuactnrestmenu; "sUActnRestmenu"
0x9F6409: mov     ecx, eax; self
0x9F640B: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6410: jmp     short loc_9F6414
0x9F6412: xor     eax, eax
0x9F6414: push    8; Size
0x9F6416: mov     [esp+1Ch+var_4], esi
0x9F641A: mov     dword ptr g_controlActionLabelSetting_Wait, eax
0x9F641F: call    FormHeapAlloc
0x9F6424: add     esp, 4
0x9F6427: mov     [esp+18h+var_10], eax
0x9F642B: test    eax, eax
0x9F642D: mov     [esp+18h+var_4], 11h
0x9F6435: jz      short loc_9F644A
0x9F6437: push    offset aQuickMenu; "Quick Menu"
0x9F643C: push    offset aSuactnquickmen; "sUActnQuickmenu"
0x9F6441: mov     ecx, eax; self
0x9F6443: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6448: jmp     short loc_9F644C
0x9F644A: xor     eax, eax
0x9F644C: push    8; Size
0x9F644E: mov     [esp+1Ch+var_4], esi
0x9F6452: mov     dword ptr g_controlActionLabelSetting_QuickMenu, eax
0x9F6457: call    FormHeapAlloc
0x9F645C: add     esp, 4
0x9F645F: mov     [esp+18h+var_10], eax
0x9F6463: test    eax, eax
0x9F6465: mov     [esp+18h+var_4], 12h
0x9F646D: jz      short loc_9F6482
0x9F646F: push    offset aQuick1; "Quick1"
0x9F6474: push    offset aSuactnquick1; "sUActnQuick1"
0x9F6479: mov     ecx, eax; self
0x9F647B: call    GameSetting_ConstrAndReg; MorrowindDialogueText: constructs sUActnQuick1 with default string value Quick1; plugin maps dialogue alias &sUActnQuick1; to %PCName instead.
0x9F6480: jmp     short loc_9F6484
0x9F6482: xor     eax, eax
0x9F6484: push    8; Size
0x9F6486: mov     [esp+1Ch+var_4], esi
0x9F648A: mov     dword ptr g_controlActionLabelSetting_Quick1, eax
0x9F648F: call    FormHeapAlloc
0x9F6494: add     esp, 4
0x9F6497: mov     [esp+18h+var_10], eax
0x9F649B: test    eax, eax
0x9F649D: mov     [esp+18h+var_4], 13h
0x9F64A5: jz      short loc_9F64BA
0x9F64A7: push    offset aQuick2; "Quick2"
0x9F64AC: push    offset aSuactnquick2; "sUActnQuick2"
0x9F64B1: mov     ecx, eax; self
0x9F64B3: call    GameSetting_ConstrAndReg; MorrowindDialogueText: constructs sUActnQuick2 with default string value Quick2; plugin maps dialogue alias &sUActnQuick2; to %Name instead.
0x9F64B8: jmp     short loc_9F64BC
0x9F64BA: xor     eax, eax
0x9F64BC: push    8; Size
0x9F64BE: mov     [esp+1Ch+var_4], esi
0x9F64C2: mov     dword ptr g_controlActionLabelSetting_Quick2, eax
0x9F64C7: call    FormHeapAlloc
0x9F64CC: add     esp, 4
0x9F64CF: mov     [esp+18h+var_10], eax
0x9F64D3: test    eax, eax
0x9F64D5: mov     [esp+18h+var_4], 14h
0x9F64DD: jz      short loc_9F64F2
0x9F64DF: push    offset aQuick3; "Quick3"
0x9F64E4: push    offset aSuactnquick3; "sUActnQuick3"
0x9F64E9: mov     ecx, eax; self
0x9F64EB: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F64F0: jmp     short loc_9F64F4
0x9F64F2: xor     eax, eax
0x9F64F4: push    8; Size
0x9F64F6: mov     [esp+1Ch+var_4], esi
0x9F64FA: mov     dword ptr g_controlActionLabelSetting_Quick3, eax
0x9F64FF: call    FormHeapAlloc
0x9F6504: add     esp, 4
0x9F6507: mov     [esp+18h+var_10], eax
0x9F650B: test    eax, eax
0x9F650D: mov     [esp+18h+var_4], 15h
0x9F6515: jz      short loc_9F652A
0x9F6517: push    offset aQuick4; "Quick4"
0x9F651C: push    offset aSuactnquick4; "sUActnQuick4"
0x9F6521: mov     ecx, eax; self
0x9F6523: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6528: jmp     short loc_9F652C
0x9F652A: xor     eax, eax
0x9F652C: push    8; Size
0x9F652E: mov     [esp+1Ch+var_4], esi
0x9F6532: mov     dword ptr g_controlActionLabelSetting_Quick4, eax
0x9F6537: call    FormHeapAlloc
0x9F653C: add     esp, 4
0x9F653F: mov     [esp+18h+var_10], eax
0x9F6543: test    eax, eax
0x9F6545: mov     [esp+18h+var_4], 16h
0x9F654D: jz      short loc_9F6562
0x9F654F: push    offset aQuick5; "Quick5"
0x9F6554: push    offset aSuactnquick5; "sUActnQuick5"
0x9F6559: mov     ecx, eax; self
0x9F655B: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6560: jmp     short loc_9F6564
0x9F6562: xor     eax, eax
0x9F6564: push    8; Size
0x9F6566: mov     [esp+1Ch+var_4], esi
0x9F656A: mov     dword ptr g_controlActionLabelSetting_Quick5, eax
0x9F656F: call    FormHeapAlloc
0x9F6574: add     esp, 4
0x9F6577: mov     [esp+18h+var_10], eax
0x9F657B: test    eax, eax
0x9F657D: mov     [esp+18h+var_4], 17h
0x9F6585: jz      short loc_9F659A
0x9F6587: push    offset aQuick6; "Quick6"
0x9F658C: push    offset aSuactnquick6; "sUActnQuick6"
0x9F6591: mov     ecx, eax; self
0x9F6593: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6598: jmp     short loc_9F659C
0x9F659A: xor     eax, eax
0x9F659C: push    8; Size
0x9F659E: mov     [esp+1Ch+var_4], esi
0x9F65A2: mov     dword ptr g_controlActionLabelSetting_Quick6, eax
0x9F65A7: call    FormHeapAlloc
0x9F65AC: add     esp, 4
0x9F65AF: mov     [esp+18h+var_10], eax
0x9F65B3: test    eax, eax
0x9F65B5: mov     [esp+18h+var_4], 18h
0x9F65BD: jz      short loc_9F65D2
0x9F65BF: push    offset aQuick7; "Quick7"
0x9F65C4: push    offset aSuactnquick7; "sUActnQuick7"
0x9F65C9: mov     ecx, eax; self
0x9F65CB: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F65D0: jmp     short loc_9F65D4
0x9F65D2: xor     eax, eax
0x9F65D4: push    8; Size
0x9F65D6: mov     [esp+1Ch+var_4], esi
0x9F65DA: mov     dword ptr g_controlActionLabelSetting_Quick7, eax
0x9F65DF: call    FormHeapAlloc
0x9F65E4: add     esp, 4
0x9F65E7: mov     [esp+18h+var_10], eax
0x9F65EB: test    eax, eax
0x9F65ED: mov     [esp+18h+var_4], 19h
0x9F65F5: jz      short loc_9F660A
0x9F65F7: push    offset aQuick8; "Quick8"
0x9F65FC: push    offset aSuactnquick8; "sUActnQuick8"
0x9F6601: mov     ecx, eax; self
0x9F6603: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6608: jmp     short loc_9F660C
0x9F660A: xor     eax, eax
0x9F660C: push    8; Size
0x9F660E: mov     [esp+1Ch+var_4], esi
0x9F6612: mov     dword ptr g_controlActionLabelSetting_Quick8, eax
0x9F6617: call    FormHeapAlloc
0x9F661C: add     esp, 4
0x9F661F: mov     [esp+18h+var_10], eax
0x9F6623: test    eax, eax
0x9F6625: mov     [esp+18h+var_4], 1Ah
0x9F662D: jz      short loc_9F6642
0x9F662F: push    offset aQuicksave_1; "QuickSave"
0x9F6634: push    offset aSuactnquicksav; "sUActnQuicksave"
0x9F6639: mov     ecx, eax; self
0x9F663B: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6640: jmp     short loc_9F6644
0x9F6642: xor     eax, eax
0x9F6644: push    8; Size
0x9F6646: mov     [esp+1Ch+var_4], esi
0x9F664A: mov     dword ptr g_controlActionLabelSetting_QuickSave, eax
0x9F664F: call    FormHeapAlloc
0x9F6654: add     esp, 4
0x9F6657: mov     [esp+18h+var_10], eax
0x9F665B: test    eax, eax
0x9F665D: mov     [esp+18h+var_4], 1Bh
0x9F6665: jz      short loc_9F667A
0x9F6667: push    offset aQuickload; "QuickLoad"
0x9F666C: push    offset aSuactnquickloa; "sUActnQuickload"
0x9F6671: mov     ecx, eax; self
0x9F6673: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6678: jmp     short loc_9F667C
0x9F667A: xor     eax, eax
0x9F667C: push    8; Size
0x9F667E: mov     [esp+1Ch+var_4], esi
0x9F6682: mov     dword ptr g_controlActionLabelSetting_QuickLoad, eax
0x9F6687: call    FormHeapAlloc
0x9F668C: add     esp, 4
0x9F668F: mov     [esp+18h+var_10], eax
0x9F6693: test    eax, eax
0x9F6695: mov     [esp+18h+var_4], 1Ch
0x9F669D: jz      short loc_9F66B2
0x9F669F: push    offset aGrab; "Grab"
0x9F66A4: push    offset aSuactngrab; "sUActnGrab"
0x9F66A9: mov     ecx, eax; self
0x9F66AB: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F66B0: jmp     short loc_9F66B4
0x9F66B2: xor     eax, eax
0x9F66B4: mov     dword ptr g_controlActionLabelSetting_Grab, eax
0x9F66B9: mov     ecx, [esp+18h+var_C]
0x9F66BD: mov     large fs:0, ecx
0x9F66C4: pop     ecx
0x9F66C5: pop     esi
0x9F66C6: add     esp, 10h
0x9F66C9: retn
0x9BB2B0: mov     eax, [ebp-10h]; Microsoft VisualC 2-14/net runtime
0x9BB2B3: push    eax
0x9BB2B4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB2B9: pop     ecx
0x9BB2BA: retn
0x9BB2BB: mov     eax, [ebp-10h]
0x9BB2BE: push    eax
0x9BB2BF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB2C4: pop     ecx
0x9BB2C5: retn
0x9BB2C6: mov     eax, [ebp-10h]
0x9BB2C9: push    eax
0x9BB2CA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB2CF: pop     ecx
0x9BB2D0: retn
0x9BB2D1: mov     eax, [ebp-10h]
0x9BB2D4: push    eax
0x9BB2D5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB2DA: pop     ecx
0x9BB2DB: retn
0x9BB2DC: mov     eax, [ebp-10h]
0x9BB2DF: push    eax
0x9BB2E0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB2E5: pop     ecx
0x9BB2E6: retn
0x9BB2E7: mov     eax, [ebp-10h]
0x9BB2EA: push    eax
0x9BB2EB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB2F0: pop     ecx
0x9BB2F1: retn
0x9BB2F2: mov     eax, [ebp-10h]
0x9BB2F5: push    eax
0x9BB2F6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB2FB: pop     ecx
0x9BB2FC: retn
0x9BB2FD: mov     eax, [ebp-10h]
0x9BB300: push    eax
0x9BB301: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB306: pop     ecx
0x9BB307: retn
0x9BB308: mov     eax, [ebp-10h]
0x9BB30B: push    eax
0x9BB30C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB311: pop     ecx
0x9BB312: retn
0x9BB313: mov     eax, [ebp-10h]
0x9BB316: push    eax
0x9BB317: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB31C: pop     ecx
0x9BB31D: retn
0x9BB31E: mov     eax, [ebp-10h]
0x9BB321: push    eax
0x9BB322: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB327: pop     ecx
0x9BB328: retn
0x9BB329: mov     eax, [ebp-10h]
0x9BB32C: push    eax
0x9BB32D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB332: pop     ecx
0x9BB333: retn
0x9BB334: mov     eax, [ebp-10h]
0x9BB337: push    eax
0x9BB338: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB33D: pop     ecx
0x9BB33E: retn
0x9BB33F: mov     eax, [ebp-10h]
0x9BB342: push    eax
0x9BB343: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB348: pop     ecx
0x9BB349: retn
0x9BB34A: mov     eax, [ebp-10h]
0x9BB34D: push    eax
0x9BB34E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB353: pop     ecx
0x9BB354: retn
0x9BB355: mov     eax, [ebp-10h]
0x9BB358: push    eax
0x9BB359: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB35E: pop     ecx
0x9BB35F: retn
0x9BB360: mov     eax, [ebp-10h]
0x9BB363: push    eax
0x9BB364: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB369: pop     ecx
0x9BB36A: retn
0x9BB36B: mov     eax, [ebp-10h]
0x9BB36E: push    eax
0x9BB36F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB374: pop     ecx
0x9BB375: retn
0x9BB376: mov     eax, [ebp-10h]
0x9BB379: push    eax
0x9BB37A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB37F: pop     ecx
0x9BB380: retn
0x9BB381: mov     eax, [ebp-10h]
0x9BB384: push    eax
0x9BB385: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB38A: pop     ecx
0x9BB38B: retn
0x9BB38C: mov     eax, [ebp-10h]
0x9BB38F: push    eax
0x9BB390: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB395: pop     ecx
0x9BB396: retn
0x9BB397: mov     eax, [ebp-10h]
0x9BB39A: push    eax
0x9BB39B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB3A0: pop     ecx
0x9BB3A1: retn
0x9BB3A2: mov     eax, [ebp-10h]
0x9BB3A5: push    eax
0x9BB3A6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB3AB: pop     ecx
0x9BB3AC: retn
0x9BB3AD: mov     eax, [ebp-10h]
0x9BB3B0: push    eax
0x9BB3B1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB3B6: pop     ecx
0x9BB3B7: retn
0x9BB3B8: mov     eax, [ebp-10h]
0x9BB3BB: push    eax
0x9BB3BC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB3C1: pop     ecx
0x9BB3C2: retn
0x9BB3C3: mov     eax, [ebp-10h]
0x9BB3C6: push    eax
0x9BB3C7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB3CC: pop     ecx
0x9BB3CD: retn
0x9BB3CE: mov     eax, [ebp-10h]
0x9BB3D1: push    eax
0x9BB3D2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB3D7: pop     ecx
0x9BB3D8: retn
0x9BB3D9: mov     eax, [ebp-10h]
0x9BB3DC: push    eax
0x9BB3DD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB3E2: pop     ecx
0x9BB3E3: retn
0x9BB3E4: mov     eax, [ebp-10h]
0x9BB3E7: push    eax
0x9BB3E8: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BB3ED: pop     ecx
0x9BB3EE: retn
0x9BB3EF: mov     edx, [esp+arg_4]
0x9BB3F3: lea     eax, [edx-8]
0x9BB3F6: mov     ecx, [edx-0Ch]
0x9BB3F9: xor     ecx, eax
0x9BB3FB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BB400: mov     eax, offset stru_AE513C
0x9BB405: jmp     ___CxxFrameHandler3
