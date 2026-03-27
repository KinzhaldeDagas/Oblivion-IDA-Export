0x6D2480: mov     eax, [esp+arg_8]
0x6D2484: fld     [esp+arg_4]
0x6D2488: push    esi
0x6D2489: push    eax; int
0x6D248A: push    ecx
0x6D248B: mov     esi, ecx
0x6D248D: fstp    [esp+0Ch+var_C]; float
0x6D2490: mov     ecx, dword ptr [esp+0Ch+arg_0]
0x6D2494: push    ecx; char
0x6D2495: mov     ecx, esi
0x6D2497: call    sub_6CCE40
0x6D249C: mov     dword ptr [esi], offset ??_7NiBlendFloatInterpolator@@6B@; const NiBlendFloatInterpolator::`vftable'
0x6D24A2: fld     dword ptr ds:0A7C6B0h
0x6D24A8: fstp    dword ptr [esi+30h]
0x6D24AB: mov     eax, esi
0x6D24AD: pop     esi
0x6D24AE: retn    0Ch
