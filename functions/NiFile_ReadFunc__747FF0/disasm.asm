0x747FF0: mov     eax, [esp+Count]
0x747FF4: mov     ecx, [esp+Dst]
0x747FF8: push    eax; byteCount
0x747FF9: push    ecx; destination
0x747FFA: mov     ecx, [esp+8+self]; self
0x747FFE: call    NiFile_DirectRead
0x748003: retn
