0x7493D0: cmp     byte ptr ds:0B4081Ch, 0
0x7493D7: push    esi
0x7493D8: push    edi
0x7493D9: mov     edi, ecx
0x7493DB: jz      short loc_749448
0x7493DD: mov     eax, ds:0B3F940h
0x7493E2: test    eax, eax
0x7493E4: jz      short loc_749448
0x7493E6: mov     al, [eax+1B0h]
0x7493EC: test    al, al
0x7493EE: jz      short loc_749448
0x7493F0: fldz
0x7493F2: mov     ecx, [edi+0B4h]
0x7493F8: fcomp   dword ptr [ecx+18h]
0x7493FB: fnstsw  ax
0x7493FD: test    ah, 5
0x749400: jp      short loc_749448
0x749402: call    dword ptr ds:0A2808Ch
0x749408: cmp     eax, ds:0B40820h
0x74940E: jnz     short loc_749448
0x749410: call    sub_75E2E0
0x749415: mov     esi, eax
0x749417: test    esi, esi
0x749419: jz      short loc_749448
0x74941B: fld     [esp+8+arg_0]
0x74941F: push    ecx
0x749420: fstp    [esp+0Ch+var_C]; float
0x749423: push    edi; int
0x749424: mov     ecx, esi
0x749426: call    sub_75DFF0
0x74942B: mov     ecx, ds:0B3F940h
0x749431: mov     edx, [ecx]
0x749433: mov     eax, [edx+4Ch]
0x749436: push    3
0x749438: push    esi
0x749439: call    eax
0x74943B: test    al, al
0x74943D: jnz     short loc_74945C
0x74943F: mov     edx, [esi]
0x749441: mov     eax, [edx+54h]
0x749444: mov     ecx, esi
0x749446: call    eax
0x749448: mov     edx, [edi]
0x74944A: fld     [esp+8+arg_0]
0x74944E: mov     eax, [edx+9Ch]
0x749454: push    ecx
0x749455: mov     ecx, edi
0x749457: fstp    [esp+0Ch+var_C]
0x74945A: call    eax
0x74945C: pop     edi
0x74945D: pop     esi
0x74945E: retn    4
