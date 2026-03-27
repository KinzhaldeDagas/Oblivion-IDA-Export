0x68ECE6: push    offset aCouldNotActiva; "Could not Activate unregistered effect!"
0x68ECEB: lea     ecx, [esp+4+arg_4]
0x68ECEF: call    sub_414750
0x68ECF4: lea     eax, [esp+arg_4]
0x68ECF8: push    eax
0x68ECF9: lea     ecx, [esp+4+arg_20]
0x68ECFD: mov     [esp+4+arg_50], 9
0x68ED05: call    sub_68EA30
0x68ED0A: push    offset __TI4?AVexUnregisteredActiveEffect@ActiveEffect@@; throw info for 'class ActiveEffect::exUnregisteredActiveEffect'
0x68ED0F: lea     ecx, [esp+4+arg_20]
0x68ED13: push    ecx
0x68ED14: call    ThrowException??
