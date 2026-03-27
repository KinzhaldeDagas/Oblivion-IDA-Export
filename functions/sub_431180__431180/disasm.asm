0x431180: sub     esp, 108h
0x431186: mov     eax, ___security_cookie
0x43118B: xor     eax, esp
0x43118D: mov     [esp+108h+var_4], eax
0x431194: mov     eax, [esp+108h+FullPath]
0x43119B: push    ebx
0x43119C: mov     ebx, [esp+10Ch+arg_8]
0x4311A3: push    ebp
0x4311A4: mov     ebp, [esp+110h+Str1]
0x4311AB: push    esi
0x4311AC: push    0; Ext
0x4311AE: push    0; Filename
0x4311B0: lea     ecx, [esp+11Ch+Dir]
0x4311B4: push    ecx; Dir
0x4311B5: push    0; Drive
0x4311B7: push    eax; FullPath
0x4311B8: mov     byte ptr [ebx], 0
0x4311BB: call    __splitpath
0x4311C0: lea     esi, [esp+128h+Dir]
0x4311C4: mov     eax, esi
0x4311C6: add     esp, 14h
0x4311C9: lea     edx, [eax+1]
0x4311CC: lea     esp, [esp+0]
0x4311D0: mov     cl, [eax]
0x4311D2: add     eax, 1
0x4311D5: test    cl, cl
0x4311D7: jnz     short loc_4311D0
0x4311D9: sub     eax, edx
0x4311DB: cmp     [esp+eax+114h+var_109], 5Ch ; '\'
0x4311E0: lea     eax, [esp+eax+114h+var_109]
0x4311E4: jnz     short loc_4311E8
0x4311E6: mov     [eax], cl
0x4311E8: push    3; MaxCount
0x4311EA: push    offset a__; Str2
0x4311EF: push    ebp; Str1
0x4311F0: call    _strncmp
0x4311F5: add     esp, 0Ch
0x4311F8: test    eax, eax
0x4311FA: jnz     loc_4312F1
0x431200: push    edi
0x431201: mov     eax, esi
0x431203: mov     edi, esi
0x431205: lea     edx, [eax+1]
0x431208: mov     cl, [eax]
0x43120A: add     eax, 1
0x43120D: test    cl, cl
0x43120F: jnz     short loc_431208
0x431211: sub     eax, edx
0x431213: add     eax, 0FFFFFFFFh
0x431216: test    eax, eax
0x431218: jle     short loc_431232
0x43121A: lea     ebx, [ebx+0]
0x431220: cmp     byte ptr [eax+esi], 5Ch ; '\'
0x431224: jz      short loc_43122F
0x431226: sub     eax, 1
0x431229: test    eax, eax
0x43122B: jg      short loc_431220
0x43122D: jmp     short loc_431232
0x43122F: lea     edi, [eax+esi]
0x431232: test    edi, edi
0x431234: jz      short loc_43123E
0x431236: mov     byte ptr [edi], 0
0x431239: add     ebp, 3
0x43123C: jmp     short loc_431243
0x43123E: mov     esi, offset EmptyString
0x431243: push    3; MaxCount
0x431245: push    offset a__; Str2
0x43124A: push    ebp; Str1
0x43124B: call    _strncmp
0x431250: add     esp, 0Ch
0x431253: test    eax, eax
0x431255: jz      short loc_431201
0x431257: mov     eax, esi
0x431259: mov     ecx, esi
0x43125B: jmp     short loc_431260
0x43125D: align 10h
0x431260: mov     dl, [eax]
0x431262: add     eax, 1
0x431265: test    dl, dl
0x431267: jnz     short loc_431260
0x431269: mov     edi, ebx
0x43126B: sub     eax, ecx
0x43126D: mov     esi, ecx
0x43126F: add     edi, 0FFFFFFFFh
0x431272: mov     cl, [edi+1]
0x431275: add     edi, 1
0x431278: test    cl, cl
0x43127A: jnz     short loc_431272
0x43127C: mov     ecx, eax
0x43127E: shr     ecx, 2
0x431281: rep movsd
0x431283: mov     ecx, eax
0x431285: and     ecx, 3
0x431288: rep movsb
0x43128A: mov     edi, ebx
0x43128C: add     edi, 0FFFFFFFFh
0x43128F: nop
0x431290: mov     al, [edi+1]
0x431293: add     edi, 1
0x431296: test    al, al
0x431298: jnz     short loc_431290
0x43129A: mov     dx, ds:SubStr
0x4312A1: mov     eax, ebp
0x4312A3: mov     [edi], dx
0x4312A6: mov     ecx, eax
0x4312A8: mov     dl, [eax]
0x4312AA: add     eax, 1
0x4312AD: test    dl, dl
0x4312AF: jnz     short loc_4312A8
0x4312B1: sub     eax, ecx
0x4312B3: add     ebx, 0FFFFFFFFh
0x4312B6: mov     esi, ecx
0x4312B8: mov     edi, ebx
0x4312BA: lea     ebx, [ebx+0]
0x4312C0: mov     cl, [edi+1]
0x4312C3: add     edi, 1
0x4312C6: test    cl, cl
0x4312C8: jnz     short loc_4312C0
0x4312CA: mov     ecx, eax
0x4312CC: shr     ecx, 2
0x4312CF: rep movsd
0x4312D1: mov     ecx, eax
0x4312D3: and     ecx, 3
0x4312D6: rep movsb
0x4312D8: pop     edi
0x4312D9: pop     esi
0x4312DA: pop     ebp
0x4312DB: pop     ebx
0x4312DC: mov     ecx, [esp+108h+var_4]
0x4312E3: xor     ecx, esp
0x4312E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4312EA: add     esp, 108h
0x4312F0: retn
0x4312F1: mov     edx, ebx
0x4312F3: mov     eax, ebp
0x4312F5: sub     edx, ebp
0x4312F7: mov     cl, [eax]
0x4312F9: mov     [edx+eax], cl
0x4312FC: add     eax, 1
0x4312FF: test    cl, cl
0x431301: jnz     short loc_4312F7
0x431303: mov     ecx, [esp+114h+var_4]
0x43130A: pop     esi
0x43130B: pop     ebp
0x43130C: pop     ebx
0x43130D: xor     ecx, esp
0x43130F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x431314: add     esp, 108h
0x43131A: retn
