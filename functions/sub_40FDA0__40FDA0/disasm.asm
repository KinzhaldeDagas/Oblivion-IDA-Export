0x40FDA0: push    ecx
0x40FDA1: mov     eax, hHandle
0x40FDA6: test    eax, eax
0x40FDA8: jnz     short loc_40FDAE
0x40FDAA: xor     al, al
0x40FDAC: pop     ecx
0x40FDAD: retn
0x40FDAE: lea     ecx, [esp+4+ExitCode]
0x40FDB1: push    ecx; lpExitCode
0x40FDB2: push    eax; hThread
0x40FDB3: call    ds:GetExitCodeThread
0x40FDB9: xor     eax, eax
0x40FDBB: cmp     [esp+4+ExitCode], 103h
0x40FDC2: setz    al
0x40FDC5: pop     ecx
0x40FDC6: retn
