0x890740: fld     dword ptr [ecx+324h]; Fall timer update: +0x324 always accumulates frame time; +0x320 accumulates only while downward velocity exceeds threshold and flags 0x100/0x200 are clear. Slowfall must suppress +0x320 for softened falls.
0x890746: fadd    dword ptr [ecx+2D8h]
0x89074C: fstp    dword ptr [ecx+324h]
0x890752: fld     dword ptr [ecx+2E8h]
0x890758: fchs
0x89075A: fld     dword ptr ds:0B2E778h; Downward-speed threshold for accumulating fall timer uses flt_B2E778 (0x442F0000 = 700.0), not the registered fJumpFallVelocityMin global at flt_B37470. Treat B2E778 as the observed authoritative timer threshold.
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
