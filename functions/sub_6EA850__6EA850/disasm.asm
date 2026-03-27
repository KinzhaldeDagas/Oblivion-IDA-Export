0x6EA850: mov     eax, [esp+arg_8]
0x6EA854: fld     [esp+arg_4]
0x6EA858: push    esi
0x6EA859: push    eax; int
0x6EA85A: push    ecx
0x6EA85B: mov     esi, ecx
0x6EA85D: fstp    [esp+0Ch+var_C]; float
0x6EA860: mov     ecx, dword ptr [esp+0Ch+arg_0]
0x6EA864: push    ecx; char
0x6EA865: mov     ecx, esi
0x6EA867: call    sub_6CCE40
0x6EA86C: mov     dword ptr [esi], offset ??_7NiBlendPoint3Interpolator@@6B@; const NiBlendPoint3Interpolator::`vftable'
0x6EA872: mov     edx, ds:0B24FC8h
0x6EA878: mov     [esi+30h], edx
0x6EA87B: mov     eax, ds:0B24FCCh
0x6EA880: mov     [esi+34h], eax
0x6EA883: mov     ecx, ds:0B24FD0h
0x6EA889: mov     [esi+38h], ecx
0x6EA88C: mov     byte ptr [esi+3Ch], 0
0x6EA890: mov     eax, esi
0x6EA892: pop     esi
0x6EA893: retn    0Ch
