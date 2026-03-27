0x68ED4A: push    4Ch ; 'L'; Size
0x68ED4C: call    FormHeapAlloc
0x68ED51: add     esp, 4
0x68ED54: mov     [esp+arg_60], eax
0x68ED58: test    eax, eax
0x68ED5A: mov     [esp+arg_50], 1
0x68ED62: jz      short ActiveEffect_Base_CreateDynamic___Return_0
0x68ED64: mov     edx, [esp+arg_5C]
0x68ED68: mov     ecx, [esp+arg_58]
0x68ED6C: push    esi
0x68ED6D: push    edx
0x68ED6E: push    ecx
0x68ED6F: mov     ecx, eax; this
0x68ED71: call    ??0AbsorbEffect@@QAE@XZ; AbsorbEffect::AbsorbEffect(void)
0x68ED76: jmp     short ActiveEffect_Base_CreateDynamic___Wrapup
