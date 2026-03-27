0x8E9390: mov     edx, [esp+arg_0]
0x8E9394: fld     dword ptr [edx+14h]
0x8E9397: fld     dword ptr [edx]
0x8E9399: fst     [esp+arg_0]
0x8E939D: fcomp   st(1)
0x8E939F: fnstsw  ax
0x8E93A1: test    ah, 5
0x8E93A4: jp      short loc_8E93AC
0x8E93A6: fstp    st
0x8E93A8: fld     [esp+arg_0]
0x8E93AC: mov     eax, [edx+28h]
0x8E93AF: mov     [esp+arg_0], eax
0x8E93B3: fcom    [esp+arg_0]
0x8E93B7: fnstsw  ax
0x8E93B9: test    ah, 5
0x8E93BC: jp      short loc_8E93C7
0x8E93BE: fstp    dword ptr [ecx+0C4h]
0x8E93C4: retn    4
0x8E93C7: mov     edx, [esp+arg_0]
0x8E93CB: fstp    st
0x8E93CD: mov     [ecx+0C4h], edx
0x8E93D3: retn    4
