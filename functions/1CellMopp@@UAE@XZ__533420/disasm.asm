0x533420: push    0FFFFFFFFh
0x533422: push    offset ??1CellMopp@@UAE@XZ_SEH
0x533427: mov     eax, large fs:0
0x53342D: push    eax
0x53342E: push    ecx
0x53342F: push    ebx
0x533430: push    esi
0x533431: push    edi
0x533432: mov     eax, ds:0B30AACh
0x533437: xor     eax, esp
0x533439: push    eax
0x53343A: lea     eax, [esp+20h+var_C]
0x53343E: mov     large fs:0, eax
0x533444: mov     esi, ecx
0x533446: mov     [esp+20h+var_10], esi
0x53344A: mov     dword ptr [esi], offset ??_7CellMopp@@6B@; const CellMopp::`vftable'
0x533450: mov     eax, 1
0x533455: sub     ds:0B36588h, eax
0x53345B: mov     [esp+20h+var_4], eax
0x53345F: call    sub_532EF0
0x533464: lea     edi, [esi+8]
0x533467: mov     ecx, edi; this
0x533469: call    NiTObjectArray_ClearAndRelease; Clears a ref-counted NiT object-pointer array: releases every non-null element, nulls entries, and resets end/count words to zero. At bow release it is invoked on ArrowBone+0xAC, thereby releasing all ArrowBone children including the held Arrow:0 clone.
0x53346E: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VbhkRigidBody@@@@@@6B@; const NiTArray<NiPointer<bhkRigidBody>>::`vftable'
0x533474: mov     edi, [edi+4]
0x533477: test    edi, edi
0x533479: mov     byte ptr [esp+20h+var_4], 0
0x53347E: jz      short loc_53349D
0x533480: mov     eax, [edi-4]
0x533483: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x533488: lea     ebx, [edi-4]
0x53348B: push    eax; int
0x53348C: push    4; unsigned int
0x53348E: push    edi; void *
0x53348F: call    $LN21
0x533494: push    ebx
0x533495: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x53349A: add     esp, 4
0x53349D: push    0B3FD64h; lpAddend
0x5334A2: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x5334A8: call    dword ptr ds:0A2807Ch
0x5334AE: mov     ecx, [esp+20h+var_C]
0x5334B2: mov     large fs:0, ecx
0x5334B9: pop     ecx
0x5334BA: pop     edi
0x5334BB: pop     esi
0x5334BC: pop     ebx
0x5334BD: add     esp, 10h
0x5334C0: retn
0x532E70: mov     eax, [ecx+4]
0x532E73: test    eax, eax
0x532E75: mov     dword ptr [ecx], offset ??_7?$NiTArray@V?$NiPointer@VbhkRigidBody@@@@@@6B@; const NiTArray<NiPointer<bhkRigidBody>>::`vftable'
0x532E7B: jz      short locret_532E9C
0x532E7D: mov     ecx, [eax-4]
0x532E80: push    esi
0x532E81: lea     esi, [eax-4]
0x532E84: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x532E89: push    ecx; int
0x532E8A: push    4; unsigned int
0x532E8C: push    eax; void *
0x532E8D: call    $LN21
0x532E92: push    esi
0x532E93: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x532E98: add     esp, 4
0x532E9B: pop     esi
0x532E9C: retn
0x9B8F70: mov     ecx, [ebp-10h]
0x9B8F73: jmp     NiRefObject_destr
0x9B8F78: mov     ecx, [ebp-10h]
0x9B8F7B: add     ecx, 8
0x9B8F7E: jmp     loc_532E70
0x9B8F83: mov     edx, [esp+arg_4]
0x9B8F87: lea     eax, [edx-10h]
0x9B8F8A: mov     ecx, [edx-14h]
0x9B8F8D: xor     ecx, eax
0x9B8F8F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B8F94: mov     eax, offset stru_AE3398
0x9B8F99: jmp     ___CxxFrameHandler3
