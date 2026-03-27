0x9743D0: sub     esp, 1Ch
0x9743D3: mov     edx, [esp+1Ch+arg_0]
0x9743D7: push    ebx
0x9743D8: push    ebp
0x9743D9: push    esi
0x9743DA: mov     esi, ecx
0x9743DC: fld     dword ptr [esi+1Ch]
0x9743DF: mov     eax, [esi+38h]
0x9743E2: fstp    [esp+28h+var_1C]
0x9743E6: push    edi
0x9743E7: fld     [esp+2Ch+var_1C]
0x9743EB: fld     dword ptr [edx]
0x9743ED: fmul    st, st(1)
0x9743EF: fstp    [esp+2Ch+var_18]
0x9743F3: fld     dword ptr [edx+4]
0x9743F6: fmul    st, st(1)
0x9743F8: fstp    [esp+2Ch+var_14]
0x9743FC: fmul    dword ptr [edx+8]
0x9743FF: fstp    [esp+2Ch+var_10]
0x974403: fld     dword ptr [eax+4]
0x974406: fadd    [esp+2Ch+var_18]
0x97440A: fstp    [esp+2Ch+var_C]
0x97440E: mov     ecx, [esp+2Ch+var_C]
0x974412: fld     dword ptr [eax+8]
0x974415: fadd    [esp+2Ch+var_14]
0x974419: fstp    [esp+2Ch+var_8]
0x97441D: fld     dword ptr [eax+0Ch]
0x974420: mov     [esi+20h], ecx
0x974423: fadd    [esp+2Ch+var_10]
0x974427: mov     ecx, [esp+2Ch+var_8]
0x97442B: mov     [esi+24h], ecx
0x97442E: fstp    [esp+2Ch+var_4]
0x974432: mov     ecx, [esp+2Ch+var_4]
0x974436: mov     [esi+28h], ecx
0x974439: fld     dword ptr [esi+44h]
0x97443C: fstp    [esp+2Ch+arg_0]
0x974440: fld     [esp+2Ch+arg_0]
0x974444: fld     dword ptr [eax+10h]
0x974447: fmul    st, st(1)
0x974449: fstp    [esp+2Ch+var_18]
0x97444D: fld     dword ptr [eax+14h]
0x974450: fmul    st, st(1)
0x974452: fstp    [esp+2Ch+var_14]
0x974456: fmul    dword ptr [eax+18h]
0x974459: fstp    [esp+2Ch+var_10]
0x97445D: fld     dword ptr [esi+20h]
0x974460: fadd    [esp+2Ch+var_18]
0x974464: fstp    dword ptr [esi+20h]
0x974467: fld     [esp+2Ch+var_14]
0x97446B: fadd    dword ptr [esi+24h]
0x97446E: fstp    dword ptr [esi+24h]
0x974471: fld     dword ptr [esi+28h]
0x974474: fadd    [esp+2Ch+var_10]
0x974478: fstp    dword ptr [esi+28h]
0x97447B: mov     ecx, [esi+38h]
0x97447E: fld     dword ptr [esi+44h]
0x974481: fld     dword ptr [ecx+34h]
0x974484: fchs
0x974486: fucompp
0x974488: fnstsw  ax
0x97448A: test    ah, 44h
0x97448D: jp      short loc_974494
0x97448F: or      ebp, 0FFFFFFFFh
0x974492: jmp     short loc_9744AC
0x974494: fld     dword ptr [esi+44h]
0x974497: fld     dword ptr [ecx+34h]
0x97449A: fucompp
0x97449C: fnstsw  ax
0x97449E: test    ah, 44h
0x9744A1: jp      short loc_9744AA
0x9744A3: mov     ebp, 1
0x9744A8: jmp     short loc_9744AC
0x9744AA: xor     ebp, ebp
0x9744AC: fld     dword ptr [esi+48h]
0x9744AF: fstp    [esp+2Ch+arg_0]
0x9744B3: fld     [esp+2Ch+arg_0]
0x9744B7: fld     dword ptr [ecx+1Ch]
0x9744BA: fmul    st, st(1)
0x9744BC: fstp    [esp+2Ch+var_18]
0x9744C0: fld     dword ptr [ecx+20h]
0x9744C3: fmul    st, st(1)
0x9744C5: fstp    [esp+2Ch+var_14]
0x9744C9: fmul    dword ptr [ecx+24h]
0x9744CC: fstp    [esp+2Ch+var_10]
0x9744D0: fld     dword ptr [esi+20h]
0x9744D3: fadd    [esp+2Ch+var_18]
0x9744D7: fstp    dword ptr [esi+20h]
0x9744DA: fld     [esp+2Ch+var_14]
0x9744DE: fadd    dword ptr [esi+24h]
0x9744E1: fstp    dword ptr [esi+24h]
0x9744E4: fld     dword ptr [esi+28h]
0x9744E7: fadd    [esp+2Ch+var_10]
0x9744EB: fstp    dword ptr [esi+28h]
0x9744EE: mov     ecx, [esi+38h]
0x9744F1: fld     dword ptr [esi+48h]
0x9744F4: fld     dword ptr [ecx+38h]
0x9744F7: fchs
0x9744F9: fucompp
0x9744FB: fnstsw  ax
0x9744FD: test    ah, 44h
0x974500: jp      short loc_974507
0x974502: or      ebx, 0FFFFFFFFh
0x974505: jmp     short loc_97451F
0x974507: fld     dword ptr [esi+48h]
0x97450A: fld     dword ptr [ecx+38h]
0x97450D: fucompp
0x97450F: fnstsw  ax
0x974511: test    ah, 44h
0x974514: jp      short loc_97451D
0x974516: mov     ebx, 1
0x97451B: jmp     short loc_97451F
0x97451D: xor     ebx, ebx
0x97451F: fld     dword ptr [esi+4Ch]
0x974522: fstp    [esp+2Ch+arg_0]
0x974526: fld     [esp+2Ch+arg_0]
0x97452A: fld     dword ptr [ecx+28h]
0x97452D: fmul    st, st(1)
0x97452F: fstp    [esp+2Ch+var_18]
0x974533: fld     dword ptr [ecx+2Ch]
0x974536: fmul    st, st(1)
0x974538: fstp    [esp+2Ch+var_14]
0x97453C: fmul    dword ptr [ecx+30h]
0x97453F: fstp    [esp+2Ch+var_10]
0x974543: fld     dword ptr [esi+20h]
0x974546: fadd    [esp+2Ch+var_18]
0x97454A: fstp    dword ptr [esi+20h]
0x97454D: fld     [esp+2Ch+var_14]
0x974551: fadd    dword ptr [esi+24h]
0x974554: fstp    dword ptr [esi+24h]
0x974557: fld     dword ptr [esi+28h]
0x97455A: fadd    [esp+2Ch+var_10]
0x97455E: fstp    dword ptr [esi+28h]
0x974561: mov     ecx, [esi+38h]
0x974564: fld     dword ptr [esi+4Ch]
0x974567: fld     dword ptr [ecx+3Ch]
0x97456A: fchs
0x97456C: fucompp
0x97456E: fnstsw  ax
0x974570: test    ah, 44h
0x974573: jp      short loc_97457A
0x974575: or      edi, 0FFFFFFFFh
0x974578: jmp     short loc_974592
0x97457A: fld     dword ptr [esi+4Ch]
0x97457D: fld     dword ptr [ecx+3Ch]
0x974580: fucompp
0x974582: fnstsw  ax
0x974584: test    ah, 44h
0x974587: jp      short loc_974590
0x974589: mov     edi, 1
0x97458E: jmp     short loc_974592
0x974590: xor     edi, edi
0x974592: mov     eax, [esp+2Ch+arg_4]
0x974596: fld     dword ptr [eax]
0x974598: sub     esp, 0Ch
0x97459B: fsub    dword ptr [edx]
0x97459D: fstp    [esp+38h+var_C]
0x9745A1: fld     dword ptr [eax+4]
0x9745A4: fsub    dword ptr [edx+4]
0x9745A7: fstp    [esp+38h+var_8]
0x9745AB: fld     dword ptr [eax+8]
0x9745AE: mov     eax, esp
0x9745B0: fsub    dword ptr [edx+8]
0x9745B3: mov     edx, [esp+38h+var_C]
0x9745B7: mov     [eax], edx
0x9745B9: mov     edx, [esp+38h+var_8]
0x9745BD: mov     [eax+4], edx
0x9745C0: fstp    [esp+38h+var_4]
0x9745C4: mov     edx, [esp+38h+var_4]
0x9745C8: push    edi; int
0x9745C9: push    ebx; int
0x9745CA: mov     [eax+8], edx
0x9745CD: push    ebp; int
0x9745CE: lea     eax, [esp+44h+var_C]
0x9745D2: push    eax; int
0x9745D3: call    sub_9647B0
0x9745D8: mov     ecx, [eax]
0x9745DA: mov     [esi+2Ch], ecx
0x9745DD: mov     edx, [eax+4]
0x9745E0: mov     [esi+30h], edx
0x9745E3: mov     eax, [eax+8]
0x9745E6: pop     edi
0x9745E7: mov     [esi+34h], eax
0x9745EA: pop     esi
0x9745EB: pop     ebp
0x9745EC: pop     ebx
0x9745ED: add     esp, 1Ch
0x9745F0: retn    8
