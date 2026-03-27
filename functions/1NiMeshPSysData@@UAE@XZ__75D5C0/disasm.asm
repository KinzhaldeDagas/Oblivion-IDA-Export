0x75D5C0: push    esi
0x75D5C1: mov     esi, ecx
0x75D5C3: cmp     word ptr [esi+7Eh], 0
0x75D5C8: push    edi
0x75D5C9: mov     dword ptr [esi], offset ??_7NiMeshPSysData@@6B@; const NiMeshPSysData::`vftable'
0x75D5CF: jbe     short loc_75D615
0x75D5D1: mov     edi, 0FFFFh
0x75D5D6: movzx   eax, word ptr [esi+7Eh]
0x75D5DA: test    ax, ax
0x75D5DD: jz      short loc_75D60E
0x75D5DF: mov     ecx, [esi+78h]
0x75D5E2: add     eax, 0FFFFFFFFh
0x75D5E5: mov     [esi+7Eh], ax
0x75D5E9: movzx   eax, ax
0x75D5EC: lea     eax, [ecx+eax*4]
0x75D5EF: mov     ecx, [eax]
0x75D5F1: test    ecx, ecx
0x75D5F3: mov     dword ptr [eax], 0
0x75D5F9: jz      short loc_75D60E
0x75D5FB: add     [esi+80h], di
0x75D602: test    ecx, ecx
0x75D604: jz      short loc_75D60E
0x75D606: mov     edx, [ecx]
0x75D608: mov     eax, [edx]
0x75D60A: push    1
0x75D60C: call    eax
0x75D60E: cmp     word ptr [esi+7Eh], 0
0x75D613: ja      short loc_75D5D6
0x75D615: mov     ecx, [esi+78h]
0x75D618: push    ecx
0x75D619: mov     dword ptr [esi+74h], offset ??_7?$NiTArray@PAV?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@@@6B@; const NiTArray<NiTArray<NiPointer<NiAVObject>> *>::`vftable'
0x75D620: call    FormHeapFree
0x75D625: mov     edi, [esi+68h]
0x75D628: add     esp, 4
0x75D62B: test    edi, edi
0x75D62D: jz      short loc_75D64B
0x75D62F: lea     edx, [edi+4]
0x75D632: push    edx; lpAddend
0x75D633: call    dword ptr ds:0A2807Ch
0x75D639: test    eax, eax
0x75D63B: jnz     short loc_75D64B
0x75D63D: test    edi, edi
0x75D63F: jz      short loc_75D64B
0x75D641: mov     eax, [edi]
0x75D643: mov     edx, [eax]
0x75D645: push    1
0x75D647: mov     ecx, edi
0x75D649: call    edx
0x75D64B: pop     edi
0x75D64C: mov     ecx, esi
0x75D64E: pop     esi
0x75D64F: jmp     loc_759830
