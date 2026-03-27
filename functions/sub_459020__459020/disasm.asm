0x459020: mov     eax, [esp+arg_0]
0x459024: push    ebx
0x459025: push    ebp
0x459026: mov     ebp, [eax+0Ch]
0x459029: push    esi
0x45902A: push    edi
0x45902B: movzx   edi, [esp+10h+arg_4]
0x459030: mov     esi, ecx
0x459032: mov     ecx, [esi+58h]
0x459035: push    1
0x459037: lea     edx, [edi+2]
0x45903A: mov     [esp+14h+arg_0], ecx
0x45903E: push    edx
0x45903F: mov     ecx, offset FormHeap
0x459044: call    j_MemoryHeap_Alloc
0x459049: mov     ebx, eax
0x45904B: mov     ax, [esp+10h+arg_4]
0x459050: mov     [ebx], ax
0x459053: mov     ecx, [esi+14h]
0x459056: push    edi; Size
0x459057: push    ecx; Src
0x459058: lea     edx, [ebx+2]
0x45905B: push    edx; Dst
0x45905C: call    _memcpy
0x459061: mov     ecx, [esp+1Ch+arg_0]; this
0x459065: add     [esi+14h], edi
0x459068: add     esp, 0Ch
0x45906B: push    ebx; a3
0x45906C: push    ebp; a2
0x45906D: call    NiTMap_SetAt
0x459072: pop     edi
0x459073: pop     esi
0x459074: pop     ebp
0x459075: pop     ebx
0x459076: retn    8
