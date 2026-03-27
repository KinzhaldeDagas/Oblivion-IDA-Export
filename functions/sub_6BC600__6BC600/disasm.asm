0x6BC600: mov     ecx, [esp+arg_4]
0x6BC604: sub     esp, 6Ch
0x6BC607: add     ecx, 0FFFFFFFFh
0x6BC60A: jz      loc_6BC773
0x6BC610: mov     eax, [esp+6Ch+arg_0]
0x6BC614: fld     qword ptr ds:0A3D0C0h
0x6BC61A: fld     qword ptr ds:0A30E48h
0x6BC620: add     eax, 4Ch ; 'L'
0x6BC623: fld     dword ptr [eax-30h]
0x6BC626: fmul    st, st(2)
0x6BC628: fstp    [esp+6Ch+var_6C]
0x6BC62B: fld     dword ptr [eax-2Ch]
0x6BC62E: fmul    st, st(2)
0x6BC630: fstp    [esp+6Ch+var_68]
0x6BC634: fld     dword ptr [eax-28h]
0x6BC637: fmul    st, st(2)
0x6BC639: fstp    [esp+6Ch+var_64]
0x6BC63D: fld     dword ptr [eax+4]
0x6BC640: fadd    [esp+6Ch+var_6C]
0x6BC643: fstp    [esp+6Ch+var_48]
0x6BC647: fld     dword ptr [eax+8]
0x6BC64A: fadd    [esp+6Ch+var_68]
0x6BC64E: fstp    [esp+6Ch+var_44]
0x6BC652: fld     dword ptr [eax+0Ch]
0x6BC655: fadd    [esp+6Ch+var_64]
0x6BC659: fstp    [esp+6Ch+var_40]
0x6BC65D: fld     dword ptr [eax-8]
0x6BC660: fsub    dword ptr [eax-48h]
0x6BC663: fstp    [esp+6Ch+var_60]
0x6BC667: fld     dword ptr [eax-4]
0x6BC66A: fsub    dword ptr [eax-44h]
0x6BC66D: fstp    [esp+6Ch+var_5C]
0x6BC671: fld     dword ptr [eax]
0x6BC673: fsub    dword ptr [eax-40h]
0x6BC676: fstp    [esp+6Ch+var_58]
0x6BC67A: fld     [esp+6Ch+var_60]
0x6BC67E: fmul    st, st(1)
0x6BC680: fstp    [esp+6Ch+var_54]
0x6BC684: fld     [esp+6Ch+var_5C]
0x6BC688: fmul    st, st(1)
0x6BC68A: fstp    [esp+6Ch+var_50]
0x6BC68E: fld     [esp+6Ch+var_58]
0x6BC692: fmul    st, st(1)
0x6BC694: fstp    [esp+6Ch+var_4C]
0x6BC698: fld     [esp+6Ch+var_54]
0x6BC69C: fsub    [esp+6Ch+var_48]
0x6BC6A0: fstp    [esp+6Ch+var_3C]
0x6BC6A4: mov     edx, [esp+6Ch+var_3C]
0x6BC6A8: fld     [esp+6Ch+var_50]
0x6BC6AC: mov     [eax-24h], edx
0x6BC6AF: fsub    [esp+6Ch+var_44]
0x6BC6B3: fstp    [esp+6Ch+var_38]
0x6BC6B7: mov     edx, [esp+6Ch+var_38]
0x6BC6BB: fld     [esp+6Ch+var_4C]
0x6BC6BF: mov     [eax-20h], edx
0x6BC6C2: fsub    [esp+6Ch+var_40]
0x6BC6C6: fstp    [esp+6Ch+var_34]
0x6BC6CA: mov     edx, [esp+6Ch+var_34]
0x6BC6CE: mov     [eax-1Ch], edx
0x6BC6D1: fld     dword ptr [eax-8]
0x6BC6D4: fsub    dword ptr [eax-48h]
0x6BC6D7: fstp    [esp+6Ch+var_30]
0x6BC6DB: fld     dword ptr [eax-4]
0x6BC6DE: fsub    dword ptr [eax-44h]
0x6BC6E1: fstp    [esp+6Ch+var_2C]
0x6BC6E5: fld     dword ptr [eax]
0x6BC6E7: fsub    dword ptr [eax-40h]
0x6BC6EA: fstp    [esp+6Ch+var_28]
0x6BC6EE: fld     [esp+6Ch+var_30]
0x6BC6F2: fmul    st, st(2)
0x6BC6F4: fstp    [esp+6Ch+var_18]
0x6BC6F8: fld     [esp+6Ch+var_2C]
0x6BC6FC: fmul    st, st(2)
0x6BC6FE: fstp    [esp+6Ch+var_14]
0x6BC702: fld     [esp+6Ch+var_28]
0x6BC706: fmul    st, st(2)
0x6BC708: fstp    [esp+6Ch+var_10]
0x6BC70C: fld     dword ptr [eax+4]
0x6BC70F: fadd    dword ptr [eax-30h]
0x6BC712: fstp    [esp+6Ch+var_24]
0x6BC716: fld     dword ptr [eax+8]
0x6BC719: fadd    dword ptr [eax-2Ch]
0x6BC71C: fstp    [esp+6Ch+var_20]
0x6BC720: fld     dword ptr [eax+0Ch]
0x6BC723: fadd    dword ptr [eax-28h]
0x6BC726: fstp    [esp+6Ch+var_1C]
0x6BC72A: fld     [esp+6Ch+var_24]
0x6BC72E: fsub    [esp+6Ch+var_18]
0x6BC732: fstp    [esp+6Ch+var_C]
0x6BC736: fld     [esp+6Ch+var_20]
0x6BC73A: mov     edx, [esp+6Ch+var_C]
0x6BC73E: fsub    [esp+6Ch+var_14]
0x6BC742: mov     [eax-18h], edx
0x6BC745: add     eax, 40h ; '@'
0x6BC748: sub     ecx, 1
0x6BC74B: fstp    [esp+6Ch+var_8]
0x6BC74F: mov     edx, [esp+6Ch+var_8]
0x6BC753: fld     [esp+6Ch+var_1C]
0x6BC757: mov     [eax-54h], edx
0x6BC75A: fsub    [esp+6Ch+var_10]
0x6BC75E: fstp    [esp+6Ch+var_4]
0x6BC762: mov     edx, [esp+6Ch+var_4]
0x6BC766: mov     [eax-50h], edx
0x6BC769: jnz     loc_6BC623
0x6BC76F: fstp    st(1)
0x6BC771: fstp    st
0x6BC773: add     esp, 6Ch
0x6BC776: retn
