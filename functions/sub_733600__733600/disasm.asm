0x733600: sub     esp, 10h
0x733603: push    esi
0x733604: mov     esi, ecx
0x733606: cmp     dword ptr [esi+1Ch], 0
0x73360A: jnz     short loc_733612
0x73360C: lea     eax, [esi+0Ch]
0x73360F: mov     [esi+1Ch], eax
0x733612: mov     ecx, [esi+1Ch]
0x733615: mov     eax, [ecx+0Ch]
0x733618: test    eax, eax
0x73361A: mov     [esi+20h], eax
0x73361D: jz      loc_733703
0x733623: cmp     eax, [esi+24h]
0x733626: jle     short loc_733678
0x733628: mov     edx, [esi+28h]
0x73362B: push    edx
0x73362C: call    FormHeapFree
0x733631: mov     eax, [esi+20h]
0x733634: xor     ecx, ecx
0x733636: mov     [esi+24h], eax
0x733639: mov     edx, 4
0x73363E: mul     edx
0x733640: seto    cl
0x733643: neg     ecx
0x733645: or      ecx, eax
0x733647: push    ecx; Size
0x733648: call    FormHeapAlloc
0x73364D: mov     [esi+28h], eax
0x733650: mov     eax, [esi+2Ch]
0x733653: push    eax
0x733654: call    FormHeapFree
0x733659: mov     eax, [esi+24h]
0x73365C: xor     ecx, ecx
0x73365E: mov     edx, 4
0x733663: mul     edx
0x733665: seto    cl
0x733668: neg     ecx
0x73366A: or      ecx, eax
0x73366C: push    ecx; Size
0x73366D: call    FormHeapAlloc
0x733672: add     esp, 10h
0x733675: mov     [esi+2Ch], eax
0x733678: mov     eax, [esi+1Ch]
0x73367B: mov     edx, [eax+4]
0x73367E: mov     eax, [esi+8]
0x733681: fld     dword ptr [eax+64h]
0x733684: add     eax, 64h ; 'd'
0x733687: fstp    [esp+14h+var_C]
0x73368B: xor     ecx, ecx
0x73368D: cmp     [esi+20h], ecx
0x733690: fld     dword ptr [eax+0Ch]
0x733693: fstp    [esp+14h+var_8]
0x733697: fld     dword ptr [eax+18h]
0x73369A: fstp    [esp+14h+var_4]
0x73369E: jle     short loc_7336F3
0x7336A0: fld     [esp+14h+var_4]
0x7336A4: push    edi
0x7336A5: fld     [esp+18h+var_8]
0x7336A9: fld     [esp+18h+var_C]
0x7336AD: mov     edi, [esi+28h]
0x7336B0: lea     eax, [edx+8]
0x7336B3: mov     eax, [eax]
0x7336B5: mov     edx, [edx]
0x7336B7: mov     [edi+ecx*4], eax
0x7336BA: mov     eax, [esi+28h]
0x7336BD: mov     eax, [eax+ecx*4]
0x7336C0: fld     dword ptr [eax+24h]
0x7336C3: add     eax, 20h ; ' '
0x7336C6: fmul    st, st(2)
0x7336C8: add     ecx, 1
0x7336CB: fld     dword ptr [eax]
0x7336CD: fmul    st, st(2)
0x7336CF: faddp   st(1), st
0x7336D1: fld     dword ptr [eax+8]
0x7336D4: mov     eax, [esi+2Ch]
0x7336D7: fmul    st, st(4)
0x7336D9: faddp   st(1), st
0x7336DB: fstp    [esp+18h+var_10]
0x7336DF: fld     [esp+18h+var_10]
0x7336E3: fstp    dword ptr [eax+ecx*4-4]
0x7336E7: cmp     ecx, [esi+20h]
0x7336EA: jl      short loc_7336AD
0x7336EC: fstp    st(2)
0x7336EE: pop     edi
0x7336EF: fstp    st
0x7336F1: fstp    st
0x7336F3: mov     ecx, [esi+20h]
0x7336F6: sub     ecx, 1
0x7336F9: push    ecx
0x7336FA: push    0
0x7336FC: mov     ecx, esi
0x7336FE: call    sub_733380
0x733703: pop     esi
0x733704: add     esp, 10h
0x733707: retn
