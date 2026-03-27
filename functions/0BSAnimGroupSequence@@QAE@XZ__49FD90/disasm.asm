0x49FD90: push    0FFFFFFFFh
0x49FD92: push    offset ??0BSAnimGroupSequence@@QAE@XZ_SEH
0x49FD97: mov     eax, large fs:0
0x49FD9D: push    eax
0x49FD9E: sub     esp, 14h
0x49FDA1: push    ebx
0x49FDA2: push    ebp
0x49FDA3: push    esi
0x49FDA4: push    edi
0x49FDA5: mov     eax, ds:0B30AACh
0x49FDAA: xor     eax, esp
0x49FDAC: push    eax
0x49FDAD: lea     eax, [esp+34h+var_C]
0x49FDB1: mov     large fs:0, eax
0x49FDB7: mov     esi, ecx
0x49FDB9: mov     [esp+34h+var_20], esi
0x49FDBD: mov     ebx, [esp+34h+arg_4]
0x49FDC1: mov     eax, [ebx+8]
0x49FDC4: xor     edi, edi
0x49FDC6: push    edi; int
0x49FDC7: push    1; int
0x49FDC9: push    edi; int
0x49FDCA: push    eax; Src
0x49FDCB: call    sub_6C7FB0
0x49FDD0: mov     dword ptr [esi], offset ??_7BSAnimGroupSequence@@6B@; const BSAnimGroupSequence::`vftable'
0x49FDD6: mov     [esp+34h+var_4], edi
0x49FDDA: mov     [esi+68h], edi
0x49FDDD: mov     ebp, [esp+34h+arg_0]
0x49FDE1: cmp     edi, ebp
0x49FDE3: mov     byte ptr [esp+34h+var_4], 1
0x49FDE8: jz      short loc_49FE1B
0x49FDEA: test    edi, edi
0x49FDEC: jz      short loc_49FE0A
0x49FDEE: lea     eax, [edi+4]
0x49FDF1: push    eax; lpAddend
0x49FDF2: call    dword ptr ds:0A2807Ch
0x49FDF8: test    eax, eax
0x49FDFA: jnz     short loc_49FE0A
0x49FDFC: test    edi, edi
0x49FDFE: jz      short loc_49FE0A
0x49FE00: mov     edx, [edi]
0x49FE02: mov     eax, [edx]
0x49FE04: push    1
0x49FE06: mov     ecx, edi
0x49FE08: call    eax
0x49FE0A: test    ebp, ebp
0x49FE0C: mov     [esi+68h], ebp
0x49FE0F: jz      short loc_49FE1B
0x49FE11: add     ebp, 4
0x49FE14: push    ebp; lpAddend
0x49FE15: call    dword ptr ds:0A28078h
0x49FE1B: mov     ebp, [ebx+20h]
0x49FE1E: mov     edi, [esi+20h]
0x49FE21: cmp     edi, ebp
0x49FE23: jz      short loc_49FE56
0x49FE25: test    edi, edi
0x49FE27: jz      short loc_49FE45
0x49FE29: lea     ecx, [edi+4]
0x49FE2C: push    ecx; lpAddend
0x49FE2D: call    dword ptr ds:0A2807Ch
0x49FE33: test    eax, eax
0x49FE35: jnz     short loc_49FE45
0x49FE37: test    edi, edi
0x49FE39: jz      short loc_49FE45
0x49FE3B: mov     edx, [edi]
0x49FE3D: mov     eax, [edx]
0x49FE3F: push    1
0x49FE41: mov     ecx, edi
0x49FE43: call    eax
0x49FE45: test    ebp, ebp
0x49FE47: mov     [esi+20h], ebp
0x49FE4A: jz      short loc_49FE56
0x49FE4C: add     ebp, 4
0x49FE4F: push    ebp; lpAddend
0x49FE50: call    dword ptr ds:0A28078h
0x49FE56: mov     eax, [ebx+60h]
0x49FE59: mov     [esi+60h], eax
0x49FE5C: mov     eax, [esi+5Ch]
0x49FE5F: mov     ebp, [ebx+5Ch]
0x49FE62: push    eax
0x49FE63: call    FormHeapFree
0x49FE68: add     esp, 4
0x49FE6B: test    ebp, ebp
0x49FE6D: mov     dword ptr [esi+5Ch], 0
0x49FE74: jz      short loc_49FEA2
0x49FE76: mov     eax, ebp
0x49FE78: lea     edx, [eax+1]
0x49FE7B: jmp     short loc_49FE80
0x49FE7D: align 10h
0x49FE80: mov     cl, [eax]
0x49FE82: add     eax, 1
0x49FE85: test    cl, cl
0x49FE87: jnz     short loc_49FE80
0x49FE89: sub     eax, edx
0x49FE8B: lea     edi, [eax+1]
0x49FE8E: push    edi; Size
0x49FE8F: call    FormHeapAlloc
0x49FE94: push    ebp; Src
0x49FE95: push    edi; SizeInBytes
0x49FE96: push    eax; Dst
0x49FE97: mov     [esi+5Ch], eax
0x49FE9A: call    _strcpy_s
0x49FE9F: add     esp, 10h
0x49FEA2: lea     ecx, [esp+34h+var_1C]
0x49FEA6: call    sub_478B90
0x49FEAB: lea     ecx, [esp+34h+var_1C]
0x49FEAF: push    ecx
0x49FEB0: push    esi
0x49FEB1: mov     ecx, ebx
0x49FEB3: mov     byte ptr [esp+3Ch+var_4], 2
0x49FEB8: call    sub_6C9420
0x49FEBD: mov     ecx, [esp+34h+var_1C]
0x49FEC1: test    ecx, ecx
0x49FEC3: mov     byte ptr [esp+34h+var_4], 1
0x49FEC8: jz      short loc_49FED2
0x49FECA: mov     edx, [ecx]
0x49FECC: mov     eax, [edx]
0x49FECE: push    1
0x49FED0: call    eax
0x49FED2: mov     ecx, [esp+34h+var_18]
0x49FED6: test    ecx, ecx
0x49FED8: jz      short loc_49FEE2
0x49FEDA: mov     edx, [ecx]
0x49FEDC: mov     eax, [edx]
0x49FEDE: push    1
0x49FEE0: call    eax
0x49FEE2: mov     eax, esi
0x49FEE4: mov     ecx, dword ptr [esp+34h+var_C]
0x49FEE8: mov     large fs:0, ecx
0x49FEEF: pop     ecx
0x49FEF0: pop     edi
0x49FEF1: pop     esi
0x49FEF2: pop     ebp
0x49FEF3: pop     ebx
0x49FEF4: add     esp, 20h
0x49FEF7: retn    8
