0x4A6070: test    ecx, ecx
0x4A6072: push    edi
0x4A6073: jz      short loc_4A607A
0x4A6075: lea     edi, [ecx+4]
0x4A6078: jmp     short loc_4A607C
0x4A607A: xor     edi, edi
0x4A607C: xor     eax, eax
0x4A607E: test    edi, edi
0x4A6080: jz      short loc_4A60D3
0x4A6082: push    ebx
0x4A6083: mov     ebx, [esp+8+arg_4]
0x4A6087: push    ebp
0x4A6088: mov     ebp, [esp+0Ch+arg_0]
0x4A608C: push    esi
0x4A608D: lea     ecx, [ecx+0]
0x4A6090: mov     esi, [edi]
0x4A6092: test    esi, esi
0x4A6094: jz      short loc_4A60CE
0x4A6096: mov     eax, [esi]
0x4A6098: mov     edx, [eax+4]
0x4A609B: mov     ecx, esi
0x4A609D: call    edx
0x4A609F: cmp     [eax+0Ch], ebp
0x4A60A2: jnz     short loc_4A60C7
0x4A60A4: mov     eax, [esi]
0x4A60A6: mov     edx, [eax+0Ch]
0x4A60A9: mov     ecx, esi
0x4A60AB: call    edx
0x4A60AD: test    ebx, ebx
0x4A60AF: jl      short loc_4A60C3
0x4A60B1: test    eax, eax
0x4A60B3: jz      short loc_4A60C7
0x4A60B5: mov     eax, [esi]
0x4A60B7: mov     edx, [eax+0Ch]
0x4A60BA: mov     ecx, esi
0x4A60BC: call    edx
0x4A60BE: cmp     [eax+0Ch], ebx
0x4A60C1: jmp     short loc_4A60C5
0x4A60C3: test    eax, eax
0x4A60C5: jz      short loc_4A60D7
0x4A60C7: mov     edi, [edi+4]
0x4A60CA: test    edi, edi
0x4A60CC: jnz     short loc_4A6090
0x4A60CE: pop     esi
0x4A60CF: pop     ebp
0x4A60D0: xor     eax, eax
0x4A60D2: pop     ebx
0x4A60D3: pop     edi
0x4A60D4: retn    8
0x4A60D7: mov     eax, esi
0x4A60D9: pop     esi
0x4A60DA: pop     ebp
0x4A60DB: pop     ebx
0x4A60DC: pop     edi
0x4A60DD: retn    8
