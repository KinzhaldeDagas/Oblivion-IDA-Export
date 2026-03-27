0x458E50: push    ecx
0x458E51: mov     eax, [esp+4+a2]
0x458E55: mov     eax, [eax+0Ch]
0x458E58: push    ebx
0x458E59: push    ebp
0x458E5A: push    esi
0x458E5B: mov     esi, ecx
0x458E5D: push    edi
0x458E5E: lea     ecx, [esp+14h+var_4]
0x458E62: push    ecx
0x458E63: mov     ecx, [esi+54h]
0x458E66: push    eax
0x458E67: mov     [esp+1Ch+a2], eax
0x458E6B: call    NiTMap_GetAt
0x458E70: test    al, al
0x458E72: jz      short loc_458E7C
0x458E74: mov     [esp+14h+a2], 0
0x458E7C: movzx   edi, [esp+14h+arg_4]
0x458E81: mov     ebp, [esi+54h]
0x458E84: push    1
0x458E86: lea     edx, [edi+2]
0x458E89: push    edx
0x458E8A: mov     ecx, offset FormHeap
0x458E8F: call    j_MemoryHeap_Alloc
0x458E94: mov     ebx, eax
0x458E96: mov     ax, [esp+14h+arg_4]
0x458E9B: mov     [ebx], ax
0x458E9E: mov     ecx, [esi+14h]
0x458EA1: push    edi; Size
0x458EA2: push    ecx; Src
0x458EA3: lea     edx, [ebx+2]
0x458EA6: push    edx; Dst
0x458EA7: call    _memcpy
0x458EAC: mov     eax, [esp+20h+a2]
0x458EB0: add     [esi+14h], edi
0x458EB3: add     esp, 0Ch
0x458EB6: push    ebx; a3
0x458EB7: push    eax; a2
0x458EB8: mov     ecx, ebp; this
0x458EBA: call    NiTMap_SetAt
0x458EBF: pop     edi
0x458EC0: pop     esi
0x458EC1: pop     ebp
0x458EC2: pop     ebx
0x458EC3: pop     ecx
0x458EC4: retn    8
