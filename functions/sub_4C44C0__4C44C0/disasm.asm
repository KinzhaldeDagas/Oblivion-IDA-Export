0x4C44C0: sub     esp, 28h
0x4C44C3: push    ebx
0x4C44C4: push    esi
0x4C44C5: mov     esi, [esp+30h+arg_0]
0x4C44C9: mov     ebx, [esi+18h]
0x4C44CC: push    edi
0x4C44CD: mov     edi, ecx
0x4C44CF: mov     ecx, [esi+40h]
0x4C44D2: lea     eax, [esp+34h+var_18]
0x4C44D6: push    eax
0x4C44D7: push    ecx
0x4C44D8: push    ebx
0x4C44D9: mov     ecx, edi
0x4C44DB: call    sub_4C1DD0
0x4C44E0: mov     eax, [esi+44h]
0x4C44E3: lea     edx, [esp+34h+var_24]
0x4C44E7: push    edx
0x4C44E8: push    eax
0x4C44E9: push    ebx
0x4C44EA: mov     ecx, edi
0x4C44EC: call    sub_4C1DD0
0x4C44F1: mov     edx, [esi+48h]
0x4C44F4: lea     ecx, [esp+34h+var_C]
0x4C44F8: push    ecx
0x4C44F9: push    edx
0x4C44FA: push    ebx
0x4C44FB: mov     ecx, edi
0x4C44FD: call    sub_4C1DD0
0x4C4502: cmp     byte ptr [esi+4Ch], 0
0x4C4506: jnz     short loc_4C457E
0x4C4508: cmp     byte ptr [esi+4Dh], 0
0x4C450C: fld     [esp+34h+var_10]
0x4C4510: fld     st
0x4C4512: fld     [esp+34h+var_1C]
0x4C4516: fld     st
0x4C4518: fsubp   st(2), st
0x4C451A: fld     qword ptr ds:0A46050h
0x4C4520: fmul    st(2), st
0x4C4522: fxch    st(2)
0x4C4524: fstp    [esp+34h+arg_0]
0x4C4528: fld     [esp+34h+var_4]
0x4C452C: fsubrp  st(3), st
0x4C452E: fxch    st(2)
0x4C4530: fmulp   st(1), st
0x4C4532: fstp    [esp+34h+var_28]
0x4C4536: jnz     short loc_4C455B
0x4C4538: fld     dword ptr [esi+1Ch]
0x4C453B: mov     eax, [esp+34h+arg_4]
0x4C453F: fmul    [esp+34h+arg_0]
0x4C4543: pop     edi
0x4C4544: faddp   st(1), st
0x4C4546: fld     dword ptr [esi+20h]
0x4C4549: pop     esi
0x4C454A: fmul    [esp+2Ch+var_28]
0x4C454E: pop     ebx
0x4C454F: faddp   st(1), st
0x4C4551: fstp    dword ptr [eax]
0x4C4553: mov     al, 1
0x4C4555: add     esp, 28h
0x4C4558: retn    8
0x4C455B: fld     dword ptr [esi+20h]
0x4C455E: mov     ecx, [esp+34h+arg_4]
0x4C4562: fmul    [esp+34h+arg_0]
0x4C4566: pop     edi
0x4C4567: mov     al, 1
0x4C4569: faddp   st(1), st
0x4C456B: fld     dword ptr [esi+1Ch]
0x4C456E: pop     esi
0x4C456F: fmul    [esp+2Ch+var_28]
0x4C4573: pop     ebx
0x4C4574: faddp   st(1), st
0x4C4576: fstp    dword ptr [ecx]
0x4C4578: add     esp, 28h
0x4C457B: retn    8
0x4C457E: cmp     byte ptr [esi+4Dh], 0
0x4C4582: jz      short loc_4C45DD
0x4C4584: fld     [esp+34h+var_10]
0x4C4588: mov     edx, [esp+34h+arg_4]
0x4C458C: fld     st
0x4C458E: pop     edi
0x4C458F: fld     dword ptr [esi+1Ch]
0x4C4592: mov     al, 1
0x4C4594: fld     qword ptr ds:0A3F428h
0x4C459A: fld     st
0x4C459C: fsubrp  st(2), st
0x4C459E: fld     [esp+30h+var_4]
0x4C45A2: fsubp   st(4), st
0x4C45A4: fld     qword ptr ds:0A46050h
0x4C45AA: fmul    st(4), st
0x4C45AC: fxch    st(4)
0x4C45AE: fstp    [esp+30h+arg_0]
0x4C45B2: fld     [esp+30h+arg_0]
0x4C45B6: fmulp   st(2), st
0x4C45B8: fsub    dword ptr [esi+20h]
0x4C45BB: pop     esi
0x4C45BC: fld     [esp+2Ch+var_1C]
0x4C45C0: pop     ebx
0x4C45C1: fsubr   st, st(3)
0x4C45C3: fmulp   st(4), st
0x4C45C5: fxch    st(3)
0x4C45C7: fstp    [esp+28h+arg_0]
0x4C45CB: fld     [esp+28h+arg_0]
0x4C45CF: fmulp   st(3), st
0x4C45D1: faddp   st(2), st
0x4C45D3: fsubrp  st(1), st
0x4C45D5: fstp    dword ptr [edx]
0x4C45D7: add     esp, 28h
0x4C45DA: retn    8
0x4C45DD: fld     [esp+34h+var_1C]
0x4C45E1: mov     eax, [esp+34h+arg_4]
0x4C45E5: fld     [esp+34h+var_10]
0x4C45E9: pop     edi
0x4C45EA: fld     st
0x4C45EC: fsubp   st(2), st
0x4C45EE: fld     qword ptr ds:0A46050h
0x4C45F4: fmul    st(2), st
0x4C45F6: fxch    st(2)
0x4C45F8: fstp    [esp+30h+arg_0]
0x4C45FC: fld     [esp+30h+arg_0]
0x4C4600: fmul    dword ptr [esi+1Ch]
0x4C4603: fadd    st, st(1)
0x4C4605: fld     [esp+30h+var_4]
0x4C4609: fsubrp  st(2), st
0x4C460B: fxch    st(1)
0x4C460D: fmulp   st(2), st
0x4C460F: fxch    st(1)
0x4C4611: fstp    [esp+30h+arg_0]
0x4C4615: fld     [esp+30h+arg_0]
0x4C4619: fmul    dword ptr [esi+20h]
0x4C461C: pop     esi
0x4C461D: pop     ebx
0x4C461E: faddp   st(1), st
0x4C4620: fstp    dword ptr [eax]
0x4C4622: mov     al, 1
0x4C4624: add     esp, 28h
0x4C4627: retn    8
