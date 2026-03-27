0x76DD40: push    esi
0x76DD41: push    edi
0x76DD42: mov     esi, ecx
0x76DD44: xor     edi, edi
0x76DD46: push    offset NiRefObject_objcount; lpAddend
0x76DD4B: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x76DD51: mov     [esi+4], edi
0x76DD54: call    dword ptr ds:0A28078h
0x76DD5A: push    offset stru_B42680; lpCriticalSection
0x76DD5F: mov     [esi+8], edi
0x76DD62: mov     [esi+0Ch], edi
0x76DD65: mov     [esi+10h], edi
0x76DD68: mov     dword ptr [esi], offset ??_7NiDX9AdditionalDepthStencilBufferData@@6B@; const NiDX9AdditionalDepthStencilBufferData::`vftable'
0x76DD6E: mov     [esi+14h], edi
0x76DD71: call    dword ptr ds:0A2806Ch
0x76DD77: call    dword ptr ds:0A2808Ch
0x76DD7D: add     dword ptr ds:0B426FCh, 1
0x76DD84: mov     ds:0B426F8h, eax
0x76DD89: mov     eax, ds:0B294F0h
0x76DD8E: mov     edx, [eax+4]
0x76DD91: mov     ecx, offset off_B294F0
0x76DD96: call    edx
0x76DD98: mov     [eax+8], esi
0x76DD9B: mov     [eax+4], edi
0x76DD9E: mov     ecx, ds:0B294F4h
0x76DDA4: mov     [eax], ecx
0x76DDA6: mov     ecx, ds:0B294F4h
0x76DDAC: cmp     ecx, edi
0x76DDAE: jz      short loc_76DDB5
0x76DDB0: mov     [ecx+4], eax
0x76DDB3: jmp     short loc_76DDBA
0x76DDB5: mov     ds:0B294F8h, eax
0x76DDBA: add     dword ptr ds:0B294FCh, 1
0x76DDC1: sub     dword ptr ds:0B426FCh, 1
0x76DDC8: mov     ds:0B294F4h, eax
0x76DDCD: jnz     short loc_76DDD5
0x76DDCF: mov     ds:0B426F8h, edi
0x76DDD5: push    offset stru_B42680; lpCriticalSection
0x76DDDA: call    dword ptr ds:0A28074h
0x76DDE0: pop     edi
0x76DDE1: mov     eax, esi
0x76DDE3: pop     esi
0x76DDE4: retn
