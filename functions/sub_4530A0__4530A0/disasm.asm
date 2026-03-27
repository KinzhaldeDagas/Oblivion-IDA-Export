0x4530A0: sub     esp, 0Ch
0x4530A3: push    ebx
0x4530A4: mov     ebx, ecx
0x4530A6: mov     edx, [ebx]
0x4530A8: mov     ecx, [edx+4]
0x4530AB: push    esi
0x4530AC: xor     eax, eax
0x4530AE: test    ecx, ecx
0x4530B0: push    edi
0x4530B1: jbe     short loc_4530D3
0x4530B3: mov     esi, [edx+8]
0x4530B6: mov     edx, esi
0x4530B8: jmp     short loc_4530C0
0x4530BA: align 10h
0x4530C0: cmp     dword ptr [edx], 0
0x4530C3: jnz     loc_4531A0
0x4530C9: add     eax, 1
0x4530CC: add     edx, 4
0x4530CF: cmp     eax, ecx
0x4530D1: jb      short loc_4530C0
0x4530D3: xor     eax, eax
0x4530D5: test    eax, eax
0x4530D7: mov     [esp+18h+var_8], eax
0x4530DB: jz      short loc_45314C
0x4530DD: lea     ecx, [ecx+0]
0x4530E0: lea     eax, [esp+18h+var_4]
0x4530E4: push    eax
0x4530E5: lea     ecx, [esp+1Ch+var_9]
0x4530E9: push    ecx
0x4530EA: mov     ecx, [ebx]
0x4530EC: lea     edx, [esp+20h+var_8]
0x4530F0: push    edx
0x4530F1: call    sub_452800
0x4530F6: mov     esi, [esp+18h+var_4]
0x4530FA: test    esi, esi
0x4530FC: mov     edi, esi
0x4530FE: jz      short loc_453145
0x453100: mov     eax, [edi]
0x453102: test    eax, eax
0x453104: mov     edi, [edi+4]
0x453107: jz      short loc_453112
0x453109: push    eax
0x45310A: call    FormHeapFree
0x45310F: add     esp, 4
0x453112: test    edi, edi
0x453114: jnz     short loc_453100
0x453116: cmp     [esi+4], edi
0x453119: jz      short loc_453136
0x45311B: jmp     short loc_453120
0x45311D: align 10h
0x453120: mov     eax, [esi+4]
0x453123: mov     edi, [eax+4]
0x453126: push    eax
0x453127: call    FormHeapFree
0x45312C: add     esp, 4
0x45312F: test    edi, edi
0x453131: mov     [esi+4], edi
0x453134: jnz     short loc_453120
0x453136: push    esi
0x453137: mov     dword ptr [esi], 0
0x45313D: call    FormHeapFree
0x453142: add     esp, 4
0x453145: cmp     [esp+18h+var_8], 0
0x45314A: jnz     short loc_4530E0
0x45314C: mov     ecx, [ebx]
0x45314E: test    ecx, ecx
0x453150: jz      short loc_45315A
0x453152: mov     eax, [ecx]
0x453154: mov     edx, [eax]
0x453156: push    1
0x453158: call    edx
0x45315A: mov     esi, [ebx+4]
0x45315D: test    esi, esi
0x45315F: jz      short loc_453199
0x453161: mov     edi, [esi]
0x453163: test    edi, edi
0x453165: jz      short loc_45317E
0x453167: mov     eax, [edi+4]
0x45316A: push    eax; void *
0x45316B: mov     ecx, offset FormHeap
0x453170: call    MemoryHeap_Free_checked
0x453175: push    edi
0x453176: call    FormHeapFree
0x45317B: add     esp, 4
0x45317E: mov     esi, [esi+4]
0x453181: test    esi, esi
0x453183: jnz     short loc_453161
0x453185: mov     ecx, [ebx+4]
0x453188: call    BSSimpleList_Clear
0x45318D: mov     ecx, [ebx+4]
0x453190: push    ecx
0x453191: call    FormHeapFree
0x453196: add     esp, 4
0x453199: pop     edi
0x45319A: pop     esi
0x45319B: pop     ebx
0x45319C: add     esp, 0Ch
0x45319F: retn
0x4531A0: mov     eax, [esi+eax*4]
0x4531A3: jmp     loc_4530D5
