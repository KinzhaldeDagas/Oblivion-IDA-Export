0x99E3B5: push    ebp
0x99E3B6: mov     ebp, esp
0x99E3B8: mov     eax, dword ptr [ebp+RootPathName]
0x99E3BB: test    eax, eax
0x99E3BD: jnz     short loc_99E3C4
0x99E3BF: xor     eax, eax
0x99E3C1: inc     eax
0x99E3C2: pop     ebp
0x99E3C3: retn
0x99E3C4: add     al, 40h ; '@'
0x99E3C6: mov     [ebp+RootPathName], al
0x99E3C9: lea     eax, [ebp+RootPathName]
0x99E3CC: push    eax; lpRootPathName
0x99E3CD: mov     byte ptr [ebp+9], 3Ah ; ':'
0x99E3D1: mov     byte ptr [ebp+0Ah], 5Ch ; '\'
0x99E3D5: mov     byte ptr [ebp+0Bh], 0
0x99E3D9: call    ds:GetDriveTypeA
0x99E3DF: test    eax, eax
0x99E3E1: jz      short loc_99E3E8
0x99E3E3: cmp     eax, 1
0x99E3E6: jnz     short loc_99E3BF
0x99E3E8: xor     eax, eax
0x99E3EA: pop     ebp
0x99E3EB: retn
