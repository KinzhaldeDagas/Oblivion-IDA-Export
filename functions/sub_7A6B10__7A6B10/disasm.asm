0x7A6B10: push    ecx
0x7A6B11: mov     edx, [esp+4+arg_0]
0x7A6B15: push    esi
0x7A6B16: push    edi
0x7A6B17: mov     esi, ecx
0x7A6B19: mov     ecx, 0Ch
0x7A6B1E: mov     edi, edx
0x7A6B20: rep movsd
0x7A6B22: mov     ecx, [esp+0Ch+arg_4]
0x7A6B26: pop     edi
0x7A6B27: mov     [esp+8+var_4], 0
0x7A6B2F: fld     dword ptr [ecx]
0x7A6B31: pop     esi
0x7A6B32: fld     dword ptr [edx]
0x7A6B34: fcompp
0x7A6B36: fnstsw  ax
0x7A6B38: test    ah, 41h
0x7A6B3B: jnz     short loc_7A6B41
0x7A6B3D: fld     dword ptr [ecx]
0x7A6B3F: fstp    dword ptr [edx]
0x7A6B41: fld     dword ptr [ecx+4]
0x7A6B44: fld     dword ptr [edx+4]
0x7A6B47: fcompp
0x7A6B49: fnstsw  ax
0x7A6B4B: test    ah, 41h
0x7A6B4E: jnz     short loc_7A6B56
0x7A6B50: fld     dword ptr [ecx+4]
0x7A6B53: fstp    dword ptr [edx+4]
0x7A6B56: fld     dword ptr [ecx+8]
0x7A6B59: fld     dword ptr [edx+8]
0x7A6B5C: fcompp
0x7A6B5E: fnstsw  ax
0x7A6B60: test    ah, 41h
0x7A6B63: jnz     short loc_7A6B6B
0x7A6B65: fld     dword ptr [ecx+8]
0x7A6B68: fstp    dword ptr [edx+8]
0x7A6B6B: fld     dword ptr [ecx]
0x7A6B6D: fld     dword ptr [edx+18h]
0x7A6B70: fcompp
0x7A6B72: fnstsw  ax
0x7A6B74: test    ah, 5
0x7A6B77: jp      short loc_7A6B7E
0x7A6B79: fld     dword ptr [ecx]
0x7A6B7B: fstp    dword ptr [edx+18h]
0x7A6B7E: fld     dword ptr [ecx+4]
0x7A6B81: fld     dword ptr [edx+1Ch]
0x7A6B84: fcompp
0x7A6B86: fnstsw  ax
0x7A6B88: test    ah, 5
0x7A6B8B: jp      short loc_7A6B93
0x7A6B8D: fld     dword ptr [ecx+4]
0x7A6B90: fstp    dword ptr [edx+1Ch]
0x7A6B93: fld     dword ptr [ecx+8]
0x7A6B96: fld     dword ptr [edx+20h]
0x7A6B99: fcompp
0x7A6B9B: fnstsw  ax
0x7A6B9D: test    ah, 5
0x7A6BA0: mov     eax, edx
0x7A6BA2: jp      short loc_7A6BAA
0x7A6BA4: fld     dword ptr [ecx+8]
0x7A6BA7: fstp    dword ptr [edx+20h]
0x7A6BAA: pop     ecx
0x7A6BAB: retn    8
