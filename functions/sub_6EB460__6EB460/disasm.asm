0x6EB460: mov     eax, [esp+arg_8]
0x6EB464: fld     [esp+arg_4]
0x6EB468: push    esi
0x6EB469: push    eax; int
0x6EB46A: push    ecx
0x6EB46B: mov     esi, ecx
0x6EB46D: fstp    [esp+0Ch+var_C]; float
0x6EB470: mov     ecx, dword ptr [esp+0Ch+arg_0]
0x6EB474: push    ecx; char
0x6EB475: mov     ecx, esi
0x6EB477: call    sub_6CCE40
0x6EB47C: mov     dword ptr [esi], offset ??_7NiBlendBoolInterpolator@@6B@; const NiBlendBoolInterpolator::`vftable'
0x6EB482: mov     dl, ds:0A7C6ACh
0x6EB488: mov     [esi+30h], dl
0x6EB48B: mov     eax, esi
0x6EB48D: pop     esi
0x6EB48E: retn    0Ch
