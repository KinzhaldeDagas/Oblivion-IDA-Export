0x55F7E0: mov     eax, ds:0B39E04h; Returns SpeedTree singleton dword_B39E04, creating it on demand when caller passes true.
0x55F7E5: test    eax, eax
0x55F7E7: jnz     short locret_55F7FD
0x55F7E9: cmp     [esp+createIfMissing], al
0x55F7ED: jz      short locret_55F7FD
0x55F7EF: push    eax; recreate
0x55F7F0: call    BSTreeManager_Create; Verified singleton Create(recreate): optionally destroys/frees an existing BSTreeManager, allocates 0x28 bytes, runs BSTreeManager_ctor, and stores the instance.
0x55F7F5: mov     eax, ds:0B39E04h
0x55F7FA: add     esp, 4
0x55F7FD: retn
