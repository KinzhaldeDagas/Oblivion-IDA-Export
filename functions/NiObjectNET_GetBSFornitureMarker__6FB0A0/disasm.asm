0x6FB0A0: mov     ecx, [esp+arg_0]
0x6FB0A4: xor     eax, eax
0x6FB0A6: test    ecx, ecx
0x6FB0A8: jz      short locret_6FB0C2
0x6FB0AA: push    offset off_A7D238
0x6FB0AF: call    NiObjectNET_GetExtraData
0x6FB0B4: push    eax
0x6FB0B5: push    offset dword_B3F4B4
0x6FB0BA: call    NiRTTI_Cast
0x6FB0BF: add     esp, 8
0x6FB0C2: retn
