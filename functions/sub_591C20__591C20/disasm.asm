0x591C20: push    esi
0x591C21: call    sub_591DC0
0x591C26: mov     esi, eax
0x591C28: push    2
0x591C2A: mov     ecx, esi
0x591C2C: call    NiNode_GetNiPropertyByID
0x591C31: test    eax, eax
0x591C33: jz      short loc_591C3E
0x591C35: fldz
0x591C37: add     dword ptr [eax+54h], 1
0x591C3B: fstp    dword ptr [eax+50h]
0x591C3E: mov     eax, esi
0x591C40: pop     esi
0x591C41: retn
