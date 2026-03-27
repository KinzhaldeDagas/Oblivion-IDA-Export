0x4133C0: mov     eax, [ecx+1Ch]
0x4133C3: mov     edx, [eax+58h]
0x4133C6: shr     edx, 7
0x4133C9: test    dl, 1
0x4133CC: jz      short EffectItem_GetDuration___GivenDuration
0x4133CE: xor     eax, eax
0x4133D0: retn
0x4133D1: mov     eax, [ecx+0Ch]
0x4133D4: retn
