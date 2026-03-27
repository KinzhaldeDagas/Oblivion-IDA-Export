0x6BE4D0: sub     esp, 24h
0x6BE4D3: push    ebx
0x6BE4D4: mov     ebx, [esp+28h+arg_4]
0x6BE4D8: push    esi
0x6BE4D9: push    edi
0x6BE4DA: xor     edi, edi
0x6BE4DC: lea     esi, [ebx+14h]
0x6BE4DF: nop
0x6BE4E0: mov     eax, [esi]
0x6BE4E2: test    eax, eax
0x6BE4E4: jnz     short loc_6BE4EA
0x6BE4E6: fldz
0x6BE4E8: jmp     short loc_6BE50D
0x6BE4EA: movzx   ecx, byte ptr [edi+ebx+2Ch]
0x6BE4EF: fld     [esp+30h+arg_0]
0x6BE4F3: push    ecx; char
0x6BE4F4: mov     ecx, [esi+1Ch]
0x6BE4F7: lea     edx, [esi+28h]
0x6BE4FA: push    edx; int
0x6BE4FB: push    eax; int
0x6BE4FC: mov     eax, [esi+0Ch]
0x6BE4FF: push    eax; int
0x6BE500: push    ecx; int
0x6BE501: push    ecx
0x6BE502: fstp    [esp+48h+var_48]; float
0x6BE505: call    sub_6BB270
0x6BE50A: add     esp, 18h
0x6BE50D: fstp    [esp+edi*4+30h+var_C]
0x6BE511: add     edi, 1
0x6BE514: add     esi, 4
0x6BE517: cmp     edi, 3
0x6BE51A: jb      short loc_6BE4E0
0x6BE51C: fld     [esp+30h+var_C]
0x6BE520: fmul    qword ptr ds:0A2FAA0h
0x6BE526: fstp    [esp+30h+arg_4]
0x6BE52A: fld     [esp+30h+arg_4]
0x6BE52E: fsincos
0x6BE530: fstp    [esp+30h+var_18]
0x6BE534: fstp    [esp+30h+var_14]
0x6BE538: fld     [esp+30h+var_8]
0x6BE53C: fmul    qword ptr ds:0A2FAA0h
0x6BE542: fstp    [esp+30h+var_20]
0x6BE546: fld     [esp+30h+var_20]
0x6BE54A: fsincos
0x6BE54C: fstp    [esp+30h+arg_4]
0x6BE550: fstp    [esp+30h+var_1C]
0x6BE554: fld     [esp+30h+var_4]
0x6BE558: fmul    qword ptr ds:0A2FAA0h
0x6BE55E: fstp    [esp+30h+var_10]
0x6BE562: fld     [esp+30h+var_10]
0x6BE566: fsincos
0x6BE568: fstp    [esp+30h+var_24]
0x6BE56C: fstp    [esp+30h+var_20]
0x6BE570: fld     [esp+30h+var_20]
0x6BE574: mov     eax, [esp+30h+arg_C]
0x6BE578: fld     st
0x6BE57A: pop     edi
0x6BE57B: fld     [esp+2Ch+var_1C]
0x6BE57F: pop     esi
0x6BE580: fld     st
0x6BE582: pop     ebx
0x6BE583: fmulp   st(2), st
0x6BE585: fld     [esp+24h+var_24]
0x6BE588: fmul    [esp+24h+arg_4]
0x6BE58C: fld     [esp+24h+var_18]
0x6BE590: fld     st
0x6BE592: fmul    st, st(2)
0x6BE594: fld     [esp+24h+var_14]
0x6BE598: fld     st
0x6BE59A: fmul    st, st(6)
0x6BE59C: faddp   st(2), st
0x6BE59E: fxch    st(1)
0x6BE5A0: fstp    dword ptr [eax]
0x6BE5A2: fld     st
0x6BE5A4: fmulp   st(3), st
0x6BE5A6: fld     st(1)
0x6BE5A8: fmulp   st(5), st
0x6BE5AA: fxch    st(2)
0x6BE5AC: fsubrp  st(4), st
0x6BE5AE: fxch    st(3)
0x6BE5B0: fstp    dword ptr [eax+4]
0x6BE5B3: fld     [esp+24h+arg_4]
0x6BE5B7: fmulp   st(4), st
0x6BE5B9: fld     [esp+24h+var_24]
0x6BE5BC: fmulp   st(2), st
0x6BE5BE: fld     st(2)
0x6BE5C0: fmul    st, st(2)
0x6BE5C2: fld     st(1)
0x6BE5C4: fmul    st, st(5)
0x6BE5C6: faddp   st(1), st
0x6BE5C8: fstp    dword ptr [eax+8]
0x6BE5CB: fxch    st(2)
0x6BE5CD: fmulp   st(3), st
0x6BE5CF: fmulp   st(1), st
0x6BE5D1: fsubp   st(1), st
0x6BE5D3: fstp    dword ptr [eax+0Ch]
0x6BE5D6: add     esp, 24h
0x6BE5D9: retn
