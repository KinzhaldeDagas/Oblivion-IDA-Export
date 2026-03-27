0x4E49B0: mov     eax, [esp+arg_0]
0x4E49B4: test    eax, eax
0x4E49B6: jz      short locret_4E4A03
0x4E49B8: push    esi
0x4E49B9: mov     esi, [esp+4+arg_4]
0x4E49BD: test    esi, esi
0x4E49BF: jz      short loc_4E4A02
0x4E49C1: fld     [esp+4+arg_8]
0x4E49C5: xor     edx, edx
0x4E49C7: lea     ecx, [eax+4]
0x4E49CA: fld     dword ptr [ecx]
0x4E49CC: fcomp   st(1)
0x4E49CE: fnstsw  ax
0x4E49D0: test    ah, 41h
0x4E49D3: jnz     short loc_4E49F1
0x4E49D5: fld     dword ptr [ecx]
0x4E49D7: mov     eax, [ecx-4]
0x4E49DA: fstp    [esp+4+arg_0]
0x4E49DE: mov     [ecx-4], esi
0x4E49E1: mov     esi, eax
0x4E49E3: fstp    dword ptr [ecx]
0x4E49E5: fld     [esp+4+arg_0]
0x4E49E9: fstp    [esp+4+arg_8]
0x4E49ED: fld     [esp+4+arg_8]
0x4E49F1: test    esi, esi
0x4E49F3: jz      short loc_4E4A00
0x4E49F5: add     edx, 1
0x4E49F8: add     ecx, 8
0x4E49FB: cmp     edx, 5
0x4E49FE: jl      short loc_4E49CA
0x4E4A00: fstp    st
0x4E4A02: pop     esi
0x4E4A03: retn
