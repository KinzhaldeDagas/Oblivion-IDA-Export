0x540600: push    esi
0x540601: mov     esi, ecx
0x540603: call    InterfaceManager_IsMenuMode
0x540608: test    al, al
0x54060A: jnz     loc_5406E7
0x540610: call    sub_5AD410
0x540615: test    al, al
0x540617: jnz     loc_5406E7
0x54061D: mov     ecx, [esi]
0x54061F: test    ecx, ecx
0x540621: jz      loc_5406E7
0x540627: call    sub_6B73A0
0x54062C: test    al, al
0x54062E: jnz     short loc_540669
0x540630: mov     eax, [esi]
0x540632: mov     eax, [eax]
0x540634: mov     ecx, ds:0B33398h
0x54063A: mov     ecx, [ecx+24h]
0x54063D: push    edi
0x54063E: push    0
0x540640: push    21h ; '!'
0x540642: push    eax
0x540643: call    OSGLobals_PlaySound
0x540648: mov     edi, eax
0x54064A: test    edi, edi
0x54064C: jz      short loc_540668
0x54064E: push    ebx
0x54064F: mov     ebx, [esi]
0x540651: test    ebx, ebx
0x540653: jz      short loc_540665
0x540655: mov     ecx, ebx; this
0x540657: call    sub_6B73E0
0x54065C: push    ebx
0x54065D: call    FormHeapFree
0x540662: add     esp, 4
0x540665: mov     [esi], edi
0x540667: pop     ebx
0x540668: pop     edi
0x540669: mov     ecx, [esi]
0x54066B: test    ecx, ecx
0x54066D: jz      short loc_5406E7
0x54066F: cmp     dword ptr [esi+8], 3
0x540673: jnz     short loc_540682
0x540675: call    sub_6B7260
0x54067A: test    al, al
0x54067C: jnz     short loc_5406A6
0x54067E: push    0
0x540680: jmp     short loc_54069F
0x540682: push    3E8h
0x540687: mov     ecx, esi
0x540689: call    sub_53FD20
0x54068E: test    al, al
0x540690: jz      short loc_5406A6
0x540692: mov     ecx, [esi]
0x540694: call    sub_6B7260
0x540699: test    al, al
0x54069B: jnz     short loc_5406A6
0x54069D: push    1
0x54069F: mov     ecx, [esi]
0x5406A1: call    sub_6B7190
0x5406A6: mov     ecx, [esi]
0x5406A8: call    sub_6B72E0
0x5406AD: fld     [esp+4+arg_0]
0x5406B1: fld     st
0x5406B3: fsubp   st(2), st
0x5406B5: fxch    st(1)
0x5406B7: fstp    [esp+4+arg_0]
0x5406BB: fld     [esp+4+arg_0]
0x5406BF: fabs
0x5406C1: fstp    [esp+4+arg_0]
0x5406C5: fld     [esp+4+arg_0]
0x5406C9: fcomp   dword ptr ds:0A34BA0h
0x5406CF: fnstsw  ax
0x5406D1: test    ah, 41h
0x5406D4: jnz     short loc_5406E5
0x5406D6: push    ecx
0x5406D7: mov     ecx, [esi]
0x5406D9: fstp    [esp+8+var_8]; float
0x5406DC: call    sub_6B7280
0x5406E1: pop     esi
0x5406E2: retn    4
0x5406E5: fstp    st
0x5406E7: pop     esi
0x5406E8: retn    4
