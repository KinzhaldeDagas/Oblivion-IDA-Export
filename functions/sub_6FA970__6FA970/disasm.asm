0x6FA970: mov     ecx, [esp+arg_0]
0x6FA974: xor     eax, eax
0x6FA976: test    ecx, ecx
0x6FA978: jz      short locret_6FA992
0x6FA97A: push    offset dword_A7D0EC
0x6FA97F: call    NiObjectNET_GetExtraData
0x6FA984: push    eax
0x6FA985: push    offset dword_B3F484
0x6FA98A: call    NiRTTI_Cast
0x6FA98F: add     esp, 8
0x6FA992: retn
