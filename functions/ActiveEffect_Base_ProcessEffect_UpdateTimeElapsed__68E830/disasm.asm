0x68E830: mov     eax, [esi+28h]
0x68E833: fst     [esp+arg_4]
0x68E837: cmp     eax, 4
0x68E83A: jz      short loc_68E86E
0x68E83C: cmp     eax, 1
0x68E83F: jz      short loc_68E86E
0x68E841: mov     ecx, esi
0x68E843: call    ActiveEffect_Base_IsBoundObjWearable
0x68E848: test    al, al
0x68E84A: jnz     short loc_68E86E
0x68E84C: fld     st
0x68E84E: fadd    dword ptr [esi+4]
0x68E851: fld     dword ptr [esi+1Ch]
0x68E854: fcompp
0x68E856: fnstsw  ax
0x68E858: test    ah, 5
0x68E85B: jp      short loc_68E86E
0x68E85D: fstp    st
0x68E85F: fld     dword ptr [esi+1Ch]
0x68E862: fsub    dword ptr [esi+4]
0x68E865: fstp    [esp+arg_4]
0x68E869: fld     dword ptr [esi+1Ch]
0x68E86C: jmp     short loc_68E871
0x68E86E: fadd    dword ptr [esi+4]
0x68E871: mov     ecx, [esi+20h]
0x68E874: fstp    dword ptr [esi+4]
