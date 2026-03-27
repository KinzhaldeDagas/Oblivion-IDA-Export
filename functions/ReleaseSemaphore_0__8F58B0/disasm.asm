0x8F58B0: mov     eax, [esp+lReleaseCount]
0x8F58B4: mov     ecx, [ecx]
0x8F58B6: push    0; lpPreviousCount
0x8F58B8: push    eax; lReleaseCount
0x8F58B9: push    ecx; hSemaphore
0x8F58BA: call    dword ptr ds:0A280C8h
0x8F58C0: retn    4
