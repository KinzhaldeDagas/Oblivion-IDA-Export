0x9F5700: push    0FFFFFFFFh
0x9F5702: push    offset SEH_9F5700
0x9F5707: mov     eax, large fs:0
0x9F570D: push    eax
0x9F570E: push    ecx
0x9F570F: push    esi
0x9F5710: mov     eax, ___security_cookie
0x9F5715: xor     eax, esp
0x9F5717: push    eax
0x9F5718: lea     eax, [esp+18h+var_C]
0x9F571C: mov     large fs:0, eax
0x9F5722: push    8; Size
0x9F5724: call    FormHeapAlloc
0x9F5729: add     esp, 4
0x9F572C: mov     [esp+18h+var_10], eax
0x9F5730: test    eax, eax
0x9F5732: mov     [esp+18h+var_4], 0
0x9F573A: jz      short loc_9F574F
0x9F573C: push    offset aUp
0x9F5741: push    offset aSjoyup
0x9F5746: mov     ecx, eax
0x9F5748: call    GameSetting_ConstrAndReg
0x9F574D: jmp     short loc_9F5751
0x9F574F: xor     eax, eax
0x9F5751: or      esi, 0FFFFFFFFh
0x9F5754: push    8; Size
0x9F5756: mov     [esp+1Ch+var_4], esi
0x9F575A: mov     dword_B39930, eax
0x9F575F: call    FormHeapAlloc
0x9F5764: add     esp, 4
0x9F5767: mov     [esp+18h+var_10], eax
0x9F576B: test    eax, eax
0x9F576D: mov     [esp+18h+var_4], 1
0x9F5775: jz      short loc_9F578A
0x9F5777: push    offset aUpRt
0x9F577C: push    offset aSjoyupright
0x9F5781: mov     ecx, eax
0x9F5783: call    GameSetting_ConstrAndReg
0x9F5788: jmp     short loc_9F578C
0x9F578A: xor     eax, eax
0x9F578C: push    8; Size
0x9F578E: mov     [esp+1Ch+var_4], esi
0x9F5792: mov     dword_B39934, eax
0x9F5797: call    FormHeapAlloc
0x9F579C: add     esp, 4
0x9F579F: mov     [esp+18h+var_10], eax
0x9F57A3: test    eax, eax
0x9F57A5: mov     [esp+18h+var_4], 2
0x9F57AD: jz      short loc_9F57C2
0x9F57AF: push    offset aRight_2
0x9F57B4: push    offset aSjoyright
0x9F57B9: mov     ecx, eax
0x9F57BB: call    GameSetting_ConstrAndReg
0x9F57C0: jmp     short loc_9F57C4
0x9F57C2: xor     eax, eax
0x9F57C4: push    8; Size
0x9F57C6: mov     [esp+1Ch+var_4], esi
0x9F57CA: mov     dword_B39938, eax
0x9F57CF: call    FormHeapAlloc
0x9F57D4: add     esp, 4
0x9F57D7: mov     [esp+18h+var_10], eax
0x9F57DB: test    eax, eax
0x9F57DD: mov     [esp+18h+var_4], 3
0x9F57E5: jz      short loc_9F57FA
0x9F57E7: push    offset aDnRt
0x9F57EC: push    offset aSjoydownright
0x9F57F1: mov     ecx, eax
0x9F57F3: call    GameSetting_ConstrAndReg
0x9F57F8: jmp     short loc_9F57FC
0x9F57FA: xor     eax, eax
0x9F57FC: push    8; Size
0x9F57FE: mov     [esp+1Ch+var_4], esi
0x9F5802: mov     dword_B3993C, eax
0x9F5807: call    FormHeapAlloc
0x9F580C: add     esp, 4
0x9F580F: mov     [esp+18h+var_10], eax
0x9F5813: test    eax, eax
0x9F5815: mov     [esp+18h+var_4], 4
0x9F581D: jz      short loc_9F5832
0x9F581F: push    offset aDown
0x9F5824: push    offset aSjoydown
0x9F5829: mov     ecx, eax
0x9F582B: call    GameSetting_ConstrAndReg
0x9F5830: jmp     short loc_9F5834
0x9F5832: xor     eax, eax
0x9F5834: push    8; Size
0x9F5836: mov     [esp+1Ch+var_4], esi
0x9F583A: mov     dword_B39940, eax
0x9F583F: call    FormHeapAlloc
0x9F5844: add     esp, 4
0x9F5847: mov     [esp+18h+var_10], eax
0x9F584B: test    eax, eax
0x9F584D: mov     [esp+18h+var_4], 5
0x9F5855: jz      short loc_9F586A
0x9F5857: push    offset aDnLeft
0x9F585C: push    offset aSjoydownleft
0x9F5861: mov     ecx, eax
0x9F5863: call    GameSetting_ConstrAndReg
0x9F5868: jmp     short loc_9F586C
0x9F586A: xor     eax, eax
0x9F586C: push    8; Size
0x9F586E: mov     [esp+1Ch+var_4], esi
0x9F5872: mov     dword_B39944, eax
0x9F5877: call    FormHeapAlloc
0x9F587C: add     esp, 4
0x9F587F: mov     [esp+18h+var_10], eax
0x9F5883: test    eax, eax
0x9F5885: mov     [esp+18h+var_4], 6
0x9F588D: jz      short loc_9F58A2
0x9F588F: push    offset aLeft_1
0x9F5894: push    offset aSjoyleft
0x9F5899: mov     ecx, eax
0x9F589B: call    GameSetting_ConstrAndReg
0x9F58A0: jmp     short loc_9F58A4
0x9F58A2: xor     eax, eax
0x9F58A4: push    8; Size
0x9F58A6: mov     [esp+1Ch+var_4], esi
0x9F58AA: mov     dword_B39948, eax
0x9F58AF: call    FormHeapAlloc
0x9F58B4: add     esp, 4
0x9F58B7: mov     [esp+18h+var_10], eax
0x9F58BB: test    eax, eax
0x9F58BD: mov     [esp+18h+var_4], 7
0x9F58C5: jz      short loc_9F58DA
0x9F58C7: push    offset aUpLeft
0x9F58CC: push    offset aSjoyupleft
0x9F58D1: mov     ecx, eax
0x9F58D3: call    GameSetting_ConstrAndReg
0x9F58D8: jmp     short loc_9F58DC
0x9F58DA: xor     eax, eax
0x9F58DC: mov     dword_B3994C, eax
0x9F58E1: mov     ecx, [esp+18h+var_C]
0x9F58E5: mov     large fs:0, ecx
0x9F58EC: pop     ecx
0x9F58ED: pop     esi
0x9F58EE: add     esp, 10h
0x9F58F1: retn
