0x4A7CD0: sub     esp, 8
0x4A7CD3: push    ebx
0x4A7CD4: push    esi
0x4A7CD5: lea     esi, [ecx+10Ch]
0x4A7CDB: mov     ecx, [esi+4]
0x4A7CDE: xor     ebx, ebx
0x4A7CE0: xor     eax, eax
0x4A7CE2: test    ecx, ecx
0x4A7CE4: push    edi
0x4A7CE5: jbe     short loc_4A7CFE
0x4A7CE7: mov     edi, [esi+8]
0x4A7CEA: mov     edx, edi
0x4A7CEC: lea     esp, [esp+0]
0x4A7CF0: cmp     [edx], ebx
0x4A7CF2: jnz     short loc_4A7D49
0x4A7CF4: add     eax, 1
0x4A7CF7: add     edx, 4
0x4A7CFA: cmp     eax, ecx
0x4A7CFC: jb      short loc_4A7CF0
0x4A7CFE: xor     eax, eax
0x4A7D00: test    eax, eax
0x4A7D02: mov     [esp+14h+var_8], eax
0x4A7D06: jz      short loc_4A7D3E
0x4A7D08: mov     edi, [esp+14h+arg_0]
0x4A7D0C: lea     esp, [esp+0]
0x4A7D10: lea     eax, [esp+14h+arg_0]
0x4A7D14: push    eax
0x4A7D15: lea     ecx, [esp+18h+var_4]
0x4A7D19: push    ecx
0x4A7D1A: lea     edx, [esp+1Ch+var_8]
0x4A7D1E: push    edx
0x4A7D1F: mov     ecx, esi
0x4A7D21: call    sub_452600
0x4A7D26: mov     ecx, [esp+14h+arg_0]
0x4A7D2A: test    ecx, ecx
0x4A7D2C: jz      short loc_4A7D37
0x4A7D2E: push    edi
0x4A7D2F: call    Setting_BuildOutputArray
0x4A7D34: add     ebx, 1
0x4A7D37: cmp     [esp+14h+var_8], 0
0x4A7D3C: jnz     short loc_4A7D10
0x4A7D3E: pop     edi
0x4A7D3F: pop     esi
0x4A7D40: mov     eax, ebx
0x4A7D42: pop     ebx
0x4A7D43: add     esp, 8
0x4A7D46: retn    4
0x4A7D49: mov     eax, [edi+eax*4]
0x4A7D4C: jmp     short loc_4A7D00
