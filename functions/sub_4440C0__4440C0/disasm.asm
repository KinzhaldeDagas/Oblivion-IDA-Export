0x4440C0: push    esi
0x4440C1: mov     esi, ecx
0x4440C3: call    TESObjectCELL_IsInterior
0x4440C8: test    al, al
0x4440CA: jz      short loc_4440D5
0x4440CC: lea     ecx, [esi+28h]
0x4440CF: pop     esi
0x4440D0: jmp     sub_424180
0x4440D5: mov     eax, ds:0B35C24h
0x4440DA: pop     esi
0x4440DB: retn
