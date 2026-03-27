0x68BE10: push    ebx
0x68BE11: push    esi
0x68BE12: mov     ebx, ecx
0x68BE14: mov     esi, [ebx]
0x68BE16: push    edi
0x68BE17: xor     edi, edi
0x68BE19: test    esi, esi
0x68BE1B: jz      short loc_68BE5A
0x68BE1D: push    ebp
0x68BE1E: mov     ebp, [esp+10h+arg_4]
0x68BE22: fld1
0x68BE24: push    ecx
0x68BE25: mov     ecx, esi
0x68BE27: fstp    [esp+14h+var_14]; float
0x68BE2A: call    sub_6899C0
0x68BE2F: push    eax; int
0x68BE30: mov     eax, [esp+18h+arg_0]
0x68BE34: push    eax; int
0x68BE35: call    sub_47D810
0x68BE3A: add     esp, 0Ch
0x68BE3D: test    al, al
0x68BE3F: jnz     short loc_68BE59
0x68BE41: sub     ebp, 1
0x68BE44: jz      short loc_68BE57
0x68BE46: mov     ecx, esi
0x68BE48: mov     edi, esi
0x68BE4A: call    NiDX92DBufferData__GetSurfaceData
0x68BE4F: mov     esi, eax
0x68BE51: test    esi, esi
0x68BE53: jnz     short loc_68BE22
0x68BE55: jmp     short loc_68BE59
0x68BE57: xor     esi, esi
0x68BE59: pop     ebp
0x68BE5A: xor     al, al
0x68BE5C: test    esi, esi
0x68BE5E: jz      short loc_68BE71
0x68BE60: test    edi, edi
0x68BE62: jz      short loc_68BE6F
0x68BE64: mov     ecx, [ebx]
0x68BE66: push    edi
0x68BE67: push    ecx
0x68BE68: mov     ecx, ebx
0x68BE6A: call    sub_68BDA0
0x68BE6F: mov     al, 1
0x68BE71: pop     edi
0x68BE72: pop     esi
0x68BE73: pop     ebx
0x68BE74: retn    8
