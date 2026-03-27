0x65D407: mov     edi, [esp+arg_C]
0x65D40B: cmp     edi, 0FFFFFFFFh
0x65D40E: jz      short loc_65D470
0x65D410: mov     ecx, [esp+arg_14]
0x65D414: fld     [esp+arg_10]
0x65D418: push    ecx; int
0x65D419: sub     esp, 8
0x65D41C: fstp    [esp+0Ch+var_8]; float
0x65D420: fld     dword ptr [esi+edi*4+324h]
0x65D427: fstp    [esp+0Ch+var_C]; float
0x65D42A: call    Player_ModAVNode
0x65D42F: add     esp, 0Ch
0x65D432: fstp    dword ptr [esi+edi*4+324h]
0x65D439: pop     edi
0x65D43A: pop     esi
0x65D43B: retn    10h
