0x68E8DE: mov     edx, [esi]; Verified periodic update dispatch: when this effect's update condition is met, ActiveEffect_Base_ProcessEffect calls vtable +0x08 with elapsed-time data. LockEffect/OpenEffect use the shared null implementation at this slot, so their lock changes occur through Apply (+0x38), not the periodic update override.
0x68E8E0: fld     [esp+arg_4]
0x68E8E4: mov     eax, [edx+8]
0x68E8E7: push    ecx
0x68E8E8: mov     ecx, esi
0x68E8EA: fstp    [esp+4+var_4]
0x68E8ED: call    eax
