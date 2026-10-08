0x79EF40: push    ebx; Sorts an SFrondGuide heap by repeatedly popping the last heap element and repairing the shortened heap. Used as the introsort worst-case fallback.
0x79EF41: push    ebp
0x79EF42: push    esi
0x79EF43: mov     esi, [esp+0Ch+last]
0x79EF47: push    edi
0x79EF48: mov     edi, [esp+10h+first]
0x79EF4C: mov     ecx, esi
0x79EF4E: sub     ecx, edi
0x79EF50: mov     eax, 2AAAAAABh
0x79EF55: imul    ecx
0x79EF57: sar     edx, 3
0x79EF5A: mov     eax, edx
0x79EF5C: shr     eax, 1Fh
0x79EF5F: add     eax, edx
0x79EF61: cmp     eax, 1
0x79EF64: jle     loc_79EFEE
0x79EF6A: mov     ebp, 1Ch
0x79EF6F: add     esi, 0FFFFFFE4h
0x79EF72: sub     ebp, edi
0x79EF74: cmp     eax, 1
0x79EF77: jle     short loc_79EFD2
0x79EF79: mov     eax, dword ptr [esp+10h+sorterState]
0x79EF7D: push    0
0x79EF7F: push    eax; sorterState
0x79EF80: sub     esp, 30h
0x79EF83: mov     edi, esp
0x79EF85: mov     [esp+48h+last], esp
0x79EF89: lea     ebx, [esi-14h]
0x79EF8C: push    ebx; source
0x79EF8D: mov     ecx, edi; this
0x79EF8F: call    OB_stVector_SFrondVertex_CopyCtor_010201A0; Oblivion-authoritative copy construction for the 16-byte vector wrapper embedded at SFrondGuide+0x00. Allocates capacity for the exact source count and deep-copies 0x38-byte SFrondVertex records; scalar guide fields are copied separately by callers.
0x79EF94: fld     dword ptr [esi-4]
0x79EF97: fstp    dword ptr [edi+10h]
0x79EF9A: push    ebx; result
0x79EF9B: fld     dword ptr [esi]
0x79EF9D: push    ebx; last
0x79EF9E: fstp    dword ptr [edi+14h]
0x79EFA1: mov     cl, [esi+4]
0x79EFA4: mov     [edi+18h], cl
0x79EFA7: fld     dword ptr [esi+8]
0x79EFAA: mov     ecx, [esp+50h+first]
0x79EFAE: fstp    dword ptr [edi+1Ch]
0x79EFB1: fld     dword ptr [esi+0Ch]
0x79EFB4: push    ecx; first
0x79EFB5: fstp    dword ptr [edi+20h]
0x79EFB8: fld     dword ptr [esi+10h]
0x79EFBB: fstp    dword ptr [edi+24h]
0x79EFBE: mov     edx, [esi+14h]
0x79EFC1: mov     [edi+28h], edx
0x79EFC4: mov     eax, [esi+18h]
0x79EFC7: mov     [edi+2Ch], eax
0x79EFCA: call    OB_SFrondGuide_PopHeap_010201A0; Pop-heap primitive for SFrondGuide. Moves the first heap element to the output slot, then rebuilds the shortened heap by calling the typed adjust-heap path with the saved guide value.
0x79EFCF: add     esp, 44h
0x79EFD2: sub     esi, 30h ; '0'
0x79EFD5: lea     ecx, [esi+ebp]
0x79EFD8: mov     eax, 2AAAAAABh
0x79EFDD: imul    ecx
0x79EFDF: sar     edx, 3
0x79EFE2: mov     eax, edx
0x79EFE4: shr     eax, 1Fh
0x79EFE7: add     eax, edx
0x79EFE9: cmp     eax, 1
0x79EFEC: jg      short loc_79EF79
0x79EFEE: pop     edi
0x79EFEF: pop     esi
0x79EFF0: pop     ebp
0x79EFF1: pop     ebx
0x79EFF2: retn
