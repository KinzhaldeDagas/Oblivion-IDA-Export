0x70C190: mov     edx, [esp+a2]
0x70C194: fld     dword ptr [edx+10h]
0x70C197: fstp    [esp+a2]
0x70C19B: fld     [esp+a2]
0x70C19F: fst     dword ptr [ecx+0FCh]
0x70C1A5: fld     dword ptr [edx+14h]
0x70C1A8: fdiv    dword ptr [ecx+10Ch]
0x70C1AE: fstp    [esp+a2]
0x70C1B2: fld     [esp+a2]
0x70C1B6: fcom    st(1)
0x70C1B8: fnstsw  ax
0x70C1BA: fstp    st(1)
0x70C1BC: test    ah, 41h
0x70C1BF: jnz     short loc_70C1C9
0x70C1C1: fstp    dword ptr [ecx+0FCh]
0x70C1C7: jmp     short loc_70C1CB
0x70C1C9: fstp    st
0x70C1CB: fld     dword ptr [ecx+0FCh]
0x70C1D1: fld     dword ptr [ecx+108h]
0x70C1D7: fcompp
0x70C1D9: fnstsw  ax
0x70C1DB: test    ah, 41h
0x70C1DE: jnz     short loc_70C1EC
0x70C1E0: fld     dword ptr [ecx+108h]
0x70C1E6: fstp    dword ptr [ecx+0FCh]
0x70C1EC: fld     dword ptr [edx]
0x70C1EE: fstp    dword ptr [ecx+0ECh]
0x70C1F4: fld     dword ptr [edx+4]
0x70C1F7: fstp    dword ptr [ecx+0F0h]
0x70C1FD: fld     dword ptr [edx+8]
0x70C200: fstp    dword ptr [ecx+0F4h]
0x70C206: fld     dword ptr [edx+0Ch]
0x70C209: fstp    dword ptr [ecx+0F8h]
0x70C20F: fld     dword ptr [edx+14h]
0x70C212: fstp    dword ptr [ecx+100h]
0x70C218: mov     al, [edx+18h]
0x70C21B: mov     [ecx+104h], al
0x70C221: retn    4
