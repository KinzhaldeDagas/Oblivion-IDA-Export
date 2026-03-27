0x591030: sub     esp, 418h
0x591036: mov     eax, ds:0B30AACh
0x59103B: xor     eax, esp
0x59103D: mov     [esp+418h+var_4], eax
0x591044: push    ebx
0x591045: mov     ebx, [esp+41Ch+arg_C]
0x59104C: push    esi
0x59104D: mov     esi, [esp+420h+Source]
0x591054: test    esi, esi
0x591056: push    edi
0x591057: mov     edi, [esp+424h+arg_4]
0x59105E: jz      loc_59133C
0x591064: mov     al, [esi]
0x591066: test    al, al
0x591068: jz      loc_59133C
0x59106E: cmp     al, 20h ; ' '
0x591070: jz      loc_59133C
0x591076: push    0FFh
0x59107B: lea     eax, [esp+428h+var_40F]
0x59107F: push    0
0x591081: push    eax
0x591082: mov     [esp+430h+Str], 0
0x591087: call    __memset
0x59108C: push    103h; Count
0x591091: lea     ecx, [esp+434h+Dest]
0x591098: push    esi; Source
0x591099: push    ecx; Dest
0x59109A: call    _strncpy
0x59109F: lea     edx, [esp+43Ch+Dest]
0x5910A6: push    offset aData_2; "Data"
0x5910AB: push    edx; Str
0x5910AC: call    _strstr
0x5910B1: lea     ecx, [esp+444h+Dest]
0x5910B8: add     esp, 20h
0x5910BB: cmp     eax, ecx
0x5910BD: jnz     short loc_5910CF
0x5910BF: push    esi
0x5910C0: push    offset aS; "%s"
0x5910C5: lea     edx, [esp+42Ch+Str]
0x5910C9: push    edx
0x5910CA: jmp     loc_5911C0
0x5910CF: lea     eax, [esp+424h+Dest]
0x5910D6: push    offset aTextures_0; "\\Textures"
0x5910DB: push    eax; Str
0x5910DC: call    _strstr
0x5910E1: lea     ecx, [esp+42Ch+Dest]
0x5910E8: add     esp, 8
0x5910EB: cmp     eax, ecx
0x5910ED: jnz     short loc_5910FF
0x5910EF: push    esi
0x5910F0: push    offset aDataS; "Data%s"
0x5910F5: lea     edx, [esp+42Ch+Str]
0x5910F9: push    edx
0x5910FA: jmp     loc_5911C0
0x5910FF: lea     eax, [esp+424h+Dest]
0x591106: push    offset aTextures; "Textures"
0x59110B: push    eax; Str
0x59110C: call    _strstr
0x591111: lea     ecx, [esp+42Ch+Dest]
0x591118: add     esp, 8
0x59111B: cmp     eax, ecx
0x59111D: jnz     short loc_59112F
0x59111F: push    esi
0x591120: push    offset aDataS_0; "Data\\%s"
0x591125: lea     edx, [esp+42Ch+Str]
0x591129: push    edx
0x59112A: jmp     loc_5911C0
0x59112F: lea     eax, [esp+424h+Dest]
0x591136: push    offset aMenus_0; "\\Menus"
0x59113B: push    eax; Str
0x59113C: call    _strstr
0x591141: lea     ecx, [esp+42Ch+Dest]
0x591148: add     esp, 8
0x59114B: cmp     eax, ecx
0x59114D: jnz     short loc_59115C
0x59114F: push    esi
0x591150: push    offset aDataTexturesS; "Data\\Textures%s"
0x591155: lea     edx, [esp+42Ch+Str]
0x591159: push    edx
0x59115A: jmp     short loc_5911C0
0x59115C: lea     eax, [esp+424h+Dest]
0x591163: push    offset aMenus_1; "Menus"
0x591168: push    eax; Str
0x591169: call    _strstr
0x59116E: lea     ecx, [esp+42Ch+Dest]
0x591175: add     esp, 8
0x591178: cmp     eax, ecx
0x59117A: jnz     short loc_591189
0x59117C: push    esi
0x59117D: push    offset aDataTextures_0; "Data\\Textures\\%s"
0x591182: lea     edx, [esp+42Ch+Str]
0x591186: push    edx
0x591187: jmp     short loc_5911C0
0x591189: lea     eax, [esp+424h+Dest]
0x591190: push    offset SubStr; SubStr
0x591195: push    eax; Str
0x591196: call    _strstr
0x59119B: add     esp, 8
0x59119E: lea     ecx, [esp+424h+Dest]
0x5911A5: cmp     eax, ecx
0x5911A7: push    esi
0x5911A8: jnz     short loc_5911B6
0x5911AA: push    offset aDataTexturesMe; "Data\\Textures\\Menus%s"
0x5911AF: lea     edx, [esp+42Ch+Str]
0x5911B3: push    edx
0x5911B4: jmp     short loc_5911C0
0x5911B6: push    offset aDataTextures_1; "Data\\Textures\\Menus\\%s"
0x5911BB: lea     eax, [esp+42Ch+Str]
0x5911BF: push    eax
0x5911C0: call    __sprintf
0x5911C5: add     esp, 0Ch
0x5911C8: lea     ecx, [esp+424h+Str]
0x5911CC: push    offset aMenus_2; "\\Menus\\"
0x5911D1: push    ecx; Str
0x5911D2: call    _strstr
0x5911D7: mov     esi, eax
0x5911D9: add     esp, 8
0x5911DC: test    esi, esi
0x5911DE: jz      short loc_591210
0x5911E0: add     esi, 7
0x5911E3: jz      short loc_591210
0x5911E5: push    esi
0x5911E6: lea     edx, [esp+428h+var_108]
0x5911ED: push    offset aDataTextures_2; "Data\\Textures\\Menus80\\%s"
0x5911F2: push    edx
0x5911F3: call    __sprintf
0x5911F8: push    esi
0x5911F9: lea     eax, [esp+434h+var_20C]
0x591200: push    offset aDataTextures_3; "Data\\Textures\\Menus50\\%s"
0x591205: push    eax
0x591206: call    __sprintf
0x59120B: add     esp, 18h
0x59120E: jmp     short loc_591242
0x591210: xor     eax, eax
0x591212: mov     cl, [esp+eax+424h+Str]
0x591216: mov     [esp+eax+424h+var_108], cl
0x59121D: add     eax, 1
0x591220: test    cl, cl
0x591222: jnz     short loc_591212
0x591224: xor     eax, eax
0x591226: jmp     short loc_591230
0x591228: align 10h
0x591230: mov     cl, [esp+eax+424h+Str]
0x591234: mov     [esp+eax+424h+var_20C], cl
0x59123B: add     eax, 1
0x59123E: test    cl, cl
0x591240: jnz     short loc_591230
0x591242: fild    dword ptr ds:0B06C50h
0x591248: fstp    dword ptr [esp+424h+var_418]
0x59124C: fld     dword ptr [esp+424h+var_418]
0x591250: fstp    [esp+424h+var_418]
0x591254: call    sub_57D7F0
0x591259: fdivr   [esp+424h+var_418]
0x59125D: lea     esi, [esp+424h+Str]
0x591261: fstp    dword ptr [esp+424h+var_418]
0x591265: fld1
0x591267: fstp    dword ptr [edi]
0x591269: fld     dword ptr ds:0A3D65Ch
0x59126F: fld     dword ptr [esp+424h+var_418]
0x591273: fcom    st(1)
0x591275: fnstsw  ax
0x591277: test    ah, 41h
0x59127A: jp      short loc_591287
0x59127C: fstp    st
0x59127E: lea     esi, [esp+424h+var_20C]
0x591285: jmp     short loc_5912B3
0x591287: fstp    st(1)
0x591289: fcomp   qword ptr ds:0A6B088h
0x59128F: fnstsw  ax
0x591291: test    ah, 41h
0x591294: jp      short loc_5912B5
0x591296: fldz
0x591298: fcomp   [esp+424h+arg_8]
0x59129F: fnstsw  ax
0x5912A1: test    ah, 41h
0x5912A4: jp      short loc_5912B5
0x5912A6: fld     dword ptr ds:0A524B0h
0x5912AC: lea     esi, [esp+424h+var_108]
0x5912B3: fstp    dword ptr [edi]
0x5912B5: mov     ecx, ds:0B33A04h
0x5912BB: mov     edx, [ecx]
0x5912BD: mov     eax, [edx+4]
0x5912C0: push    0FFFFFFFFh
0x5912C2: push    0
0x5912C4: push    0
0x5912C6: push    esi
0x5912C7: call    eax
0x5912C9: test    eax, eax
0x5912CB: jz      short loc_5912F7
0x5912CD: mov     edx, ebx
0x5912CF: mov     eax, esi
0x5912D1: sub     edx, esi
0x5912D3: mov     cl, [eax]
0x5912D5: mov     [edx+eax], cl
0x5912D8: add     eax, 1
0x5912DB: test    cl, cl
0x5912DD: jnz     short loc_5912D3
0x5912DF: pop     edi
0x5912E0: pop     esi
0x5912E1: pop     ebx
0x5912E2: mov     ecx, [esp+418h+var_4]
0x5912E9: xor     ecx, esp
0x5912EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5912F0: add     esp, 418h
0x5912F6: retn
0x5912F7: lea     ecx, [esp+424h+Str]
0x5912FB: cmp     esi, ecx
0x5912FD: jz      short loc_59133C
0x5912FF: mov     ecx, ds:0B33A04h
0x591305: mov     edx, [ecx]
0x591307: mov     edx, [edx+4]
0x59130A: push    0FFFFFFFFh
0x59130C: push    0
0x59130E: push    0
0x591310: lea     eax, [esp+430h+Str]
0x591314: push    eax
0x591315: call    edx
0x591317: test    eax, eax
0x591319: jz      short loc_59133C
0x59131B: fld1
0x59131D: lea     eax, [esp+424h+Str]
0x591321: mov     edx, ebx
0x591323: fstp    dword ptr [edi]
0x591325: mov     ecx, eax
0x591327: sub     edx, ecx
0x591329: lea     esp, [esp+0]
0x591330: mov     cl, [eax]
0x591332: mov     [edx+eax], cl
0x591335: add     eax, 1
0x591338: test    cl, cl
0x59133A: jnz     short loc_591330
0x59133C: mov     ecx, [esp+424h+var_4]
0x591343: pop     edi
0x591344: pop     esi
0x591345: pop     ebx
0x591346: xor     ecx, esp
0x591348: call    @__security_check_cookie@4; __security_check_cookie(x)
0x59134D: add     esp, 418h
0x591353: retn
