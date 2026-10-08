0x5E05F0: cmp     dword ptr [ecx+58h], 0; 3DTheft decode: Actor_ClearMovementFlag wrapper calls process vfunc +0x2C4 with enabled=false.
0x5E05F4: jz      short locret_5E060A
0x5E05F6: mov     ecx, [ecx+58h]
0x5E05F9: mov     eax, [ecx]
0x5E05FB: mov     edx, [esp+arg_0]
0x5E05FF: mov     eax, [eax+2C4h]
0x5E0605: push    0
0x5E0607: push    edx
0x5E0608: call    eax
0x5E060A: retn    4
