0x903E20: push    ecx
0x903E21: mov     ecx, ds:0BA7D98h
0x903E27: mov     eax, [ecx]
0x903E29: push    ebx
0x903E2A: push    ebp
0x903E2B: push    esi
0x903E2C: push    edi
0x903E2D: push    1Ch
0x903E2F: push    24h ; '$'
0x903E31: call    dword ptr [eax+10h]
0x903E34: mov     ecx, [esp+14h+arg_C]
0x903E38: mov     edi, [esp+14h+arg_4]
0x903E3C: mov     esi, [esp+14h+arg_0]
0x903E40: push    ecx
0x903E41: push    edi
0x903E42: push    esi
0x903E43: mov     ecx, eax
0x903E45: mov     word ptr [eax+4], 24h ; '$'
0x903E4B: call    sub_903DB0
0x903E50: mov     ebp, eax
0x903E52: cmp     dword ptr [ebp+1Ch], 1Ah
0x903E56: jnz     short loc_903E90
0x903E58: mov     eax, [edi+0Ch]
0x903E5B: test    eax, eax
0x903E5D: mov     ebx, [esi]
0x903E5F: mov     edx, edi
0x903E61: jz      short loc_903E6C
0x903E63: mov     edx, eax
0x903E65: mov     eax, [edx+0Ch]
0x903E68: test    eax, eax
0x903E6A: jnz     short loc_903E63
0x903E6C: mov     ecx, [esi+0Ch]
0x903E6F: test    ecx, ecx
0x903E71: mov     eax, esi
0x903E73: jz      short loc_903E7E
0x903E75: mov     eax, ecx
0x903E77: mov     ecx, [eax+0Ch]
0x903E7A: test    ecx, ecx
0x903E7C: jnz     short loc_903E75
0x903E7E: push    [esp+14h+arg_8]
0x903E82: mov     ecx, [ebx]
0x903E84: push    edx
0x903E85: push    eax
0x903E86: mov     eax, ecx
0x903E88: mov     ecx, ebx
0x903E8A: call    dword ptr [eax+1Ch]
0x903E8D: mov     [ebp+14h], ebx
0x903E90: cmp     dword ptr [ebp+20h], 1Ah
0x903E94: jnz     short loc_903ECF
0x903E96: mov     eax, [esi+0Ch]
0x903E99: test    eax, eax
0x903E9B: mov     ebx, [edi]
0x903E9D: mov     edx, esi
0x903E9F: jz      short loc_903EAA
0x903EA1: mov     edx, eax
0x903EA3: mov     eax, [edx+0Ch]
0x903EA6: test    eax, eax
0x903EA8: jnz     short loc_903EA1
0x903EAA: mov     eax, edi
0x903EAC: mov     edi, [edi+0Ch]
0x903EAF: test    edi, edi
0x903EB1: jz      short loc_903EBE
0x903EB3: mov     ecx, edi
0x903EB5: mov     eax, ecx
0x903EB7: mov     ecx, [eax+0Ch]
0x903EBA: test    ecx, ecx
0x903EBC: jnz     short loc_903EB5
0x903EBE: mov     ecx, [esp+14h+arg_8]
0x903EC2: mov     esi, [ebx]
0x903EC4: push    ecx
0x903EC5: push    edx
0x903EC6: push    eax
0x903EC7: mov     ecx, ebx
0x903EC9: call    dword ptr [esi+1Ch]
0x903ECC: mov     [ebp+18h], ebx
0x903ECF: pop     edi
0x903ED0: pop     esi
0x903ED1: mov     eax, ebp
0x903ED3: pop     ebp
0x903ED4: pop     ebx
0x903ED5: pop     ecx
0x903ED6: retn
