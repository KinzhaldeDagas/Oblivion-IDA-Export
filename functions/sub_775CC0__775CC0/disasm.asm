0x775CC0: push    ebx
0x775CC1: push    ebp
0x775CC2: mov     ebp, [esp+8+arg_0]
0x775CC6: mov     eax, [ebp+0]
0x775CC9: push    esi
0x775CCA: push    edi
0x775CCB: mov     ebx, ecx
0x775CCD: mov     ecx, [eax+10h]
0x775CD0: push    ebp
0x775CD1: call    ecx
0x775CD3: lea     esi, [ebx+4]
0x775CD6: push    eax
0x775CD7: mov     ecx, esi
0x775CD9: mov     [ebx], eax
0x775CDB: call    NiTArray_SetSize
0x775CE0: xor     edi, edi
0x775CE2: cmp     [ebx], edi
0x775CE4: jbe     short loc_775D53
0x775CE6: push    468h; Size
0x775CEB: call    FormHeapAlloc
0x775CF0: add     esp, 4
0x775CF3: test    eax, eax
0x775CF5: jz      short loc_775D07
0x775CF7: mov     edx, [esp+10h+arg_4]
0x775CFB: push    edx
0x775CFC: push    edi
0x775CFD: push    ebp
0x775CFE: mov     ecx, eax
0x775D00: call    sub_775A20
0x775D05: jmp     short loc_775D09
0x775D07: xor     eax, eax
0x775D09: movzx   ecx, word ptr [esi+0Ah]
0x775D0D: cmp     edi, ecx
0x775D0F: jb      short loc_775D23
0x775D11: test    eax, eax
0x775D13: lea     edx, [edi+1]
0x775D16: mov     [esi+0Ah], dx
0x775D1A: jz      short loc_775D46
0x775D1C: add     word ptr [esi+0Ch], 1
0x775D21: jmp     short loc_775D46
0x775D23: test    eax, eax
0x775D25: jz      short loc_775D37
0x775D27: mov     ecx, [esi+4]
0x775D2A: cmp     dword ptr [ecx+edi*4], 0
0x775D2E: jnz     short loc_775D46
0x775D30: add     word ptr [esi+0Ch], 1
0x775D35: jmp     short loc_775D46
0x775D37: mov     edx, [esi+4]
0x775D3A: cmp     dword ptr [edx+edi*4], 0
0x775D3E: jz      short loc_775D46
0x775D40: add     word ptr [esi+0Ch], 0FFFFh
0x775D46: mov     ecx, [esi+4]
0x775D49: mov     [ecx+edi*4], eax
0x775D4C: add     edi, 1
0x775D4F: cmp     edi, [ebx]
0x775D51: jb      short loc_775CE6
0x775D53: pop     edi
0x775D54: pop     esi
0x775D55: pop     ebp
0x775D56: pop     ebx
0x775D57: retn    8
