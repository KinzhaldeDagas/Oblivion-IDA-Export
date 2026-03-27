0x4940C0: sub     esp, 108h
0x4940C6: mov     eax, ds:0B30AACh
0x4940CB: xor     eax, esp
0x4940CD: mov     [esp+108h+var_4], eax
0x4940D4: push    esi
0x4940D5: mov     esi, [esp+10Ch+arg_0]
0x4940DC: mov     eax, [esi]
0x4940DE: lea     edx, [esp+10Ch+Str]
0x4940E2: sub     edx, eax
0x4940E4: mov     cl, [eax]
0x4940E6: mov     [edx+eax], cl
0x4940E9: add     eax, 1
0x4940EC: test    cl, cl
0x4940EE: jnz     short loc_4940E4
0x4940F0: lea     eax, [esp+10Ch+Str]
0x4940F4: push    2Eh ; '.'; Ch
0x4940F6: push    eax; Str
0x4940F7: call    _strrchr
0x4940FC: add     esp, 8
0x4940FF: test    eax, eax
0x494101: jnz     short loc_49411B
0x494103: xor     al, al
0x494105: pop     esi
0x494106: mov     ecx, [esp+108h+var_4]
0x49410D: xor     ecx, esp
0x49410F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x494114: add     esp, 108h
0x49411A: retn
0x49411B: lea     ecx, [esp+10Ch+Str]
0x49411F: push    ecx; ArgList
0x494120: push    offset aS_lip; "%s.lip"
0x494125: push    esi; int
0x494126: mov     byte ptr [eax], 0
0x494129: call    BSStringT_Static_Format
0x49412E: mov     ecx, [esp+118h+var_4]
0x494135: add     esp, 0Ch
0x494138: pop     esi
0x494139: xor     ecx, esp
0x49413B: mov     al, 1
0x49413D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x494142: add     esp, 108h
0x494148: retn
