0x6FBA90: mov     ecx, [esp+arg_0]
0x6FBA94: xor     eax, eax
0x6FBA96: test    ecx, ecx
0x6FBA98: jz      short locret_6FBAB2
0x6FBA9A: push    offset off_A7D2CC
0x6FBA9F: call    NiObjectNET_GetExtraData
0x6FBAA4: push    eax
0x6FBAA5: push    offset dword_B3F4BC
0x6FBAAA: call    NiRTTI_Cast
0x6FBAAF: add     esp, 8
0x6FBAB2: retn
