0x98C9D3: push    ebp
0x98C9D4: mov     ebp, esp
0x98C9D6: mov     eax, [ebp+arg_0]
0x98C9D9: push    esi
0x98C9DA: lea     esi, ds:0B310C0h[eax*8]
0x98C9E1: cmp     dword ptr [esi], 0
0x98C9E4: jnz     short loc_98C9F9
0x98C9E6: push    eax
0x98C9E7: call    __mtinitlocknum
0x98C9EC: test    eax, eax
0x98C9EE: pop     ecx
0x98C9EF: jnz     short loc_98C9F9
0x98C9F1: push    11h
0x98C9F3: call    __amsg_exit
0x98C9F8: pop     ecx
0x98C9F9: push    dword ptr [esi]; lpCriticalSection
0x98C9FB: call    ds:EnterCriticalSection
0x98CA01: pop     esi
0x98CA02: pop     ebp
0x98CA03: retn
