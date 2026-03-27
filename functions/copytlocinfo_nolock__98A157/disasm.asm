0x98A157: push    esi
0x98A158: mov     esi, ecx
0x98A15A: test    esi, esi
0x98A15C: jz      short loc_98A179
0x98A15E: test    eax, eax
0x98A160: jz      short loc_98A179
0x98A162: cmp     eax, esi
0x98A164: jz      short loc_98A179
0x98A166: push    edi
0x98A167: push    36h ; '6'
0x98A169: pop     ecx
0x98A16A: mov     edi, eax
0x98A16C: rep movsd
0x98A16E: and     dword ptr [eax], 0
0x98A171: push    eax; lpAddend
0x98A172: call    ___addlocaleref
0x98A177: pop     ecx
0x98A178: pop     edi
0x98A179: pop     esi
0x98A17A: retn
