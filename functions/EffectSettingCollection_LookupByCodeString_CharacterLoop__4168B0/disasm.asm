0x4168B0: mov     cl, [eax]
0x4168B2: add     eax, 1
0x4168B5: test    cl, cl
0x4168B7: jnz     short EffectSettingCollection_LookupByCodeString___CharacterLoop
0x4168B9: sub     eax, esi
0x4168BB: cmp     eax, 4
0x4168BE: pop     esi
0x4168BF: jnb     short EffectSettingCollection_LookupByCodeString___ReverseStringBytes
0x4168C1: xor     eax, eax
0x4168C3: pop     ecx
0x4168C4: retn
