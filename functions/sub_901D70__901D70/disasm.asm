0x901D70: sub     esp, 8
0x901D73: push    ebx
0x901D74: mov     ebx, [esp+0Ch+arg_0]
0x901D78: push    esi
0x901D79: push    edi
0x901D7A: mov     dword ptr [ebx], 0
0x901D80: mov     edi, ecx
0x901D82: mov     byte ptr [ebx+4], 1
0x901D86: mov     eax, [edi+14h]
0x901D89: xor     esi, esi
0x901D8B: test    eax, eax
0x901D8D: jle     short loc_901DB2
0x901D8F: nop
0x901D90: mov     eax, [edi+10h]
0x901D93: mov     ecx, [eax+esi*8]
0x901D96: mov     edx, [ecx]
0x901D98: lea     eax, [esp+14h+var_8]
0x901D9C: push    eax
0x901D9D: call    dword ptr [edx+1Ch]
0x901DA0: mov     edx, [ebx]
0x901DA2: mov     ecx, dword ptr [esp+14h+var_8]
0x901DA6: add     edx, ecx
0x901DA8: mov     [ebx], edx
0x901DAA: mov     eax, [edi+14h]
0x901DAD: inc     esi
0x901DAE: cmp     esi, eax
0x901DB0: jl      short loc_901D90
0x901DB2: pop     edi
0x901DB3: pop     esi
0x901DB4: pop     ebx
0x901DB5: add     esp, 8
0x901DB8: retn    4
