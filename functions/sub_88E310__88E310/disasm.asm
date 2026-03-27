0x88E310: push    ebp
0x88E311: mov     ebp, esp
0x88E313: and     esp, 0FFFFFFF0h
0x88E316: push    0FFFFFFFFh
0x88E318: push    offset SEH_88E310
0x88E31D: mov     eax, large fs:0
0x88E323: push    eax
0x88E324: sub     esp, 138h
0x88E32A: mov     eax, ds:0B30AACh
0x88E32F: xor     eax, esp
0x88E331: mov     [esp+144h+var_14], eax
0x88E338: push    ebx
0x88E339: push    esi
0x88E33A: push    edi
0x88E33B: mov     eax, ds:0B30AACh
0x88E340: xor     eax, esp
0x88E342: push    eax
0x88E343: lea     eax, [esp+154h+var_C]
0x88E34A: mov     large fs:0, eax
0x88E350: fld     dword ptr ds:0B2EFC4h
0x88E356: movss   xmm1, dword ptr ds:0A9631Ch
0x88E35E: fstp    [esp+154h+var_13C]
0x88E362: mov     esi, ecx
0x88E364: fldz
0x88E366: movaps  xmm2, xmmword ptr [esi+70h]
0x88E36A: fstp    [esp+154h+var_124]
0x88E36E: xorps   xmm0, xmm0
0x88E371: fld1
0x88E373: movss   xmm0, xmm1
0x88E377: movaps  xmm1, xmmword ptr [esi+80h]
0x88E37E: fst     [esp+154h+var_130]
0x88E382: lea     eax, [esp+154h+var_110]
0x88E386: fst     [esp+154h+var_12C]
0x88E38A: shufps  xmm0, xmm0, 0
0x88E38E: fstp    [esp+154h+var_128]
0x88E392: subps   xmm1, xmm2
0x88E395: mulps   xmm1, xmm0
0x88E398: xor     ebx, ebx
0x88E39A: push    eax
0x88E39B: lea     ecx, [esp+158h+var_130]
0x88E39F: movaps  [esp+158h+var_110], xmm1
0x88E3A4: mov     [esp+158h+var_140], ebx
0x88E3A8: call    sub_47DCD0
0x88E3AD: mov     ecx, ds:0BA7D98h
0x88E3B3: mov     edx, [ecx]
0x88E3B5: mov     eax, [edx+10h]
0x88E3B8: push    24h ; '$'
0x88E3BA: push    20h ; ' '
0x88E3BC: call    eax
0x88E3BE: mov     word ptr [eax+4], 20h ; ' '
0x88E3C4: mov     [esp+154h+var_144], eax
0x88E3C8: fld     [esp+154h+var_130]
0x88E3CC: fstp    [esp+154h+var_120]
0x88E3D0: push    ecx
0x88E3D1: fld     [esp+158h+var_12C]
0x88E3D5: lea     ecx, [esp+158h+var_120]
0x88E3D9: fstp    [esp+158h+var_11C]
0x88E3DD: mov     [esp+158h+var_4], ebx
0x88E3E4: fld     [esp+158h+var_128]
0x88E3E8: fstp    [esp+158h+var_118]
0x88E3EC: fld     [esp+158h+var_124]
0x88E3F0: fstp    [esp+158h+var_114]
0x88E3F4: fld     [esp+158h+var_13C]
0x88E3F8: fstp    [esp+158h+var_158]
0x88E3FB: push    ecx
0x88E3FC: mov     ecx, eax
0x88E3FE: call    sub_8CDFE0
0x88E403: lea     ecx, [esp+154h+var_100]
0x88E407: mov     edi, eax
0x88E409: mov     [esp+154h+var_4], 0FFFFFFFFh
0x88E414: call    sub_8A5790
0x88E419: fldz
0x88E41B: lea     edx, [esi+14h]
0x88E41E: fstp    [esp+154h+var_50]
0x88E425: test    edx, edx
0x88E427: mov     [esp+154h+var_4], 1
0x88E432: mov     [esp+154h+var_30], 6
0x88E43A: jz      short loc_88E443
0x88E43C: mov     eax, [esi+30h]
0x88E43F: mov     [esp+154h+var_100], eax
0x88E443: push    1Ch; Size
0x88E445: mov     [esp+158h+var_FC], edi
0x88E449: call    FormHeapAlloc
0x88E44E: add     esp, 4
0x88E451: mov     [esp+154h+var_144], eax
0x88E455: cmp     eax, ebx
0x88E457: mov     byte ptr [esp+154h+var_4], 2
0x88E45F: jz      short loc_88E473
0x88E461: lea     ecx, [esp+154h+var_100]
0x88E465: push    ecx
0x88E466: mov     ecx, eax
0x88E468: call    sub_533290
0x88E46D: mov     [esp+154h+var_144], eax
0x88E471: jmp     short loc_88E479
0x88E473: mov     [esp+154h+var_144], ebx
0x88E477: mov     eax, ebx
0x88E479: mov     ebx, [esi+0B0h]
0x88E47F: cmp     ebx, eax
0x88E481: mov     byte ptr [esp+154h+var_4], 1
0x88E489: jz      short loc_88E4C3
0x88E48B: test    ebx, ebx
0x88E48D: jz      short loc_88E4AF
0x88E48F: lea     edx, [ebx+4]
0x88E492: push    edx; lpAddend
0x88E493: call    dword ptr ds:0A2807Ch
0x88E499: test    eax, eax
0x88E49B: jnz     short loc_88E4AB
0x88E49D: test    ebx, ebx
0x88E49F: jz      short loc_88E4AB
0x88E4A1: mov     eax, [ebx]
0x88E4A3: mov     edx, [eax]
0x88E4A5: push    1
0x88E4A7: mov     ecx, ebx
0x88E4A9: call    edx
0x88E4AB: mov     eax, [esp+154h+var_144]
0x88E4AF: test    eax, eax
0x88E4B1: mov     [esi+0B0h], eax
0x88E4B7: jz      short loc_88E4C3
0x88E4B9: add     eax, 4
0x88E4BC: push    eax; lpAddend
0x88E4BD: call    dword ptr ds:0A28078h
0x88E4C3: cmp     word ptr [edi+4], 0
0x88E4C8: jz      short loc_88E4E2
0x88E4CA: add     word ptr [edi+6], 0FFFFh
0x88E4CF: movzx   eax, word ptr [edi+6]
0x88E4D3: test    ax, ax
0x88E4D6: jnz     short loc_88E4E2
0x88E4D8: mov     eax, [edi]
0x88E4DA: mov     edx, [eax]
0x88E4DC: push    1
0x88E4DE: mov     ecx, edi
0x88E4E0: call    edx
0x88E4E2: mov     eax, [esp+154h+var_EC]
0x88E4E6: test    eax, eax
0x88E4E8: mov     [esp+154h+var_4], 0FFFFFFFFh
0x88E4F3: js      short loc_88E52D
0x88E4F5: mov     ecx, ds:0BA9DE4h
0x88E4FB: mov     edx, large fs:2Ch
0x88E502: mov     ecx, [edx+ecx*4]
0x88E505: mov     ecx, [ecx+19Ch]
0x88E50B: test    ecx, ecx
0x88E50D: jnz     short loc_88E515
0x88E50F: mov     ecx, ds:0BA7D9Ch
0x88E515: mov     edx, [esp+154h+var_F4]
0x88E519: and     eax, 3FFFFFFFh
0x88E51E: add     eax, eax
0x88E520: add     eax, eax
0x88E522: push    14h
0x88E524: add     eax, eax
0x88E526: push    eax
0x88E527: push    edx
0x88E528: call    sub_8A75D0
0x88E52D: mov     ecx, [esp+154h+var_C]
0x88E534: mov     large fs:0, ecx
0x88E53B: pop     ecx
0x88E53C: pop     edi
0x88E53D: pop     esi
0x88E53E: pop     ebx
0x88E53F: mov     ecx, [esp+144h+var_14]
0x88E546: xor     ecx, esp
0x88E548: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88E54D: mov     esp, ebp
0x88E54F: pop     ebp
0x88E550: retn
