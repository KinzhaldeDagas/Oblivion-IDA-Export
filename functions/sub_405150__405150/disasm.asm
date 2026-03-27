0x405150: sub     esp, 104h
0x405156: mov     eax, ___security_cookie
0x40515B: xor     eax, esp
0x40515D: mov     [esp+104h+var_4], eax
0x405164: mov     eax, [esp+104h+arg_4]
0x40516B: test    eax, eax
0x40516D: push    ebx
0x40516E: mov     ebx, [esp+108h+arg_0]
0x405175: push    esi; ArgList
0x405176: jz      loc_405267
0x40517C: push    eax
0x40517D: call    sub_4DC270
0x405182: mov     esi, eax
0x405184: add     esp, 4
0x405187: test    esi, esi
0x405189: jz      loc_405267
0x40518F: mov     eax, [esi]
0x405191: mov     edx, [eax+0D4h]
0x405197: mov     ecx, esi
0x405199: call    edx
0x40519B: test    eax, eax
0x40519D: jz      loc_405267
0x4051A3: mov     eax, [esi]
0x4051A5: mov     edx, [eax+0D4h]
0x4051AB: mov     ecx, esi
0x4051AD: call    edx
0x4051AF: lea     edx, [eax+1]
0x4051B2: mov     cl, [eax]
0x4051B4: add     eax, 1
0x4051B7: test    cl, cl
0x4051B9: jnz     short loc_4051B2
0x4051BB: sub     eax, edx
0x4051BD: mov     edx, eax
0x4051BF: mov     eax, ebx
0x4051C1: push    edi; ArgList
0x4051C2: lea     edi, [eax+1]
0x4051C5: mov     cl, [eax]
0x4051C7: add     eax, 1
0x4051CA: test    cl, cl
0x4051CC: jnz     short loc_4051C5
0x4051CE: sub     eax, edi
0x4051D0: lea     eax, [eax+edx+5]
0x4051D4: cmp     eax, 0FFh
0x4051D9: jb      short loc_4051F2
0x4051DB: push    475h
0x4051E0: push    offset a_MiscMain_cpp; ".\\Misc\\Main.cpp"
0x4051E5: push    offset aShaderErrorStr; "Shader error string is too long."
0x4051EA: call    nullsub_return0_0arg
0x4051EF: add     esp, 0Ch
0x4051F2: mov     edx, [esi]
0x4051F4: mov     eax, [edx+0D4h]
0x4051FA: push    ebx
0x4051FB: mov     ecx, esi
0x4051FD: call    eax
0x4051FF: push    eax
0x405200: lea     ecx, [esp+118h+Format]
0x405204: push    offset aSS_7; "%s :: %s"
0x405209: push    ecx
0x40520A: call    __sprintf
0x40520F: mov     eax, ebx
0x405211: add     esp, 10h
0x405214: mov     edx, eax
0x405216: mov     cl, [eax]
0x405218: add     eax, 1
0x40521B: test    cl, cl
0x40521D: jnz     short loc_405216
0x40521F: lea     edi, [esp+110h+Format]
0x405223: sub     eax, edx
0x405225: add     edi, 0FFFFFFFFh
0x405228: mov     cl, [edi+1]
0x40522B: add     edi, 1
0x40522E: test    cl, cl
0x405230: jnz     short loc_405228
0x405232: mov     ecx, eax
0x405234: shr     ecx, 2
0x405237: mov     esi, edx
0x405239: rep movsd
0x40523B: mov     ecx, eax
0x40523D: lea     edx, [esp+110h+Format]
0x405241: and     ecx, 3
0x405244: push    edx; Format
0x405245: rep movsb
0x405247: call    PrintError
0x40524C: add     esp, 4
0x40524F: pop     edi
0x405250: pop     esi
0x405251: pop     ebx
0x405252: mov     ecx, [esp+104h+var_4]
0x405259: xor     ecx, esp
0x40525B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x405260: add     esp, 104h
0x405266: retn
0x405267: push    ebx; Format
0x405268: call    PrintError
0x40526D: mov     ecx, [esp+110h+var_4]
0x405274: add     esp, 4
0x405277: pop     esi
0x405278: pop     ebx
0x405279: xor     ecx, esp
0x40527B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x405280: add     esp, 104h
0x405286: retn
