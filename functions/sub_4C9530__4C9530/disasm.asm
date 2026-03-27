0x4C9530: sub     esp, 20Ch
0x4C9536: mov     eax, ds:0B30AACh
0x4C953B: xor     eax, esp
0x4C953D: mov     [esp+20Ch+var_4], eax
0x4C9544: mov     eax, [ecx+1Ch]
0x4C9547: test    eax, eax
0x4C9549: jnz     short loc_4C9550
0x4C954B: mov     eax, offset EmptyString
0x4C9550: push    eax
0x4C9551: push    offset aTextures; "Textures"
0x4C9556: lea     eax, [esp+214h+Str1]
0x4C955A: push    offset aSLandscapeS; "%s\\Landscape\\%s"
0x4C955F: push    eax
0x4C9560: call    __sprintf
0x4C9565: lea     ecx, [esp+21Ch+var_108]
0x4C956C: push    ecx; int
0x4C956D: lea     edx, [esp+220h+Str1]
0x4C9571: push    edx; Str1
0x4C9572: call    sub_47D8F0
0x4C9577: mov     ecx, ds:0B33A1Ch
0x4C957D: add     esp, 18h
0x4C9580: push    0
0x4C9582: push    5
0x4C9584: lea     eax, [esp+214h+var_108]
0x4C958B: push    eax
0x4C958C: call    sub_43B0D0
0x4C9591: mov     ecx, [esp+20Ch+var_4]
0x4C9598: xor     ecx, esp
0x4C959A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4C959F: add     esp, 20Ch
0x4C95A5: retn
