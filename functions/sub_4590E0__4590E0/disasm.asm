0x4590E0: mov     eax, [esp+arg_0]; MEF v27 verification: same raw blob consumed-length contract as sub_458E50 for SaveLoad+0x5C map; guarded skips must advance/discard payload.
0x4590E4: push    ebx
0x4590E5: push    ebp
0x4590E6: mov     ebp, [eax+0Ch]
0x4590E9: push    esi
0x4590EA: push    edi
0x4590EB: movzx   edi, [esp+10h+arg_4]
0x4590F0: mov     esi, ecx
0x4590F2: mov     ecx, [esi+5Ch]
0x4590F5: push    1
0x4590F7: lea     edx, [edi+2]
0x4590FA: mov     [esp+14h+arg_0], ecx
0x4590FE: push    edx
0x4590FF: mov     ecx, offset FormHeap
0x459104: call    j_MemoryHeap_Alloc
0x459109: mov     ebx, eax
0x45910B: mov     ax, [esp+10h+arg_4]
0x459110: mov     [ebx], ax
0x459113: mov     ecx, [esi+14h]
0x459116: push    edi; byteCount
0x459117: push    ecx; source
0x459118: lea     edx, [ebx+2]
0x45911B: push    edx; destination
0x45911C: call    _memcpy; MEF decode note: raw save-buffer memcpy into SaveLoad map +0x5C using caller UInt16 length. Candidate for future bounded copy/skip once active save-record remaining bytes are tracked.
0x459121: mov     ecx, [esp+1Ch+arg_0]; this
0x459125: add     [esi+14h], edi
0x459128: add     esp, 0Ch
0x45912B: push    ebx; a3
0x45912C: push    ebp; a2
0x45912D: call    NiTMap_SetAt
0x459132: pop     edi
0x459133: pop     esi
0x459134: pop     ebp
0x459135: pop     ebx
0x459136: retn    8
