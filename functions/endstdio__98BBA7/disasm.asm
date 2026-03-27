0x98BBA7: call    __flushall
0x98BBAC: cmp     byte_BA9DCC, 0
0x98BBB3: jz      short loc_98BBBA
0x98BBB5: call    __fcloseall
0x98BBBA: push    dword_BAABE4; Memory
0x98BBC0: call    _free
0x98BBC5: pop     ecx
0x98BBC6: retn
