0x68EB53: push    40h ; '@'; Size
0x68EB55: call    FormHeapAlloc
0x68EB5A: add     esp, 4
0x68EB5D: mov     [esp+arg_60], eax
0x68EB61: test    eax, eax
0x68EB63: mov     [esp+arg_50], 4
0x68EB6B: jz      ActiveEffect_Base_CreateDynamic___Return_0
0x68EB71: mov     edx, [esp+arg_5C]
0x68EB75: mov     ecx, [esp+arg_58]
0x68EB79: push    41524150h; int
0x68EB7E: push    esi; int
0x68EB7F: push    edx; int
0x68EB80: push    ecx; int
0x68EB81: mov     ecx, eax; this
0x68EB83: call    CureEffect_constr_MgefCode
0x68EB88: jmp     ActiveEffect_Base_CreateDynamic___Wrapup
