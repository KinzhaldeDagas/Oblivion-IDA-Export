0x68EC98: test    byte ptr [ecx+5Ah], 1
0x68EC9C: jnz     short ActiveEffect_Base_CreateDynamic___Alloc_BoundItem
0x68EC9E: mov     eax, [ecx+58h]
0x68ECA1: shr     eax, 11h
0x68ECA4: test    al, 1
0x68ECA6: jnz     short ActiveEffect_Base_CreateDynamic___Alloc_BoundItem
0x68ECA8: test    dword ptr [ecx+58h], 1180000h
0x68ECAF: jz      short ActiveEffect_Base_CreateDynamic___BadEffect_Error
