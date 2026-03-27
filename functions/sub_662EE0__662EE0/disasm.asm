0x662EE0: sub     esp, 108h
0x662EE6: mov     eax, ds:0B30AACh
0x662EEB: xor     eax, esp
0x662EED: mov     [esp+108h+var_4], eax
0x662EF4: mov     eax, ds:0B36BB8h
0x662EF9: lea     edx, [esp+108h+Str]
0x662EFC: sub     edx, eax
0x662EFE: mov     edi, edi
0x662F00: mov     cl, [eax]
0x662F02: mov     [edx+eax], cl
0x662F05: add     eax, 1
0x662F08: test    cl, cl
0x662F0A: jnz     short loc_662F00
0x662F0C: lea     eax, [esp+108h+Str]
0x662F0F: push    5Ch ; '\'; Ch
0x662F11: push    eax; Str
0x662F12: call    _strrchr
0x662F17: add     esp, 8
0x662F1A: test    eax, eax
0x662F1C: jz      short loc_662F3B
0x662F1E: mov     ecx, ds:0A538D0h
0x662F24: mov     [eax+1], ecx
0x662F27: mov     edx, ds:0A538D4h
0x662F2D: mov     [eax+5], edx
0x662F30: mov     cx, ds:0A538D8h
0x662F37: mov     [eax+9], cx
0x662F3B: mov     ecx, ds:0B362C0h
0x662F41: lea     edx, [esp+108h+Str]
0x662F44: push    edx; char *
0x662F45: call    sub_5215C0
0x662F4A: mov     ecx, [esp+108h+var_4]
0x662F51: xor     ecx, esp
0x662F53: call    @__security_check_cookie@4; __security_check_cookie(x)
0x662F58: add     esp, 108h
0x662F5E: retn
