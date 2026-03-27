0x68ED19: push    8Ch ; 'Œ'; Size
0x68ED1E: call    FormHeapAlloc
0x68ED23: add     esp, 4
0x68ED26: mov     [esp+arg_60], eax
0x68ED2A: test    eax, eax
0x68ED2C: mov     [esp+arg_50], 7
0x68ED34: jz      short ActiveEffect_Base_CreateDynamic___Return_0
0x68ED36: mov     edx, [esp+arg_5C]
0x68ED3A: mov     ecx, [esp+arg_58]
0x68ED3E: push    esi
0x68ED3F: push    edx
0x68ED40: push    ecx
0x68ED41: mov     ecx, eax; this
0x68ED43: call    ??0BoundItemEffect@@QAE@XZ; BoundItemEffect::BoundItemEffect(void)
0x68ED48: jmp     short ActiveEffect_Base_CreateDynamic___Wrapup
