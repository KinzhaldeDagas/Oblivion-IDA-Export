0x8AC640: sub     esp, 8
0x8AC643: push    ebx
0x8AC644: push    ebp
0x8AC645: mov     ebx, ecx
0x8AC647: mov     ebp, [ebx+78h]
0x8AC64A: push    esi
0x8AC64B: or      eax, 0FFFFFFFFh
0x8AC64E: xor     esi, esi
0x8AC650: test    ebp, ebp
0x8AC652: mov     [esp+14h+var_4], eax
0x8AC656: mov     [esp+14h+var_8], 3DCCCCCDh
0x8AC65E: jle     short loc_8AC695
0x8AC660: push    edi
0x8AC661: mov     edi, [ebx+74h]
0x8AC664: mov     eax, [esp+18h+arg_0]
0x8AC668: push    edi
0x8AC669: push    eax
0x8AC66A: mov     ecx, ebx
0x8AC66C: call    sub_8ABF70
0x8AC671: fcom    [esp+18h+var_8]
0x8AC675: fnstsw  ax
0x8AC677: test    ah, 5
0x8AC67A: jp      short loc_8AC686
0x8AC67C: fstp    [esp+18h+var_8]
0x8AC680: mov     [esp+18h+var_4], esi
0x8AC684: jmp     short loc_8AC688
0x8AC686: fstp    st
0x8AC688: inc     esi
0x8AC689: add     edi, 30h ; '0'
0x8AC68C: cmp     esi, ebp
0x8AC68E: jl      short loc_8AC664
0x8AC690: mov     eax, [esp+18h+var_4]
0x8AC694: pop     edi
0x8AC695: pop     esi
0x8AC696: pop     ebp
0x8AC697: pop     ebx
0x8AC698: add     esp, 8
0x8AC69B: retn    4
