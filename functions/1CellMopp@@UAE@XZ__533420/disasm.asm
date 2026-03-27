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
0x533467: mov     ecx, edi
0x533469: call    sub_477EF0
0x53346E: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VbhkRigidBody@@@@@@6B@; const NiTArray<NiPointer<bhkRigidBody>>::`vftable'
0x533474: mov     edi, [edi+4]
0x533477: test    edi, edi
0x533479: mov     byte ptr [esp+20h+var_4], 0
0x53347E: jz      short loc_53349D
0x533480: mov     eax, [edi-4]
0x533483: push    offset sub_7016A0; void (__thiscall *)(void *)
0x533488: lea     ebx, [edi-4]
0x53348B: push    eax; int
0x53348C: push    4; unsigned int
0x53348E: push    edi; void *
0x53348F: call    $LN21
0x533494: push    ebx
0x533495: call    FormHeapFree
0x53349A: add     esp, 4
0x53349D: push    offset NiRefObject_objcount; lpAddend
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
