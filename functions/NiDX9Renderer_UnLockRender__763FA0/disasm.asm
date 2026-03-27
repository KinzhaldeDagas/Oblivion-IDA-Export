0x763FA0: push    esi
0x763FA1: mov     esi, ecx
0x763FA3: cmp     dword ptr [esi+0FCh], 1
0x763FAA: jnz     short loc_763FB6
0x763FAC: mov     eax, [esi]
0x763FAE: mov     edx, [eax+12Ch]
0x763FB4: call    edx
0x763FB6: add     dword ptr [esi+0FCh], 0FFFFFFFFh
0x763FBD: lea     eax, [esi+80h]
0x763FC3: pop     esi
0x763FC4: jnz     short loc_763FCD
0x763FC6: mov     dword ptr [eax+78h], 0
0x763FCD: push    eax; lpCriticalSection
0x763FCE: call    dword ptr ds:0A28074h
0x763FD4: retn
