0x46B990: push    esi
0x46B991: mov     esi, ecx
0x46B993: mov     eax, [esi+8]
0x46B996: shr     eax, 0Eh
0x46B999: test    al, 1
0x46B99B: jnz     short loc_46B9ED
0x46B99D: push    1
0x46B99F: push    14h
0x46B9A1: mov     ecx, offset FormHeap
0x46B9A6: mov     dword ptr ds:0B33C18h, 14h
0x46B9B0: call    j_MemoryHeap_Alloc
0x46B9B5: mov     ds:0B33C14h, eax
0x46B9BA: mov     ecx, [esi+8]
0x46B9BD: mov     [eax+8], ecx
0x46B9C0: cmp     byte ptr [esi+4], 1
0x46B9C4: jz      short TESForm_InitializeFormRecord___InitFormInfo
0x46B9C6: and     ecx, 30EE0h
0x46B9CC: mov     [eax+8], ecx
0x46B9CF: movzx   ecx, byte ptr [esi+4]
0x46B9D3: lea     ecx, [ecx+ecx*2]
0x46B9D6: mov     edx, ds:0B05E08h[ecx*4]
0x46B9DD: mov     [eax], edx
0x46B9DF: mov     ecx, [esi+0Ch]
0x46B9E2: mov     [eax+0Ch], ecx
0x46B9E5: xor     ecx, ecx
0x46B9E7: mov     [eax+4], ecx
0x46B9EA: mov     [eax+10h], ecx
0x46B9ED: pop     esi
0x46B9EE: retn
