0x4FCD20: push    esi
0x4FCD21: mov     esi, [esp+4+arg_0]
0x4FCD25: test    esi, esi
0x4FCD27: jnz     short loc_4FCD2F
0x4FCD29: xor     eax, eax
0x4FCD2B: pop     esi
0x4FCD2C: retn    4
0x4FCD2F: cmp     esi, [ecx+2Ch]
0x4FCD32: ja      short loc_4FCD29
0x4FCD34: lea     eax, [ecx+44h]
0x4FCD37: test    eax, eax
0x4FCD39: mov     edx, 1
0x4FCD3E: jz      short loc_4FCD58
0x4FCD40: mov     ecx, [eax+4]
0x4FCD43: test    ecx, ecx
0x4FCD45: jnz     short loc_4FCD4B
0x4FCD47: cmp     [eax], ecx
0x4FCD49: jz      short loc_4FCD58
0x4FCD4B: cmp     edx, esi
0x4FCD4D: jnb     short loc_4FCD58
0x4FCD4F: mov     eax, ecx
0x4FCD51: add     edx, 1
0x4FCD54: test    eax, eax
0x4FCD56: jnz     short loc_4FCD40
0x4FCD58: mov     eax, [eax]
0x4FCD5A: pop     esi
0x4FCD5B: retn    4
