0x953D6F: push    ecx; jumptable 00953B36 default case
0x953D70: mov     eax, esp
0x953D72: push    200h
0x953D77: lea     edx, [esp+8+arg_58]
0x953D7B: push    edx
0x953D7C: lea     ecx, [esp+0Ch+arg_4C]
0x953D80: mov     byte ptr [eax], 1
0x953D83: call    sub_8BBFB0
0x953D88: push    offset aUnknownClass_1; "Unknown class member found during write"...
0x953D8D: lea     ecx, [esp+4+arg_4C]
0x953D91: call    sub_8BBDB0
0x953D96: mov     ecx, ds:0BA7FB0h
0x953D9C: mov     eax, [ecx]
0x953D9E: push    162h
0x953DA3: push    offset a_CopierHkobjec; ".\\copier\\hkObjectCopier.cpp"
0x953DA8: lea     edx, [esp+8+arg_58]
0x953DAC: push    edx
0x953DAD: push    641E3E03h
0x953DB2: push    3
0x953DB4: call    dword ptr [eax+8]
0x953DB7: lea     ecx, [esp+arg_4C]
0x953DBB: call    sub_8BC000
0x953DC0: jmp     loc_953CD0
