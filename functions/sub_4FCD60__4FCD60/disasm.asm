0x4FCD60: push    0FFFFFFFFh
0x4FCD62: push    offset SEH_4FCD60
0x4FCD67: mov     eax, large fs:0
0x4FCD6D: push    eax
0x4FCD6E: push    ecx
0x4FCD6F: push    ebx
0x4FCD70: push    ebp
0x4FCD71: push    esi
0x4FCD72: push    edi
0x4FCD73: mov     eax, ds:0B30AACh
0x4FCD78: xor     eax, esp
0x4FCD7A: push    eax
0x4FCD7B: lea     eax, [esp+24h+var_C]
0x4FCD7F: mov     large fs:0, eax
0x4FCD85: mov     esi, ecx
0x4FCD87: mov     [esp+24h+var_10], esi
0x4FCD8B: lea     edi, [esi+0Ch]
0x4FCD8E: xor     ebx, ebx
0x4FCD90: mov     [edi], ebx
0x4FCD92: mov     [edi+4], bx
0x4FCD96: mov     [edi+6], bx
0x4FCD9A: mov     [esi+3Ch], ebx
0x4FCD9D: mov     [esi+40h], ebx
0x4FCDA0: mov     [esi+44h], ebx
0x4FCDA3: mov     [esi+48h], ebx
0x4FCDA6: mov     [esi+50h], ebx
0x4FCDA9: mov     [esi+54h], ebx
0x4FCDAC: push    1
0x4FCDAE: push    4000h
0x4FCDB3: mov     ecx, offset FormHeap
0x4FCDB8: mov     [esp+2Ch+var_4], ebx
0x4FCDBC: mov     [esi+1Ch], ebx
0x4FCDBF: mov     [esi+4], ebx
0x4FCDC2: mov     [esi+24h], ebx
0x4FCDC5: call    j_MemoryHeap_Alloc
0x4FCDCA: push    4000h
0x4FCDCF: mov     ebp, eax
0x4FCDD1: push    ebx
0x4FCDD2: push    ebp
0x4FCDD3: call    __memset
0x4FCDD8: mov     [esi+20h], ebp
0x4FCDDB: mov     [ebp+0], ebx
0x4FCDDE: xor     eax, eax
0x4FCDE0: mov     [esi+28h], eax
0x4FCDE3: mov     [esi+2Ch], eax
0x4FCDE6: mov     [esi+30h], eax
0x4FCDE9: mov     [esi+34h], eax
0x4FCDEC: mov     [esi+38h], eax
0x4FCDEF: mov     eax, [esi+20h]
0x4FCDF2: add     esp, 0Ch
0x4FCDF5: mov     [eax], ebx
0x4FCDF7: push    ebx; a3
0x4FCDF8: push    offset EmptyString; a2
0x4FCDFD: mov     ecx, edi; this
0x4FCDFF: mov     [esi+8], ebx
0x4FCE02: mov     [esi+18h], bl
0x4FCE05: mov     [esi+4Ch], ebx
0x4FCE08: call    BSStringT_Set
0x4FCE0D: mov     [esi+14h], ebx
0x4FCE10: mov     eax, esi
0x4FCE12: mov     ecx, [esp+24h+var_C]
0x4FCE16: mov     large fs:0, ecx
0x4FCE1D: pop     ecx
0x4FCE1E: pop     edi
0x4FCE1F: pop     esi
0x4FCE20: pop     ebp
0x4FCE21: pop     ebx
0x4FCE22: add     esp, 10h
0x4FCE25: retn
