0x6CED50: push    0FFFFFFFFh
0x6CED52: push    offset SEH_6CED50
0x6CED57: mov     eax, large fs:0
0x6CED5D: push    eax
0x6CED5E: sub     esp, 8
0x6CED61: push    ebx
0x6CED62: push    ebp
0x6CED63: push    esi
0x6CED64: push    edi
0x6CED65: mov     eax, ds:0B30AACh
0x6CED6A: xor     eax, esp
0x6CED6C: push    eax
0x6CED6D: lea     eax, [esp+28h+var_C]
0x6CED71: mov     large fs:0, eax
0x6CED77: mov     ebp, ecx
0x6CED79: mov     al, [ebp+0Dh]
0x6CED7C: mov     [esp+28h+var_12], al
0x6CED80: call    sub_6CCFD0
0x6CED85: test    al, al
0x6CED87: mov     [esp+28h+var_11], al
0x6CED8B: jz      short loc_6CEE0A
0x6CED8D: movzx   esi, byte ptr [ebp+0Dh]
0x6CED91: xor     ecx, ecx
0x6CED93: mov     eax, esi
0x6CED95: mov     edx, 68h ; 'h'
0x6CED9A: mul     edx
0x6CED9C: seto    cl
0x6CED9F: neg     ecx
0x6CEDA1: or      ecx, eax
0x6CEDA3: push    ecx; Size
0x6CEDA4: call    FormHeapAlloc
0x6CEDA9: mov     ebx, eax
0x6CEDAB: add     esp, 4
0x6CEDAE: mov     [esp+28h+var_10], ebx
0x6CEDB2: test    ebx, ebx
0x6CEDB4: mov     [esp+28h+var_4], 0
0x6CEDBC: jz      short loc_6CEDCE
0x6CEDBE: push    offset sub_6C3730
0x6CEDC3: push    esi
0x6CEDC4: push    68h ; 'h'
0x6CEDC6: push    ebx
0x6CEDC7: call    sub_401080
0x6CEDCC: jmp     short loc_6CEDD0
0x6CEDCE: xor     ebx, ebx
0x6CEDD0: mov     cl, [esp+28h+var_12]
0x6CEDD4: test    cl, cl
0x6CEDD6: jbe     short loc_6CEDF7
0x6CEDD8: xor     eax, eax
0x6CEDDA: movzx   edx, cl
0x6CEDDD: lea     ecx, [ecx+0]
0x6CEDE0: mov     esi, [ebp+50h]
0x6CEDE3: add     esi, eax
0x6CEDE5: lea     edi, [eax+ebx]
0x6CEDE8: mov     ecx, 1Ah
0x6CEDED: add     eax, 68h ; 'h'
0x6CEDF0: sub     edx, 1
0x6CEDF3: rep movsd
0x6CEDF5: jnz     short loc_6CEDE0
0x6CEDF7: mov     eax, [ebp+50h]
0x6CEDFA: push    eax
0x6CEDFB: call    FormHeapFree
0x6CEE00: mov     al, [esp+2Ch+var_11]
0x6CEE04: add     esp, 4
0x6CEE07: mov     [ebp+50h], ebx
0x6CEE0A: mov     ecx, [esp+28h+var_C]
0x6CEE0E: mov     large fs:0, ecx
0x6CEE15: pop     ecx
0x6CEE16: pop     edi
0x6CEE17: pop     esi
0x6CEE18: pop     ebp
0x6CEE19: pop     ebx
0x6CEE1A: add     esp, 14h
0x6CEE1D: retn
