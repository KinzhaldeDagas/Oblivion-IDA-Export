0x51ABD0: push    0FFFFFFFFh
0x51ABD2: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x51ABD7: mov     eax, large fs:0
0x51ABDD: push    eax
0x51ABDE: push    ecx
0x51ABDF: push    esi
0x51ABE0: push    edi
0x51ABE1: mov     eax, ds:0B30AACh
0x51ABE6: xor     eax, esp
0x51ABE8: push    eax
0x51ABE9: lea     eax, [esp+1Ch+var_C]
0x51ABED: mov     large fs:0, eax
0x51ABF3: mov     esi, ecx
0x51ABF5: mov     [esp+1Ch+var_10], esi
0x51ABF9: mov     dword ptr [esi], offset ??_7TESAnimGroup@@6B@; const TESAnimGroup::`vftable'
0x51ABFF: mov     eax, [esi+10h]
0x51AC02: xor     edi, edi
0x51AC04: push    eax
0x51AC05: mov     [esp+20h+var_4], edi
0x51AC09: call    FormHeapFree
0x51AC0E: mov     ecx, [esi+28h]
0x51AC11: add     esp, 4
0x51AC14: push    ecx; void *
0x51AC15: mov     ecx, offset FormHeap
0x51AC1A: mov     [esi+10h], edi
0x51AC1D: call    MemoryHeap_Free_checked
0x51AC22: push    offset NiRefObject_objcount; lpAddend
0x51AC27: mov     [esi+28h], edi
0x51AC2A: mov     [esi+24h], edi
0x51AC2D: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x51AC33: call    dword ptr ds:0A2807Ch
0x51AC39: mov     ecx, [esp+1Ch+var_C]
0x51AC3D: mov     large fs:0, ecx
0x51AC44: pop     ecx
0x51AC45: pop     edi
0x51AC46: pop     esi
0x51AC47: add     esp, 10h
0x51AC4A: retn
