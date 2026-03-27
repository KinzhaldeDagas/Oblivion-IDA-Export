0x89FB70: sub     esp, 8Ch
0x89FB76: mov     eax, ds:0B30AACh
0x89FB7B: xor     eax, esp
0x89FB7D: mov     [esp+8Ch+var_4], eax
0x89FB84: push    ebx
0x89FB85: push    esi
0x89FB86: mov     esi, [esp+94h+arg_0]
0x89FB8D: push    edi
0x89FB8E: push    esi
0x89FB8F: mov     edi, ecx
0x89FB91: call    sub_89D820
0x89FB96: mov     eax, ds:0BA7D38h
0x89FB9B: push    eax; ArgList
0x89FB9C: call    TESOutput_PrintString
0x89FBA1: movzx   ebx, word ptr [esi+0Ah]
0x89FBA5: movzx   ecx, word ptr [esi+8]
0x89FBA9: add     esp, 4
0x89FBAC: cmp     ebx, ecx
0x89FBAE: mov     [esp+98h+var_8C], eax
0x89FBB2: jb      short loc_89FBC2
0x89FBB4: movzx   edx, word ptr [esi+0Eh]
0x89FBB8: add     edx, ebx
0x89FBBA: push    edx
0x89FBBB: mov     ecx, esi
0x89FBBD: call    NiTArray_SetSize
0x89FBC2: lea     eax, [esp+98h+var_8C]
0x89FBC6: push    eax
0x89FBC7: push    ebx
0x89FBC8: mov     ecx, esi
0x89FBCA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89FBCF: test    edi, edi
0x89FBD1: jz      short loc_89FBE4
0x89FBD3: mov     eax, [edi+8]
0x89FBD6: test    eax, eax
0x89FBD8: jz      short loc_89FBE4
0x89FBDA: add     eax, 14h
0x89FBDD: jz      short loc_89FBE4
0x89FBDF: mov     eax, [eax+1Ch]
0x89FBE2: jmp     short loc_89FBE6
0x89FBE4: xor     eax, eax
0x89FBE6: push    esi
0x89FBE7: lea     ecx, [esp+9Ch+var_88]
0x89FBEB: mov     [esp+9Ch+var_88], eax
0x89FBEF: call    sub_8A9100
0x89FBF4: test    edi, edi
0x89FBF6: jz      short loc_89FC11
0x89FBF8: mov     edi, [edi+8]
0x89FBFB: test    edi, edi
0x89FBFD: jz      short loc_89FC11
0x89FBFF: lea     eax, [edi+14h]
0x89FC02: test    eax, eax
0x89FC04: jz      short loc_89FC11
0x89FC06: mov     eax, [eax]
0x89FC08: test    eax, eax
0x89FC0A: jz      short loc_89FC11
0x89FC0C: mov     edi, [eax+8]
0x89FC0F: jmp     short loc_89FC13
0x89FC11: xor     edi, edi
0x89FC13: test    edi, edi
0x89FC15: jz      short loc_89FC70
0x89FC17: mov     edx, [edi]
0x89FC19: mov     eax, [edx+4]
0x89FC1C: mov     ecx, edi
0x89FC1E: call    eax
0x89FC20: mov     ecx, [eax]
0x89FC22: push    edi
0x89FC23: push    ecx
0x89FC24: lea     edx, [esp+0A0h+var_84]
0x89FC28: push    offset aS0x8x; "%s: 0x%8X"
0x89FC2D: push    edx
0x89FC2E: call    __sprintf
0x89FC33: lea     eax, [esp+0A8h+var_84]
0x89FC37: push    eax; int
0x89FC38: push    offset aShape; "Shape"
0x89FC3D: call    TESOutput_PrintLabeledString
0x89FC42: movzx   edi, word ptr [esi+0Ah]
0x89FC46: movzx   ecx, word ptr [esi+8]
0x89FC4A: add     esp, 18h
0x89FC4D: cmp     edi, ecx
0x89FC4F: mov     [esp+98h+var_8C], eax
0x89FC53: jb      short loc_89FC63
0x89FC55: movzx   edx, word ptr [esi+0Eh]
0x89FC59: add     edx, edi
0x89FC5B: push    edx
0x89FC5C: mov     ecx, esi
0x89FC5E: call    NiTArray_SetSize
0x89FC63: lea     eax, [esp+98h+var_8C]
0x89FC67: push    eax
0x89FC68: push    edi
0x89FC69: mov     ecx, esi
0x89FC6B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89FC70: mov     ecx, [esp+98h+var_4]
0x89FC77: pop     edi
0x89FC78: pop     esi
0x89FC79: pop     ebx
0x89FC7A: xor     ecx, esp
0x89FC7C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89FC81: add     esp, 8Ch
0x89FC87: retn    4
