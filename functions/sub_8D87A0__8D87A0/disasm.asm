0x8D87A0: push    esi
0x8D87A1: mov     esi, ecx
0x8D87A3: push    0FA0h; dwSpinCount
0x8D87A8: lea     eax, [esi+10h]
0x8D87AB: push    eax; lpCriticalSection
0x8D87AC: mov     dword ptr [esi], 0
0x8D87B2: mov     dword ptr [esi+4], 0
0x8D87B9: mov     dword ptr [esi+8], 80000000h
0x8D87C0: call    dword ptr ds:0A2818Ch
0x8D87C6: mov     ecx, [esp+4+arg_0]
0x8D87CA: mov     [esi+0Ch], ecx
0x8D87CD: mov     eax, esi
0x8D87CF: pop     esi
0x8D87D0: retn    4
