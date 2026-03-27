0x8C4610: push    esi
0x8C4611: mov     esi, ecx
0x8C4613: cmp     dword ptr [esi+0Ch], 0
0x8C4617: jnz     short loc_8C4683
0x8C4619: push    1
0x8C461B: push    50h ; 'P'
0x8C461D: mov     ecx, offset FormHeap
0x8C4622: call    j_MemoryHeap_Alloc
0x8C4627: fldz
0x8C4629: mov     dl, al
0x8C462B: and     dl, 0Fh
0x8C462E: mov     cl, 10h
0x8C4630: sub     cl, dl
0x8C4632: movzx   edx, cl
0x8C4635: add     eax, edx
0x8C4637: mov     [eax-1], cl
0x8C463A: mov     dword ptr [eax], 0
0x8C4640: fst     dword ptr [eax+10h]
0x8C4643: fst     dword ptr [eax+14h]
0x8C4646: fst     dword ptr [eax+18h]
0x8C4649: fst     dword ptr [eax+1Ch]
0x8C464C: fst     dword ptr [eax+20h]
0x8C464F: fst     dword ptr [eax+24h]
0x8C4652: fst     dword ptr [eax+28h]
0x8C4655: fst     dword ptr [eax+2Ch]
0x8C4658: fst     dword ptr [eax+30h]
0x8C465B: fst     dword ptr [eax+34h]
0x8C465E: fst     dword ptr [eax+38h]
0x8C4661: fstp    dword ptr [eax+3Ch]
0x8C4664: cmp     dword ptr [esi+8], 0
0x8C4668: mov     [esi+0Ch], eax
0x8C466B: jz      short loc_8C4675
0x8C466D: push    eax
0x8C466E: mov     ecx, esi
0x8C4670: call    sub_8C41C0
0x8C4675: mov     eax, [esp+4+arg_0]
0x8C4679: mov     byte ptr [eax], 1
0x8C467C: mov     eax, [esi+0Ch]
0x8C467F: pop     esi
0x8C4680: retn    4
0x8C4683: mov     ecx, [esp+4+arg_0]
0x8C4687: mov     byte ptr [ecx], 0
0x8C468A: mov     eax, [esi+0Ch]
0x8C468D: pop     esi
0x8C468E: retn    4
