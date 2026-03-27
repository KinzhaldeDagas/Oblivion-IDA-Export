0x68ECB1: push    3Ch ; '<'; Size
0x68ECB3: call    FormHeapAlloc
0x68ECB8: add     esp, 4
0x68ECBB: mov     [esp+arg_60], eax
0x68ECBF: test    eax, eax
0x68ECC1: mov     [esp+arg_50], 8
0x68ECC9: jz      ActiveEffect_Base_CreateDynamic___Return_0
0x68ECCF: mov     ecx, [esp+arg_5C]
0x68ECD3: mov     edx, [esp+arg_58]
0x68ECD7: push    esi; int
0x68ECD8: push    ecx; int
0x68ECD9: push    edx; int
0x68ECDA: mov     ecx, eax; this
0x68ECDC: call    ValueModifierEffect_constr
0x68ECE1: jmp     ActiveEffect_Base_CreateDynamic___Wrapup
