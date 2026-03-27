0x8A3D30: push    ebp
0x8A3D31: mov     ebp, esp
0x8A3D33: and     esp, 0FFFFFFF0h
0x8A3D36: sub     esp, 78h
0x8A3D39: mov     eax, ds:0B30AACh
0x8A3D3E: xor     eax, esp
0x8A3D40: mov     [esp+78h+var_4], eax
0x8A3D44: push    esi
0x8A3D45: mov     esi, ecx
0x8A3D47: mov     eax, [esi]
0x8A3D49: mov     edx, [eax+0ACh]
0x8A3D4F: push    edi
0x8A3D50: mov     edi, [ebp+arg_0]
0x8A3D53: lea     ecx, [esp+80h+var_50]
0x8A3D57: push    ecx
0x8A3D58: mov     ecx, esi
0x8A3D5A: call    edx
0x8A3D5C: mov     esi, [esi+8]
0x8A3D5F: test    esi, esi
0x8A3D61: jz      short loc_8A3D6E
0x8A3D63: lea     eax, [esi+14h]
0x8A3D66: test    eax, eax
0x8A3D68: jz      short loc_8A3D6E
0x8A3D6A: mov     ecx, [eax]
0x8A3D6C: jmp     short loc_8A3D70
0x8A3D6E: xor     ecx, ecx
0x8A3D70: test    ecx, ecx
0x8A3D72: lea     edx, [esp+80h+var_50]
0x8A3D76: jz      short loc_8A3D9E
0x8A3D78: mov     eax, [ecx]
0x8A3D7A: fld     dword ptr ds:0A37080h
0x8A3D80: mov     eax, [eax+0Ch]
0x8A3D83: push    edi
0x8A3D84: push    ecx
0x8A3D85: fstp    [esp+88h+var_88]
0x8A3D88: push    edx
0x8A3D89: call    eax
0x8A3D8B: pop     edi
0x8A3D8C: pop     esi
0x8A3D8D: mov     ecx, [esp+78h+var_4]
0x8A3D91: xor     ecx, esp
0x8A3D93: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A3D98: mov     esp, ebp
0x8A3D9A: pop     ebp
0x8A3D9B: retn    4
0x8A3D9E: fld     dword ptr ds:0A57CB0h
0x8A3DA4: lea     ecx, [esp+80h+var_60]
0x8A3DA8: fst     [esp+80h+var_60]
0x8A3DAC: push    ecx
0x8A3DAD: fst     [esp+84h+var_5C]
0x8A3DB1: push    edx
0x8A3DB2: fstp    [esp+88h+var_58]
0x8A3DB6: mov     ecx, edi
0x8A3DB8: fldz
0x8A3DBA: fst     [esp+88h+var_54]
0x8A3DBE: fld     dword ptr ds:0A37080h
0x8A3DC4: fst     [esp+88h+var_70]
0x8A3DC8: fst     [esp+88h+var_6C]
0x8A3DCC: fstp    [esp+88h+var_68]
0x8A3DD0: fstp    [esp+88h+var_64]
0x8A3DD4: call    sub_88FCC0
0x8A3DD9: lea     eax, [esp+80h+var_70]
0x8A3DDD: push    eax
0x8A3DDE: lea     ecx, [esp+84h+var_50]
0x8A3DE2: push    ecx
0x8A3DE3: lea     ecx, [edi+10h]
0x8A3DE6: call    sub_88FCC0
0x8A3DEB: mov     ecx, [esp+80h+var_4]
0x8A3DEF: pop     edi
0x8A3DF0: pop     esi
0x8A3DF1: xor     ecx, esp
0x8A3DF3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A3DF8: mov     esp, ebp
0x8A3DFA: pop     ebp
0x8A3DFB: retn    4
