0x93C0C0: push    ebp
0x93C0C1: mov     ebp, esp
0x93C0C3: and     esp, 0FFFFFFF0h
0x93C0C6: sub     esp, 6Ch
0x93C0C9: push    edi
0x93C0CA: mov     edi, eax
0x93C0CC: movaps  xmm6, xmmword ptr [edi+10h]
0x93C0D0: movaps  xmm4, xmmword ptr [edi]
0x93C0D3: movaps  xmm5, xmmword ptr [edi+30h]
0x93C0D7: movaps  xmm7, xmmword ptr [edi+20h]
0x93C0DB: movaps  xmm2, xmm6
0x93C0DE: subps   xmm2, xmm4
0x93C0E1: movaps  xmm1, xmm4
0x93C0E4: subps   xmm1, xmm7
0x93C0E7: movaps  xmm3, xmm5
0x93C0EA: subps   xmm3, xmm4
0x93C0ED: movaps  xmm4, xmm5
0x93C0F0: subps   xmm4, xmm6
0x93C0F3: subps   xmm5, xmm7
0x93C0F6: movaps  xmm0, xmm7
0x93C0F9: subps   xmm0, xmm6
0x93C0FC: movaps  xmm7, xmm0
0x93C0FF: shufps  xmm7, xmm0, 0D2h ; 'Ò'
0x93C103: movaps  xmm6, xmm4
0x93C106: shufps  xmm6, xmm4, 0C9h ; 'É'
0x93C10A: mulps   xmm7, xmm6
0x93C10D: mov     eax, [ebp+arg_0]
0x93C110: movaps  xmm6, xmm4
0x93C113: shufps  xmm6, xmm4, 0D2h ; 'Ò'
0x93C117: movaps  xmm4, xmm0
0x93C11A: shufps  xmm4, xmm0, 0C9h ; 'É'
0x93C11E: mulps   xmm4, xmm6
0x93C121: movaps  xmm6, xmm1
0x93C124: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x93C128: movaps  xmm0, xmm5
0x93C12B: shufps  xmm0, xmm5, 0C9h ; 'É'
0x93C12F: mulps   xmm6, xmm0
0x93C132: movaps  xmm0, xmm5
0x93C135: shufps  xmm0, xmm5, 0D2h ; 'Ò'
0x93C139: movaps  xmm5, xmm1
0x93C13C: shufps  xmm5, xmm1, 0C9h ; 'É'
0x93C140: mulps   xmm5, xmm0
0x93C143: movaps  xmm1, xmm2
0x93C146: shufps  xmm1, xmm2, 0D2h ; 'Ò'
0x93C14A: movaps  xmm0, xmm3
0x93C14D: shufps  xmm0, xmm3, 0C9h ; 'É'
0x93C151: mulps   xmm1, xmm0
0x93C154: movaps  xmm0, xmm1
0x93C157: movaps  xmm1, xmm3
0x93C15A: shufps  xmm1, xmm3, 0D2h ; 'Ò'
0x93C15E: movaps  xmm3, xmm2
0x93C161: shufps  xmm3, xmm2, 0C9h ; 'É'
0x93C165: movaps  xmm2, xmm3
0x93C168: movaps  xmm3, xmmword ptr [ebx]
0x93C16B: mulps   xmm2, xmm1
0x93C16E: movaps  xmm1, xmm2
0x93C171: movaps  xmm2, xmmword ptr [edi+30h]
0x93C175: subps   xmm1, xmm0
0x93C178: subps   xmm3, xmm2
0x93C17B: subps   xmm4, xmm7
0x93C17E: subps   xmm5, xmm6
0x93C181: mov     [esp+70h+var_64], eax
0x93C185: movss   xmm0, [esp+70h+var_64]
0x93C18B: movaps  xmm2, xmm0
0x93C18E: shufps  xmm2, xmm0, 0
0x93C192: movaps  xmm0, xmm2
0x93C195: mulps   xmm0, xmm3
0x93C198: movaps  xmm2, xmm4
0x93C19B: movaps  [esp+70h+var_30], xmm4
0x93C1A0: movaps  xmm3, xmm1
0x93C1A3: movaps  xmm7, xmm1
0x93C1A6: shufps  xmm4, xmm5, 0EEh ; 'î'
0x93C1AA: shufps  xmm3, xmm1, 44h ; 'D'
0x93C1AE: shufps  xmm7, xmm1, 0EEh ; 'î'
0x93C1B2: movaps  [esp+70h+var_20], xmm5
0x93C1B7: movaps  [esp+70h+var_10], xmm1
0x93C1BC: shufps  xmm2, xmm5, 44h ; 'D'
0x93C1C0: movaps  xmm6, xmm0
0x93C1C3: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x93C1C7: shufps  xmm4, xmm7, 88h ; 'ˆ'
0x93C1CB: movaps  xmm1, xmm0
0x93C1CE: movaps  xmm5, xmm2
0x93C1D1: mulps   xmm4, xmm6
0x93C1D4: shufps  xmm1, xmm0, 55h ; 'U'
0x93C1D8: shufps  xmm5, xmm3, 0DDh ; 'Ý'
0x93C1DC: mulps   xmm5, xmm1
0x93C1DF: movaps  xmm1, xmm0
0x93C1E2: shufps  xmm1, xmm0, 0
0x93C1E6: shufps  xmm2, xmm3, 88h ; 'ˆ'
0x93C1EA: mulps   xmm2, xmm1
0x93C1ED: movaps  xmm1, xmmword ptr ds:0A372D0h
0x93C1F4: movaps  xmm0, xmm2
0x93C1F7: addps   xmm0, xmm5
0x93C1FA: addps   xmm0, xmm4
0x93C1FD: movaps  xmm2, xmm0
0x93C200: movaps  [esp+70h+var_50], xmm0
0x93C205: andps   xmm2, xmm1
0x93C208: mulps   xmm0, xmm2
0x93C20B: movaps  [esp+70h+var_40], xmm0
0x93C210: lea     edx, [esp+70h+var_30]
0x93C214: xor     ecx, ecx
0x93C216: jmp     short loc_93C220
0x93C218: align 10h
0x93C220: movaps  xmm0, xmmword ptr [edx]
0x93C223: fld     dword ptr ds:0A2FAA8h
0x93C229: mulps   xmm0, xmm0
0x93C22C: movaps  xmm1, xmm0
0x93C22F: shufps  xmm1, xmm0, 55h ; 'U'
0x93C233: movaps  xmm2, xmm0
0x93C236: lea     eax, [esp+70h+var_64]
0x93C23A: addss   xmm1, xmm0
0x93C23E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93C242: addss   xmm2, xmm1
0x93C246: movss   dword ptr [eax], xmm2
0x93C24A: fld     [esp+70h+var_64]
0x93C24E: fucompp
0x93C250: fnstsw  ax
0x93C252: test    ah, 44h
0x93C255: jnp     short loc_93C265
0x93C257: fld     dword ptr [esp+ecx+70h+var_40]
0x93C25B: fdiv    [esp+70h+var_64]
0x93C25F: fstp    dword ptr [esp+ecx+70h+var_60]
0x93C263: jmp     short loc_93C26D
0x93C265: mov     dword ptr [esp+ecx+70h+var_60], 7F7FFFFFh
0x93C26D: add     ecx, 4
0x93C270: add     edx, 10h
0x93C273: cmp     ecx, 0Ch
0x93C276: jl      short loc_93C220
0x93C278: fld     dword ptr [esp+70h+var_60+4]
0x93C27C: mov     ecx, 1
0x93C281: fld     dword ptr [esp+70h+var_60]
0x93C285: fcomp   st(1)
0x93C287: fnstsw  ax
0x93C289: test    ah, 41h
0x93C28C: jnz     short loc_93C2A0
0x93C28E: mov     ecx, dword ptr [esp+70h+var_60]
0x93C292: fstp    dword ptr [esp+70h+var_60]
0x93C296: mov     [esp+70h+var_64], ecx
0x93C29A: fld     [esp+70h+var_64]
0x93C29E: xor     ecx, ecx
0x93C2A0: fcom    dword ptr [esp+70h+var_58]
0x93C2A4: fnstsw  ax
0x93C2A6: test    ah, 41h
0x93C2A9: jnz     short loc_93C2D0
0x93C2AB: fstp    [esp+70h+var_64]
0x93C2AF: mov     edx, [esp+70h+var_64]
0x93C2B3: fld     dword ptr [esp+70h+var_58]
0x93C2B7: mov     dword ptr [esp+70h+var_58], edx
0x93C2BB: fld     dword ptr [esp+70h+var_60]
0x93C2BF: fcomp   st(1)
0x93C2C1: fnstsw  ax
0x93C2C3: test    ah, 41h
0x93C2C6: jnz     short loc_93C2D5
0x93C2C8: fstp    st
0x93C2CA: fld     dword ptr [esp+70h+var_60]
0x93C2CE: jmp     short loc_93C2D5
0x93C2D0: mov     ecx, 2
0x93C2D5: fld     dword ptr [esp+70h+var_58]
0x93C2D9: fcomp   dword ptr ds:0A97450h
0x93C2DF: fnstsw  ax
0x93C2E1: test    ah, 5
0x93C2E4: jp      short loc_93C2F2
0x93C2E6: fstp    st
0x93C2E8: mov     eax, 0FFFFFFFFh
0x93C2ED: pop     edi
0x93C2EE: mov     esp, ebp
0x93C2F0: pop     ebp
0x93C2F1: retn
0x93C2F2: fld     dword ptr ds:0A56E28h
0x93C2F8: fmul    st, st(1)
0x93C2FA: fld     dword ptr [esp+70h+var_58]
0x93C2FE: fcompp
0x93C300: fnstsw  ax
0x93C302: fstp    st
0x93C304: test    ah, 41h
0x93C307: jnz     short loc_93C310
0x93C309: mov     eax, ecx
0x93C30B: pop     edi
0x93C30C: mov     esp, ebp
0x93C30E: pop     ebp
0x93C30F: retn
0x93C310: mov     ecx, dword ptr [esp+70h+var_50+4]
0x93C314: mov     eax, dword ptr [esp+70h+var_50]
0x93C318: mov     edx, dword ptr [esp+70h+var_50+8]
0x93C31C: mov     dword ptr [esp+70h+var_60+4], ecx
0x93C320: lea     ecx, [esp+70h+var_60]
0x93C324: mov     dword ptr [esp+70h+var_60], eax
0x93C328: mov     eax, dword ptr [esp+70h+var_50+0Ch]
0x93C32C: push    ecx
0x93C32D: push    ebx
0x93C32E: mov     dword ptr [esp+78h+var_58], edx
0x93C332: mov     dword ptr [esp+78h+var_58+4], eax
0x93C336: call    sub_93AE50
0x93C33B: add     esp, 8
0x93C33E: pop     edi
0x93C33F: mov     esp, ebp
0x93C341: pop     ebp
0x93C342: retn
