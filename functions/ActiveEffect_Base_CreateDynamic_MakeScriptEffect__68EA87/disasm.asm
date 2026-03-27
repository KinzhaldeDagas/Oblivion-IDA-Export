0x68EA87: push    40h ; '@'; Size
0x68EA89: call    FormHeapAlloc
0x68EA8E: add     esp, 4
0x68EA91: mov     [esp+arg_60], eax
0x68EA95: test    eax, eax
0x68EA97: mov     [esp+arg_50], 0
0x68EA9F: jz      short ActiveEffect_Base_CreateDynamic___Return_0_immediate
0x68EAA1: mov     ecx, [esp+arg_5C]
0x68EAA5: mov     edx, [esp+arg_58]
0x68EAA9: push    esi
0x68EAAA: push    ecx
0x68EAAB: push    edx
0x68EAAC: mov     ecx, eax; this
0x68EAAE: call    ??0ScriptEffect@@QAE@XZ; ScriptEffect::ScriptEffect(void)
0x68EAB3: mov     ecx, [esp+0Ch+arg_3C]
0x68EAB7: mov     large fs:0, ecx
0x68EABE: pop     ecx
0x68EABF: pop     esi
0x68EAC0: add     esp, 50h
0x68EAC3: retn
