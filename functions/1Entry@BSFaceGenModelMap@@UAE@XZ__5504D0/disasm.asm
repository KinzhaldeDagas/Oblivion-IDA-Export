0x5504D0: push    0FFFFFFFFh
0x5504D2: push    offset NiExtraData_ctor_SEH
0x5504D7: mov     eax, large fs:0
0x5504DD: push    eax
0x5504DE: push    ecx
0x5504DF: push    ebx
0x5504E0: push    esi
0x5504E1: push    edi
0x5504E2: mov     eax, ds:0B30AACh
0x5504E7: xor     eax, esp
0x5504E9: push    eax
0x5504EA: lea     eax, [esp+20h+var_C]
0x5504EE: mov     large fs:0, eax
0x5504F4: mov     edi, ecx
0x5504F6: mov     [esp+20h+var_10], edi
0x5504FA: mov     esi, [edi+8]
0x5504FD: test    esi, esi
0x5504FF: mov     ebx, ds:0A2807Ch
0x550505: mov     [esp+20h+var_4], 0
0x55050D: jz      short loc_550527
0x55050F: lea     eax, [esi+4]
0x550512: push    eax; lpAddend
0x550513: call    ebx ; InterlockedDecrement
0x550515: test    eax, eax
0x550517: jnz     short loc_550527
0x550519: test    esi, esi
0x55051B: jz      short loc_550527
0x55051D: mov     edx, [esi]
0x55051F: mov     eax, [edx]
0x550521: push    1
0x550523: mov     ecx, esi
0x550525: call    eax
0x550527: push    offset NiRefObject_objcount; lpAddend
0x55052C: mov     dword ptr [edi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x550532: call    ebx ; InterlockedDecrement
0x550534: mov     ecx, dword ptr [esp+20h+var_C]
0x550538: mov     large fs:0, ecx
0x55053F: pop     ecx
0x550540: pop     edi
0x550541: pop     esi
0x550542: pop     ebx
0x550543: add     esp, 10h
0x550546: retn
