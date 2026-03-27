0x4C2573: fldz; jumptable 004C24EE default case
0x4C2575: mov     ecx, [esp+arg_C]
0x4C2579: mov     eax, [ecx+24h]
0x4C257C: fild    dword ptr [eax+98h]
0x4C2582: mov     ecx, [esp+arg_10]
0x4C2586: fld     dword ptr [ecx+18h]
0x4C2589: fld     qword ptr ds:0A46040h
0x4C258F: fmul    st(1), st
0x4C2591: fxch    st(2)
0x4C2593: fsubrp  st(1), st
0x4C2595: fadd    [esp+arg_14]
0x4C2599: fld     qword ptr ds:0A46038h
0x4C259F: fmul    st(1), st
0x4C25A1: fxch    st(1)
0x4C25A3: fstp    [esp+arg_3C]
0x4C25A7: fild    dword ptr [eax+9Ch]
0x4C25AD: fld     dword ptr [ecx+1Ch]
0x4C25B0: fmulp   st(3), st
0x4C25B2: fsubrp  st(2), st
0x4C25B4: fld     [esp+arg_18]
0x4C25B8: faddp   st(2), st
0x4C25BA: fmulp   st(1), st
0x4C25BC: fstp    [esp+arg_40]
0x4C25C0: fld     [esp+arg_3C]
0x4C25C4: fstp    [esp+arg_50]
0x4C25C8: mov     edx, [esp+arg_50]
0x4C25CC: fld     [esp+arg_40]
0x4C25D0: mov     [esi+0A8h], edx
0x4C25D6: fstp    [esp+arg_54]
0x4C25DA: mov     eax, [esp+arg_54]
0x4C25DE: mov     [esi+0ACh], eax
0x4C25E4: fst     [esp+arg_58]
0x4C25E8: mov     ecx, [esp+arg_58]
0x4C25EC: fstp    [esp+arg_5C]
0x4C25F0: mov     edx, [esp+arg_5C]
0x4C25F4: mov     [esi+0B0h], ecx
0x4C25FA: mov     [esi+0B4h], edx
0x4C2600: add     ebp, 1
0x4C2603: cmp     ebp, 4
0x4C2606: jl      loc_4C23F6
0x4C260C: pop     edi
0x4C260D: pop     esi
0x4C260E: pop     ebp
0x4C260F: pop     ebx
0x4C2610: add     esp, 54h
0x4C2613: retn
