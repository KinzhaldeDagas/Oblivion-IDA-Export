0x6ED090: mov     edx, [esp+arg_0]
0x6ED094: fld     dword ptr [edx]
0x6ED096: push    esi
0x6ED097: fld     dword ptr ds:0A7DEB4h
0x6ED09D: mov     esi, [esp+4+arg_4]
0x6ED0A1: fld     st
0x6ED0A3: fucomp  st(2)
0x6ED0A5: fnstsw  ax
0x6ED0A7: fstp    st(1)
0x6ED0A9: test    ah, 44h
0x6ED0AC: jp      short loc_6ED0C7
0x6ED0AE: fld     dword ptr [esi]
0x6ED0B0: fxch    st(1)
0x6ED0B2: fchs
0x6ED0B4: fucompp
0x6ED0B6: fnstsw  ax
0x6ED0B8: test    ah, 44h
0x6ED0BB: jp      short loc_6ED0C9
0x6ED0BD: fldz
0x6ED0BF: fst     dword ptr [edx]
0x6ED0C1: fstp    dword ptr [esi]
0x6ED0C3: pop     esi
0x6ED0C4: retn    8
0x6ED0C7: fstp    st
0x6ED0C9: fld     dword ptr [ecx+0Ch]
0x6ED0CC: fstp    dword ptr [edx]
0x6ED0CE: fld     dword ptr [ecx+10h]
0x6ED0D1: fstp    dword ptr [esi]
0x6ED0D3: pop     esi
0x6ED0D4: retn    8
