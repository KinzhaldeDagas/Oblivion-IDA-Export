0x571660: fld     [esp+arg_8]
0x571664: push    esi
0x571665: fld     [esp+4+arg_4]
0x571669: push    edi
0x57166A: mov     edi, [esp+8+arg_C]
0x57166E: xor     edx, edx
0x571670: lea     esi, [ecx+8]
0x571673: fld     dword ptr [esi-8]
0x571676: fld     st(1)
0x571678: fucompp
0x57167A: fnstsw  ax
0x57167C: test    ah, 44h
0x57167F: jp      short loc_571693
0x571681: fld     dword ptr [esi-4]
0x571684: fld     st(2)
0x571686: fucompp
0x571688: fnstsw  ax
0x57168A: test    ah, 44h
0x57168D: jp      short loc_571693
0x57168F: cmp     [esi], edi
0x571691: jz      short loc_5716B3
0x571693: add     edx, 1
0x571696: add     esi, 1Ch
0x571699: cmp     edx, 0C8h ; 'È'
0x57169F: jl      short loc_571673
0x5716A1: mov     edx, [esp+8+arg_0]
0x5716A5: fstp    st(1)
0x5716A7: pop     edi
0x5716A8: fstp    st
0x5716AA: mov     byte ptr [edx], 0
0x5716AD: xor     al, al
0x5716AF: pop     esi
0x5716B0: retn    10h
0x5716B3: mov     edi, [esp+8+arg_0]
0x5716B7: fstp    st(1)
0x5716B9: test    edi, edi
0x5716BB: fstp    st
0x5716BD: jz      short loc_57170C
0x5716BF: lea     eax, ds:0[edx*8]
0x5716C6: sub     eax, edx
0x5716C8: lea     edx, [ecx+eax*4+10h]
0x5716CC: movzx   eax, word ptr [edx+4]
0x5716D0: cmp     ax, 0FFFFh
0x5716D4: jnz     short loc_5716ED
0x5716D6: mov     eax, [edx]
0x5716D8: lea     esi, [eax+1]
0x5716DB: jmp     short loc_5716E0
0x5716DD: align 10h
0x5716E0: mov     cl, [eax]
0x5716E2: add     eax, 1
0x5716E5: test    cl, cl
0x5716E7: jnz     short loc_5716E0
0x5716E9: sub     eax, esi
0x5716EB: jmp     short loc_5716F0
0x5716ED: movzx   eax, ax
0x5716F0: test    eax, eax
0x5716F2: jz      short loc_57170C
0x5716F4: mov     ecx, [edx]
0x5716F6: push    7FEh; size_t
0x5716FB: push    ecx; unsigned __int8 *
0x5716FC: push    edi; unsigned __int8 *
0x5716FD: call    __mbsnbcpy
0x571702: add     esp, 0Ch
0x571705: pop     edi
0x571706: mov     al, 1
0x571708: pop     esi
0x571709: retn    10h
0x57170C: mov     byte ptr [edi], 0
0x57170F: pop     edi
0x571710: mov     al, 1
0x571712: pop     esi
0x571713: retn    10h
