0x6D80C0: push    0FFFFFFFFh
0x6D80C2: push    offset ??0NiSequence@@QAE@XZ_SEH
0x6D80C7: mov     eax, large fs:0
0x6D80CD: push    eax
0x6D80CE: sub     esp, 8
0x6D80D1: push    ebx
0x6D80D2: push    ebp
0x6D80D3: push    esi
0x6D80D4: push    edi
0x6D80D5: mov     eax, ds:0B30AACh
0x6D80DA: xor     eax, esp
0x6D80DC: push    eax
0x6D80DD: lea     eax, [esp+28h+var_C]
0x6D80E1: mov     large fs:0, eax
0x6D80E7: mov     esi, ecx
0x6D80E9: mov     [esp+28h+var_10], esi
0x6D80ED: call    NiObject_constr
0x6D80F2: lea     edi, [esi+0Ch]
0x6D80F5: xor     ebx, ebx
0x6D80F7: mov     dword ptr [esi], offset ??_7NiSequence@@6B@; const NiSequence::`vftable'
0x6D80FD: mov     eax, 1
0x6D8102: mov     [esp+28h+var_4], ebx
0x6D8106: mov     dword ptr [edi], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x6D810C: mov     [edi+8], bx
0x6D8110: mov     [edi+0Eh], ax
0x6D8114: mov     [edi+0Ah], bx
0x6D8118: mov     [edi+0Ch], bx
0x6D811C: mov     [edi+4], ebx
0x6D811F: lea     ebp, [esi+1Ch]
0x6D8122: mov     dword ptr [ebp+0], offset ??_7?$NiTArray@V?$NiPointer@VNiTransformController@@@@@@6B@; const NiTArray<NiPointer<NiTransformController>>::`vftable'
0x6D8129: mov     [ebp+8], bx
0x6D812D: mov     [ebp+0Eh], ax
0x6D8131: mov     [ebp+0Ah], bx
0x6D8135: mov     [ebp+0Ch], bx
0x6D8139: mov     [ebp+4], ebx
0x6D813C: mov     [esi+2Ch], ebx
0x6D813F: mov     eax, [esp+28h+Src]
0x6D8143: cmp     eax, ebx
0x6D8145: mov     byte ptr [esp+28h+var_4], 4
0x6D814A: jz      short loc_6D8180
0x6D814C: lea     edx, [eax+1]
0x6D814F: nop
0x6D8150: mov     cl, [eax]
0x6D8152: add     eax, 1
0x6D8155: cmp     cl, bl
0x6D8157: jnz     short loc_6D8150
0x6D8159: sub     eax, edx
0x6D815B: add     eax, 1
0x6D815E: push    eax; Size
0x6D815F: mov     [esp+2Ch+SizeInBytes], eax
0x6D8163: call    FormHeapAlloc
0x6D8168: mov     ecx, [esp+2Ch+Src]
0x6D816C: mov     edx, [esp+2Ch+SizeInBytes]
0x6D8170: push    ecx; Src
0x6D8171: push    edx; SizeInBytes
0x6D8172: push    eax; Dst
0x6D8173: mov     [esi+8], eax
0x6D8176: call    _strcpy_s
0x6D817B: add     esp, 10h
0x6D817E: jmp     short loc_6D8183
0x6D8180: mov     [esi+8], ebx
0x6D8183: mov     eax, [esp+28h+arg_4]
0x6D8187: push    eax
0x6D8188: mov     ecx, edi
0x6D818A: call    NiTArray_SetSize
0x6D818F: mov     ecx, [esp+28h+arg_4]
0x6D8193: mov     edi, [esp+28h+arg_8]
0x6D8197: push    ecx
0x6D8198: mov     ecx, ebp
0x6D819A: mov     [esi+1Ah], di
0x6D819E: call    sub_6C4510
0x6D81A3: mov     [esi+2Ah], di
0x6D81A7: mov     edi, [esi+2Ch]
0x6D81AA: cmp     edi, ebx
0x6D81AC: jz      short loc_6D81CD
0x6D81AE: lea     edx, [edi+4]
0x6D81B1: push    edx; lpAddend
0x6D81B2: call    dword ptr ds:0A2807Ch
0x6D81B8: test    eax, eax
0x6D81BA: jnz     short loc_6D81CA
0x6D81BC: cmp     edi, ebx
0x6D81BE: jz      short loc_6D81CA
0x6D81C0: mov     eax, [edi]
0x6D81C2: mov     edx, [eax]
0x6D81C4: push    1
0x6D81C6: mov     ecx, edi
0x6D81C8: call    edx
0x6D81CA: mov     [esi+2Ch], ebx
0x6D81CD: mov     eax, esi
0x6D81CF: mov     [esi+30h], ebx
0x6D81D2: mov     ecx, dword ptr [esp+28h+var_C]
0x6D81D6: mov     large fs:0, ecx
0x6D81DD: pop     ecx
0x6D81DE: pop     edi
0x6D81DF: pop     esi
0x6D81E0: pop     ebp
0x6D81E1: pop     ebx
0x6D81E2: add     esp, 14h
0x6D81E5: retn    0Ch
