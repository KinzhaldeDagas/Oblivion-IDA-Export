0x437B40: push    esi
0x437B41: mov     esi, ecx
0x437B43: cmp     dword ptr [esi+0Ch], 6
0x437B47: jz      short loc_437B5A
0x437B49: mov     ecx, [esi+20h]
0x437B4C: call    sub_478A40
0x437B51: push    eax; a2
0x437B52: lea     ecx, [esi+28h]; this
0x437B55: call    NiSmartPointer_Set??
0x437B5A: pop     esi
0x437B5B: retn
