0x6A2EA0: mov     ecx, ds:0B333C4h
0x6A2EA6: mov     eax, [ecx]
0x6A2EA8: mov     edx, [eax+284h]
0x6A2EAE: push    29h ; ')'
0x6A2EB0: call    edx
0x6A2EB2: fldz
0x6A2EB4: sub     esp, 10h
0x6A2EB7: fst     [esp+10h+var_4]; float
0x6A2EBB: test    eax, eax
0x6A2EBD: fst     [esp+10h+var_8]; float
0x6A2EC1: jle     short loc_6A2EE1
0x6A2EC3: fstp    [esp+10h+var_C]; float
0x6A2EC7: fld1
0x6A2EC9: fstp    [esp+10h+var_10]; float
0x6A2ECC: call    sub_7F4DE0
0x6A2ED1: fld     dword ptr ds:0B380A0h
0x6A2ED7: fstp    dword ptr ds:0B46924h
0x6A2EDD: add     esp, 10h
0x6A2EE0: retn
0x6A2EE1: fst     [esp+10h+var_C]; float
0x6A2EE5: fstp    [esp+10h+var_10]; float
0x6A2EE8: call    sub_7F4DE0
0x6A2EED: fldz
0x6A2EEF: add     esp, 10h
0x6A2EF2: fstp    dword ptr ds:0B46924h
0x6A2EF8: retn
