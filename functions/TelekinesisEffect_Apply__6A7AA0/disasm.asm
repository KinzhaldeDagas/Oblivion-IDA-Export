0x6A7AA0: push    esi
0x6A7AA1: mov     esi, ecx
0x6A7AA3: call    ValueModifierEffect_Apply
0x6A7AA8: call    InterfaceManager_GetTargetREFR?
0x6A7AAD: mov     ecx, esi
0x6A7AAF: mov     [esi+48h], eax
0x6A7AB2: call    sub_6A7560
0x6A7AB7: mov     byte ptr [esi+4Dh], 0
0x6A7ABB: pop     esi
0x6A7ABC: retn
