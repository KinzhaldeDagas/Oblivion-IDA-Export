0x4DDF90: push    esi
0x4DDF91: mov     esi, ecx
0x4DDF93: mov     eax, [esi]
0x4DDF95: mov     edx, [eax+190h]
0x4DDF9B: call    edx
0x4DDF9D: test    al, al
0x4DDF9F: jnz     short loc_4DDFA7
0x4DDFA1: xor     eax, eax
0x4DDFA3: pop     esi
0x4DDFA4: retn    4
0x4DDFA7: mov     eax, [esi]
0x4DDFA9: mov     edx, [eax+27Ch]
0x4DDFAF: mov     ecx, esi
0x4DDFB1: call    edx
0x4DDFB3: test    eax, eax
0x4DDFB5: jz      short loc_4DDFA1
0x4DDFB7: mov     esi, [esi+3Ch]
0x4DDFBA: push    offset aBsfacegenninod; "BSFaceGenNiNodeBiped"
0x4DDFBF: push    esi; a1
0x4DDFC0: call    NiObjectNET_LookupObjectByName
0x4DDFC5: add     esp, 8
0x4DDFC8: pop     esi
0x4DDFC9: retn    4
