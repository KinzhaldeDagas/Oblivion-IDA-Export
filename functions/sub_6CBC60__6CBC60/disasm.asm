0x6CBC60: mov     eax, [esp+arg_8]
0x6CBC64: fld     [esp+arg_4]
0x6CBC68: push    esi
0x6CBC69: push    eax; int
0x6CBC6A: push    ecx
0x6CBC6B: mov     esi, ecx
0x6CBC6D: fstp    [esp+0Ch+var_C]; float
0x6CBC70: mov     ecx, dword ptr [esp+0Ch+arg_0]
0x6CBC74: push    ecx; char
0x6CBC75: mov     ecx, esi
0x6CBC77: call    sub_6CCE40
0x6CBC7C: mov     dword ptr [esi], offset ??_7NiBlendTransformInterpolator@@6B@; const NiBlendTransformInterpolator::`vftable'
0x6CBC82: mov     eax, esi
0x6CBC84: pop     esi
0x6CBC85: retn    0Ch
