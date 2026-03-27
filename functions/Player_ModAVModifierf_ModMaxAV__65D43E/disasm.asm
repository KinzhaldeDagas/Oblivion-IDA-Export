0x65D43E: mov     edi, [esp+arg_C]
0x65D442: cmp     edi, 0FFFFFFFFh
0x65D445: jz      short loc_65D470
0x65D447: mov     edx, [esp+arg_14]
0x65D44B: fld     [esp+arg_10]
0x65D44F: push    edx; int
0x65D450: sub     esp, 8
0x65D453: fstp    [esp+0Ch+var_8]; float
0x65D457: fld     dword ptr [esi+edi*4+204h]
0x65D45E: fstp    [esp+0Ch+var_C]; float
0x65D461: call    Player_ModAVNode
0x65D466: fstp    dword ptr [esi+edi*4+204h]
0x65D46D: add     esp, 0Ch
0x65D470: pop     edi
0x65D471: pop     esi
0x65D472: retn    10h
