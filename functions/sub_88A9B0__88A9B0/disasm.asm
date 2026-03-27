0x88A9B0: mov     eax, [esp+arg_0]
0x88A9B4: test    eax, eax
0x88A9B6: jz      short locret_88A9E0
0x88A9B8: mov     eax, [eax+10h]
0x88A9BB: push    eax
0x88A9BC: push    offset dword_BA7D84
0x88A9C1: call    NiRTTI_Cast
0x88A9C6: add     esp, 8
0x88A9C9: test    eax, eax
0x88A9CB: jz      short locret_88A9E0
0x88A9CD: mov     ecx, [esp+arg_4]
0x88A9D1: cmp     dword ptr [ecx+0Ch], 0
0x88A9D5: mov     ecx, eax
0x88A9D7: setnz   dl
0x88A9DA: push    edx
0x88A9DB: call    sub_4D6AB0
0x88A9E0: retn
