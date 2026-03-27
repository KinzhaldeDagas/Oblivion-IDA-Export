0x589DF0: push    0FFFFFFFFh
0x589DF2: push    offset SEH_589DF0
0x589DF7: mov     eax, large fs:0
0x589DFD: push    eax
0x589DFE: push    ecx
0x589DFF: push    esi
0x589E00: push    edi
0x589E01: mov     eax, ds:0B30AACh
0x589E06: xor     eax, esp
0x589E08: push    eax
0x589E09: lea     eax, [esp+1Ch+var_C]
0x589E0D: mov     large fs:0, eax
0x589E13: mov     esi, ecx
0x589E15: mov     [esp+1Ch+var_10], esi
0x589E19: xor     edi, edi
0x589E1B: mov     [esi+8], edi
0x589E1E: mov     [esi+0Ch], di
0x589E22: mov     [esi+0Eh], di
0x589E26: fldz
0x589E28: mov     ax, [esp+1Ch+arg_0]
0x589E2D: fstp    dword ptr [esi+4]
0x589E30: push    18h; Size
0x589E32: mov     [esp+20h+var_4], edi
0x589E36: mov     [esi+18h], ax
0x589E3A: mov     [esi], edi
0x589E3C: call    FormHeapAlloc
0x589E41: add     esp, 4
0x589E44: cmp     eax, edi
0x589E46: jz      short loc_589E5F
0x589E48: mov     [eax], edi
0x589E4A: mov     [eax+4], edi
0x589E4D: mov     [eax+8], esi
0x589E50: mov     dword ptr [eax+0Ch], 65h ; 'e'
0x589E57: mov     [eax+10h], edi
0x589E5A: mov     [eax+14h], edi
0x589E5D: jmp     short loc_589E61
0x589E5F: xor     eax, eax
0x589E61: push    18h; Size
0x589E63: mov     [esi+10h], eax
0x589E66: call    FormHeapAlloc
0x589E6B: add     esp, 4
0x589E6E: cmp     eax, edi
0x589E70: jz      short loc_589E89
0x589E72: mov     [eax], edi
0x589E74: mov     [eax+4], edi
0x589E77: mov     [eax+8], esi
0x589E7A: mov     dword ptr [eax+0Ch], 65h ; 'e'
0x589E81: mov     [eax+10h], edi
0x589E84: mov     [eax+14h], edi
0x589E87: jmp     short loc_589E8B
0x589E89: xor     eax, eax
0x589E8B: mov     [esi+14h], eax
0x589E8E: mov     byte ptr [esi+1Ah], 1
0x589E92: mov     eax, esi
0x589E94: mov     ecx, [esp+1Ch+var_C]
0x589E98: mov     large fs:0, ecx
0x589E9F: pop     ecx
0x589EA0: pop     edi
0x589EA1: pop     esi
0x589EA2: add     esp, 10h
0x589EA5: retn    4
