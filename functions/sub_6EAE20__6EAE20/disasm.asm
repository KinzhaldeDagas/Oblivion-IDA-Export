0x6EAE20: mov     eax, [esp+arg_8]
0x6EAE24: fld     [esp+arg_4]
0x6EAE28: push    esi
0x6EAE29: push    eax; int
0x6EAE2A: push    ecx
0x6EAE2B: mov     esi, ecx
0x6EAE2D: fstp    [esp+0Ch+var_C]; float
0x6EAE30: mov     ecx, dword ptr [esp+0Ch+arg_0]
0x6EAE34: push    ecx; char
0x6EAE35: mov     ecx, esi
0x6EAE37: call    sub_6CCE40
0x6EAE3C: mov     dword ptr [esi], offset ??_7NiBlendColorInterpolator@@6B@; const NiBlendColorInterpolator::`vftable'
0x6EAE42: mov     edx, ds:0B24FD4h
0x6EAE48: mov     [esi+30h], edx
0x6EAE4B: mov     eax, ds:0B24FD8h
0x6EAE50: mov     [esi+34h], eax
0x6EAE53: mov     ecx, ds:0B24FDCh
0x6EAE59: mov     [esi+38h], ecx
0x6EAE5C: mov     edx, ds:0B24FE0h
0x6EAE62: mov     [esi+3Ch], edx
0x6EAE65: mov     byte ptr [esi+40h], 0
0x6EAE69: mov     eax, esi
0x6EAE6B: pop     esi
0x6EAE6C: retn    0Ch
