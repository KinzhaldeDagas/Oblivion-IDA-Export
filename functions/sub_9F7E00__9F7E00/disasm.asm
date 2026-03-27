0x9F7E00: push    0FFFFFFFFh
0x9F7E02: push    offset SEH_9F7E00
0x9F7E07: mov     eax, large fs:0
0x9F7E0D: push    eax
0x9F7E0E: push    ecx
0x9F7E0F: push    esi
0x9F7E10: mov     eax, ___security_cookie
0x9F7E15: xor     eax, esp
0x9F7E17: push    eax
0x9F7E18: lea     eax, [esp+18h+var_C]
0x9F7E1C: mov     large fs:0, eax
0x9F7E22: push    8; Size
0x9F7E24: call    FormHeapAlloc
0x9F7E29: add     esp, 4
0x9F7E2C: mov     [esp+18h+var_10], eax
0x9F7E30: test    eax, eax
0x9F7E32: mov     [esp+18h+var_4], 0
0x9F7E3A: jz      short loc_9F7E4F
0x9F7E3C: push    offset aBladeOneHand
0x9F7E41: push    offset aSbladeonehand
0x9F7E46: mov     ecx, eax
0x9F7E48: call    GameSetting_ConstrAndReg
0x9F7E4D: jmp     short loc_9F7E51
0x9F7E4F: xor     eax, eax
0x9F7E51: or      esi, 0FFFFFFFFh
0x9F7E54: push    8; Size
0x9F7E56: mov     [esp+1Ch+var_4], esi
0x9F7E5A: mov     dword_B39A44, eax
0x9F7E5F: call    FormHeapAlloc
0x9F7E64: add     esp, 4
0x9F7E67: mov     [esp+18h+var_10], eax
0x9F7E6B: test    eax, eax
0x9F7E6D: mov     [esp+18h+var_4], 1
0x9F7E75: jz      short loc_9F7E8A
0x9F7E77: push    offset aBladeTwoHand
0x9F7E7C: push    offset aSbladetwohand
0x9F7E81: mov     ecx, eax
0x9F7E83: call    GameSetting_ConstrAndReg
0x9F7E88: jmp     short loc_9F7E8C
0x9F7E8A: xor     eax, eax
0x9F7E8C: push    8; Size
0x9F7E8E: mov     [esp+1Ch+var_4], esi
0x9F7E92: mov     dword_B39A48, eax
0x9F7E97: call    FormHeapAlloc
0x9F7E9C: add     esp, 4
0x9F7E9F: mov     [esp+18h+var_10], eax
0x9F7EA3: test    eax, eax
0x9F7EA5: mov     [esp+18h+var_4], 2
0x9F7EAD: jz      short loc_9F7EC2
0x9F7EAF: push    offset aBluntOneHand
0x9F7EB4: push    offset aSbluntonehand
0x9F7EB9: mov     ecx, eax
0x9F7EBB: call    GameSetting_ConstrAndReg
0x9F7EC0: jmp     short loc_9F7EC4
0x9F7EC2: xor     eax, eax
0x9F7EC4: push    8; Size
0x9F7EC6: mov     [esp+1Ch+var_4], esi
0x9F7ECA: mov     dword_B39A4C, eax
0x9F7ECF: call    FormHeapAlloc
0x9F7ED4: add     esp, 4
0x9F7ED7: mov     [esp+18h+var_10], eax
0x9F7EDB: test    eax, eax
0x9F7EDD: mov     [esp+18h+var_4], 3
0x9F7EE5: jz      short loc_9F7EFA
0x9F7EE7: push    offset aBluntTwoHand
0x9F7EEC: push    offset aSblunttwohand
0x9F7EF1: mov     ecx, eax
0x9F7EF3: call    GameSetting_ConstrAndReg
0x9F7EF8: jmp     short loc_9F7EFC
0x9F7EFA: xor     eax, eax
0x9F7EFC: push    8; Size
0x9F7EFE: mov     [esp+1Ch+var_4], esi
0x9F7F02: mov     dword_B39A50, eax
0x9F7F07: call    FormHeapAlloc
0x9F7F0C: add     esp, 4
0x9F7F0F: mov     [esp+18h+var_10], eax
0x9F7F13: test    eax, eax
0x9F7F15: mov     [esp+18h+var_4], 4
0x9F7F1D: jz      short loc_9F7F32
0x9F7F1F: push    offset aStaff
0x9F7F24: push    offset aSstaff
0x9F7F29: mov     ecx, eax
0x9F7F2B: call    GameSetting_ConstrAndReg
0x9F7F30: jmp     short loc_9F7F34
0x9F7F32: xor     eax, eax
0x9F7F34: push    8; Size
0x9F7F36: mov     [esp+1Ch+var_4], esi
0x9F7F3A: mov     dword_B39A54, eax
0x9F7F3F: call    FormHeapAlloc
0x9F7F44: add     esp, 4
0x9F7F47: mov     [esp+18h+var_10], eax
0x9F7F4B: test    eax, eax
0x9F7F4D: mov     [esp+18h+var_4], 5
0x9F7F55: jz      short loc_9F7F6A
0x9F7F57: push    offset aBow
0x9F7F5C: push    offset aSbow
0x9F7F61: mov     ecx, eax
0x9F7F63: call    GameSetting_ConstrAndReg
0x9F7F68: jmp     short loc_9F7F6C
0x9F7F6A: xor     eax, eax
0x9F7F6C: mov     dword_B39A58, eax
0x9F7F71: mov     ecx, [esp+18h+var_C]
0x9F7F75: mov     large fs:0, ecx
0x9F7F7C: pop     ecx
0x9F7F7D: pop     esi
0x9F7F7E: add     esp, 10h
0x9F7F81: retn
