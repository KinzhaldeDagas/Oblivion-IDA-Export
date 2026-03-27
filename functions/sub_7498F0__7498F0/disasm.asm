0x7498F0: push    ebx
0x7498F1: push    esi
0x7498F2: push    edi
0x7498F3: mov     edi, ecx
0x7498F5: mov     ebx, [edi+0B4h]
0x7498FB: mov     eax, [ebx]
0x7498FD: mov     edx, [eax+5Ch]
0x749900: mov     ecx, ebx
0x749902: call    edx
0x749904: fld     [esp+0Ch+arg_0]
0x749908: cmp     byte ptr [edi+0ECh], 0
0x74990F: jnz     short loc_749920
0x749911: fld     dword ptr [edi+0E8h]
0x749917: fcomp   st(1)
0x749919: fnstsw  ax
0x74991B: test    ah, 41h
0x74991E: jnz     short loc_749934
0x749920: mov     ecx, edi
0x749922: fstp    st
0x749924: call    sub_749470
0x749929: fld     [esp+0Ch+arg_0]
0x74992D: mov     byte ptr [edi+0ECh], 0
0x749934: fld     dword ptr [edi+0E8h]
0x74993A: fld     dword ptr ds:0A7DEB4h
0x749940: fchs
0x749942: fucompp
0x749944: fnstsw  ax
0x749946: test    ah, 44h
0x749949: jp      short loc_749951
0x74994B: fst     dword ptr [edi+0E8h]
0x749951: mov     esi, [edi+0C8h]
0x749957: test    esi, esi
0x749959: jz      short loc_74997D
0x74995B: mov     ecx, [esi+8]
0x74995E: cmp     byte ptr [ecx+14h], 0
0x749962: lea     eax, [esi+8]
0x749965: mov     esi, [esi]
0x749967: jz      short loc_749979
0x749969: mov     eax, [ecx]
0x74996B: mov     edx, [eax+4Ch]
0x74996E: push    ebx
0x74996F: push    ecx
0x749970: fstp    [esp+14h+var_14]
0x749973: call    edx
0x749975: fld     [esp+0Ch+arg_0]
0x749979: test    esi, esi
0x74997B: jnz     short loc_74995B
0x74997D: or      word ptr [ebx+2Eh], 7
0x749982: fstp    dword ptr [edi+0E8h]
0x749988: pop     edi
0x749989: pop     esi
0x74998A: pop     ebx
0x74998B: retn    4
