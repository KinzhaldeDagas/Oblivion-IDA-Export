0x6938F0: mov     ecx, [esp+arg_0]; this
0x6938F4: test    ecx, ecx
0x6938F6: jz      short ActiveEffect_TargetIsActor___Return_False
0x6938F8: call    MagicTarget_GetParentActor
0x6938FD: xor     ecx, ecx
0x6938FF: test    eax, eax
0x693901: setnz   cl
0x693904: mov     al, cl
0x693906: retn    4
