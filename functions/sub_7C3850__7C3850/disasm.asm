0x7C3850: push    0FFFFFFFFh
0x7C3852: push    offset SEH_7C3850
0x7C3857: mov     eax, large fs:0
0x7C385D: push    eax
0x7C385E: push    ecx
0x7C385F: push    ebx
0x7C3860: push    ebp
0x7C3861: push    esi
0x7C3862: push    edi
0x7C3863: mov     eax, ds:0B30AACh
0x7C3868: xor     eax, esp
0x7C386A: push    eax
0x7C386B: lea     eax, [esp+24h+var_C]
0x7C386F: mov     large fs:0, eax
0x7C3875: mov     edi, ecx
0x7C3877: mov     [esp+24h+var_10], edi
0x7C387B: mov     esi, [edi+30h]
0x7C387E: test    esi, esi
0x7C3880: mov     [esp+24h+var_4], 2
0x7C3888: jz      short loc_7C38AD
0x7C388A: lea     eax, [esi+4]
0x7C388D: push    eax; lpAddend
0x7C388E: call    dword ptr ds:0A2807Ch
0x7C3894: test    eax, eax
0x7C3896: jnz     short loc_7C38A6
0x7C3898: test    esi, esi
0x7C389A: jz      short loc_7C38A6
0x7C389C: mov     edx, [esi]
0x7C389E: mov     eax, [edx]
0x7C38A0: push    1
0x7C38A2: mov     ecx, esi
0x7C38A4: call    eax
0x7C38A6: mov     dword ptr [edi+30h], 0
0x7C38AD: lea     ebx, [edi+34h]
0x7C38B0: mov     ecx, ebx
0x7C38B2: call    NiTPointerList__FreeAllNodes
0x7C38B7: mov     esi, [edi+24h]
0x7C38BA: test    esi, esi
0x7C38BC: jz      short loc_7C38E0
0x7C38BE: mov     edi, edi
0x7C38C0: mov     ebp, [esi+8]
0x7C38C3: test    ebp, ebp
0x7C38C5: lea     eax, [esi+8]
0x7C38C8: mov     esi, [esi]
0x7C38CA: jz      short loc_7C38DC
0x7C38CC: mov     ecx, ebp
0x7C38CE: call    sub_812D60
0x7C38D3: push    ebp
0x7C38D4: call    FormHeapFree
0x7C38D9: add     esp, 4
0x7C38DC: test    esi, esi
0x7C38DE: jnz     short loc_7C38C0
0x7C38E0: lea     ebp, [edi+20h]
0x7C38E3: mov     ecx, ebp
0x7C38E5: call    NiTPointerList__FreeAllNodes
0x7C38EA: mov     esi, [edi+30h]
0x7C38ED: test    esi, esi
0x7C38EF: jz      short loc_7C3914
0x7C38F1: lea     ecx, [esi+4]
0x7C38F4: push    ecx; lpAddend
0x7C38F5: call    dword ptr ds:0A2807Ch
0x7C38FB: test    eax, eax
0x7C38FD: jnz     short loc_7C390D
0x7C38FF: test    esi, esi
0x7C3901: jz      short loc_7C390D
0x7C3903: mov     edx, [esi]
0x7C3905: mov     eax, [edx]
0x7C3907: push    1
0x7C3909: mov     ecx, esi
0x7C390B: call    eax
0x7C390D: mov     dword ptr [edi+30h], 0
0x7C3914: mov     ecx, ebx
0x7C3916: call    NiTPointerList__FreeAllNodes
0x7C391B: mov     ecx, ebx
0x7C391D: mov     byte ptr [esp+24h+var_4], 1
0x7C3922: call    ??1?$NiTList@J@@UAE@XZ; NiTList<long>::~NiTList<long>(void)
0x7C3927: mov     edi, [edi+30h]
0x7C392A: test    edi, edi
0x7C392C: mov     byte ptr [esp+24h+var_4], 0
0x7C3931: jz      short loc_7C394F
0x7C3933: lea     ecx, [edi+4]
0x7C3936: push    ecx; lpAddend
0x7C3937: call    dword ptr ds:0A2807Ch
0x7C393D: test    eax, eax
0x7C393F: jnz     short loc_7C394F
0x7C3941: test    edi, edi
0x7C3943: jz      short loc_7C394F
0x7C3945: mov     edx, [edi]
0x7C3947: mov     eax, [edx]
0x7C3949: push    1
0x7C394B: mov     ecx, edi
0x7C394D: call    eax
0x7C394F: mov     ecx, ebp
0x7C3951: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C3959: call    ??1?$NiTPointerList@PAVTallGrassGroup@@@@UAE@XZ; NiTPointerList<TallGrassGroup *>::~NiTPointerList<TallGrassGroup *>(void)
0x7C395E: mov     ecx, dword ptr [esp+24h+var_C]
0x7C3962: mov     large fs:0, ecx
0x7C3969: pop     ecx
0x7C396A: pop     edi
0x7C396B: pop     esi
0x7C396C: pop     ebp
0x7C396D: pop     ebx
0x7C396E: add     esp, 10h
0x7C3971: retn
