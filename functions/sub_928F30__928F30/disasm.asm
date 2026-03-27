0x928F30: push    ebp
0x928F31: mov     ebp, esp
0x928F33: and     esp, 0FFFFFFF0h
0x928F36: sub     esp, 24h
0x928F39: fld     dword ptr ds:0A2F948h
0x928F3F: push    ebx
0x928F40: mov     ebx, ecx
0x928F42: mov     eax, [ebx+8]
0x928F45: mov     [esp+28h+var_24], eax
0x928F49: fdiv    [esp+28h+var_24]
0x928F4D: mov     ecx, [ebp+arg_0]
0x928F50: push    esi
0x928F51: push    edi
0x928F52: push    ecx
0x928F53: fstp    [esp+34h+var_18]
0x928F57: call    sub_8ECB30
0x928F5C: mov     edx, eax
0x928F5E: mov     eax, [ebx+24h]
0x928F61: lea     edi, [edx+1]
0x928F64: add     esp, 4
0x928F67: cmp     edi, eax
0x928F69: mov     [esp+30h+var_20], edx
0x928F6D: mov     [esp+30h+var_1C], edi
0x928F71: jl      short loc_928F7B
0x928F73: lea     edi, [eax-1]
0x928F76: lea     edx, [edi-1]
0x928F79: jmp     short loc_928F86
0x928F7B: test    edx, edx
0x928F7D: jge     short loc_928F8E
0x928F7F: xor     edx, edx
0x928F81: mov     edi, 1
0x928F86: mov     [esp+30h+var_20], edx
0x928F8A: mov     [esp+30h+var_1C], edi
0x928F8E: mov     eax, [ebx+20h]
0x928F91: fild    [esp+30h+var_20]
0x928F95: mov     esi, edx
0x928F97: mov     ecx, edi
0x928F99: fsubr   [ebp+arg_0]
0x928F9C: shl     esi, 4
0x928F9F: movaps  xmm0, xmmword ptr [esi+eax]
0x928FA3: shl     ecx, 4
0x928FA6: movaps  xmm3, xmmword ptr [ecx+eax]
0x928FAA: fst     [esp+30h+var_20]
0x928FAE: fcomp   [esp+30h+var_24]
0x928FB2: mov     eax, [ebp+arg_4]
0x928FB5: subps   xmm3, xmm0
0x928FB8: movaps  xmm0, xmm3
0x928FBB: mulps   xmm0, xmm3
0x928FBE: movaps  xmm1, xmm0
0x928FC1: shufps  xmm1, xmm0, 55h ; 'U'
0x928FC5: addss   xmm1, xmm0
0x928FC9: movaps  xmm2, xmm0
0x928FCC: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x928FD0: movaps  xmm0, xmm2
0x928FD3: addss   xmm0, xmm1
0x928FD7: movaps  [esp+30h+var_10], xmm0
0x928FDC: rsqrtss xmm1, xmm0
0x928FE0: movss   dword ptr [esp+30h+var_10], xmm1
0x928FE6: movaps  xmm4, [esp+30h+var_10]
0x928FEB: mulss   xmm0, xmm4
0x928FEF: mulss   xmm0, xmm4
0x928FF3: mov     [esp+30h+var_14], 40400000h
0x928FFB: movss   xmm1, [esp+30h+var_14]
0x929001: mov     [esp+30h+var_14], 3F000000h
0x929009: movss   xmm2, [esp+30h+var_14]
0x92900F: movaps  xmm5, xmm1
0x929012: subss   xmm5, xmm0
0x929016: movaps  xmm0, xmm2
0x929019: mulss   xmm0, xmm4
0x92901D: mulss   xmm0, xmm5
0x929021: movaps  xmm4, xmm0
0x929024: shufps  xmm4, xmm0, 0
0x929028: mulps   xmm4, xmm3
0x92902B: movaps  xmmword ptr [eax], xmm4
0x92902E: fnstsw  ax
0x929030: test    ah, 5
0x929033: jp      loc_929154
0x929039: test    edx, edx
0x92903B: jle     loc_929154
0x929041: mov     eax, [ebx+20h]
0x929044: fld     [esp+30h+var_24]
0x929048: fsub    [esp+30h+var_20]
0x92904C: dec     edx
0x92904D: dec     edi
0x92904E: shl     edx, 4
0x929051: mov     ecx, edi
0x929053: mov     esi, edx
0x929055: movaps  xmm0, xmmword ptr [eax+esi]
0x929059: mov     edx, [ebp+arg_4]
0x92905C: shl     ecx, 4
0x92905F: movaps  xmm3, xmmword ptr [eax+ecx]
0x929063: subps   xmm3, xmm0
0x929066: movaps  xmm0, xmm3
0x929069: mulps   xmm0, xmm3
0x92906C: movaps  xmm4, xmm0
0x92906F: shufps  xmm4, xmm0, 55h ; 'U'
0x929073: addss   xmm4, xmm0
0x929077: movaps  xmm5, xmm0
0x92907A: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x92907E: movaps  xmm0, xmm5
0x929081: addss   xmm0, xmm4
0x929085: movaps  [esp+30h+var_10], xmm0
0x92908A: rsqrtss xmm4, xmm0
0x92908E: movss   dword ptr [esp+30h+var_10], xmm4
0x929094: movaps  xmm4, [esp+30h+var_10]
0x929099: mulss   xmm0, xmm4
0x92909D: mulss   xmm0, xmm4
0x9290A1: fmul    [esp+30h+var_18]
0x9290A5: movaps  xmm5, xmm1
0x9290A8: subss   xmm5, xmm0
0x9290AC: fmul    dword ptr ds:0A3D65Ch
0x9290B2: movaps  xmm0, xmm2
0x9290B5: mulss   xmm0, xmm4
0x9290B9: mulss   xmm0, xmm5
0x9290BD: movaps  xmm5, xmm0
0x9290C0: fstp    [esp+30h+var_14]
0x9290C4: movss   xmm4, [esp+30h+var_14]
0x9290CA: shufps  xmm5, xmm0, 0
0x9290CE: shufps  xmm4, xmm4, 0
0x9290D2: movaps  xmm0, xmm4
0x9290D5: mulps   xmm5, xmm3
0x9290D8: movaps  xmm3, xmmword ptr [edx]
0x9290DB: mulps   xmm0, xmm5
0x9290DE: movaps  xmm5, xmmword ptr ds:0A6DFE0h
0x9290E5: subps   xmm5, xmm4
0x9290E8: movaps  xmm4, xmm5
0x9290EB: mulps   xmm4, xmm3
0x9290EE: movaps  xmm3, xmm4
0x9290F1: addps   xmm3, xmm0
0x9290F4: movaps  xmm0, xmm3
0x9290F7: mulps   xmm0, xmm3
0x9290FA: movaps  xmm4, xmm0
0x9290FD: shufps  xmm4, xmm0, 55h ; 'U'
0x929101: addss   xmm4, xmm0
0x929105: movaps  xmm5, xmm0
0x929108: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x92910C: movaps  xmm0, xmm5
0x92910F: addss   xmm0, xmm4
0x929113: movaps  [esp+30h+var_10], xmm0
0x929118: rsqrtss xmm4, xmm0
0x92911C: movss   dword ptr [esp+30h+var_10], xmm4
0x929122: movaps  xmm4, [esp+30h+var_10]
0x929127: mulss   xmm0, xmm4
0x92912B: mulss   xmm0, xmm4
0x92912F: movaps  xmm5, xmm1
0x929132: subss   xmm5, xmm0
0x929136: movaps  xmm0, xmm2
0x929139: mulss   xmm0, xmm4
0x92913D: mulss   xmm0, xmm5
0x929141: movaps  xmm4, xmm0
0x929144: shufps  xmm4, xmm0, 0
0x929148: mulps   xmm4, xmm3
0x92914B: mov     [esp+30h+var_1C], edi
0x92914F: movaps  xmmword ptr [edx], xmm4
0x929152: jmp     short loc_929157
0x929154: mov     edx, [ebp+arg_4]
0x929157: fild    [esp+30h+var_1C]
0x92915B: fsub    [ebp+arg_0]
0x92915E: fst     [esp+30h+var_20]
0x929162: fcomp   [esp+30h+var_24]
0x929166: fnstsw  ax
0x929168: test    ah, 5
0x92916B: jp      loc_929277
0x929171: mov     eax, [ebx+24h]
0x929174: dec     eax
0x929175: cmp     edi, eax
0x929177: jge     loc_929277
0x92917D: mov     ebx, [ebx+20h]
0x929180: fld     [esp+30h+var_24]
0x929184: movaps  xmm0, xmmword ptr [ebx+esi+10h]
0x929189: fsub    [esp+30h+var_20]
0x92918D: movaps  xmm3, xmmword ptr [ebx+ecx+10h]
0x929192: subps   xmm3, xmm0
0x929195: movaps  xmm0, xmm3
0x929198: mulps   xmm0, xmm3
0x92919B: movaps  xmm4, xmm0
0x92919E: shufps  xmm4, xmm0, 55h ; 'U'
0x9291A2: addss   xmm4, xmm0
0x9291A6: movaps  xmm5, xmm0
0x9291A9: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x9291AD: movaps  xmm0, xmm5
0x9291B0: addss   xmm0, xmm4
0x9291B4: movaps  [esp+30h+var_10], xmm0
0x9291B9: rsqrtss xmm4, xmm0
0x9291BD: movss   dword ptr [esp+30h+var_10], xmm4
0x9291C3: movaps  xmm4, [esp+30h+var_10]
0x9291C8: mulss   xmm0, xmm4
0x9291CC: mulss   xmm0, xmm4
0x9291D0: fmul    [esp+30h+var_18]
0x9291D4: movaps  xmm5, xmm1
0x9291D7: subss   xmm5, xmm0
0x9291DB: fmul    dword ptr ds:0A3D65Ch
0x9291E1: movaps  xmm0, xmm2
0x9291E4: mulss   xmm0, xmm4
0x9291E8: mulss   xmm0, xmm5
0x9291EC: movaps  xmm5, xmm0
0x9291EF: fstp    [esp+30h+var_14]
0x9291F3: movss   xmm4, [esp+30h+var_14]
0x9291F9: shufps  xmm5, xmm0, 0
0x9291FD: shufps  xmm4, xmm4, 0
0x929201: mulps   xmm5, xmm3
0x929204: movaps  xmm3, xmmword ptr [edx]
0x929207: movaps  xmm0, xmm4
0x92920A: mulps   xmm0, xmm5
0x92920D: movaps  xmm5, xmmword ptr ds:0A6DFE0h
0x929214: subps   xmm5, xmm4
0x929217: movaps  xmm4, xmm5
0x92921A: mulps   xmm4, xmm3
0x92921D: movaps  xmm3, xmm4
0x929220: addps   xmm3, xmm0
0x929223: movaps  xmm0, xmm3
0x929226: mulps   xmm0, xmm3
0x929229: movaps  xmm4, xmm0
0x92922C: shufps  xmm4, xmm0, 55h ; 'U'
0x929230: addss   xmm4, xmm0
0x929234: movaps  xmm5, xmm0
0x929237: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x92923B: movaps  xmm0, xmm5
0x92923E: addss   xmm0, xmm4
0x929242: movaps  [esp+30h+var_10], xmm0
0x929247: rsqrtss xmm4, xmm0
0x92924B: movss   dword ptr [esp+30h+var_10], xmm4
0x929251: movaps  xmm4, [esp+30h+var_10]
0x929256: mulss   xmm0, xmm4
0x92925A: mulss   xmm0, xmm4
0x92925E: subss   xmm1, xmm0
0x929262: mulss   xmm2, xmm4
0x929266: mulss   xmm2, xmm1
0x92926A: movaps  xmm0, xmm2
0x92926D: shufps  xmm0, xmm2, 0
0x929271: mulps   xmm0, xmm3
0x929274: movaps  xmmword ptr [edx], xmm0
0x929277: pop     edi
0x929278: pop     esi
0x929279: pop     ebx
0x92927A: mov     esp, ebp
0x92927C: pop     ebp
0x92927D: retn    8
