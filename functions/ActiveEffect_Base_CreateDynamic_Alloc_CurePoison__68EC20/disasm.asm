0x68EC20: push    40h ; '@'; Size
0x68EC22: call    FormHeapAlloc
0x68EC27: add     esp, 4
0x68EC2A: mov     [esp+arg_60], eax
0x68EC2E: test    eax, eax
0x68EC30: mov     [esp+arg_50], 3
0x68EC38: jz      ActiveEffect_Base_CreateDynamic___Return_0
0x68EC3E: push    5
0x68EC40: jmp     short ActiveEffect_Base_CreateDynamic___Constr_CurePD
