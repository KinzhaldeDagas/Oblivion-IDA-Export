0x72BE70: mov     eax, [esp+arg_0]
0x72BE74: cmp     dword ptr [eax+0D8h], 0A010065h
0x72BE7E: push    esi
0x72BE7F: mov     esi, ecx
0x72BE81: jnb     short loc_72BEC7
0x72BE83: mov     eax, [esi+8]
0x72BE86: test    eax, eax
0x72BE88: jz      short loc_72BEC7
0x72BE8A: mov     ecx, [eax+8]
0x72BE8D: push    edi
0x72BE8E: push    ecx; a2
0x72BE8F: lea     ecx, [esi+0Ch]; this
0x72BE92: call    NiSmartPointer_Set??
0x72BE97: mov     esi, [esi+8]
0x72BE9A: mov     edi, [esi+8]
0x72BE9D: add     esi, 8
0x72BEA0: test    edi, edi
0x72BEA2: jz      short loc_72BEC6
0x72BEA4: lea     edx, [edi+4]
0x72BEA7: push    edx; lpAddend
0x72BEA8: call    dword ptr ds:0A2807Ch
0x72BEAE: test    eax, eax
0x72BEB0: jnz     short loc_72BEC0
0x72BEB2: test    edi, edi
0x72BEB4: jz      short loc_72BEC0
0x72BEB6: mov     eax, [edi]
0x72BEB8: mov     edx, [eax]
0x72BEBA: push    1
0x72BEBC: mov     ecx, edi
0x72BEBE: call    edx
0x72BEC0: mov     dword ptr [esi], 0
0x72BEC6: pop     edi
0x72BEC7: pop     esi
0x72BEC8: retn    4
