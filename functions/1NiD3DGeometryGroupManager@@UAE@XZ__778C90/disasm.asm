0x778C90: push    ebx
0x778C91: push    esi
0x778C92: push    edi
0x778C93: mov     edi, ecx
0x778C95: mov     ebx, [edi+0Ch]
0x778C98: xor     esi, esi
0x778C9A: test    ebx, ebx
0x778C9C: mov     dword ptr [edi], offset ??_7NiD3DGeometryGroupManager@@6B@; const NiD3DGeometryGroupManager::`vftable'
0x778CA2: jbe     short loc_778CBE
0x778CA4: mov     eax, [edi+4]
0x778CA7: mov     ecx, [eax+esi*4]
0x778CAA: test    ecx, ecx
0x778CAC: jz      short loc_778CB7
0x778CAE: mov     edx, [ecx]
0x778CB0: mov     eax, [edx+24h]
0x778CB3: push    1
0x778CB5: call    eax
0x778CB7: add     esi, 1
0x778CBA: cmp     esi, ebx
0x778CBC: jb      short loc_778CA4
0x778CBE: call    sub_77D450
0x778CC3: mov     eax, [edi+10h]
0x778CC6: test    eax, eax
0x778CC8: jz      short loc_778CD2
0x778CCA: mov     ecx, [eax]
0x778CCC: mov     edx, [ecx+8]
0x778CCF: push    eax
0x778CD0: call    edx
0x778CD2: mov     eax, [edi+4]
0x778CD5: push    eax
0x778CD6: call    FormHeapFree
0x778CDB: add     esp, 4
0x778CDE: mov     ecx, edi
0x778CE0: pop     edi
0x778CE1: pop     esi
0x778CE2: pop     ebx
0x778CE3: jmp     loc_725D80
