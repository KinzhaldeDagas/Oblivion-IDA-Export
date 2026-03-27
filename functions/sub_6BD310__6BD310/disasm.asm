0x6BD310: mov     ecx, [esp+arg_4]
0x6BD314: sub     esp, 1Ch
0x6BD317: push    ebx
0x6BD318: push    ebp
0x6BD319: push    esi
0x6BD31A: lea     eax, [ecx-1]
0x6BD31D: test    eax, eax
0x6BD31F: push    edi
0x6BD320: mov     edi, [esp+2Ch+arg_0]
0x6BD324: jbe     short loc_6BD399
0x6BD326: movzx   ebx, [esp+2Ch+arg_8]
0x6BD32B: lea     esi, [ebx+edi+4]
0x6BD32F: lea     ebp, [edi+0Ch]
0x6BD332: mov     [esp+2Ch+var_18], eax
0x6BD336: fld     dword ptr [esi+4]
0x6BD339: fmul    dword ptr [ebp-4]
0x6BD33C: fld     dword ptr [ebp-8]
0x6BD33F: fmul    dword ptr [esi]
0x6BD341: faddp   st(1), st
0x6BD343: fld     dword ptr [esi+8]
0x6BD346: fmul    dword ptr [ebp+0]
0x6BD349: faddp   st(1), st
0x6BD34B: fld     dword ptr [esi+0Ch]
0x6BD34E: fmul    dword ptr [ebp+4]
0x6BD351: faddp   st(1), st
0x6BD353: fstp    [esp+2Ch+var_1C]
0x6BD357: fld     [esp+2Ch+var_1C]
0x6BD35B: fcomp   dword ptr ds:0A2FAA8h
0x6BD361: fnstsw  ax
0x6BD363: test    ah, 5
0x6BD366: jp      short loc_6BD38E
0x6BD368: lea     eax, [esp+2Ch+var_10]
0x6BD36C: push    eax
0x6BD36D: mov     ecx, esi
0x6BD36F: call    sub_714CC0
0x6BD374: mov     ecx, [eax]
0x6BD376: mov     [esi], ecx
0x6BD378: mov     edx, [eax+4]
0x6BD37B: mov     [esi+4], edx
0x6BD37E: mov     ecx, [eax+8]
0x6BD381: mov     [esi+8], ecx
0x6BD384: mov     edx, [eax+0Ch]
0x6BD387: mov     ecx, [esp+2Ch+arg_4]
0x6BD38B: mov     [esi+0Ch], edx
0x6BD38E: add     esi, ebx
0x6BD390: add     ebp, ebx
0x6BD392: sub     [esp+2Ch+var_18], 1
0x6BD397: jnz     short loc_6BD336
0x6BD399: fld     dword ptr ds:0A30634h
0x6BD39F: xor     eax, eax
0x6BD3A1: cmp     ecx, 4
0x6BD3A4: fld1
0x6BD3A6: jl      loc_6BD4AE
0x6BD3AC: movzx   eax, [esp+2Ch+arg_8]
0x6BD3B1: lea     ebx, [edi+eax*2]
0x6BD3B4: add     ecx, 0FFFFFFFCh
0x6BD3B7: lea     ebx, [eax+ebx+4]
0x6BD3BB: shr     ecx, 2
0x6BD3BE: mov     [esp+2Ch+var_18], ebx
0x6BD3C2: add     ecx, 1
0x6BD3C5: lea     edx, ds:0[eax*4]
0x6BD3CC: lea     ebp, [edi+eax*2+4]
0x6BD3D0: lea     ebx, [eax+edi+4]
0x6BD3D4: lea     eax, ds:0[ecx*4]
0x6BD3DB: lea     esi, [edi+4]
0x6BD3DE: mov     [esp+2Ch+var_14], eax
0x6BD3E2: fld     dword ptr [esi]
0x6BD3E4: fstp    [esp+2Ch+var_1C]
0x6BD3E8: fld     [esp+2Ch+var_1C]
0x6BD3EC: fcom    st(2)
0x6BD3EE: fnstsw  ax
0x6BD3F0: test    ah, 5
0x6BD3F3: jp      short loc_6BD3FD
0x6BD3F5: fstp    st
0x6BD3F7: fxch    st(1)
0x6BD3F9: fst     dword ptr [esi]
0x6BD3FB: jmp     short loc_6BD40A
0x6BD3FD: fcomp   st(1)
0x6BD3FF: fnstsw  ax
0x6BD401: test    ah, 41h
0x6BD404: jnz     short loc_6BD408
0x6BD406: fst     dword ptr [esi]
0x6BD408: fxch    st(1)
0x6BD40A: fld     dword ptr [ebx]
0x6BD40C: fstp    [esp+2Ch+var_1C]
0x6BD410: fld     [esp+2Ch+var_1C]
0x6BD414: fcom    st(1)
0x6BD416: fnstsw  ax
0x6BD418: test    ah, 5
0x6BD41B: jp      short loc_6BD423
0x6BD41D: fstp    st
0x6BD41F: fst     dword ptr [ebx]
0x6BD421: jmp     short loc_6BD432
0x6BD423: fcomp   st(2)
0x6BD425: fnstsw  ax
0x6BD427: test    ah, 41h
0x6BD42A: jnz     short loc_6BD432
0x6BD42C: fxch    st(1)
0x6BD42E: fst     dword ptr [ebx]
0x6BD430: fxch    st(1)
0x6BD432: fld     dword ptr [ebp+0]
0x6BD435: fstp    [esp+2Ch+var_1C]
0x6BD439: fld     [esp+2Ch+var_1C]
0x6BD43D: fcom    st(1)
0x6BD43F: fnstsw  ax
0x6BD441: test    ah, 5
0x6BD444: jp      short loc_6BD44D
0x6BD446: fstp    st
0x6BD448: fst     dword ptr [ebp+0]
0x6BD44B: jmp     short loc_6BD45D
0x6BD44D: fcomp   st(2)
0x6BD44F: fnstsw  ax
0x6BD451: test    ah, 41h
0x6BD454: jnz     short loc_6BD45D
0x6BD456: fxch    st(1)
0x6BD458: fst     dword ptr [ebp+0]
0x6BD45B: fxch    st(1)
0x6BD45D: mov     eax, [esp+2Ch+var_18]
0x6BD461: fld     dword ptr [eax]
0x6BD463: fstp    [esp+2Ch+var_1C]
0x6BD467: fld     [esp+2Ch+var_1C]
0x6BD46B: fcom    st(1)
0x6BD46D: fnstsw  ax
0x6BD46F: test    ah, 5
0x6BD472: jp      short loc_6BD47E
0x6BD474: mov     eax, [esp+2Ch+var_18]
0x6BD478: fstp    st
0x6BD47A: fst     dword ptr [eax]
0x6BD47C: jmp     short loc_6BD491
0x6BD47E: fcomp   st(2)
0x6BD480: fnstsw  ax
0x6BD482: test    ah, 41h
0x6BD485: jnz     short loc_6BD491
0x6BD487: mov     eax, [esp+2Ch+var_18]
0x6BD48B: fxch    st(1)
0x6BD48D: fst     dword ptr [eax]
0x6BD48F: fxch    st(1)
0x6BD491: add     [esp+2Ch+var_18], edx
0x6BD495: fxch    st(1)
0x6BD497: add     esi, edx
0x6BD499: add     ebx, edx
0x6BD49B: add     ebp, edx
0x6BD49D: sub     ecx, 1
0x6BD4A0: jnz     loc_6BD3E2
0x6BD4A6: mov     ecx, [esp+2Ch+arg_4]
0x6BD4AA: mov     eax, [esp+2Ch+var_14]
0x6BD4AE: cmp     eax, ecx
0x6BD4B0: jnb     short loc_6BD501
0x6BD4B2: movzx   edx, [esp+2Ch+arg_8]
0x6BD4B7: mov     esi, edx
0x6BD4B9: imul    esi, eax
0x6BD4BC: lea     edi, [esi+edi+4]
0x6BD4C0: sub     ecx, eax
0x6BD4C2: jmp     short loc_6BD4C6
0x6BD4C4: fxch    st(1)
0x6BD4C6: fld     dword ptr [edi]
0x6BD4C8: fstp    [esp+2Ch+var_1C]
0x6BD4CC: fld     [esp+2Ch+var_1C]
0x6BD4D0: fcom    st(2)
0x6BD4D2: fnstsw  ax
0x6BD4D4: test    ah, 5
0x6BD4D7: jp      short loc_6BD4E1
0x6BD4D9: fstp    st
0x6BD4DB: fxch    st(1)
0x6BD4DD: fst     dword ptr [edi]
0x6BD4DF: jmp     short loc_6BD4EE
0x6BD4E1: fcomp   st(1)
0x6BD4E3: fnstsw  ax
0x6BD4E5: test    ah, 41h
0x6BD4E8: jnz     short loc_6BD4EC
0x6BD4EA: fst     dword ptr [edi]
0x6BD4EC: fxch    st(1)
0x6BD4EE: add     edi, edx
0x6BD4F0: sub     ecx, 1
0x6BD4F3: jnz     short loc_6BD4C4
0x6BD4F5: pop     edi
0x6BD4F6: fstp    st
0x6BD4F8: pop     esi
0x6BD4F9: fstp    st
0x6BD4FB: pop     ebp
0x6BD4FC: pop     ebx
0x6BD4FD: add     esp, 1Ch
0x6BD500: retn
0x6BD501: pop     edi
0x6BD502: fstp    st(1)
0x6BD504: pop     esi
0x6BD505: fstp    st
0x6BD507: pop     ebp
0x6BD508: pop     ebx
0x6BD509: add     esp, 1Ch
0x6BD50C: retn
