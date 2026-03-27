0x977530: sub     esp, 90h
0x977536: xor     eax, eax
0x977538: push    ebx
0x977539: push    ebp
0x97753A: mov     ebp, ecx
0x97753C: mov     [ebp+7Ch], eax
0x97753F: mov     [ebp+88h], eax
0x977545: mov     [ebp+80h], eax
0x97754B: mov     [ebp+84h], eax
0x977551: mov     eax, [esp+98h+arg_10]
0x977558: lea     eax, [eax+eax*2]
0x97755B: movzx   edx, ax
0x97755E: mov     dword ptr [ebp+0], offset ??_7NiOBBLeaf@@6B@; const NiOBBLeaf::`vftable'
0x977565: movzx   ecx, dx
0x977568: push    esi
0x977569: mov     esi, [esp+9Ch+arg_4]
0x977570: movzx   eax, word ptr [esi+ecx*2]
0x977574: movzx   ebx, ax
0x977577: lea     ebx, [ebx+ebx*2]
0x97757A: add     ebx, ebx
0x97757C: push    edi
0x97757D: mov     edi, [esp+0A0h+arg_C]
0x977584: add     edx, 1
0x977587: add     ebx, ebx
0x977589: lea     eax, [ebx+edi]
0x97758C: mov     [ebp+8Ch], eax
0x977592: movzx   eax, dx
0x977595: movzx   eax, word ptr [esi+eax*2]
0x977599: mov     ecx, [esp+0A0h+arg_8]
0x9775A0: movzx   eax, ax
0x9775A3: lea     eax, [eax+eax*2]
0x9775A6: add     edx, 1
0x9775A9: add     eax, eax
0x9775AB: add     eax, eax
0x9775AD: movzx   edx, dx
0x9775B0: add     edi, eax
0x9775B2: mov     [ebp+90h], edi
0x9775B8: movzx   edx, word ptr [esi+edx*2]
0x9775BC: movzx   esi, dx
0x9775BF: mov     edx, [esp+0A0h+arg_C]
0x9775C6: lea     esi, [esi+esi*2]
0x9775C9: add     eax, ecx
0x9775CB: add     ebx, ecx
0x9775CD: add     esi, esi
0x9775CF: add     esi, esi
0x9775D1: add     edx, esi
0x9775D3: mov     [ebp+94h], edx
0x9775D9: lea     edx, [esi+ecx+4]
0x9775DD: fld     dword ptr [eax]
0x9775DF: mov     [esp+0A0h+var_48], eax
0x9775E3: fadd    dword ptr [ebx]
0x9775E5: mov     [esp+0A0h+var_60], esi
0x9775E9: lea     edi, [ebp+10h]
0x9775EC: mov     [esp+0A0h+var_4C], edx
0x9775F0: fstp    [esp+0A0h+var_90]
0x9775F4: fld     dword ptr [eax+4]
0x9775F7: fadd    dword ptr [ebx+4]
0x9775FA: fstp    [esp+0A0h+var_8C]
0x9775FE: fld     dword ptr [eax+8]
0x977601: fadd    dword ptr [ebx+8]
0x977604: fstp    [esp+0A0h+var_88]
0x977608: fld     dword ptr [esi+ecx]
0x97760B: lea     ecx, [esi+ecx+8]
0x97760F: fadd    [esp+0A0h+var_90]
0x977613: mov     [esp+0A0h+var_5C], ecx
0x977617: fstp    [esp+0A0h+var_78]
0x97761B: fld     dword ptr [edx]
0x97761D: fadd    [esp+0A0h+var_8C]
0x977621: fstp    [esp+0A0h+var_74]
0x977625: fld     [esp+0A0h+var_88]
0x977629: fadd    dword ptr [ecx]
0x97762B: fstp    [esp+0A0h+var_70]
0x97762F: fld     [esp+0A0h+var_78]
0x977633: fld     qword ptr ds:0A7C030h
0x977639: fmul    st(1), st
0x97763B: fxch    st(1)
0x97763D: fstp    [esp+0A0h+var_90]
0x977641: fld     [esp+0A0h+var_74]
0x977645: fmul    st, st(1)
0x977647: fstp    [esp+0A0h+var_8C]
0x97764B: fmul    [esp+0A0h+var_70]
0x97764F: fstp    [esp+0A0h+var_88]
0x977653: mov     ecx, [esp+0A0h+var_90]
0x977657: mov     edx, [esp+0A0h+var_8C]
0x97765B: mov     [ebp+4], ecx
0x97765E: mov     ecx, [esp+0A0h+var_88]
0x977662: mov     [ebp+8], edx
0x977665: mov     [ebp+0Ch], ecx
0x977668: fld     dword ptr [eax]
0x97766A: fsub    dword ptr [ebx]
0x97766C: fstp    [esp+0A0h+var_90]
0x977670: mov     edx, [esp+0A0h+var_90]
0x977674: fld     dword ptr [eax+4]
0x977677: fsub    dword ptr [ebx+4]
0x97767A: fstp    [esp+0A0h+var_8C]
0x97767E: fld     dword ptr [eax+8]
0x977681: mov     eax, [esp+0A0h+var_8C]
0x977685: fsub    dword ptr [ebx+8]
0x977688: mov     [edi], edx
0x97768A: mov     [edi+4], eax
0x97768D: fstp    [esp+0A0h+var_88]
0x977691: mov     ecx, [esp+0A0h+var_88]
0x977695: mov     [edi+8], ecx
0x977698: mov     ecx, edi
0x97769A: call    sub_43F350
0x97769F: fstp    st
0x9776A1: mov     edx, [esp+0A0h+arg_8]
0x9776A8: fld     dword ptr [esi+edx]
0x9776AB: mov     eax, [esp+0A0h+var_4C]
0x9776AF: fsub    dword ptr [ebx]
0x9776B1: mov     ecx, [esp+0A0h+var_5C]
0x9776B5: lea     esi, [edi+0Ch]
0x9776B8: fstp    [esp+0A0h+var_90]
0x9776BC: mov     edx, [esp+0A0h+var_90]
0x9776C0: fld     dword ptr [eax]
0x9776C2: fsub    dword ptr [ebx+4]
0x9776C5: fstp    [esp+0A0h+var_8C]
0x9776C9: mov     eax, [esp+0A0h+var_8C]
0x9776CD: fld     dword ptr [ecx]
0x9776CF: fsub    dword ptr [ebx+8]
0x9776D2: mov     [esi], edx
0x9776D4: mov     [esi+4], eax
0x9776D7: fstp    [esp+0A0h+var_88]
0x9776DB: mov     ecx, [esp+0A0h+var_88]
0x9776DF: fld     dword ptr [edi+4]
0x9776E2: mov     [esi+8], ecx
0x9776E5: fld     dword ptr [edi]
0x9776E7: mov     ecx, esi
0x9776E9: fld     dword ptr [edi+8]
0x9776EC: fld     dword ptr [esi+4]
0x9776EF: fmul    st, st(3)
0x9776F1: fld     dword ptr [esi]
0x9776F3: fmul    st, st(3)
0x9776F5: faddp   st(1), st
0x9776F7: fld     dword ptr [esi+8]
0x9776FA: fmul    st, st(2)
0x9776FC: faddp   st(1), st
0x9776FE: fstp    [esp+0A0h+var_6C]
0x977702: fld     [esp+0A0h+var_6C]
0x977706: fld     st
0x977708: fmulp   st(3), st
0x97770A: fxch    st(2)
0x97770C: fstp    [esp+0A0h+var_90]
0x977710: fld     st(1)
0x977712: fmulp   st(3), st
0x977714: fxch    st(2)
0x977716: fstp    [esp+0A0h+var_8C]
0x97771A: fmulp   st(1), st
0x97771C: fstp    [esp+0A0h+var_88]
0x977720: fld     dword ptr [esi]
0x977722: fsub    [esp+0A0h+var_90]
0x977726: fstp    dword ptr [esi]
0x977728: fld     dword ptr [esi+4]
0x97772B: fsub    [esp+0A0h+var_8C]
0x97772F: fstp    dword ptr [esi+4]
0x977732: fld     dword ptr [esi+8]
0x977735: fsub    [esp+0A0h+var_88]
0x977739: fstp    dword ptr [esi+8]
0x97773C: call    sub_43F350
0x977741: fstp    st
0x977743: fld     dword ptr [esi+8]
0x977746: fld     dword ptr [edi+4]
0x977749: fld     dword ptr [esi+4]
0x97774C: fld     dword ptr [edi+8]
0x97774F: fld     st(3)
0x977751: fmul    st, st(3)
0x977753: fld     st(2)
0x977755: fmul    st, st(2)
0x977757: fsubp   st(1), st
0x977759: fstp    [esp+0A0h+var_90]
0x97775D: mov     edx, [esp+0A0h+var_90]
0x977761: fld     dword ptr [esi]
0x977763: mov     [edi+18h], edx
0x977766: fld     dword ptr [edi]
0x977768: fld     st(1)
0x97776A: fmul    st, st(3)
0x97776C: fxch    st(6)
0x97776E: fmul    st, st(1)
0x977770: fsubp   st(6), st
0x977772: fxch    st(5)
0x977774: fstp    [esp+0A0h+var_8C]
0x977778: mov     eax, [esp+0A0h+var_8C]
0x97777C: fxch    st(2)
0x97777E: mov     [edi+1Ch], eax
0x977781: fmul    st, st(4)
0x977783: fxch    st(2)
0x977785: fmul    st, st(3)
0x977787: fsubp   st(2), st
0x977789: fxch    st(1)
0x97778B: fstp    [esp+0A0h+var_88]
0x97778F: mov     ecx, [esp+0A0h+var_88]
0x977793: fldz
0x977795: mov     [edi+20h], ecx
0x977798: fst     [esp+0A0h+var_90]
0x97779C: fst     [esp+0A0h+var_8C]
0x9777A0: fst     [esp+0A0h+var_88]
0x9777A4: fst     [esp+0A0h+var_78]
0x9777A8: fst     [esp+0A0h+var_74]
0x9777AC: fstp    [esp+0A0h+var_70]
0x9777B0: fld     dword ptr [ebp+4]
0x9777B3: fst     [esp+0A0h+var_44]
0x9777B7: fsubr   dword ptr [ebx]
0x9777B9: fstp    [esp+0A0h+var_84]
0x9777BD: fld     dword ptr [ebp+8]
0x9777C0: fst     [esp+0A0h+var_3C]
0x9777C4: fsubr   dword ptr [ebx+4]
0x9777C7: fstp    [esp+0A0h+var_80]
0x9777CB: fld     dword ptr [ebp+0Ch]
0x9777CE: fst     [esp+0A0h+var_58]
0x9777D2: fsubr   dword ptr [ebx+8]
0x9777D5: fstp    [esp+0A0h+var_7C]
0x9777D9: fld     [esp+0A0h+var_80]
0x9777DD: fld     [esp+0A0h+var_84]
0x9777E1: fld     [esp+0A0h+var_7C]
0x9777E5: fld     st(5)
0x9777E7: fmul    st, st(2)
0x9777E9: fld     st(5)
0x9777EB: fmul    st, st(4)
0x9777ED: faddp   st(1), st
0x9777EF: fld     st(4)
0x9777F1: fmul    st, st(2)
0x9777F3: faddp   st(1), st
0x9777F5: fstp    [esp+0A0h+var_64]
0x9777F9: fld     dword ptr [esi+4]
0x9777FC: fmul    st, st(3)
0x9777FE: fld     dword ptr [esi]
0x977800: fmul    st, st(3)
0x977802: faddp   st(1), st
0x977804: fld     dword ptr [esi+8]
0x977807: fmul    st, st(2)
0x977809: faddp   st(1), st
0x97780B: fstp    [esp+0A0h+var_68]
0x97780F: fld     dword ptr [edi+1Ch]
0x977812: fmulp   st(3), st
0x977814: fld     dword ptr [edi+18h]
0x977817: fmulp   st(2), st
0x977819: fxch    st(2)
0x97781B: faddp   st(1), st
0x97781D: fld     dword ptr [edi+20h]
0x977820: fmulp   st(2), st
0x977822: faddp   st(1), st
0x977824: fstp    [esp+0A0h+var_6C]
0x977828: fld     [esp+0A0h+var_64]
0x97782C: fld     st
0x97782E: fldz
0x977830: fcom    st(1)
0x977832: fnstsw  ax
0x977834: test    ah, 41h
0x977837: jnz     short loc_977843
0x977839: fstp    st(1)
0x97783B: fxch    st(1)
0x97783D: fstp    [esp+0A0h+var_90]
0x977841: jmp     short loc_977858
0x977843: fcom    st(1)
0x977845: fnstsw  ax
0x977847: fstp    st(1)
0x977849: test    ah, 5
0x97784C: jp      short loc_977856
0x97784E: fxch    st(1)
0x977850: fstp    [esp+0A0h+var_78]
0x977854: jmp     short loc_977858
0x977856: fstp    st(1)
0x977858: fld     [esp+0A0h+var_68]
0x97785C: fld     st
0x97785E: fcom    st(2)
0x977860: fnstsw  ax
0x977862: test    ah, 5
0x977865: jp      short loc_97786F
0x977867: fstp    st
0x977869: fstp    [esp+0A0h+var_8C]
0x97786D: jmp     short loc_977880
0x97786F: fcomp   st(2)
0x977871: fnstsw  ax
0x977873: test    ah, 41h
0x977876: jnz     short loc_97787E
0x977878: fstp    [esp+0A0h+var_74]
0x97787C: jmp     short loc_977880
0x97787E: fstp    st
0x977880: fld     [esp+0A0h+var_6C]
0x977884: fld     st
0x977886: fcom    st(2)
0x977888: fnstsw  ax
0x97788A: test    ah, 5
0x97788D: jp      short loc_977899
0x97788F: fstp    st
0x977891: fstp    st(1)
0x977893: fstp    [esp+0A0h+var_88]
0x977897: jmp     short loc_9778AC
0x977899: fcomp   st(2)
0x97789B: fnstsw  ax
0x97789D: fstp    st(1)
0x97789F: test    ah, 41h
0x9778A2: jnz     short loc_9778AA
0x9778A4: fstp    [esp+0A0h+var_70]
0x9778A8: jmp     short loc_9778AC
0x9778AA: fstp    st
0x9778AC: mov     eax, [esp+0A0h+var_48]
0x9778B0: fld     dword ptr [eax]
0x9778B2: fsub    [esp+0A0h+var_44]
0x9778B6: fstp    [esp+0A0h+var_84]
0x9778BA: fld     dword ptr [eax+4]
0x9778BD: fsub    [esp+0A0h+var_3C]
0x9778C1: fstp    [esp+0A0h+var_80]
0x9778C5: fld     dword ptr [eax+8]
0x9778C8: fsub    [esp+0A0h+var_58]
0x9778CC: fstp    [esp+0A0h+var_7C]
0x9778D0: fld     [esp+0A0h+var_80]
0x9778D4: fld     [esp+0A0h+var_84]
0x9778D8: fld     [esp+0A0h+var_7C]
0x9778DC: fld     st(5)
0x9778DE: fmul    st, st(2)
0x9778E0: fld     st(5)
0x9778E2: fmul    st, st(4)
0x9778E4: faddp   st(1), st
0x9778E6: fld     st(4)
0x9778E8: fmul    st, st(2)
0x9778EA: faddp   st(1), st
0x9778EC: fstp    [esp+0A0h+var_64]
0x9778F0: fld     dword ptr [esi+4]
0x9778F3: fmul    st, st(3)
0x9778F5: fld     dword ptr [esi]
0x9778F7: fmul    st, st(3)
0x9778F9: faddp   st(1), st
0x9778FB: fld     dword ptr [esi+8]
0x9778FE: fmul    st, st(2)
0x977900: faddp   st(1), st
0x977902: fstp    [esp+0A0h+var_68]
0x977906: fld     dword ptr [edi+1Ch]
0x977909: fmulp   st(3), st
0x97790B: fld     dword ptr [edi+18h]
0x97790E: fmulp   st(2), st
0x977910: fxch    st(2)
0x977912: faddp   st(1), st
0x977914: fld     dword ptr [edi+20h]
0x977917: fmulp   st(2), st
0x977919: faddp   st(1), st
0x97791B: fstp    [esp+0A0h+var_6C]
0x97791F: fld     [esp+0A0h+var_64]
0x977923: fld     st
0x977925: fld     [esp+0A0h+var_90]
0x977929: fcomp   st(1)
0x97792B: fnstsw  ax
0x97792D: test    ah, 41h
0x977930: jnz     short loc_97793A
0x977932: fstp    st
0x977934: fstp    [esp+0A0h+var_90]
0x977938: jmp     short loc_97794F
0x97793A: fld     [esp+0A0h+var_78]
0x97793E: fcompp
0x977940: fnstsw  ax
0x977942: test    ah, 5
0x977945: jp      short loc_97794D
0x977947: fstp    [esp+0A0h+var_78]
0x97794B: jmp     short loc_97794F
0x97794D: fstp    st
0x97794F: fld     [esp+0A0h+var_68]
0x977953: fld     st
0x977955: fld     [esp+0A0h+var_8C]
0x977959: fcomp   st(1)
0x97795B: fnstsw  ax
0x97795D: test    ah, 41h
0x977960: jnz     short loc_97796A
0x977962: fstp    st
0x977964: fstp    [esp+0A0h+var_8C]
0x977968: jmp     short loc_97797F
0x97796A: fld     [esp+0A0h+var_74]
0x97796E: fcompp
0x977970: fnstsw  ax
0x977972: test    ah, 5
0x977975: jp      short loc_97797D
0x977977: fstp    [esp+0A0h+var_74]
0x97797B: jmp     short loc_97797F
0x97797D: fstp    st
0x97797F: fld     [esp+0A0h+var_6C]
0x977983: fld     st
0x977985: fld     [esp+0A0h+var_88]
0x977989: fcomp   st(1)
0x97798B: fnstsw  ax
0x97798D: test    ah, 41h
0x977990: jnz     short loc_97799A
0x977992: fstp    st
0x977994: fstp    [esp+0A0h+var_88]
0x977998: jmp     short loc_9779AF
0x97799A: fld     [esp+0A0h+var_70]
0x97799E: fcompp
0x9779A0: fnstsw  ax
0x9779A2: test    ah, 5
0x9779A5: jp      short loc_9779AD
0x9779A7: fstp    [esp+0A0h+var_70]
0x9779AB: jmp     short loc_9779AF
0x9779AD: fstp    st
0x9779AF: mov     edx, [esp+0A0h+var_60]
0x9779B3: mov     eax, [esp+0A0h+arg_8]
0x9779BA: fld     dword ptr [edx+eax]
0x9779BD: mov     ecx, [esp+0A0h+var_4C]
0x9779C1: fsub    [esp+0A0h+var_44]
0x9779C5: mov     edx, [esp+0A0h+var_5C]
0x9779C9: fstp    [esp+0A0h+var_84]
0x9779CD: fld     dword ptr [ecx]
0x9779CF: fsub    [esp+0A0h+var_3C]
0x9779D3: fstp    [esp+0A0h+var_80]
0x9779D7: fld     dword ptr [edx]
0x9779D9: fsub    [esp+0A0h+var_58]
0x9779DD: fstp    [esp+0A0h+var_7C]
0x9779E1: fld     [esp+0A0h+var_80]
0x9779E5: fld     [esp+0A0h+var_84]
0x9779E9: fld     [esp+0A0h+var_7C]
0x9779ED: fxch    st(5)
0x9779EF: fmul    st, st(1)
0x9779F1: fxch    st(4)
0x9779F3: fmul    st, st(2)
0x9779F5: faddp   st(4), st
0x9779F7: fxch    st(2)
0x9779F9: fmul    st, st(4)
0x9779FB: faddp   st(3), st
0x9779FD: fxch    st(2)
0x9779FF: fstp    [esp+0A0h+var_64]
0x977A03: fld     dword ptr [esi+4]
0x977A06: fmul    st, st(2)
0x977A08: fld     dword ptr [esi]
0x977A0A: fmul    st, st(2)
0x977A0C: faddp   st(1), st
0x977A0E: fld     dword ptr [esi+8]
0x977A11: fmul    st, st(4)
0x977A13: faddp   st(1), st
0x977A15: fstp    [esp+0A0h+var_68]
0x977A19: fld     dword ptr [edi+1Ch]
0x977A1C: fmulp   st(2), st
0x977A1E: fmul    dword ptr [edi+18h]
0x977A21: faddp   st(1), st
0x977A23: fld     dword ptr [edi+20h]
0x977A26: fmulp   st(2), st
0x977A28: faddp   st(1), st
0x977A2A: fstp    [esp+0A0h+var_6C]
0x977A2E: fld     [esp+0A0h+var_64]
0x977A32: fld     st
0x977A34: fld     [esp+0A0h+var_90]
0x977A38: fcomp   st(1)
0x977A3A: fnstsw  ax
0x977A3C: test    ah, 41h
0x977A3F: jnz     short loc_977A49
0x977A41: fstp    st
0x977A43: fstp    [esp+0A0h+var_90]
0x977A47: jmp     short loc_977A5E
0x977A49: fld     [esp+0A0h+var_78]
0x977A4D: fcompp
0x977A4F: fnstsw  ax
0x977A51: test    ah, 5
0x977A54: jp      short loc_977A5C
0x977A56: fstp    [esp+0A0h+var_78]
0x977A5A: jmp     short loc_977A5E
0x977A5C: fstp    st
0x977A5E: fld     [esp+0A0h+var_68]
0x977A62: fld     st
0x977A64: fld     [esp+0A0h+var_8C]
0x977A68: fcomp   st(1)
0x977A6A: fnstsw  ax
0x977A6C: test    ah, 41h
0x977A6F: jnz     short loc_977A79
0x977A71: fstp    st
0x977A73: fstp    [esp+0A0h+var_8C]
0x977A77: jmp     short loc_977A8E
0x977A79: fld     [esp+0A0h+var_74]
0x977A7D: fcompp
0x977A7F: fnstsw  ax
0x977A81: test    ah, 5
0x977A84: jp      short loc_977A8C
0x977A86: fstp    [esp+0A0h+var_74]
0x977A8A: jmp     short loc_977A8E
0x977A8C: fstp    st
0x977A8E: fld     [esp+0A0h+var_6C]
0x977A92: fld     st
0x977A94: fld     [esp+0A0h+var_88]
0x977A98: fcomp   st(1)
0x977A9A: fnstsw  ax
0x977A9C: test    ah, 41h
0x977A9F: jnz     short loc_977AA9
0x977AA1: fstp    st
0x977AA3: fstp    [esp+0A0h+var_88]
0x977AA7: jmp     short loc_977ABE
0x977AA9: fld     [esp+0A0h+var_70]
0x977AAD: fcompp
0x977AAF: fnstsw  ax
0x977AB1: test    ah, 5
0x977AB4: jp      short loc_977ABC
0x977AB6: fstp    [esp+0A0h+var_70]
0x977ABA: jmp     short loc_977ABE
0x977ABC: fstp    st
0x977ABE: fld     [esp+0A0h+var_78]
0x977AC2: fld     [esp+0A0h+var_90]
0x977AC6: fld     st(1)
0x977AC8: fsub    st, st(1)
0x977ACA: fstp    [esp+0A0h+var_84]
0x977ACE: fld     [esp+0A0h+var_74]
0x977AD2: fld     [esp+0A0h+var_8C]
0x977AD6: fld     st(1)
0x977AD8: fsub    st, st(1)
0x977ADA: fstp    [esp+0A0h+var_80]
0x977ADE: fld     [esp+0A0h+var_70]
0x977AE2: fld     [esp+0A0h+var_88]
0x977AE6: fld     st(1)
0x977AE8: fsub    st, st(1)
0x977AEA: fstp    [esp+0A0h+var_7C]
0x977AEE: fld     [esp+0A0h+var_84]
0x977AF2: fld     qword ptr ds:0A2FAA0h
0x977AF8: fmul    st(1), st
0x977AFA: fxch    st(1)
0x977AFC: fstp    [esp+0A0h+var_90]
0x977B00: fld     [esp+0A0h+var_80]
0x977B04: fmul    st, st(1)
0x977B06: fstp    [esp+0A0h+var_8C]
0x977B0A: fld     [esp+0A0h+var_7C]
0x977B0E: fmul    st, st(1)
0x977B10: fstp    [esp+0A0h+var_88]
0x977B14: fld     [esp+0A0h+var_90]
0x977B18: fstp    dword ptr [ebp+34h]
0x977B1B: fld     [esp+0A0h+var_8C]
0x977B1F: fstp    dword ptr [ebp+38h]
0x977B22: fld     [esp+0A0h+var_88]
0x977B26: fstp    dword ptr [ebp+3Ch]
0x977B29: fxch    st(6)
0x977B2B: faddp   st(5), st
0x977B2D: fxch    st(4)
0x977B2F: fstp    [esp+0A0h+var_84]
0x977B33: fxch    st(2)
0x977B35: faddp   st(1), st
0x977B37: fstp    [esp+0A0h+var_80]
0x977B3B: faddp   st(1), st
0x977B3D: fstp    [esp+0A0h+var_7C]
0x977B41: fld     [esp+0A0h+var_84]
0x977B45: fmul    st, st(1)
0x977B47: fstp    [esp+0A0h+var_78]
0x977B4B: fld     [esp+0A0h+var_80]
0x977B4F: fmul    st, st(1)
0x977B51: fstp    [esp+0A0h+var_74]
0x977B55: fmul    [esp+0A0h+var_7C]
0x977B59: fstp    [esp+0A0h+var_60]
0x977B5D: fld     [esp+0A0h+var_60]
0x977B61: fld     dword ptr [edi+18h]
0x977B64: fmul    st, st(1)
0x977B66: fstp    dword ptr [esp+0A0h+var_58]
0x977B6A: fld     dword ptr [edi+1Ch]
0x977B6D: fmul    st, st(1)
0x977B6F: fstp    dword ptr [esp+0A0h+var_58+4]
0x977B73: fmul    dword ptr [edi+20h]
0x977B76: fstp    [esp+0A0h+var_50]
0x977B7A: fld     [esp+0A0h+var_74]
0x977B7E: fld     dword ptr [esi]
0x977B80: fmul    st, st(1)
0x977B82: fstp    [esp+0A0h+var_90]
0x977B86: fld     dword ptr [esi+4]
0x977B89: fmul    st, st(1)
0x977B8B: fstp    [esp+0A0h+var_8C]
0x977B8F: fmul    dword ptr [esi+8]
0x977B92: fstp    [esp+0A0h+var_88]
0x977B96: fld     [esp+0A0h+var_78]
0x977B9A: fld     dword ptr [edi]
0x977B9C: fmul    st, st(1)
0x977B9E: fstp    [esp+0A0h+var_84]
0x977BA2: fld     dword ptr [edi+4]
0x977BA5: fmul    st, st(1)
0x977BA7: fstp    [esp+0A0h+var_80]
0x977BAB: fmul    dword ptr [edi+8]
0x977BAE: fstp    [esp+0A0h+var_7C]
0x977BB2: fld     [esp+0A0h+var_84]
0x977BB6: fadd    [esp+0A0h+var_90]
0x977BBA: fstp    [esp+0A0h+var_78]
0x977BBE: fld     [esp+0A0h+var_80]
0x977BC2: fadd    [esp+0A0h+var_8C]
0x977BC6: fstp    [esp+0A0h+var_74]
0x977BCA: lea     ecx, [esp+0A0h+var_34]
0x977BCE: fld     [esp+0A0h+var_7C]
0x977BD2: fadd    [esp+0A0h+var_88]
0x977BD6: fstp    [esp+0A0h+var_70]
0x977BDA: fld     [esp+0A0h+var_78]
0x977BDE: fadd    dword ptr [esp+0A0h+var_58]
0x977BE2: fstp    [esp+0A0h+var_84]
0x977BE6: fld     [esp+0A0h+var_74]
0x977BEA: fadd    dword ptr [esp+0A0h+var_58+4]
0x977BEE: fstp    [esp+0A0h+var_80]
0x977BF2: fld     [esp+0A0h+var_70]
0x977BF6: fadd    [esp+0A0h+var_50]
0x977BFA: fstp    [esp+0A0h+var_7C]
0x977BFE: fld     dword ptr [ebp+4]
0x977C01: fadd    [esp+0A0h+var_84]
0x977C05: fstp    dword ptr [ebp+4]
0x977C08: fld     dword ptr [ebp+8]
0x977C0B: fadd    [esp+0A0h+var_80]
0x977C0F: fstp    dword ptr [ebp+8]
0x977C12: fld     [esp+0A0h+var_7C]
0x977C16: fadd    dword ptr [ebp+0Ch]
0x977C19: fstp    dword ptr [ebp+0Ch]
0x977C1C: call    sub_718A50
0x977C21: lea     eax, [esp+0A0h+var_34]
0x977C25: push    eax
0x977C26: lea     ecx, [ebp+4]
0x977C29: call    sub_97AEC0
0x977C2E: mov     ecx, [esp+0A0h+arg_0]
0x977C35: pop     edi
0x977C36: pop     esi
0x977C37: mov     [ebp+7Ch], ecx
0x977C3A: mov     eax, ebp
0x977C3C: pop     ebp
0x977C3D: pop     ebx
0x977C3E: add     esp, 90h
0x977C44: retn    14h
