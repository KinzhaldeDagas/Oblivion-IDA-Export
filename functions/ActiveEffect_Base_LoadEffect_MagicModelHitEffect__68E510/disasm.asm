0x68E510: push    38h ; '8'; Size
0x68E512: call    FormHeapAlloc
0x68E517: add     esp, 4
0x68E51A: mov     [esp+arg_24], eax
0x68E51E: cmp     eax, ebx
0x68E520: mov     [esp+arg_30], ebx
0x68E524: jz      short ActiveEffect_Base_LoadEffect___FailedAlloc
0x68E526: mov     ecx, eax
0x68E528: call    MagicModelHitEffect_constr
0x68E52D: jmp     short ActiveEffect_Base_LoadEffect___LoadHitEffect_
