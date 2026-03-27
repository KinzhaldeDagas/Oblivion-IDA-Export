0x68D764: mov     ecx, [esi+24h]; this
0x68D767: test    ecx, ecx
0x68D769: jz      short loc_68D772
0x68D76B: call    MagicCaster_GetParentActor
0x68D770: jmp     short loc_68D774
0x68D772: xor     eax, eax
0x68D774: fld     dword ptr [esi+18h]
0x68D777: push    ecx
0x68D778: fchs
0x68D77A: mov     ecx, esi
0x68D77C: fstp    [esp+4+var_4]
0x68D77F: push    eax
0x68D780: call    ValueModifierEffect_ModifyAV
