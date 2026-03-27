0x468AD0: mov     eax, [esp+arg_0]
0x468AD4: push    esi
0x468AD5: push    eax
0x468AD6: push    0
0x468AD8: mov     esi, ecx
0x468ADA: call    ActorValue_GetGroupOffsetFromAV
0x468ADF: movsx   ecx, al
0x468AE2: mov     al, [ecx+esi+4]
0x468AE6: add     esp, 8
0x468AE9: pop     esi
0x468AEA: retn    4
