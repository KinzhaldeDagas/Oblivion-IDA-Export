0x4D6EA0: push    esi
0x4D6EA1: mov     esi, ecx
0x4D6EA3: mov     eax, [esi]
0x4D6EA5: mov     edx, [eax+170h]
0x4D6EAB: push    edi
0x4D6EAC: mov     edi, 31h ; '1'
0x4D6EB1: call    edx
0x4D6EB3: test    eax, eax
0x4D6EB5: jz      short loc_4D6EE1
0x4D6EB7: mov     eax, [esi]
0x4D6EB9: mov     edx, [eax+170h]
0x4D6EBF: mov     ecx, esi
0x4D6EC1: call    edx
0x4D6EC3: movzx   eax, byte ptr [eax+4]
0x4D6EC7: sub     eax, 23h ; '#'
0x4D6ECA: jz      short loc_4D6ED9
0x4D6ECC: sub     eax, 1
0x4D6ECF: jnz     short loc_4D6EE1
0x4D6ED1: pop     edi
0x4D6ED2: mov     eax, 33h ; '3'
0x4D6ED7: pop     esi
0x4D6ED8: retn
0x4D6ED9: pop     edi
0x4D6EDA: mov     eax, 32h ; '2'
0x4D6EDF: pop     esi
0x4D6EE0: retn
0x4D6EE1: mov     eax, edi
0x4D6EE3: pop     edi
0x4D6EE4: pop     esi
0x4D6EE5: retn
