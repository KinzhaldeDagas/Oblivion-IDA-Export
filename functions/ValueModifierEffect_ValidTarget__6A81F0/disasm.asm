0x6A81F0: mov     ecx, [esp+arg_0]; this
0x6A81F4: test    ecx, ecx
0x6A81F6: jz      short ValueModifierEffect_ValidTarget___Return_False
0x6A81F8: call    MagicTarget_GetParentActor
0x6A81FD: test    eax, eax
0x6A81FF: jz      short ValueModifierEffect_ValidTarget___Return_False
0x6A8201: mov     edx, [eax]
0x6A8203: mov     ecx, eax
0x6A8205: mov     eax, [edx+198h]
0x6A820B: push    0
0x6A820D: call    eax
0x6A820F: test    al, al
0x6A8211: jnz     short ValueModifierEffect_ValidTarget___Return_False
0x6A8213: mov     eax, 1
0x6A8218: retn    4
