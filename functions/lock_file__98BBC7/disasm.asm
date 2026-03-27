0x98BBC7: mov     eax, [esp+arg_0]
0x98BBCB: mov     ecx, offset off_B30E28
0x98BBD0: cmp     eax, ecx
0x98BBD2: jb      short loc_98BBEB
0x98BBD4: cmp     eax, offset unk_B31088
0x98BBD9: ja      short loc_98BBEB
0x98BBDB: sub     eax, ecx
0x98BBDD: sar     eax, 5
0x98BBE0: add     eax, 10h
0x98BBE3: push    eax
0x98BBE4: call    __lock
0x98BBE9: pop     ecx
0x98BBEA: retn
0x98BBEB: add     eax, 20h ; ' '
0x98BBEE: push    eax; lpCriticalSection
0x98BBEF: call    ds:EnterCriticalSection
0x98BBF5: retn
