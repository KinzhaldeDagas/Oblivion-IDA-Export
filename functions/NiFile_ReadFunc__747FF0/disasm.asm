0x747FF0: mov     eax, [esp+Count]
0x747FF4: mov     ecx, [esp+Dst]
0x747FF8: push    eax; Count
0x747FF9: push    ecx; Dst
0x747FFA: mov     ecx, [esp+8+arg_0]
0x747FFE: call    NiFile_DirectRead
0x748003: retn
