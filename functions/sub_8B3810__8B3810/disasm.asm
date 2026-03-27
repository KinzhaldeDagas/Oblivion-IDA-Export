0x8B3810: push    ebp
0x8B3811: mov     ebp, esp
0x8B3813: and     esp, 0FFFFFFF0h
0x8B3816: sub     esp, 20h
0x8B3819: fld     [ebp+arg_0]
0x8B381C: mov     ecx, [ebp+arg_0]
0x8B381F: fmul    dword ptr [eax+4]
0x8B3822: mov     [esp+20h+var_14], ecx
0x8B3826: movss   xmm0, [esp+20h+var_14]
0x8B382C: lea     edx, [esp+20h+var_10]
0x8B3830: push    edx
0x8B3831: fstp    dword ptr [eax+4]
0x8B3834: lea     ecx, [eax+20h]
0x8B3837: movaps  [esp+24h+var_10], xmm0
0x8B383C: call    sub_8D2A60
0x8B3841: mov     esp, ebp
0x8B3843: pop     ebp
0x8B3844: retn
