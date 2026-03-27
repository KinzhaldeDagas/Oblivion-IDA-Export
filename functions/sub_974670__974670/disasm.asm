0x974670: sub     esp, 48h
0x974673: mov     eax, [esp+48h+arg_0]
0x974677: fld     dword ptr [eax]
0x974679: push    ebx
0x97467A: fld     [esp+4Ch+arg_8]
0x97467E: mov     ebx, ecx
0x974680: fld     st
0x974682: push    esi
0x974683: fmulp   st(2), st
0x974685: mov     esi, [ebx+38h]
0x974688: push    edi
0x974689: fxch    st(1)
0x97468B: add     esi, 4
0x97468E: mov     ecx, 0Fh
0x974693: lea     edi, [esp+54h+var_3C]
0x974697: rep movsd
0x974699: fstp    [esp+54h+var_48]
0x97469D: fld     dword ptr [eax+4]
0x9746A0: fmul    st, st(1)
0x9746A2: fstp    [esp+54h+var_44]
0x9746A6: fld     dword ptr [eax+8]
0x9746A9: fmul    st, st(1)
0x9746AB: fstp    [esp+54h+var_40]
0x9746AF: fld     [esp+54h+var_48]
0x9746B3: mov     eax, [esp+54h+arg_4]
0x9746B7: fadd    [esp+54h+var_3C]
0x9746BB: lea     ecx, [ebx+48h]
0x9746BE: lea     edx, [ebx+44h]
0x9746C1: fstp    [esp+54h+var_3C]
0x9746C5: fld     [esp+54h+var_38]
0x9746C9: fadd    [esp+54h+var_44]
0x9746CD: fstp    [esp+54h+var_38]
0x9746D1: fld     [esp+54h+var_34]
0x9746D5: fadd    [esp+54h+var_40]
0x9746D9: fstp    [esp+54h+var_34]
0x9746DD: fld     dword ptr [eax]
0x9746DF: fmul    st, st(1)
0x9746E1: fstp    [esp+54h+var_48]
0x9746E5: fld     dword ptr [eax+4]
0x9746E8: fmul    st, st(1)
0x9746EA: fstp    [esp+54h+var_44]
0x9746EE: fmul    dword ptr [eax+8]
0x9746F1: mov     eax, [ebx+3Ch]
0x9746F4: add     eax, 4
0x9746F7: fstp    [esp+54h+var_40]
0x9746FB: fld     dword ptr [eax+4]
0x9746FE: fadd    [esp+54h+var_44]
0x974702: fstp    [esp+54h+arg_0]
0x974706: fld     dword ptr [eax+8]
0x974709: fadd    [esp+54h+var_40]
0x97470D: fstp    [esp+54h+arg_8]
0x974711: fld     dword ptr [eax]
0x974713: lea     eax, [ebx+4Ch]
0x974716: fadd    [esp+54h+var_48]
0x97471A: push    eax
0x97471B: push    ecx
0x97471C: push    edx
0x97471D: fstp    [esp+60h+var_48]
0x974721: lea     eax, [esp+60h+var_3C]
0x974725: fld     [esp+60h+arg_0]
0x974729: push    eax
0x97472A: fstp    [esp+64h+var_44]
0x97472E: lea     ecx, [esp+64h+var_48]
0x974732: fld     [esp+64h+arg_8]
0x974736: push    ecx
0x974737: fstp    [esp+68h+var_40]
0x97473B: call    sub_974C80
0x974740: fmul    dword ptr [ebx+40h]
0x974743: add     esp, 14h
0x974746: pop     edi
0x974747: pop     esi
0x974748: fsub    qword ptr ds:0A2F928h
0x97474E: pop     ebx
0x97474F: fstp    [esp+48h+arg_0]
0x974753: fld     [esp+48h+arg_0]
0x974757: add     esp, 48h
0x97475A: retn    0Ch
