0x92B470: push    ebp
0x92B471: mov     ebp, esp
0x92B473: and     esp, 0FFFFFFF0h
0x92B476: sub     esp, 30h
0x92B479: mov     eax, ds:0B30AACh
0x92B47E: movaps  xmm2, xmmword ptr ds:0BA7A40h
0x92B485: movaps  xmm3, xmmword ptr ds:0A97DD0h
0x92B48C: mov     [esp+30h+var_4], eax
0x92B490: mov     [esp+30h+var_28], 3F800000h
0x92B498: movss   xmm1, [esp+30h+var_28]
0x92B49E: mov     [esp+30h+var_2C], 41200000h
0x92B4A6: mov     [esp+30h+var_24], 41300000h
0x92B4AE: shufps  xmm1, xmm1, 0
0x92B4B2: mov     ecx, 17h
0x92B4B7: jmp     short loc_92B4C0
0x92B4B9: align 10h
0x92B4C0: fld     [esp+30h+var_24]
0x92B4C4: fadd    [esp+30h+var_2C]
0x92B4C8: fmul    dword ptr ds:0A3D65Ch
0x92B4CE: fst     [esp+30h+var_28]
0x92B4D2: movss   xmm0, [esp+30h+var_28]
0x92B4D8: shufps  xmm0, xmm0, 0
0x92B4DC: addps   xmm0, xmm2
0x92B4DF: mulps   xmm0, xmm1
0x92B4E2: addps   xmm0, xmm3
0x92B4E5: movaps  [esp+30h+var_20], xmm0
0x92B4EA: mov     eax, dword ptr [esp+30h+var_20]
0x92B4EE: shr     eax, 6
0x92B4F1: cmp     ax, 0Bh
0x92B4F5: jnb     short loc_92B4FD
0x92B4F7: fstp    [esp+30h+var_2C]
0x92B4FB: jmp     short loc_92B501
0x92B4FD: fstp    [esp+30h+var_24]
0x92B501: dec     ecx
0x92B502: jnz     short loc_92B4C0
0x92B504: fld     [esp+30h+var_24]
0x92B508: mov     ecx, [esp+30h+var_4]
0x92B50C: fadd    [esp+30h+var_2C]
0x92B510: fmul    dword ptr ds:0A3D65Ch
0x92B516: fsub    dword ptr ds:0A6BC94h
0x92B51C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x92B521: mov     esp, ebp
0x92B523: pop     ebp
0x92B524: retn
