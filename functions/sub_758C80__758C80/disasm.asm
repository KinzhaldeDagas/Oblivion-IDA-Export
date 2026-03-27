0x758C80: push    esi
0x758C81: push    edi
0x758C82: push    34h ; '4'; Size
0x758C84: mov     edi, ecx
0x758C86: call    FormHeapAlloc
0x758C8B: add     esp, 4
0x758C8E: test    eax, eax
0x758C90: jz      short loc_758C9D
0x758C92: mov     ecx, eax
0x758C94: call    sub_758910
0x758C99: mov     esi, eax
0x758C9B: jmp     short loc_758C9F
0x758C9D: xor     esi, esi
0x758C9F: mov     eax, [esp+8+arg_0]
0x758CA3: push    eax
0x758CA4: push    esi
0x758CA5: mov     ecx, edi
0x758CA7: call    sub_752C40
0x758CAC: mov     ecx, [edi+1Ch]
0x758CAF: mov     [esi+1Ch], ecx
0x758CB2: mov     edx, [edi+20h]
0x758CB5: mov     [esi+20h], edx
0x758CB8: mov     eax, [edi+24h]
0x758CBB: mov     [esi+24h], eax
0x758CBE: fld     dword ptr [edi+28h]
0x758CC1: fstp    dword ptr [esi+28h]
0x758CC4: mov     eax, esi
0x758CC6: fld     dword ptr [edi+2Ch]
0x758CC9: fstp    dword ptr [esi+2Ch]
0x758CCC: fld     dword ptr [edi+30h]
0x758CCF: pop     edi
0x758CD0: fstp    dword ptr [esi+30h]
0x758CD3: pop     esi
0x758CD4: retn    4
