0x68EB9D: push    40h ; '@'; Size
0x68EB9F: call    FormHeapAlloc
0x68EBA4: add     esp, 4
0x68EBA7: mov     [esp+arg_60], eax
0x68EBAB: test    eax, eax
0x68EBAD: mov     [esp+arg_50], 5
0x68EBB5: jz      ActiveEffect_Base_CreateDynamic___Return_0
0x68EBBB: mov     edx, [esp+arg_5C]
0x68EBBF: mov     ecx, [esp+arg_58]
0x68EBC3: push    esi; int
0x68EBC4: push    edx; int
0x68EBC5: push    ecx; int
0x68EBC6: mov     ecx, eax; this
0x68EBC8: call    ShieldEffect_constr
0x68EBCD: jmp     ActiveEffect_Base_CreateDynamic___Wrapup
