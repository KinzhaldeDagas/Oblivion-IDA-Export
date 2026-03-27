0x9807B0: mov     eax, [esp+arg_0]
0x9807B4: and     eax, 3
0x9807B7: push    esi
0x9807B8: mov     esi, ecx
0x9807BA: mov     [esi], eax
0x9807BC: imul    eax, 18h
0x9807BF: add     eax, offset stru_BA9AF0
0x9807C4: push    eax; lpCriticalSection
0x9807C5: call    sub_980D6F
0x9807CA: pop     ecx
0x9807CB: mov     eax, esi
0x9807CD: pop     esi
0x9807CE: retn    4
