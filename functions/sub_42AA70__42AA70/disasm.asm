0x42AA70: push    esi
0x42AA71: mov     esi, [esp+4+arg_0]
0x42AA75: push    edi
0x42AA76: mov     edi, ecx
0x42AA78: mov     eax, [edi+0Ch]
0x42AA7B: test    eax, eax
0x42AA7D: jz      short loc_42AA91
0x42AA7F: nop
0x42AA80: mov     ecx, [eax]
0x42AA82: test    ecx, ecx
0x42AA84: jz      short loc_42AA91
0x42AA86: cmp     [ecx], esi
0x42AA88: jz      short loc_42AABF
0x42AA8A: mov     eax, [eax+4]
0x42AA8D: test    eax, eax
0x42AA8F: jnz     short loc_42AA80
0x42AA91: push    0Ch; Size
0x42AA93: call    FormHeapAlloc
0x42AA98: add     esp, 4
0x42AA9B: test    eax, eax
0x42AA9D: jz      short loc_42AAC9
0x42AA9F: fldz
0x42AAA1: mov     [eax], esi
0x42AAA3: fstp    dword ptr [eax+8]
0x42AAA6: mov     word ptr [eax+4], 0
0x42AAAC: add     word ptr [eax+4], 1
0x42AAB1: mov     ecx, [edi+0Ch]
0x42AAB4: push    eax
0x42AAB5: call    BSSimpleList_PushFront
0x42AABA: pop     edi
0x42AABB: pop     esi
0x42AABC: retn    4
0x42AABF: add     word ptr [ecx+4], 1
0x42AAC4: pop     edi
0x42AAC5: pop     esi
0x42AAC6: retn    4
0x42AAC9: xor     eax, eax
0x42AACB: add     word ptr [eax+4], 1
0x42AAD0: mov     ecx, [edi+0Ch]
0x42AAD3: push    eax
0x42AAD4: call    BSSimpleList_PushFront
0x42AAD9: pop     edi
0x42AADA: pop     esi
0x42AADB: retn    4
