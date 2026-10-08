0x68EBE9: push    40h ; '@'; Verified allocation path for CUDI: creates the shared CureEffect class and calls CureEffect_constr_MagicType with subtype value 2.
0x68EBEB: call    FormHeapAlloc
0x68EBF0: add     esp, 4
0x68EBF3: mov     [esp+arg_60], eax
0x68EBF7: test    eax, eax
0x68EBF9: mov     [esp+arg_50], 2
0x68EC01: jz      ActiveEffect_Base_CreateDynamic___Return_0
0x68EC07: push    1
