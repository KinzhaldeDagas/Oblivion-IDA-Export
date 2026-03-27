0x4EA670: push    ecx
0x4EA671: mov     eax, [esp+4+arg_0]
0x4EA675: fld     dword ptr [eax]
0x4EA677: push    esi
0x4EA678: fld     qword ptr ds:0A47A20h
0x4EA67E: mov     esi, ecx
0x4EA680: fmul    st(1), st
0x4EA682: fxch    st(1)
0x4EA684: fstp    [esp+8+var_4]
0x4EA688: fmul    dword ptr [eax+4]
0x4EA68B: mov     eax, [esp+8+arg_4]
0x4EA68F: push    eax
0x4EA690: sub     esp, 8
0x4EA693: fstp    [esp+14h+arg_0]
0x4EA697: fld     [esp+14h+arg_0]
0x4EA69B: fstp    [esp+14h+var_14]; double
0x4EA69E: call    _floor
0x4EA6A3: fstp    [esp+14h+arg_0]
0x4EA6A7: add     esp, 8
0x4EA6AA: fld     [esp+0Ch+arg_0]
0x4EA6AE: call    Double_To_SInt32
0x4EA6B3: fld     [esp+0Ch+var_4]
0x4EA6B7: push    eax
0x4EA6B8: sub     esp, 8
0x4EA6BB: fstp    qword ptr [esp]; double
0x4EA6BE: call    _floor
0x4EA6C3: fstp    [esp+18h+arg_0]
0x4EA6C7: add     esp, 8
0x4EA6CA: fld     [esp+10h+arg_0]
0x4EA6CE: call    Double_To_SInt32
0x4EA6D3: push    eax
0x4EA6D4: mov     ecx, esi
0x4EA6D6: call    sub_4EA580
0x4EA6DB: pop     esi
0x4EA6DC: pop     ecx
0x4EA6DD: retn    8
