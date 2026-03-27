0x4A8D20: sub     esp, 158h
0x4A8D26: mov     eax, ds:0B30AACh
0x4A8D2B: xor     eax, esp
0x4A8D2D: mov     [esp+158h+var_4], eax
0x4A8D34: push    ebx
0x4A8D35: push    ebp
0x4A8D36: mov     ebp, [esp+160h+arg_0]
0x4A8D3D: push    esi
0x4A8D3E: mov     esi, [ebp+4]
0x4A8D41: xor     bl, bl
0x4A8D43: test    esi, esi
0x4A8D45: push    edi
0x4A8D46: mov     edi, ecx
0x4A8D48: jz      loc_4A8E26
0x4A8D4E: cmp     dword ptr [edi+108h], 0
0x4A8D55: setz    al
0x4A8D58: test    al, al
0x4A8D5A: mov     byte ptr [esp+168h+var_158+3], al
0x4A8D5E: jz      short loc_4A8D69
0x4A8D60: mov     eax, [edi]
0x4A8D62: mov     edx, [eax+14h]
0x4A8D65: push    0
0x4A8D67: call    edx
0x4A8D69: cmp     dword ptr [edi+108h], 0
0x4A8D70: jz      loc_4A8E16
0x4A8D76: mov     ecx, ebp
0x4A8D78: call    Setting_GetValueSize?
0x4A8D7D: mov     [esp+168h+cbData], eax
0x4A8D81: mov     eax, [ebp+4]
0x4A8D84: push    eax
0x4A8D85: call    Setting_GetTypeFromName
0x4A8D8A: add     esp, 4
0x4A8D8D: test    eax, eax
0x4A8D8F: jz      short loc_4A8DA0
0x4A8D91: sub     eax, 6
0x4A8D94: neg     eax
0x4A8D96: sbb     eax, eax
0x4A8D98: and     eax, 3
0x4A8D9B: add     eax, 1
0x4A8D9E: jmp     short loc_4A8DA5
0x4A8DA0: mov     eax, 3
0x4A8DA5: cmp     eax, 1
0x4A8DA8: mov     [esp+168h+Type], eax
0x4A8DAC: jnz     short loc_4A8DDD
0x4A8DAE: lea     edx, [esp+168h+ValueName]
0x4A8DB2: mov     eax, esi
0x4A8DB4: sub     edx, esi
0x4A8DB6: mov     cl, [eax]
0x4A8DB8: mov     [edx+eax], cl
0x4A8DBB: add     eax, 1
0x4A8DBE: test    cl, cl
0x4A8DC0: jnz     short loc_4A8DB6
0x4A8DC2: mov     [esp+168h+Data], cl
0x4A8DC6: mov     [esp+168h+ValueName], 73h ; 's'
0x4A8DCB: lea     esi, [esp+168h+ValueName]
0x4A8DCF: mov     [esp+168h+cbData], 104h
0x4A8DD7: lea     ecx, [esp+168h+Data]
0x4A8DDB: jmp     short loc_4A8DDF
0x4A8DDD: mov     ecx, ebp
0x4A8DDF: mov     eax, [edi+108h]
0x4A8DE5: lea     edx, [esp+168h+cbData]
0x4A8DE9: push    edx; lpcbData
0x4A8DEA: push    ecx; lpData
0x4A8DEB: lea     ecx, [esp+170h+Type]
0x4A8DEF: push    ecx; lpType
0x4A8DF0: push    0; lpReserved
0x4A8DF2: push    esi; lpValueName
0x4A8DF3: push    eax; hKey
0x4A8DF4: call    dword ptr ds:0A28010h
0x4A8DFA: test    eax, eax
0x4A8DFC: setz    bl
0x4A8DFF: test    bl, bl
0x4A8E01: jz      short loc_4A8E16
0x4A8E03: cmp     [esp+168h+Type], 1
0x4A8E08: jnz     short loc_4A8E16
0x4A8E0A: lea     edx, [esp+168h+Data]
0x4A8E0E: push    edx
0x4A8E0F: mov     ecx, ebp
0x4A8E11: call    Setting_SetStringValue
0x4A8E16: cmp     byte ptr [esp+168h+var_158+3], 0
0x4A8E1B: jz      short loc_4A8E26
0x4A8E1D: mov     eax, [edi]
0x4A8E1F: mov     edx, [eax+18h]
0x4A8E22: mov     ecx, edi
0x4A8E24: call    edx
0x4A8E26: mov     ecx, [esp+168h+var_4]
0x4A8E2D: pop     edi
0x4A8E2E: pop     esi
0x4A8E2F: pop     ebp
0x4A8E30: mov     al, bl
0x4A8E32: pop     ebx
0x4A8E33: xor     ecx, esp
0x4A8E35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A8E3A: add     esp, 158h
0x4A8E40: retn    4
