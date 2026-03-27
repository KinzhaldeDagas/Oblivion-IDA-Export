0x91AAB0: push    ebp
0x91AAB1: mov     ebp, [esp+4+arg_0]
0x91AAB5: mov     eax, [ebp+14h]
0x91AAB8: test    eax, eax
0x91AABA: push    edi
0x91AABB: mov     edi, ecx
0x91AABD: jz      loc_91AB8C
0x91AAC3: mov     ecx, [edi+0Ch]
0x91AAC6: xor     eax, eax
0x91AAC8: test    ecx, ecx
0x91AACA: push    esi
0x91AACB: mov     esi, [ebp+8]
0x91AACE: jle     loc_91AB8B
0x91AAD4: mov     edx, [edi+8]
0x91AAD7: push    ebx
0x91AAD8: mov     ebx, [edx]
0x91AADA: cmp     [ebx], esi
0x91AADC: jz      short loc_91AAED
0x91AADE: inc     eax
0x91AADF: add     edx, 4
0x91AAE2: cmp     eax, ecx
0x91AAE4: jl      short loc_91AAD8
0x91AAE6: pop     ebx
0x91AAE7: pop     esi
0x91AAE8: pop     edi
0x91AAE9: pop     ebp
0x91AAEA: retn    4
0x91AAED: test    eax, eax
0x91AAEF: jl      loc_91AB8A
0x91AAF5: mov     ecx, [edi+8]
0x91AAF8: mov     esi, [ecx+eax*4]
0x91AAFB: mov     eax, ds:0BA8420h
0x91AB00: mov     ecx, [edi-10h]
0x91AB03: mov     edx, [ecx]
0x91AB05: push    eax
0x91AB06: lea     ebx, [ebp+15h]
0x91AB09: push    ebx
0x91AB0A: call    dword ptr [edx+10h]
0x91AB0D: mov     ecx, [esi+8]
0x91AB10: xor     eax, eax
0x91AB12: test    ecx, ecx
0x91AB14: jle     short loc_91AB44
0x91AB16: mov     edx, [esi+4]
0x91AB19: lea     esp, [esp+0]
0x91AB20: cmp     [edx], ebx
0x91AB22: jz      short loc_91AB2E
0x91AB24: inc     eax
0x91AB25: add     edx, 4
0x91AB28: cmp     eax, ecx
0x91AB2A: jl      short loc_91AB20
0x91AB2C: jmp     short loc_91AB44
0x91AB2E: test    eax, eax
0x91AB30: jl      short loc_91AB44
0x91AB32: mov     ecx, [esi+8]
0x91AB35: dec     ecx
0x91AB36: mov     [esi+8], ecx
0x91AB39: mov     edx, ecx
0x91AB3B: mov     ecx, [esi+4]
0x91AB3E: mov     edx, [ecx+edx*4]
0x91AB41: mov     [ecx+eax*4], edx
0x91AB44: mov     edx, ds:0BA8420h
0x91AB4A: mov     ecx, [edi-10h]
0x91AB4D: mov     eax, [ecx]
0x91AB4F: push    edx
0x91AB50: lea     ebx, [ebp+16h]
0x91AB53: push    ebx
0x91AB54: call    dword ptr [eax+10h]
0x91AB57: mov     ecx, [esi+8]
0x91AB5A: xor     eax, eax
0x91AB5C: test    ecx, ecx
0x91AB5E: jle     short loc_91AB8A
0x91AB60: mov     edx, [esi+4]
0x91AB63: cmp     [edx], ebx
0x91AB65: jz      short loc_91AB76
0x91AB67: inc     eax
0x91AB68: add     edx, 4
0x91AB6B: cmp     eax, ecx
0x91AB6D: jl      short loc_91AB63
0x91AB6F: pop     ebx
0x91AB70: pop     esi
0x91AB71: pop     edi
0x91AB72: pop     ebp
0x91AB73: retn    4
0x91AB76: test    eax, eax
0x91AB78: jl      short loc_91AB8A
0x91AB7A: mov     ecx, [esi+8]
0x91AB7D: dec     ecx
0x91AB7E: mov     [esi+8], ecx
0x91AB81: mov     esi, [esi+4]
0x91AB84: mov     ecx, [esi+ecx*4]
0x91AB87: mov     [esi+eax*4], ecx
0x91AB8A: pop     ebx
0x91AB8B: pop     esi
0x91AB8C: pop     edi
0x91AB8D: pop     ebp
0x91AB8E: retn    4
