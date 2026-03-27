0x7B4160: sub     esp, 114h
0x7B4166: mov     eax, ds:0B30AACh
0x7B416B: xor     eax, esp
0x7B416D: mov     [esp+114h+var_4], eax
0x7B4174: mov     eax, [esp+114h+arg_4]
0x7B417B: push    ebx
0x7B417C: mov     ebx, [esp+118h+arg_0]
0x7B4183: push    ebp
0x7B4184: mov     ebp, [esp+11Ch+arg_8]
0x7B418B: push    esi
0x7B418C: lea     edx, [esp+120h+Str]
0x7B4190: push    edi
0x7B4191: sub     edx, eax
0x7B4193: mov     cl, [eax]
0x7B4195: mov     [edx+eax], cl
0x7B4198: add     eax, 1
0x7B419B: test    cl, cl
0x7B419D: jnz     short loc_7B4193
0x7B419F: lea     eax, [esp+124h+Str]
0x7B41A3: push    2Eh ; '.'; Ch
0x7B41A5: push    eax; Str
0x7B41A6: mov     [ebx], cl
0x7B41A8: call    _strrchr
0x7B41AD: lea     ecx, [esp+12Ch+Str]
0x7B41B1: push    5Ch ; '\'; Ch
0x7B41B3: push    ecx; Str
0x7B41B4: mov     edi, eax
0x7B41B6: call    _strrchr
0x7B41BB: lea     edx, [esp+134h+Str]
0x7B41BF: push    5Fh ; '_'; Ch
0x7B41C1: push    edx; Str
0x7B41C2: mov     esi, eax
0x7B41C4: call    _strrchr
0x7B41C9: add     esp, 18h
0x7B41CC: test    esi, esi
0x7B41CE: jz      short loc_7B41DA
0x7B41D0: test    eax, eax
0x7B41D2: jz      short loc_7B41DA
0x7B41D4: cmp     eax, esi
0x7B41D6: jnb     short loc_7B41DA
0x7B41D8: xor     eax, eax
0x7B41DA: test    edi, edi
0x7B41DC: jz      short loc_7B424C
0x7B41DE: lea     esi, [esp+124h+var_114]
0x7B41E2: mov     ecx, edi
0x7B41E4: sub     esi, edi
0x7B41E6: mov     dl, [ecx]
0x7B41E8: mov     [esi+ecx], dl
0x7B41EB: add     ecx, 1
0x7B41EE: test    dl, dl
0x7B41F0: jnz     short loc_7B41E6
0x7B41F2: test    eax, eax
0x7B41F4: jz      short loc_7B41F8
0x7B41F6: mov     [eax], dl
0x7B41F8: mov     byte ptr [edi], 0
0x7B41FB: cmp     [esp+124h+Str], 5Ch ; '\'
0x7B4200: jz      short loc_7B4233
0x7B4202: cmp     [esp+124h+var_107], 3Ah ; ':'
0x7B4207: jz      short loc_7B4233
0x7B4209: push    4; MaxCount
0x7B420B: lea     eax, [esp+128h+Str]
0x7B420F: push    offset aData_3; "data"
0x7B4214: push    eax; Str1
0x7B4215: call    __strnicmp
0x7B421A: add     esp, 0Ch
0x7B421D: test    eax, eax
0x7B421F: jz      short loc_7B4233
0x7B4221: lea     ecx, [esp+124h+var_114]
0x7B4225: push    ecx
0x7B4226: push    ebp
0x7B4227: lea     edx, [esp+12Ch+Str]
0x7B422B: push    edx
0x7B422C: push    offset aDataSSS; "Data\\%s%s%s"
0x7B4231: jmp     short loc_7B4243
0x7B4233: lea     eax, [esp+124h+var_114]
0x7B4237: push    eax
0x7B4238: push    ebp
0x7B4239: lea     ecx, [esp+12Ch+Str]
0x7B423D: push    ecx
0x7B423E: push    offset aSSS; "%s%s%s"
0x7B4243: push    ebx
0x7B4244: call    __sprintf
0x7B4249: add     esp, 14h
0x7B424C: mov     ecx, [esp+124h+var_4]
0x7B4253: pop     edi
0x7B4254: pop     esi
0x7B4255: pop     ebp
0x7B4256: pop     ebx
0x7B4257: xor     ecx, esp
0x7B4259: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B425E: add     esp, 114h
0x7B4264: retn
