0x9F6040: push    0FFFFFFFFh
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
0x9F6086: mov     ecx, eax
0x9F6088: call    GameSetting_ConstrAndReg
0x9F608D: jmp     short loc_9F6091
0x9F608F: xor     eax, eax
0x9F6091: or      esi, 0FFFFFFFFh
0x9F6094: push    8; Size
0x9F6096: mov     [esp+1Ch+var_4], esi
0x9F609A: mov     dword_B399D0, eax
0x9F609F: call    FormHeapAlloc
0x9F60A4: add     esp, 4
0x9F60A7: mov     [esp+18h+var_10], eax
0x9F60AB: test    eax, eax
0x9F60AD: mov     [esp+18h+var_4], 1
0x9F60B5: jz      short loc_9F60CA
0x9F60B7: push    offset aBack_0; "Back"
0x9F60BC: push    offset aSuactnback; "sUActnBack"
0x9F60C1: mov     ecx, eax
0x9F60C3: call    GameSetting_ConstrAndReg
0x9F60C8: jmp     short loc_9F60CC
0x9F60CA: xor     eax, eax
0x9F60CC: push    8; Size
0x9F60CE: mov     [esp+1Ch+var_4], esi
0x9F60D2: mov     dword_B399D4, eax
0x9F60D7: call    FormHeapAlloc
0x9F60DC: add     esp, 4
0x9F60DF: mov     [esp+18h+var_10], eax
0x9F60E3: test    eax, eax
0x9F60E5: mov     [esp+18h+var_4], 2
0x9F60ED: jz      short loc_9F6102
0x9F60EF: push    offset aSlideLeft; "Slide Left"
0x9F60F4: push    offset aSuactnsldleft; "sUActnSldleft"
0x9F60F9: mov     ecx, eax
0x9F60FB: call    GameSetting_ConstrAndReg
0x9F6100: jmp     short loc_9F6104
0x9F6102: xor     eax, eax
0x9F6104: push    8; Size
0x9F6106: mov     [esp+1Ch+var_4], esi
0x9F610A: mov     dword_B399D8, eax
0x9F610F: call    FormHeapAlloc
0x9F6114: add     esp, 4
0x9F6117: mov     [esp+18h+var_10], eax
0x9F611B: test    eax, eax
0x9F611D: mov     [esp+18h+var_4], 3
0x9F6125: jz      short loc_9F613A
0x9F6127: push    offset aSlideRight; "Slide Right"
0x9F612C: push    offset aSuactnsldright; "sUActnSldright"
0x9F6131: mov     ecx, eax
0x9F6133: call    GameSetting_ConstrAndReg
0x9F6138: jmp     short loc_9F613C
0x9F613A: xor     eax, eax
0x9F613C: push    8; Size
0x9F613E: mov     [esp+1Ch+var_4], esi
0x9F6142: mov     dword_B399DC, eax
0x9F6147: call    FormHeapAlloc
0x9F614C: add     esp, 4
0x9F614F: mov     [esp+18h+var_10], eax
0x9F6153: test    eax, eax
0x9F6155: mov     [esp+18h+var_4], 4
0x9F615D: jz      short loc_9F6172
0x9F615F: push    offset aAttack_0; "Attack"
0x9F6164: push    offset aSuactnuse; "sUActnUse"
0x9F6169: mov     ecx, eax
0x9F616B: call    GameSetting_ConstrAndReg
0x9F6170: jmp     short loc_9F6174
0x9F6172: xor     eax, eax
0x9F6174: push    8; Size
0x9F6176: mov     [esp+1Ch+var_4], esi
0x9F617A: mov     dword_B399E0, eax
0x9F617F: call    FormHeapAlloc
0x9F6184: add     esp, 4
0x9F6187: mov     [esp+18h+var_10], eax
0x9F618B: test    eax, eax
0x9F618D: mov     [esp+18h+var_4], 5
0x9F6195: jz      short loc_9F61AA
0x9F6197: push    offset aActivate; "Activate"
0x9F619C: push    offset aSuactnactivate; "sUActnActivate"
0x9F61A1: mov     ecx, eax
0x9F61A3: call    GameSetting_ConstrAndReg
0x9F61A8: jmp     short loc_9F61AC
0x9F61AA: xor     eax, eax
0x9F61AC: push    8; Size
0x9F61AE: mov     [esp+1Ch+var_4], esi
0x9F61B2: mov     dword_B399E4, eax
0x9F61B7: call    FormHeapAlloc
0x9F61BC: add     esp, 4
0x9F61BF: mov     [esp+18h+var_10], eax
0x9F61C3: test    eax, eax
0x9F61C5: mov     [esp+18h+var_4], 6
0x9F61CD: jz      short loc_9F61E2
0x9F61CF: push    offset aBlock_0; "Block"
0x9F61D4: push    offset aSuactnblock; "sUActnBlock"
0x9F61D9: mov     ecx, eax
0x9F61DB: call    GameSetting_ConstrAndReg
0x9F61E0: jmp     short loc_9F61E4
0x9F61E2: xor     eax, eax
0x9F61E4: push    8; Size
0x9F61E6: mov     [esp+1Ch+var_4], esi
0x9F61EA: mov     dword_B399E8, eax
0x9F61EF: call    FormHeapAlloc
0x9F61F4: add     esp, 4
0x9F61F7: mov     [esp+18h+var_10], eax
0x9F61FB: test    eax, eax
0x9F61FD: mov     [esp+18h+var_4], 7
0x9F6205: jz      short loc_9F621A
0x9F6207: push    offset aCast_0; "Cast"
0x9F620C: push    offset aSuactncast; "sUActnCast"
0x9F6211: mov     ecx, eax
0x9F6213: call    GameSetting_ConstrAndReg
0x9F6218: jmp     short loc_9F621C
0x9F621A: xor     eax, eax
0x9F621C: push    8; Size
0x9F621E: mov     [esp+1Ch+var_4], esi
0x9F6222: mov     dword_B399EC, eax
0x9F6227: call    FormHeapAlloc
0x9F622C: add     esp, 4
0x9F622F: mov     [esp+18h+var_10], eax
0x9F6233: test    eax, eax
0x9F6235: mov     [esp+18h+var_4], 8
0x9F623D: jz      short loc_9F6252
0x9F623F: push    offset aReadyWeapon; "Ready Weapon"
0x9F6244: push    offset aSuactnrdyitem; "sUActnRdyitem"
0x9F6249: mov     ecx, eax
0x9F624B: call    GameSetting_ConstrAndReg
0x9F6250: jmp     short loc_9F6254
0x9F6252: xor     eax, eax
0x9F6254: push    8; Size
0x9F6256: mov     [esp+1Ch+var_4], esi
0x9F625A: mov     dword_B399F0, eax
0x9F625F: call    FormHeapAlloc
0x9F6264: add     esp, 4
0x9F6267: mov     [esp+18h+var_10], eax
0x9F626B: test    eax, eax
0x9F626D: mov     [esp+18h+var_4], 9
0x9F6275: jz      short loc_9F628A
0x9F6277: push    offset aSneak; "Sneak"
0x9F627C: push    offset aSuactncrouch; "sUActnCrouch"
0x9F6281: mov     ecx, eax
0x9F6283: call    GameSetting_ConstrAndReg
0x9F6288: jmp     short loc_9F628C
0x9F628A: xor     eax, eax
0x9F628C: push    8; Size
0x9F628E: mov     [esp+1Ch+var_4], esi
0x9F6292: mov     dword_B399F4, eax
0x9F6297: call    FormHeapAlloc
0x9F629C: add     esp, 4
0x9F629F: mov     [esp+18h+var_10], eax
0x9F62A3: test    eax, eax
0x9F62A5: mov     [esp+18h+var_4], 0Ah
0x9F62AD: jz      short loc_9F62C2
0x9F62AF: push    offset off_A2FA0C
0x9F62B4: push    offset aSuactnrun; "sUActnRun"
0x9F62B9: mov     ecx, eax
0x9F62BB: call    GameSetting_ConstrAndReg
0x9F62C0: jmp     short loc_9F62C4
0x9F62C2: xor     eax, eax
0x9F62C4: push    8; Size
0x9F62C6: mov     [esp+1Ch+var_4], esi
0x9F62CA: mov     dword_B399F8, eax
0x9F62CF: call    FormHeapAlloc
0x9F62D4: add     esp, 4
0x9F62D7: mov     [esp+18h+var_10], eax
0x9F62DB: test    eax, eax
0x9F62DD: mov     [esp+18h+var_4], 0Bh
0x9F62E5: jz      short loc_9F62FA
0x9F62E7: push    offset aAlwaysRun; "Always Run"
0x9F62EC: push    offset aSuactntoggleru; "sUActnTogglerun"
0x9F62F1: mov     ecx, eax
0x9F62F3: call    GameSetting_ConstrAndReg
0x9F62F8: jmp     short loc_9F62FC
0x9F62FA: xor     eax, eax
0x9F62FC: push    8; Size
0x9F62FE: mov     [esp+1Ch+var_4], esi
0x9F6302: mov     dword_B399FC, eax
0x9F6307: call    FormHeapAlloc
0x9F630C: add     esp, 4
0x9F630F: mov     [esp+18h+var_10], eax
0x9F6313: test    eax, eax
0x9F6315: mov     [esp+18h+var_4], 0Ch
0x9F631D: jz      short loc_9F6332
0x9F631F: push    offset aAutoMove; "Auto Move"
0x9F6324: push    offset aSuactnautomove; "sUActnAutomove"
0x9F6329: mov     ecx, eax
0x9F632B: call    GameSetting_ConstrAndReg
0x9F6330: jmp     short loc_9F6334
0x9F6332: xor     eax, eax
0x9F6334: push    8; Size
0x9F6336: mov     [esp+1Ch+var_4], esi
0x9F633A: mov     dword_B39A00, eax
0x9F633F: call    FormHeapAlloc
0x9F6344: add     esp, 4
0x9F6347: mov     [esp+18h+var_10], eax
0x9F634B: test    eax, eax
0x9F634D: mov     [esp+18h+var_4], 0Dh
0x9F6355: jz      short loc_9F636A
0x9F6357: push    offset aJump; "Jump"
0x9F635C: push    offset aSuactnjump; "sUActnJump"
0x9F6361: mov     ecx, eax
0x9F6363: call    GameSetting_ConstrAndReg
0x9F6368: jmp     short loc_9F636C
0x9F636A: xor     eax, eax
0x9F636C: push    8; Size
0x9F636E: mov     [esp+1Ch+var_4], esi
0x9F6372: mov     dword_B39A04, eax
0x9F6377: call    FormHeapAlloc
0x9F637C: add     esp, 4
0x9F637F: mov     [esp+18h+var_10], eax
0x9F6383: test    eax, eax
0x9F6385: mov     [esp+18h+var_4], 0Eh
0x9F638D: jz      short loc_9F63A2
0x9F638F: push    offset aChangeView; "Change View"
0x9F6394: push    offset aSuactntogglepo; "sUActnTogglepov"
0x9F6399: mov     ecx, eax
0x9F639B: call    GameSetting_ConstrAndReg
0x9F63A0: jmp     short loc_9F63A4
0x9F63A2: xor     eax, eax
0x9F63A4: push    8; Size
0x9F63A6: mov     [esp+1Ch+var_4], esi
0x9F63AA: mov     dword_B39A08, eax
0x9F63AF: call    FormHeapAlloc
0x9F63B4: add     esp, 4
0x9F63B7: mov     [esp+18h+var_10], eax
0x9F63BB: test    eax, eax
0x9F63BD: mov     [esp+18h+var_4], 0Fh
0x9F63C5: jz      short loc_9F63DA
0x9F63C7: push    offset aJournal; "Journal"
0x9F63CC: push    offset aSuactnmenumode; "sUActnMenumode"
0x9F63D1: mov     ecx, eax
0x9F63D3: call    GameSetting_ConstrAndReg
0x9F63D8: jmp     short loc_9F63DC
0x9F63DA: xor     eax, eax
0x9F63DC: push    8; Size
0x9F63DE: mov     [esp+1Ch+var_4], esi
0x9F63E2: mov     dword_B39A0C, eax
0x9F63E7: call    FormHeapAlloc
0x9F63EC: add     esp, 4
0x9F63EF: mov     [esp+18h+var_10], eax
0x9F63F3: test    eax, eax
0x9F63F5: mov     [esp+18h+var_4], 10h
0x9F63FD: jz      short loc_9F6412
0x9F63FF: push    offset aWait; "Wait"
0x9F6404: push    offset aSuactnrestmenu; "sUActnRestmenu"
0x9F6409: mov     ecx, eax
0x9F640B: call    GameSetting_ConstrAndReg
0x9F6410: jmp     short loc_9F6414
0x9F6412: xor     eax, eax
0x9F6414: push    8; Size
0x9F6416: mov     [esp+1Ch+var_4], esi
0x9F641A: mov     dword_B39A10, eax
0x9F641F: call    FormHeapAlloc
0x9F6424: add     esp, 4
0x9F6427: mov     [esp+18h+var_10], eax
0x9F642B: test    eax, eax
0x9F642D: mov     [esp+18h+var_4], 11h
0x9F6435: jz      short loc_9F644A
0x9F6437: push    offset aQuickMenu; "Quick Menu"
0x9F643C: push    offset aSuactnquickmen; "sUActnQuickmenu"
0x9F6441: mov     ecx, eax
0x9F6443: call    GameSetting_ConstrAndReg
0x9F6448: jmp     short loc_9F644C
0x9F644A: xor     eax, eax
0x9F644C: push    8; Size
0x9F644E: mov     [esp+1Ch+var_4], esi
0x9F6452: mov     dword_B39A14, eax
0x9F6457: call    FormHeapAlloc
0x9F645C: add     esp, 4
0x9F645F: mov     [esp+18h+var_10], eax
0x9F6463: test    eax, eax
0x9F6465: mov     [esp+18h+var_4], 12h
0x9F646D: jz      short loc_9F6482
0x9F646F: push    offset aQuick1; "Quick1"
0x9F6474: push    offset aSuactnquick1; "sUActnQuick1"
0x9F6479: mov     ecx, eax
0x9F647B: call    GameSetting_ConstrAndReg
0x9F6480: jmp     short loc_9F6484
0x9F6482: xor     eax, eax
0x9F6484: push    8; Size
0x9F6486: mov     [esp+1Ch+var_4], esi
0x9F648A: mov     dword_B39A18, eax
0x9F648F: call    FormHeapAlloc
0x9F6494: add     esp, 4
0x9F6497: mov     [esp+18h+var_10], eax
0x9F649B: test    eax, eax
0x9F649D: mov     [esp+18h+var_4], 13h
0x9F64A5: jz      short loc_9F64BA
0x9F64A7: push    offset aQuick2; "Quick2"
0x9F64AC: push    offset aSuactnquick2; "sUActnQuick2"
0x9F64B1: mov     ecx, eax
0x9F64B3: call    GameSetting_ConstrAndReg
0x9F64B8: jmp     short loc_9F64BC
0x9F64BA: xor     eax, eax
0x9F64BC: push    8; Size
0x9F64BE: mov     [esp+1Ch+var_4], esi
0x9F64C2: mov     dword_B39A1C, eax
0x9F64C7: call    FormHeapAlloc
0x9F64CC: add     esp, 4
0x9F64CF: mov     [esp+18h+var_10], eax
0x9F64D3: test    eax, eax
0x9F64D5: mov     [esp+18h+var_4], 14h
0x9F64DD: jz      short loc_9F64F2
0x9F64DF: push    offset aQuick3; "Quick3"
0x9F64E4: push    offset aSuactnquick3; "sUActnQuick3"
0x9F64E9: mov     ecx, eax
0x9F64EB: call    GameSetting_ConstrAndReg
0x9F64F0: jmp     short loc_9F64F4
0x9F64F2: xor     eax, eax
0x9F64F4: push    8; Size
0x9F64F6: mov     [esp+1Ch+var_4], esi
0x9F64FA: mov     dword_B39A20, eax
0x9F64FF: call    FormHeapAlloc
0x9F6504: add     esp, 4
0x9F6507: mov     [esp+18h+var_10], eax
0x9F650B: test    eax, eax
0x9F650D: mov     [esp+18h+var_4], 15h
0x9F6515: jz      short loc_9F652A
0x9F6517: push    offset aQuick4; "Quick4"
0x9F651C: push    offset aSuactnquick4; "sUActnQuick4"
0x9F6521: mov     ecx, eax
0x9F6523: call    GameSetting_ConstrAndReg
0x9F6528: jmp     short loc_9F652C
0x9F652A: xor     eax, eax
0x9F652C: push    8; Size
0x9F652E: mov     [esp+1Ch+var_4], esi
0x9F6532: mov     dword_B39A24, eax
0x9F6537: call    FormHeapAlloc
0x9F653C: add     esp, 4
0x9F653F: mov     [esp+18h+var_10], eax
0x9F6543: test    eax, eax
0x9F6545: mov     [esp+18h+var_4], 16h
0x9F654D: jz      short loc_9F6562
0x9F654F: push    offset aQuick5; "Quick5"
0x9F6554: push    offset aSuactnquick5; "sUActnQuick5"
0x9F6559: mov     ecx, eax
0x9F655B: call    GameSetting_ConstrAndReg
0x9F6560: jmp     short loc_9F6564
0x9F6562: xor     eax, eax
0x9F6564: push    8; Size
0x9F6566: mov     [esp+1Ch+var_4], esi
0x9F656A: mov     dword_B39A28, eax
0x9F656F: call    FormHeapAlloc
0x9F6574: add     esp, 4
0x9F6577: mov     [esp+18h+var_10], eax
0x9F657B: test    eax, eax
0x9F657D: mov     [esp+18h+var_4], 17h
0x9F6585: jz      short loc_9F659A
0x9F6587: push    offset aQuick6; "Quick6"
0x9F658C: push    offset aSuactnquick6; "sUActnQuick6"
0x9F6591: mov     ecx, eax
0x9F6593: call    GameSetting_ConstrAndReg
0x9F6598: jmp     short loc_9F659C
0x9F659A: xor     eax, eax
0x9F659C: push    8; Size
0x9F659E: mov     [esp+1Ch+var_4], esi
0x9F65A2: mov     dword_B39A2C, eax
0x9F65A7: call    FormHeapAlloc
0x9F65AC: add     esp, 4
0x9F65AF: mov     [esp+18h+var_10], eax
0x9F65B3: test    eax, eax
0x9F65B5: mov     [esp+18h+var_4], 18h
0x9F65BD: jz      short loc_9F65D2
0x9F65BF: push    offset aQuick7; "Quick7"
0x9F65C4: push    offset aSuactnquick7; "sUActnQuick7"
0x9F65C9: mov     ecx, eax
0x9F65CB: call    GameSetting_ConstrAndReg
0x9F65D0: jmp     short loc_9F65D4
0x9F65D2: xor     eax, eax
0x9F65D4: push    8; Size
0x9F65D6: mov     [esp+1Ch+var_4], esi
0x9F65DA: mov     dword_B39A30, eax
0x9F65DF: call    FormHeapAlloc
0x9F65E4: add     esp, 4
0x9F65E7: mov     [esp+18h+var_10], eax
0x9F65EB: test    eax, eax
0x9F65ED: mov     [esp+18h+var_4], 19h
0x9F65F5: jz      short loc_9F660A
0x9F65F7: push    offset aQuick8; "Quick8"
0x9F65FC: push    offset aSuactnquick8; "sUActnQuick8"
0x9F6601: mov     ecx, eax
0x9F6603: call    GameSetting_ConstrAndReg
0x9F6608: jmp     short loc_9F660C
0x9F660A: xor     eax, eax
0x9F660C: push    8; Size
0x9F660E: mov     [esp+1Ch+var_4], esi
0x9F6612: mov     dword_B39A34, eax
0x9F6617: call    FormHeapAlloc
0x9F661C: add     esp, 4
0x9F661F: mov     [esp+18h+var_10], eax
0x9F6623: test    eax, eax
0x9F6625: mov     [esp+18h+var_4], 1Ah
0x9F662D: jz      short loc_9F6642
0x9F662F: push    offset aQuicksave_1; "QuickSave"
0x9F6634: push    offset aSuactnquicksav; "sUActnQuicksave"
0x9F6639: mov     ecx, eax
0x9F663B: call    GameSetting_ConstrAndReg
0x9F6640: jmp     short loc_9F6644
0x9F6642: xor     eax, eax
0x9F6644: push    8; Size
0x9F6646: mov     [esp+1Ch+var_4], esi
0x9F664A: mov     dword_B39A38, eax
0x9F664F: call    FormHeapAlloc
0x9F6654: add     esp, 4
0x9F6657: mov     [esp+18h+var_10], eax
0x9F665B: test    eax, eax
0x9F665D: mov     [esp+18h+var_4], 1Bh
0x9F6665: jz      short loc_9F667A
0x9F6667: push    offset aQuickload; "QuickLoad"
0x9F666C: push    offset aSuactnquickloa; "sUActnQuickload"
0x9F6671: mov     ecx, eax
0x9F6673: call    GameSetting_ConstrAndReg
0x9F6678: jmp     short loc_9F667C
0x9F667A: xor     eax, eax
0x9F667C: push    8; Size
0x9F667E: mov     [esp+1Ch+var_4], esi
0x9F6682: mov     dword_B39A3C, eax
0x9F6687: call    FormHeapAlloc
0x9F668C: add     esp, 4
0x9F668F: mov     [esp+18h+var_10], eax
0x9F6693: test    eax, eax
0x9F6695: mov     [esp+18h+var_4], 1Ch
0x9F669D: jz      short loc_9F66B2
0x9F669F: push    offset aGrab; "Grab"
0x9F66A4: push    offset aSuactngrab; "sUActnGrab"
0x9F66A9: mov     ecx, eax
0x9F66AB: call    GameSetting_ConstrAndReg
0x9F66B0: jmp     short loc_9F66B4
0x9F66B2: xor     eax, eax
0x9F66B4: mov     dword_B39A40, eax
0x9F66B9: mov     ecx, [esp+18h+var_C]
0x9F66BD: mov     large fs:0, ecx
0x9F66C4: pop     ecx
0x9F66C5: pop     esi
0x9F66C6: add     esp, 10h
0x9F66C9: retn
