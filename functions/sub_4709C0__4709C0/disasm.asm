0x4709C0: mov     edx, [esp+arg_4]
0x4709C4: push    esi
0x4709C5: push    edi
0x4709C6: mov     edi, [esp+8+arg_0]
0x4709CA: mov     eax, [edi]
0x4709CC: mov     esi, ecx
0x4709CE: mov     cx, [eax+4]
0x4709D2: mov     [edx], cx
0x4709D5: mov     ecx, [eax+8]
0x4709D8: mov     edx, [esp+8+arg_8]
0x4709DC: mov     [edx], ecx
0x4709DE: mov     ecx, [eax]
0x4709E0: test    ecx, ecx
0x4709E2: jz      short loc_4709EB
0x4709E4: mov     [edi], ecx
0x4709E6: pop     edi
0x4709E7: pop     esi
0x4709E8: retn    0Ch
0x4709EB: movzx   eax, word ptr [eax+4]
0x4709EF: mov     edx, [esi]
0x4709F1: mov     edx, [edx+4]
0x4709F4: push    eax
0x4709F5: mov     ecx, esi
0x4709F7: call    edx
0x4709F9: mov     edx, [esi+4]
0x4709FC: add     eax, 1
0x4709FF: cmp     eax, edx
0x470A01: jnb     short loc_470A20
0x470A03: mov     ecx, [esi+8]
0x470A06: lea     ecx, [ecx+eax*4]
0x470A09: lea     esp, [esp+0]
0x470A10: mov     esi, [ecx]
0x470A12: test    esi, esi
0x470A14: jnz     short loc_470A2B
0x470A16: add     eax, 1
0x470A19: add     ecx, 4
0x470A1C: cmp     eax, edx
0x470A1E: jb      short loc_470A10
0x470A20: mov     dword ptr [edi], 0
0x470A26: pop     edi
0x470A27: pop     esi
0x470A28: retn    0Ch
0x470A2B: mov     [edi], esi
0x470A2D: pop     edi
0x470A2E: pop     esi
0x470A2F: retn    0Ch
