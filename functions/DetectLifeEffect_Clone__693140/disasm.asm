0x693140: push    0FFFFFFFFh
0x693142: push    offset SEH_8C8970
0x693147: mov     eax, large fs:0
0x69314D: push    eax
0x69314E: push    ecx
0x69314F: push    esi
0x693150: push    edi
0x693151: mov     eax, ds:0B30AACh
0x693156: xor     eax, esp
0x693158: push    eax
0x693159: lea     eax, [esp+1Ch+var_C]
0x69315D: mov     large fs:0, eax
0x693163: mov     esi, ecx
0x693165: push    3Ch ; '<'; Size
0x693167: call    FormHeapAlloc
0x69316C: mov     edi, eax
0x69316E: add     esp, 4
0x693171: mov     [esp+1Ch+var_10], edi
0x693175: test    edi, edi
0x693177: mov     [esp+1Ch+var_4], 0
0x69317F: jz      short loc_69319C
0x693181: mov     eax, [esi+0Ch]
0x693184: mov     ecx, [esi+8]
0x693187: mov     edx, [esi+24h]
0x69318A: push    eax; int
0x69318B: push    ecx; int
0x69318C: push    edx; int
0x69318D: mov     ecx, edi; this
0x69318F: call    ValueModifierEffect_constr
0x693194: mov     dword ptr [edi], offset ??_7DetectLifeEffect@@6B@; const DetectLifeEffect::`vftable'
0x69319A: jmp     short loc_69319E
0x69319C: xor     edi, edi
0x69319E: mov     eax, [esi]
0x6931A0: mov     edx, [eax+2Ch]
0x6931A3: push    edi
0x6931A4: mov     ecx, esi
0x6931A6: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6931AE: call    edx
0x6931B0: mov     eax, edi
0x6931B2: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6931B6: mov     large fs:0, ecx
0x6931BD: pop     ecx
0x6931BE: pop     edi
0x6931BF: pop     esi
0x6931C0: add     esp, 10h
0x6931C3: retn
