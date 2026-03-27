0x68EC63: push    64h ; 'd'; Size
0x68EC65: call    FormHeapAlloc
0x68EC6A: add     esp, 4
0x68EC6D: mov     [esp+arg_60], eax
0x68EC71: test    eax, eax
0x68EC73: mov     [esp+arg_50], 6
0x68EC7B: jz      ActiveEffect_Base_CreateDynamic___Return_0
0x68EC81: mov     ecx, [esp+arg_5C]
0x68EC85: mov     edx, [esp+arg_58]
0x68EC89: push    esi
0x68EC8A: push    ecx
0x68EC8B: push    edx
0x68EC8C: mov     ecx, eax; this
0x68EC8E: call    ??0SummonCreatureEffect@@QAE@XZ; SummonCreatureEffect::SummonCreatureEffect(void)
0x68EC93: jmp     ActiveEffect_Base_CreateDynamic___Wrapup
