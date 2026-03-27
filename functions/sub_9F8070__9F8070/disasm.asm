0x9F8070: push    0FFFFFFFFh
0x9F8072: push    offset SEH_9F8070
0x9F8077: mov     eax, large fs:0
0x9F807D: push    eax
0x9F807E: push    ecx
0x9F807F: push    esi
0x9F8080: mov     eax, ___security_cookie
0x9F8085: xor     eax, esp
0x9F8087: push    eax
0x9F8088: lea     eax, [esp+18h+var_C]
0x9F808C: mov     large fs:0, eax
0x9F8092: push    8; Size
0x9F8094: call    FormHeapAlloc
0x9F8099: add     esp, 4
0x9F809C: mov     [esp+18h+var_10], eax
0x9F80A0: test    eax, eax
0x9F80A2: mov     [esp+18h+var_4], 0
0x9F80AA: jz      short loc_9F80BF
0x9F80AC: push    offset aTake
0x9F80B1: push    offset aStargettypetak
0x9F80B6: mov     ecx, eax
0x9F80B8: call    GameSetting_ConstrAndReg
0x9F80BD: jmp     short loc_9F80C1
0x9F80BF: xor     eax, eax
0x9F80C1: or      esi, 0FFFFFFFFh
0x9F80C4: push    8; Size
0x9F80C6: mov     [esp+1Ch+var_4], esi
0x9F80CA: mov     dword_B39A64, eax
0x9F80CF: call    FormHeapAlloc
0x9F80D4: add     esp, 4
0x9F80D7: mov     [esp+18h+var_10], eax
0x9F80DB: test    eax, eax
0x9F80DD: mov     [esp+18h+var_4], 1
0x9F80E5: jz      short loc_9F80FA
0x9F80E7: push    offset aOpen
0x9F80EC: push    offset aStargettypeope
0x9F80F1: mov     ecx, eax
0x9F80F3: call    GameSetting_ConstrAndReg
0x9F80F8: jmp     short loc_9F80FC
0x9F80FA: xor     eax, eax
0x9F80FC: push    8; Size
0x9F80FE: mov     [esp+1Ch+var_4], esi
0x9F8102: mov     dword_B39A68, eax
0x9F8107: call    FormHeapAlloc
0x9F810C: add     esp, 4
0x9F810F: mov     [esp+18h+var_10], eax
0x9F8113: test    eax, eax
0x9F8115: mov     [esp+18h+var_4], 2
0x9F811D: jz      short loc_9F8132
0x9F811F: push    offset off_A64100
0x9F8124: push    offset aStargettypesit
0x9F8129: mov     ecx, eax
0x9F812B: call    GameSetting_ConstrAndReg
0x9F8130: jmp     short loc_9F8134
0x9F8132: xor     eax, eax
0x9F8134: push    8; Size
0x9F8136: mov     [esp+1Ch+var_4], esi
0x9F813A: mov     dword_B39A6C, eax
0x9F813F: call    FormHeapAlloc
0x9F8144: add     esp, 4
0x9F8147: mov     [esp+18h+var_10], eax
0x9F814B: test    eax, eax
0x9F814D: mov     [esp+18h+var_4], 3
0x9F8155: jz      short loc_9F816A
0x9F8157: push    offset aActivate
0x9F815C: push    offset aStargettypeact
0x9F8161: mov     ecx, eax
0x9F8163: call    GameSetting_ConstrAndReg
0x9F8168: jmp     short loc_9F816C
0x9F816A: xor     eax, eax
0x9F816C: push    8; Size
0x9F816E: mov     [esp+1Ch+var_4], esi
0x9F8172: mov     dword_B39A70, eax
0x9F8177: call    FormHeapAlloc
0x9F817C: add     esp, 4
0x9F817F: mov     [esp+18h+var_10], eax
0x9F8183: test    eax, eax
0x9F8185: mov     [esp+18h+var_4], 4
0x9F818D: jz      short loc_9F81A2
0x9F818F: push    offset aSleep
0x9F8194: push    offset aStargettypesle
0x9F8199: mov     ecx, eax
0x9F819B: call    GameSetting_ConstrAndReg
0x9F81A0: jmp     short loc_9F81A4
0x9F81A2: xor     eax, eax
0x9F81A4: push    8; Size
0x9F81A6: mov     [esp+1Ch+var_4], esi
0x9F81AA: mov     dword_B39A74, eax
0x9F81AF: call    FormHeapAlloc
0x9F81B4: add     esp, 4
0x9F81B7: mov     [esp+18h+var_10], eax
0x9F81BB: test    eax, eax
0x9F81BD: mov     [esp+18h+var_4], 5
0x9F81C5: jz      short loc_9F81DA
0x9F81C7: push    offset aRead
0x9F81CC: push    offset aStargettyperea
0x9F81D1: mov     ecx, eax
0x9F81D3: call    GameSetting_ConstrAndReg
0x9F81D8: jmp     short loc_9F81DC
0x9F81DA: xor     eax, eax
0x9F81DC: push    8; Size
0x9F81DE: mov     [esp+1Ch+var_4], esi
0x9F81E2: mov     dword_B39A78, eax
0x9F81E7: call    FormHeapAlloc
0x9F81EC: add     esp, 4
0x9F81EF: mov     [esp+18h+var_10], eax
0x9F81F3: test    eax, eax
0x9F81F5: mov     [esp+18h+var_4], 6
0x9F81FD: jz      short loc_9F8212
0x9F81FF: push    offset aTalk
0x9F8204: push    offset aStargettypetal
0x9F8209: mov     ecx, eax
0x9F820B: call    GameSetting_ConstrAndReg
0x9F8210: jmp     short loc_9F8214
0x9F8212: xor     eax, eax
0x9F8214: push    8; Size
0x9F8216: mov     [esp+1Ch+var_4], esi
0x9F821A: mov     dword_B39A7C, eax
0x9F821F: call    FormHeapAlloc
0x9F8224: add     esp, 4
0x9F8227: mov     [esp+18h+var_10], eax
0x9F822B: test    eax, eax
0x9F822D: mov     [esp+18h+var_4], 7
0x9F8235: jz      short loc_9F824A
0x9F8237: push    offset aOpen
0x9F823C: push    offset aStargettypeo_0
0x9F8241: mov     ecx, eax
0x9F8243: call    GameSetting_ConstrAndReg
0x9F8248: jmp     short loc_9F824C
0x9F824A: xor     eax, eax
0x9F824C: push    8; Size
0x9F824E: mov     [esp+1Ch+var_4], esi
0x9F8252: mov     dword_B39A80, eax
0x9F8257: call    FormHeapAlloc
0x9F825C: add     esp, 4
0x9F825F: mov     [esp+18h+var_10], eax
0x9F8263: test    eax, eax
0x9F8265: mov     [esp+18h+var_4], 8
0x9F826D: jz      short loc_9F8282
0x9F826F: push    offset aRide
0x9F8274: push    offset aStargettypehor
0x9F8279: mov     ecx, eax
0x9F827B: call    GameSetting_ConstrAndReg
0x9F8280: jmp     short loc_9F8284
0x9F8282: xor     eax, eax
0x9F8284: push    8; Size
0x9F8286: mov     [esp+1Ch+var_4], esi
0x9F828A: mov     dword_B39A84, eax
0x9F828F: call    FormHeapAlloc
0x9F8294: add     esp, 4
0x9F8297: mov     [esp+18h+var_10], eax
0x9F829B: test    eax, eax
0x9F829D: mov     [esp+18h+var_4], 9
0x9F82A5: jz      short loc_9F82BA
0x9F82A7: push    offset aTalk
0x9F82AC: push    offset aStargettypecro
0x9F82B1: mov     ecx, eax
0x9F82B3: call    GameSetting_ConstrAndReg
0x9F82B8: jmp     short loc_9F82BC
0x9F82BA: xor     eax, eax
0x9F82BC: push    8; Size
0x9F82BE: mov     [esp+1Ch+var_4], esi
0x9F82C2: mov     dword_B39A88, eax
0x9F82C7: call    FormHeapAlloc
0x9F82CC: add     esp, 4
0x9F82CF: mov     [esp+18h+var_10], eax
0x9F82D3: test    eax, eax
0x9F82D5: mov     [esp+18h+var_4], 0Ah
0x9F82DD: jz      short loc_9F82F2
0x9F82DF: push    offset aFeedTalk
0x9F82E4: push    offset aStargettypevam
0x9F82E9: mov     ecx, eax
0x9F82EB: call    GameSetting_ConstrAndReg
0x9F82F0: jmp     short loc_9F82F4
0x9F82F2: xor     eax, eax
0x9F82F4: push    8; Size
0x9F82F6: mov     [esp+1Ch+var_4], esi
0x9F82FA: mov     dword_B39A8C, eax
0x9F82FF: call    FormHeapAlloc
0x9F8304: add     esp, 4
0x9F8307: mov     [esp+18h+var_10], eax
0x9F830B: test    eax, eax
0x9F830D: mov     [esp+18h+var_4], 0Bh
0x9F8315: jz      short loc_9F832A
0x9F8317: push    offset aEquip
0x9F831C: push    offset aStargettypeequ
0x9F8321: mov     ecx, eax
0x9F8323: call    GameSetting_ConstrAndReg
0x9F8328: jmp     short loc_9F832C
0x9F832A: xor     eax, eax
0x9F832C: push    8; Size
0x9F832E: mov     [esp+1Ch+var_4], esi
0x9F8332: mov     dword_B39A90, eax
0x9F8337: call    FormHeapAlloc
0x9F833C: add     esp, 4
0x9F833F: mov     [esp+18h+var_10], eax
0x9F8343: test    eax, eax
0x9F8345: mov     [esp+18h+var_4], 0Ch
0x9F834D: jz      short loc_9F8362
0x9F834F: push    offset aUnequip
0x9F8354: push    offset aStargettypeune
0x9F8359: mov     ecx, eax
0x9F835B: call    GameSetting_ConstrAndReg
0x9F8360: jmp     short loc_9F8364
0x9F8362: xor     eax, eax
0x9F8364: push    8; Size
0x9F8366: mov     [esp+1Ch+var_4], esi
0x9F836A: mov     dword_B39A94, eax
0x9F836F: call    FormHeapAlloc
0x9F8374: add     esp, 4
0x9F8377: mov     [esp+18h+var_10], eax
0x9F837B: test    eax, eax
0x9F837D: mov     [esp+18h+var_4], 0Dh
0x9F8385: jz      short loc_9F839A
0x9F8387: push    offset aDrink
0x9F838C: push    offset aStargettypedri
0x9F8391: mov     ecx, eax
0x9F8393: call    GameSetting_ConstrAndReg
0x9F8398: jmp     short loc_9F839C
0x9F839A: xor     eax, eax
0x9F839C: push    8; Size
0x9F839E: mov     [esp+1Ch+var_4], esi
0x9F83A2: mov     dword_B39A98, eax
0x9F83A7: call    FormHeapAlloc
0x9F83AC: add     esp, 4
0x9F83AF: mov     [esp+18h+var_10], eax
0x9F83B3: test    eax, eax
0x9F83B5: mov     [esp+18h+var_4], 0Eh
0x9F83BD: jz      short loc_9F83D2
0x9F83BF: push    offset off_A63FF4
0x9F83C4: push    offset aStargettypeeat
0x9F83C9: mov     ecx, eax
0x9F83CB: call    GameSetting_ConstrAndReg
0x9F83D0: jmp     short loc_9F83D4
0x9F83D2: xor     eax, eax
0x9F83D4: push    8; Size
0x9F83D6: mov     [esp+1Ch+var_4], esi
0x9F83DA: mov     dword_B39A9C, eax
0x9F83DF: call    FormHeapAlloc
0x9F83E4: add     esp, 4
0x9F83E7: mov     [esp+18h+var_10], eax
0x9F83EB: test    eax, eax
0x9F83ED: mov     [esp+18h+var_4], 0Fh
0x9F83F5: jz      short loc_9F840A
0x9F83F7: push    offset aRecharge
0x9F83FC: push    offset aStargettyperec
0x9F8401: mov     ecx, eax
0x9F8403: call    GameSetting_ConstrAndReg
0x9F8408: jmp     short loc_9F840C
0x9F840A: xor     eax, eax
0x9F840C: push    8; Size
0x9F840E: mov     [esp+1Ch+var_4], esi
0x9F8412: mov     dword_B39AA0, eax
0x9F8417: call    FormHeapAlloc
0x9F841C: add     esp, 4
0x9F841F: mov     [esp+18h+var_10], eax
0x9F8423: test    eax, eax
0x9F8425: mov     [esp+18h+var_4], 10h
0x9F842D: jz      short loc_9F8442
0x9F842F: push    offset aBrew
0x9F8434: push    offset aStargettypebre
0x9F8439: mov     ecx, eax
0x9F843B: call    GameSetting_ConstrAndReg
0x9F8440: jmp     short loc_9F8444
0x9F8442: xor     eax, eax
0x9F8444: push    8; Size
0x9F8446: mov     [esp+1Ch+var_4], esi
0x9F844A: mov     dword_B39AA4, eax
0x9F844F: call    FormHeapAlloc
0x9F8454: add     esp, 4
0x9F8457: mov     [esp+18h+var_10], eax
0x9F845B: test    eax, eax
0x9F845D: mov     [esp+18h+var_4], 11h
0x9F8465: jz      short loc_9F847A
0x9F8467: push    offset aApply
0x9F846C: push    offset aStargettypeapp
0x9F8471: mov     ecx, eax
0x9F8473: call    GameSetting_ConstrAndReg
0x9F8478: jmp     short loc_9F847C
0x9F847A: xor     eax, eax
0x9F847C: push    8; Size
0x9F847E: mov     [esp+1Ch+var_4], esi
0x9F8482: mov     dword_B39AA8, eax
0x9F8487: call    FormHeapAlloc
0x9F848C: add     esp, 4
0x9F848F: mov     [esp+18h+var_10], eax
0x9F8493: test    eax, eax
0x9F8495: mov     [esp+18h+var_4], 12h
0x9F849D: jz      short loc_9F84B2
0x9F849F: push    offset aRepair_0
0x9F84A4: push    offset aStargettyperep
0x9F84A9: mov     ecx, eax
0x9F84AB: call    GameSetting_ConstrAndReg
0x9F84B0: jmp     short loc_9F84B4
0x9F84B2: xor     eax, eax
0x9F84B4: mov     dword_B39AAC, eax
0x9F84B9: mov     ecx, [esp+18h+var_C]
0x9F84BD: mov     large fs:0, ecx
0x9F84C4: pop     ecx
0x9F84C5: pop     esi
0x9F84C6: add     esp, 10h
0x9F84C9: retn
