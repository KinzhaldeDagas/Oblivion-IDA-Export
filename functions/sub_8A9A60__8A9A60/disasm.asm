0x8A9A60: push    ecx
0x8A9A61: fld     dword ptr [ecx+4]
0x8A9A64: fld     dword ptr [ecx]
0x8A9A66: fst     [esp+4+var_4]
0x8A9A69: fcomp   st(1)
0x8A9A6B: fnstsw  ax
0x8A9A6D: test    ah, 5
0x8A9A70: jp      short loc_8A9A77
0x8A9A72: fstp    st
0x8A9A74: fld     [esp+4+var_4]
0x8A9A77: mov     eax, [ecx+8]
0x8A9A7A: mov     [esp+4+var_4], eax
0x8A9A7D: fcom    [esp+4+var_4]
0x8A9A80: fnstsw  ax
0x8A9A82: test    ah, 5
0x8A9A85: jnp     short loc_8A9A8C
0x8A9A87: fstp    st
0x8A9A89: fld     [esp+4+var_4]
0x8A9A8C: fcom    dword ptr ds:0A3D65Ch
0x8A9A92: fnstsw  ax
0x8A9A94: test    ah, 5
0x8A9A97: jp      short loc_8A9AA4
0x8A9A99: fmul    dword ptr ds:0A3D9A4h
0x8A9A9F: fstp    dword ptr [edx+20h]
0x8A9AA2: pop     ecx
0x8A9AA3: retn
0x8A9AA4: fstp    st
0x8A9AA6: mov     dword ptr [edx+20h], 3DCCCCCDh
0x8A9AAD: pop     ecx
0x8A9AAE: retn
