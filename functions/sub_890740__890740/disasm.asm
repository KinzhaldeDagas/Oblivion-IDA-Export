0x890740: fld     dword ptr [ecx+324h]
0x890746: fadd    dword ptr [ecx+2D8h]
0x89074C: fstp    dword ptr [ecx+324h]
0x890752: fld     dword ptr [ecx+2E8h]
0x890758: fchs
0x89075A: fld     dword ptr ds:0B2E778h
0x890760: fcompp
0x890762: fnstsw  ax
0x890764: test    ah, 41h
0x890767: jp      short loc_890793
0x890769: mov     eax, [ecx+1F4h]
0x89076F: mov     edx, eax
0x890771: shr     edx, 8
0x890774: test    dl, 1
0x890777: jnz     short loc_890793
0x890779: shr     eax, 9
0x89077C: test    al, 1
0x89077E: jnz     short loc_890793
0x890780: fld     dword ptr [ecx+320h]
0x890786: fadd    dword ptr [ecx+2D8h]
0x89078C: fstp    dword ptr [ecx+320h]
0x890792: retn
0x890793: fldz
0x890795: fstp    dword ptr [ecx+320h]
0x89079B: retn
