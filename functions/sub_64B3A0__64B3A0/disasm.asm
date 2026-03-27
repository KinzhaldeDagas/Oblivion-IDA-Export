0x64B3A0: push    ebp
0x64B3A1: mov     ebp, esp
0x64B3A3: and     esp, 0FFFFFFF0h
0x64B3A6: sub     esp, 20h
0x64B3A9: mov     eax, ds:0B30AACh
0x64B3AE: xor     eax, esp
0x64B3B0: mov     [esp+20h+var_4], eax
0x64B3B4: mov     eax, ecx
0x64B3B6: test    eax, eax
0x64B3B8: jz      short loc_64B3EE
0x64B3BA: mov     eax, [eax+8]
0x64B3BD: test    eax, eax
0x64B3BF: jz      short loc_64B3EE
0x64B3C1: mov     ecx, [ebp+arg_0]
0x64B3C4: fld     dword ptr [ecx]
0x64B3C6: fld     qword ptr ds:0A39088h
0x64B3CC: fmul    st(1), st
0x64B3CE: fxch    st(1)
0x64B3D0: fstp    [esp+20h+a2.x]
0x64B3D3: fld     dword ptr [ecx+4]
0x64B3D6: fmul    st, st(1)
0x64B3D8: fstp    [esp+20h+a2.y]
0x64B3DC: fmul    dword ptr [ecx+8]
0x64B3DF: lea     ecx, [esp+20h+a2]
0x64B3E2: push    ecx; a2
0x64B3E3: mov     ecx, eax; this
0x64B3E5: fstp    [esp+24h+a2.z]
0x64B3E9: call    sub_8AC0B0
0x64B3EE: mov     ecx, [esp+20h+var_4]
0x64B3F2: xor     ecx, esp
0x64B3F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x64B3F9: mov     esp, ebp
0x64B3FB: pop     ebp
0x64B3FC: retn    4
