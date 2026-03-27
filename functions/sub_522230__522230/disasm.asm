0x522230: push    ecx
0x522231: call    TESActorBase_IsFemale
0x522236: test    eax, eax
0x522238: jnz     short loc_522248
0x52223A: fld     dword ptr ds:0A53954h
0x522240: fstp    [esp+4+var_4]
0x522243: fld     [esp+4+var_4]
0x522246: pop     ecx
0x522247: retn
0x522248: fld     dword ptr ds:0A379B4h
0x52224E: fstp    [esp+4+var_4]
0x522251: fld     [esp+4+var_4]
0x522254: pop     ecx
0x522255: retn
