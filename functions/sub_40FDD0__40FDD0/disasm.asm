0x40FDD0: mov     eax, hHandle
0x40FDD5: test    eax, eax
0x40FDD7: jz      short locret_40FDFA
0x40FDD9: push    0FFFFFFFFh; dwMilliseconds
0x40FDDB: push    eax; hHandle
0x40FDDC: mov     byte_B33425, 1
0x40FDE3: call    ds:WaitForSingleObject
0x40FDE9: mov     hHandle, 0
0x40FDF3: mov     byte_B33425, 0
0x40FDFA: retn
