0x5E1E30: push    esi
0x5E1E31: mov     esi, ecx
0x5E1E33: call    Actor_IsNPC
0x5E1E38: test    al, al
0x5E1E3A: jnz     short loc_5E1E40
0x5E1E3C: mov     al, 1
0x5E1E3E: pop     esi
0x5E1E3F: retn
0x5E1E40: push    5Ah ; 'Z'; a2
0x5E1E42: lea     ecx, [esi+44h]; this
0x5E1E45: call    BaseExtraList_GetExtraData
0x5E1E4A: test    eax, eax
0x5E1E4C: jz      short loc_5E1E53
0x5E1E4E: mov     al, [eax+0Ch]
0x5E1E51: pop     esi
0x5E1E52: retn
0x5E1E53: mov     eax, [esi]
0x5E1E55: mov     edx, [eax+170h]
0x5E1E5B: push    ebx
0x5E1E5C: push    edi
0x5E1E5D: mov     ecx, esi
0x5E1E5F: xor     ebx, ebx
0x5E1E61: call    edx
0x5E1E63: mov     edi, eax
0x5E1E65: test    edi, edi
0x5E1E67: jz      short loc_5E1E7B
0x5E1E69: mov     eax, [esi]
0x5E1E6B: mov     edx, [eax+190h]
0x5E1E71: mov     ecx, esi
0x5E1E73: call    edx
0x5E1E75: test    al, al
0x5E1E77: jz      short loc_5E1E7B
0x5E1E79: mov     ebx, edi
0x5E1E7B: mov     eax, [ebx+28h]
0x5E1E7E: pop     edi
0x5E1E7F: shr     eax, 0Dh
0x5E1E82: pop     ebx
0x5E1E83: and     al, 1
0x5E1E85: pop     esi
0x5E1E86: retn
