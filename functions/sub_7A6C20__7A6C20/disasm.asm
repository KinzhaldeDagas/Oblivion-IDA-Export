0x7A6C20: push    ecx
0x7A6C21: push    ebx
0x7A6C22: mov     ebx, [esp+8+arg_0]
0x7A6C26: mov     edx, ecx
0x7A6C28: push    esi
0x7A6C29: push    edi
0x7A6C2A: mov     ecx, 0Ch
0x7A6C2F: mov     esi, edx
0x7A6C31: mov     edi, ebx
0x7A6C33: rep movsd
0x7A6C35: mov     ecx, [esp+10h+arg_4]
0x7A6C39: mov     [esp+10h+var_4], 0
0x7A6C41: fld     dword ptr [ecx]
0x7A6C43: fld     dword ptr [edx]
0x7A6C45: fcompp
0x7A6C47: fnstsw  ax
0x7A6C49: test    ah, 41h
0x7A6C4C: jnz     short loc_7A6C52
0x7A6C4E: fld     dword ptr [ecx]
0x7A6C50: fstp    dword ptr [ebx]
0x7A6C52: fld     dword ptr [ecx+18h]
0x7A6C55: fld     dword ptr [edx+18h]
0x7A6C58: fcompp
0x7A6C5A: fnstsw  ax
0x7A6C5C: test    ah, 5
0x7A6C5F: jp      short loc_7A6C67
0x7A6C61: fld     dword ptr [ecx+18h]
0x7A6C64: fstp    dword ptr [ebx+18h]
0x7A6C67: fld     dword ptr [ecx+4]
0x7A6C6A: fld     dword ptr [edx+4]
0x7A6C6D: fcompp
0x7A6C6F: fnstsw  ax
0x7A6C71: test    ah, 41h
0x7A6C74: jnz     short loc_7A6C7C
0x7A6C76: fld     dword ptr [ecx+4]
0x7A6C79: fstp    dword ptr [ebx+4]
0x7A6C7C: fld     dword ptr [ecx+1Ch]
0x7A6C7F: fld     dword ptr [edx+1Ch]
0x7A6C82: fcompp
0x7A6C84: fnstsw  ax
0x7A6C86: test    ah, 5
0x7A6C89: jp      short loc_7A6C91
0x7A6C8B: fld     dword ptr [ecx+1Ch]
0x7A6C8E: fstp    dword ptr [ebx+1Ch]
0x7A6C91: fld     dword ptr [ecx+8]
0x7A6C94: fld     dword ptr [edx+8]
0x7A6C97: fcompp
0x7A6C99: fnstsw  ax
0x7A6C9B: test    ah, 41h
0x7A6C9E: jnz     short loc_7A6CA6
0x7A6CA0: fld     dword ptr [ecx+8]
0x7A6CA3: fstp    dword ptr [ebx+8]
0x7A6CA6: fld     dword ptr [ecx+20h]
0x7A6CA9: fld     dword ptr [edx+20h]
0x7A6CAC: fcompp
0x7A6CAE: fnstsw  ax
0x7A6CB0: test    ah, 5
0x7A6CB3: mov     eax, ebx
0x7A6CB5: jp      short loc_7A6CBD
0x7A6CB7: fld     dword ptr [ecx+20h]
0x7A6CBA: fstp    dword ptr [ebx+20h]
0x7A6CBD: pop     edi
0x7A6CBE: pop     esi
0x7A6CBF: pop     ebx
0x7A6CC0: pop     ecx
0x7A6CC1: retn    8
