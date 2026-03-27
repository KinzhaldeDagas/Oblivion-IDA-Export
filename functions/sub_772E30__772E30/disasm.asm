0x772E30: push    ebx
0x772E31: push    edi
0x772E32: mov     edi, [esp+8+a2]
0x772E36: xor     ebx, ebx
0x772E38: cmp     edi, ebx
0x772E3A: jz      loc_772ECB
0x772E40: cmp     [edi], bl
0x772E42: jz      short loc_772EBB
0x772E44: mov     eax, [edi+8]
0x772E47: cmp     eax, ebx
0x772E49: push    esi
0x772E4A: jz      short loc_772E6D
0x772E4C: lea     esp, [esp+0]
0x772E50: mov     esi, [eax+8]
0x772E53: mov     ecx, ds:0B427ACh; this
0x772E59: mov     [esp+0Ch+a2], eax
0x772E5D: lea     eax, [esp+0Ch+a2]
0x772E61: push    eax; a2
0x772E62: call    sub_73A5E0
0x772E67: cmp     esi, ebx
0x772E69: mov     eax, esi
0x772E6B: jnz     short loc_772E50
0x772E6D: mov     eax, [edi+10h]
0x772E70: cmp     eax, ebx
0x772E72: mov     [edi+8], ebx
0x772E75: mov     [edi+4], ebx
0x772E78: jz      short loc_772E9D
0x772E7A: lea     ebx, [ebx+0]
0x772E80: mov     esi, [eax+8]
0x772E83: lea     ecx, [esp+0Ch+a2]
0x772E87: push    ecx; a2
0x772E88: mov     ecx, ds:0B427ACh; this
0x772E8E: mov     [esp+10h+a2], eax
0x772E92: call    sub_73A5E0
0x772E97: cmp     esi, ebx
0x772E99: mov     eax, esi
0x772E9B: jnz     short loc_772E80
0x772E9D: lea     edx, [esp+0Ch+a2]
0x772EA1: mov     [edi+10h], ebx
0x772EA4: mov     [edi+0Ch], ebx
0x772EA7: mov     ecx, ds:0B427A8h; this
0x772EAD: push    edx; a2
0x772EAE: mov     [esp+10h+a2], edi
0x772EB2: call    sub_73A5E0
0x772EB7: pop     esi
0x772EB8: pop     edi
0x772EB9: pop     ebx
0x772EBA: retn
0x772EBB: mov     ecx, edi
0x772EBD: call    sub_772BB0
0x772EC2: push    edi
0x772EC3: call    FormHeapFree
0x772EC8: add     esp, 4
0x772ECB: pop     edi
0x772ECC: pop     ebx
0x772ECD: retn
