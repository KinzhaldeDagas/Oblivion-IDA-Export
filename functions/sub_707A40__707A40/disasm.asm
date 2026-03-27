0x707A40: push    2
0x707A42: call    NiNode_GetNiPropertyByID
0x707A47: test    eax, eax
0x707A49: jz      short locret_707A5D
0x707A4B: mov     ecx, [esp+arg_0]
0x707A4F: mov     edx, [ecx]
0x707A51: mov     [esp+arg_0], eax
0x707A55: mov     eax, [edx+0B8h]
0x707A5B: jmp     eax
0x707A5D: retn    4
