0x960510: sub     esp, 24h
0x960513: mov     eax, [esp+24h+arg_10]
0x960517: mov     ecx, [esp+24h+arg_8]
0x96051B: fld     dword ptr [eax]
0x96051D: fsub    dword ptr [ecx]
0x96051F: push    esi
0x960520: push    edi
0x960521: fstp    [esp+2Ch+var_24]
0x960525: fld     dword ptr [eax+4]
0x960528: fsub    dword ptr [ecx+4]
0x96052B: fstp    [esp+2Ch+var_20]
0x96052F: fld     dword ptr [eax+8]
0x960532: fsub    dword ptr [ecx+8]
0x960535: fstp    [esp+2Ch+var_1C]
0x960539: fld     [esp+2Ch+var_24]
0x96053D: fld     st
0x96053F: fld     dword ptr ds:0B3F9A8h
0x960545: fucompp
0x960547: fnstsw  ax
0x960549: fld     [esp+2Ch+var_1C]
0x96054D: test    ah, 44h
0x960550: fld     [esp+2Ch+var_20]
0x960554: jp      short loc_960578
0x960556: fld     st
0x960558: fld     dword ptr ds:0B3F9ACh
0x96055E: fucompp
0x960560: fnstsw  ax
0x960562: test    ah, 44h
0x960565: jp      short loc_960578
0x960567: fld     st(1)
0x960569: fld     dword ptr ds:0B3F9B0h
0x96056F: fucompp
0x960571: fnstsw  ax
0x960573: test    ah, 44h
0x960576: jnp     short loc_9605E4
0x960578: fld     [esp+2Ch+arg_0]
0x96057C: mov     esi, [esp+2Ch+arg_C]
0x960580: mov     eax, [esi+4]
0x960583: fld     st
0x960585: mov     ecx, [esi+8]
0x960588: fmulp   st(4), st
0x96058A: mov     edx, [esi+0Ch]
0x96058D: fxch    st(3)
0x96058F: mov     edi, [esp+2Ch+arg_4]
0x960593: fstp    [esp+2Ch+var_24]
0x960597: mov     [esp+2Ch+var_18], eax
0x96059B: mov     eax, [esp+2Ch+var_24]
0x96059F: fmul    st, st(2)
0x9605A1: mov     [esp+2Ch+var_14], ecx
0x9605A5: mov     [esp+2Ch+var_C], eax
0x9605A9: mov     [esp+2Ch+var_10], edx
0x9605AD: fstp    [esp+2Ch+var_20]
0x9605B1: mov     ecx, [esp+2Ch+var_20]
0x9605B5: lea     eax, [esp+2Ch+arg_C]
0x9605B9: fmulp   st(1), st
0x9605BB: push    eax
0x9605BC: mov     [esp+30h+var_8], ecx
0x9605C0: lea     ecx, [esp+30h+arg_4]
0x9605C4: fstp    [esp+30h+var_1C]
0x9605C8: mov     edx, [esp+30h+var_1C]
0x9605CC: mov     [esp+30h+var_4], edx
0x9605D0: push    ecx
0x9605D1: lea     edx, [edi+20h]
0x9605D4: push    edx
0x9605D5: lea     eax, [esp+38h+var_18]
0x9605D9: push    eax
0x9605DA: call    sub_96FCD0
0x9605DF: add     esp, 10h
0x9605E2: jmp     short loc_960607
0x9605E4: mov     edi, [esp+2Ch+arg_4]
0x9605E8: fstp    st(2)
0x9605EA: mov     esi, [esp+2Ch+arg_C]
0x9605EE: fstp    st
0x9605F0: lea     ecx, [esp+2Ch+arg_4]
0x9605F4: fstp    st
0x9605F6: push    ecx
0x9605F7: lea     edx, [edi+20h]
0x9605FA: push    edx
0x9605FB: lea     eax, [esi+4]
0x9605FE: push    eax
0x9605FF: call    sub_96FBB0
0x960604: add     esp, 0Ch
0x960607: fstp    [esp+2Ch+arg_4]
0x96060B: fld     dword ptr [edi+38h]
0x96060E: pop     edi
0x96060F: fadd    dword ptr [esi+10h]
0x960612: pop     esi
0x960613: fstp    [esp+24h+arg_C]
0x960617: fld     [esp+24h+arg_C]
0x96061B: fld     [esp+24h+arg_4]
0x96061F: fld     st(1)
0x960621: fmulp   st(2), st
0x960623: fxch    st(1)
0x960625: fstp    [esp+24h+arg_4]
0x960629: fld     [esp+24h+arg_4]
0x96062D: fcompp
0x96062F: fnstsw  ax
0x960631: test    ah, 1
0x960634: jnz     short loc_96063F
0x960636: mov     eax, 1
0x96063B: add     esp, 24h
0x96063E: retn
0x96063F: xor     eax, eax
0x960641: add     esp, 24h
0x960644: retn
