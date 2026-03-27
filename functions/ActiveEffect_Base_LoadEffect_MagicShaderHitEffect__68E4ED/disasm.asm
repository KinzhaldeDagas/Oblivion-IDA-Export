0x68E4ED: push    4Ch ; 'L'; Size
0x68E4EF: call    FormHeapAlloc
0x68E4F4: add     esp, 4
0x68E4F7: mov     [esp+arg_24], eax
0x68E4FB: cmp     eax, ebx
0x68E4FD: mov     [esp+arg_30], 1
0x68E505: jz      short ActiveEffect_Base_LoadEffect___FailedAlloc
0x68E507: mov     ecx, eax
0x68E509: call    MagicShaderHitEffect_constr
0x68E50E: jmp     short ActiveEffect_Base_LoadEffect___LoadHitEffect_
