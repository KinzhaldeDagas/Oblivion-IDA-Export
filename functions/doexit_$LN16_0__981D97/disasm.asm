0x981D97: cmp     dword ptr [ebp+10h], 0
0x981D9B: jnz     short loc_981DC5
0x981D9D: mov     ds:0BA9DD4h, esi
0x981DA3: push    8
0x981DA5: call    __unlock
0x981DAA: pop     ecx
0x981DAB: push    dword ptr [ebp+8]; uExitCode
0x981DAE: call    ___crtExitProcess
