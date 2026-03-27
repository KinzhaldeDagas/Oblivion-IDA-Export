0x8F31C0: push    ebp
0x8F31C1: mov     ebp, esp
0x8F31C3: and     esp, 0FFFFFFF0h
0x8F31C6: sub     esp, 80h
0x8F31CC: fld     dword ptr ds:0B2FDC4h
0x8F31D2: mov     eax, ds:0B30AACh
0x8F31D7: fcomp   dword ptr ds:0A2FAA8h
0x8F31DD: mov     [esp+80h+var_4], eax
0x8F31E1: mov     ecx, offset off_A9B230
0x8F31E6: mov     [esp+80h+var_70], ecx
0x8F31EA: fnstsw  ax
0x8F31EC: test    ah, 5
0x8F31EF: jp      short loc_8F3202
0x8F31F1: call    sub_8F22B0
0x8F31F6: fsubr   dword ptr ds:0A2F948h
0x8F31FC: fstp    dword ptr ds:0B2FDC4h
0x8F3202: mov     al, byte ptr [esp+80h+var_70+2]
0x8F3206: mov     byte ptr [esp+80h+var_74], cl
0x8F320A: mov     cl, byte ptr [esp+80h+var_70+3]
0x8F320E: mov     byte ptr [esp+80h+var_74+1], ch
0x8F3212: mov     byte ptr [esp+80h+var_74+3], cl
0x8F3216: mov     ecx, [esp+80h+var_4]
0x8F321A: mov     byte ptr [esp+80h+var_74+2], al
0x8F321E: mov     eax, [esp+80h+var_74]
0x8F3222: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8F3227: mov     esp, ebp
0x8F3229: pop     ebp
0x8F322A: retn
