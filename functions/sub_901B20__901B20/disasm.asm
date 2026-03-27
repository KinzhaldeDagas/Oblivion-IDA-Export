0x901B20: mov     eax, [esp+arg_0]
0x901B24: sub     esp, 8
0x901B27: push    ebx
0x901B28: push    ebp
0x901B29: mov     ebx, ecx
0x901B2B: mov     ecx, [ebx+14h]
0x901B2E: push    edi
0x901B2F: xor     edi, edi
0x901B31: test    ecx, ecx
0x901B33: mov     ebp, eax
0x901B35: jle     short loc_901B68
0x901B37: push    esi
0x901B38: mov     eax, [ebx+10h]
0x901B3B: mov     esi, [eax+edi*8]
0x901B3E: mov     edx, [esi]
0x901B40: push    ebp
0x901B41: mov     ecx, esi
0x901B43: call    dword ptr [edx+20h]
0x901B46: mov     eax, [esi]
0x901B48: lea     ecx, [esp+18h+var_8]
0x901B4C: push    ecx
0x901B4D: mov     ecx, esi
0x901B4F: call    dword ptr [eax+1Ch]
0x901B52: mov     edx, [esp+18h+var_8]
0x901B56: mov     eax, [ebx+14h]
0x901B59: shl     edx, 4
0x901B5C: add     ebp, edx
0x901B5E: inc     edi
0x901B5F: cmp     edi, eax
0x901B61: jl      short loc_901B38
0x901B63: mov     eax, [esp+18h+arg_0]
0x901B67: pop     esi
0x901B68: pop     edi
0x901B69: pop     ebp
0x901B6A: pop     ebx
0x901B6B: add     esp, 8
0x901B6E: retn    4
