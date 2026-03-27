0x9477C0: push    esi
0x9477C1: mov     esi, ecx
0x9477C3: mov     eax, 1
0x9477C8: mov     [esi+6], ax
0x9477CC: mov     dword ptr [esi+8], offset off_A9D1C0
0x9477D3: mov     [esi+0Ch], al
0x9477D6: push    edi
0x9477D7: lea     edi, [esi+20h]
0x9477DA: mov     dword ptr [edi], offset off_AA2984
0x9477E0: mov     dword ptr [esi], offset off_AA2A04
0x9477E6: mov     dword ptr [esi+8], offset off_AA29EC
0x9477ED: mov     dword ptr [edi], offset off_AA29B8
0x9477F3: mov     eax, ds:0BA9508h
0x9477F8: test    eax, eax
0x9477FA: jnz     short loc_947816
0x9477FC: mov     ecx, ds:0BA950Ch
0x947802: push    offset sub_947860
0x947807: push    offset aDebugdisplay; "DebugDisplay"
0x94780C: call    sub_947C50
0x947811: mov     ds:0BA9508h, eax
0x947816: mov     ecx, ds:0BA7DA0h
0x94781C: push    edi
0x94781D: call    sub_8A7A80
0x947822: pop     edi
0x947823: mov     eax, esi
0x947825: pop     esi
0x947826: retn
