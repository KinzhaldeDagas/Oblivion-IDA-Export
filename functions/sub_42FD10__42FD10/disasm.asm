0x42FD10: cmp     dword ptr [ecx+8], 0
0x42FD14: jnz     short loc_42FD1D
0x42FD16: mov     dword ptr [ecx+8], 1
0x42FD1D: mov     ecx, [ecx+0Ch]
0x42FD20: test    ecx, ecx
0x42FD22: jz      short locret_42FD40
0x42FD24: push    esi
0x42FD25: lea     esi, [ecx+20h]
0x42FD28: push    esi; lpAddend
0x42FD29: call    ds:InterlockedIncrement
0x42FD2F: mov     eax, [esi+8]
0x42FD32: push    0; lpPreviousCount
0x42FD34: push    1; lReleaseCount
0x42FD36: push    eax; hSemaphore
0x42FD37: call    ds:ReleaseSemaphore
0x42FD3D: mov     ecx, [esi]
0x42FD3F: pop     esi
0x42FD40: retn
