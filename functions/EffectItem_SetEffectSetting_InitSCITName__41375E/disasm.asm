0x41375E: mov     [eax+8], ebx
0x413761: mov     [eax+0Ch], bx
0x413765: mov     [eax+0Eh], bx
0x413769: jmp     short loc_41376D
0x41376B: xor     eax, eax
0x41376D: mov     [esi+18h], eax
0x413770: lea     eax, [esp+arg_10]
0x413774: push    eax
0x413775: mov     ecx, ebp
0x413777: call    EffectSetting_GetName
0x41377C: mov     eax, [eax]
0x41377E: mov     ecx, [esi+18h]
0x413781: push    ebx; a3
0x413782: push    eax; a2
0x413783: add     ecx, 8; this
0x413786: mov     [esp+8+arg_20], ebx
0x41378A: call    BSStringT_Set
0x41378F: mov     ecx, [esp+arg_10]
0x413793: push    ecx
0x413794: call    FormHeapFree
