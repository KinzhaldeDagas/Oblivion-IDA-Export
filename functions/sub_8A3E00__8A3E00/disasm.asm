0x8A3E00: push    ebp
0x8A3E01: mov     ebp, esp
0x8A3E03: and     esp, 0FFFFFFF0h
0x8A3E06: sub     esp, 20h
0x8A3E09: mov     eax, ds:0B30AACh
0x8A3E0E: xor     eax, esp
0x8A3E10: mov     [esp+20h+var_4], eax
0x8A3E14: mov     edx, [ebp+arg_0]
0x8A3E17: mov     eax, ecx
0x8A3E19: test    eax, eax
0x8A3E1B: jz      short loc_8A3E2D
0x8A3E1D: mov     eax, [eax+8]
0x8A3E20: test    eax, eax
0x8A3E22: jz      short loc_8A3E2D
0x8A3E24: add     eax, 14h
0x8A3E27: jz      short loc_8A3E2D
0x8A3E29: mov     ecx, [eax]
0x8A3E2B: jmp     short loc_8A3E2F
0x8A3E2D: xor     ecx, ecx
0x8A3E2F: test    ecx, ecx
0x8A3E31: jz      short loc_8A3E5B
0x8A3E33: mov     eax, [ecx]
0x8A3E35: fld     dword ptr ds:0A37080h
0x8A3E3B: push    edx
0x8A3E3C: mov     edx, [eax+0Ch]
0x8A3E3F: push    ecx
0x8A3E40: fstp    [esp+28h+var_28]
0x8A3E43: push    offset xmmword_B2F090
0x8A3E48: call    edx
0x8A3E4A: mov     ecx, [esp+20h+var_4]
0x8A3E4E: xor     ecx, esp
0x8A3E50: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A3E55: mov     esp, ebp
0x8A3E57: pop     ebp
0x8A3E58: retn    4
0x8A3E5B: fld     dword ptr ds:0A57CB0h
0x8A3E61: mov     ecx, [esp+20h+var_4]
0x8A3E65: fst     dword ptr [esp+20h+var_20]
0x8A3E68: xor     ecx, esp
0x8A3E6A: fst     dword ptr [esp+20h+var_20+4]
0x8A3E6E: fstp    dword ptr [esp+20h+var_20+8]
0x8A3E72: fldz
0x8A3E74: fst     dword ptr [esp+20h+var_20+0Ch]
0x8A3E78: movaps  xmm0, [esp+20h+var_20]
0x8A3E7C: fld     dword ptr ds:0A37080h
0x8A3E82: fst     dword ptr [esp+20h+var_20]
0x8A3E85: movaps  xmmword ptr [edx], xmm0
0x8A3E88: fst     dword ptr [esp+20h+var_20+4]
0x8A3E8C: fstp    dword ptr [esp+20h+var_20+8]
0x8A3E90: fstp    dword ptr [esp+20h+var_20+0Ch]
0x8A3E94: movaps  xmm0, [esp+20h+var_20]
0x8A3E98: movaps  xmmword ptr [edx+10h], xmm0
0x8A3E9C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A3EA1: mov     esp, ebp
0x8A3EA3: pop     ebp
0x8A3EA4: retn    4
