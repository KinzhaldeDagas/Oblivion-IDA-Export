0x469990: lea     eax, [ecx+8]
0x469993: test    eax, eax
0x469995: jz      short locret_4699B5
0x469997: mov     edx, [esp+arg_0]
0x46999B: push    esi
0x46999C: lea     esp, [esp+0]
0x4699A0: mov     ecx, [eax]
0x4699A2: test    ecx, ecx
0x4699A4: jz      short loc_4699AD
0x4699A6: mov     esi, [ecx]
0x4699A8: imul    esi, edx
0x4699AB: mov     [ecx], esi
0x4699AD: mov     eax, [eax+4]
0x4699B0: test    eax, eax
0x4699B2: jnz     short loc_4699A0
0x4699B4: pop     esi
0x4699B5: retn    4
