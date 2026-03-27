0x710580: mov     edx, dword ptr [esp+arg_0+4]
0x710584: mov     eax, dword ptr [esp+arg_0]
0x710588: push    ebx
0x710589: push    ebp
0x71058A: mov     ebp, [esp+8+arg_10]
0x71058E: push    esi
0x71058F: xor     ebx, ebx
0x710591: cmp     [esp+0Ch+arg_8], 4
0x710596: push    edi
0x710597: mov     edi, [esp+10h+arg_C]
0x71059B: jl      loc_71071B
0x7105A1: lea     ecx, [edi+4]
0x7105A4: lea     esi, [ebp+0Ch]
0x7105A7: sub     ebp, edi
0x7105A9: mov     edi, [esp+10h+arg_8]
0x7105AD: add     edi, 0FFFFFFFCh
0x7105B0: shr     edi, 2
0x7105B3: add     edi, 1
0x7105B6: lea     ebx, ds:0[edi*4]
0x7105BD: lea     ecx, [ecx+0]
0x7105C0: fld     dword ptr [eax]
0x7105C2: fmul    dword ptr [ecx-4]
0x7105C5: fadd    dword ptr [edx]
0x7105C7: fld     dword ptr [eax+4]
0x7105CA: fmul    dword ptr [ecx]
0x7105CC: faddp   st(1), st
0x7105CE: fld     dword ptr [ecx+4]
0x7105D1: fmul    dword ptr [eax+8]
0x7105D4: faddp   st(1), st
0x7105D6: fstp    dword ptr [esi-0Ch]
0x7105D9: fld     dword ptr [eax+0Ch]
0x7105DC: fmul    dword ptr [ecx-4]
0x7105DF: fadd    dword ptr [edx+4]
0x7105E2: fld     dword ptr [eax+10h]
0x7105E5: fmul    dword ptr [ecx]
0x7105E7: faddp   st(1), st
0x7105E9: fld     dword ptr [eax+14h]
0x7105EC: fmul    dword ptr [ecx+4]
0x7105EF: faddp   st(1), st
0x7105F1: fstp    dword ptr [ecx+ebp]
0x7105F4: fld     dword ptr [eax+18h]
0x7105F7: fmul    dword ptr [ecx-4]
0x7105FA: fadd    dword ptr [edx+8]
0x7105FD: fld     dword ptr [ecx]
0x7105FF: fmul    dword ptr [eax+1Ch]
0x710602: faddp   st(1), st
0x710604: fld     dword ptr [eax+20h]
0x710607: fmul    dword ptr [ecx+4]
0x71060A: faddp   st(1), st
0x71060C: fstp    dword ptr [esi-4]
0x71060F: fld     dword ptr [eax]
0x710611: fmul    dword ptr [ecx+8]
0x710614: fadd    dword ptr [edx]
0x710616: fld     dword ptr [eax+4]
0x710619: fmul    dword ptr [ecx+0Ch]
0x71061C: faddp   st(1), st
0x71061E: fld     dword ptr [ecx+10h]
0x710621: fmul    dword ptr [eax+8]
0x710624: faddp   st(1), st
0x710626: fstp    dword ptr [esi]
0x710628: fld     dword ptr [eax+0Ch]
0x71062B: fmul    dword ptr [ecx+8]
0x71062E: fadd    dword ptr [edx+4]
0x710631: fld     dword ptr [eax+10h]
0x710634: fmul    dword ptr [ecx+0Ch]
0x710637: faddp   st(1), st
0x710639: fld     dword ptr [eax+14h]
0x71063C: fmul    dword ptr [ecx+10h]
0x71063F: faddp   st(1), st
0x710641: fstp    dword ptr [esi+4]
0x710644: fld     dword ptr [eax+18h]
0x710647: fmul    dword ptr [ecx+8]
0x71064A: fadd    dword ptr [edx+8]
0x71064D: fld     dword ptr [ecx+0Ch]
0x710650: fmul    dword ptr [eax+1Ch]
0x710653: faddp   st(1), st
0x710655: fld     dword ptr [eax+20h]
0x710658: fmul    dword ptr [ecx+10h]
0x71065B: faddp   st(1), st
0x71065D: fstp    dword ptr [esi+8]
0x710660: fld     dword ptr [eax]
0x710662: fmul    dword ptr [ecx+14h]
0x710665: fadd    dword ptr [edx]
0x710667: fld     dword ptr [eax+4]
0x71066A: fmul    dword ptr [ecx+18h]
0x71066D: faddp   st(1), st
0x71066F: fld     dword ptr [ecx+1Ch]
0x710672: fmul    dword ptr [eax+8]
0x710675: faddp   st(1), st
0x710677: fstp    dword ptr [esi+0Ch]
0x71067A: fld     dword ptr [eax+0Ch]
0x71067D: fmul    dword ptr [ecx+14h]
0x710680: fadd    dword ptr [edx+4]
0x710683: fld     dword ptr [eax+10h]
0x710686: fmul    dword ptr [ecx+18h]
0x710689: faddp   st(1), st
0x71068B: fld     dword ptr [eax+14h]
0x71068E: fmul    dword ptr [ecx+1Ch]
0x710691: faddp   st(1), st
0x710693: fstp    dword ptr [esi+10h]
0x710696: fld     dword ptr [eax+18h]
0x710699: fmul    dword ptr [ecx+14h]
0x71069C: add     ecx, 30h ; '0'
0x71069F: add     esi, 30h ; '0'
0x7106A2: sub     edi, 1
0x7106A5: fadd    dword ptr [edx+8]
0x7106A8: fld     dword ptr [ecx-18h]
0x7106AB: fmul    dword ptr [eax+1Ch]
0x7106AE: faddp   st(1), st
0x7106B0: fld     dword ptr [eax+20h]
0x7106B3: fmul    dword ptr [ecx-14h]
0x7106B6: faddp   st(1), st
0x7106B8: fstp    dword ptr [esi-1Ch]
0x7106BB: fld     dword ptr [eax]
0x7106BD: fmul    dword ptr [ecx-10h]
0x7106C0: fadd    dword ptr [edx]
0x7106C2: fld     dword ptr [eax+4]
0x7106C5: fmul    dword ptr [ecx-0Ch]
0x7106C8: faddp   st(1), st
0x7106CA: fld     dword ptr [ecx-8]
0x7106CD: fmul    dword ptr [eax+8]
0x7106D0: faddp   st(1), st
0x7106D2: fstp    dword ptr [esi-18h]
0x7106D5: fld     dword ptr [eax+0Ch]
0x7106D8: fmul    dword ptr [ecx-10h]
0x7106DB: fadd    dword ptr [edx+4]
0x7106DE: fld     dword ptr [eax+10h]
0x7106E1: fmul    dword ptr [ecx-0Ch]
0x7106E4: faddp   st(1), st
0x7106E6: fld     dword ptr [eax+14h]
0x7106E9: fmul    dword ptr [ecx-8]
0x7106EC: faddp   st(1), st
0x7106EE: fstp    dword ptr [esi-14h]
0x7106F1: fld     dword ptr [eax+18h]
0x7106F4: fmul    dword ptr [ecx-10h]
0x7106F7: fadd    dword ptr [edx+8]
0x7106FA: fld     dword ptr [ecx-0Ch]
0x7106FD: fmul    dword ptr [eax+1Ch]
0x710700: faddp   st(1), st
0x710702: fld     dword ptr [eax+20h]
0x710705: fmul    dword ptr [ecx-8]
0x710708: faddp   st(1), st
0x71070A: fstp    dword ptr [esi-10h]
0x71070D: jnz     loc_7105C0
0x710713: mov     ebp, [esp+10h+arg_10]
0x710717: mov     edi, [esp+10h+arg_C]
0x71071B: cmp     ebx, [esp+10h+arg_8]
0x71071F: jnb     short loc_710795
0x710721: lea     ecx, [ebx+ebx*2]
0x710724: add     ecx, ecx
0x710726: add     ecx, ecx
0x710728: lea     esi, [ecx+ebp]
0x71072B: lea     ecx, [ecx+edi+4]
0x71072F: sub     ebp, edi
0x710731: mov     edi, [esp+10h+arg_8]
0x710735: sub     edi, ebx
0x710737: fld     dword ptr [eax]
0x710739: add     ecx, 0Ch
0x71073C: fmul    dword ptr [ecx-10h]
0x71073F: add     esi, 0Ch
0x710742: sub     edi, 1
0x710745: fadd    dword ptr [edx]
0x710747: fld     dword ptr [eax+4]
0x71074A: fmul    dword ptr [ecx-0Ch]
0x71074D: faddp   st(1), st
0x71074F: fld     dword ptr [ecx-8]
0x710752: fmul    dword ptr [eax+8]
0x710755: faddp   st(1), st
0x710757: fstp    dword ptr [esi-0Ch]
0x71075A: fld     dword ptr [eax+0Ch]
0x71075D: fmul    dword ptr [ecx-10h]
0x710760: fadd    dword ptr [edx+4]
0x710763: fld     dword ptr [eax+10h]
0x710766: fmul    dword ptr [ecx-0Ch]
0x710769: faddp   st(1), st
0x71076B: fld     dword ptr [eax+14h]
0x71076E: fmul    dword ptr [ecx-8]
0x710771: faddp   st(1), st
0x710773: fstp    dword ptr [ecx+ebp-0Ch]
0x710777: fld     dword ptr [eax+18h]
0x71077A: fmul    dword ptr [ecx-10h]
0x71077D: fadd    dword ptr [edx+8]
0x710780: fld     dword ptr [ecx-0Ch]
0x710783: fmul    dword ptr [eax+1Ch]
0x710786: faddp   st(1), st
0x710788: fld     dword ptr [eax+20h]
0x71078B: fmul    dword ptr [ecx-8]
0x71078E: faddp   st(1), st
0x710790: fstp    dword ptr [esi-4]
0x710793: jnz     short loc_710737
0x710795: pop     edi
0x710796: pop     esi
0x710797: pop     ebp
0x710798: pop     ebx
0x710799: retn
