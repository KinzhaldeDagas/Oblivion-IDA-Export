0x438EB0: push    esi
0x438EB1: push    edi
0x438EB2: push    24h ; '$'; Size
0x438EB4: mov     esi, ecx
0x438EB6: call    FormHeapAlloc
0x438EBB: xor     edi, edi
0x438EBD: add     esp, 4
0x438EC0: cmp     eax, edi
0x438EC2: jz      short loc_438F05
0x438EC4: mov     edx, [esi+4]
0x438EC7: mov     ecx, [esp+8+a2]
0x438ECB: lea     ecx, [ecx+ecx*2]
0x438ECE: push    ebx
0x438ECF: add     ecx, ecx
0x438ED1: add     ecx, ecx
0x438ED3: lea     ebx, [edx+ecx+8]
0x438ED7: mov     edx, [esi+4]
0x438EDA: push    ebp
0x438EDB: lea     ebp, [edx+ecx+4]
0x438EDF: mov     edx, [esi+4]
0x438EE2: mov     [eax+14h], edi
0x438EE5: mov     [eax+18h], edi
0x438EE8: mov     [eax+8], ebp
0x438EEB: pop     ebp
0x438EEC: add     edx, ecx
0x438EEE: mov     [eax+0Ch], ebx
0x438EF1: mov     [eax], esi
0x438EF3: pop     ebx
0x438EF4: mov     [eax+4], edx
0x438EF7: mov     [eax+10h], edi
0x438EFA: mov     [eax+1Ch], edi
0x438EFD: mov     [eax+20h], edi
0x438F00: pop     edi
0x438F01: pop     esi
0x438F02: retn    4
0x438F05: pop     edi
0x438F06: xor     eax, eax
0x438F08: pop     esi
0x438F09: retn    4
