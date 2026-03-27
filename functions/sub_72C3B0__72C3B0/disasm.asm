0x72C3B0: mov     eax, [esp+arg_0]
0x72C3B4: fld     dword ptr [eax+4]
0x72C3B7: mov     ecx, [esp+arg_4]
0x72C3BB: fstp    [esp+arg_0]
0x72C3BF: fld     dword ptr [ecx+4]
0x72C3C2: fstp    [esp+arg_4]
0x72C3C6: fld     [esp+arg_0]
0x72C3CA: fld     [esp+arg_4]
0x72C3CE: fcom    st(1)
0x72C3D0: fnstsw  ax
0x72C3D2: test    ah, 5
0x72C3D5: jp      short loc_72C3DF
0x72C3D7: fstp    st(1)
0x72C3D9: or      eax, 0FFFFFFFFh
0x72C3DC: fstp    st
0x72C3DE: retn
0x72C3DF: fcompp
0x72C3E1: fnstsw  ax
0x72C3E3: test    ah, 41h
0x72C3E6: jnz     short loc_72C3EE
0x72C3E8: mov     eax, 1
0x72C3ED: retn
0x72C3EE: xor     eax, eax
0x72C3F0: retn
