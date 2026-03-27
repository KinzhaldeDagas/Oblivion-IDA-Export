0x401830: push    ebx
0x401831: push    esi
0x401832: push    edi; lpCriticalSection
0x401833: mov     edi, [esp+0Ch+Size]
0x401837: mov     esi, ecx
0x401839: mov     eax, [esi]
0x40183B: mov     edx, [eax+8]
0x40183E: push    edi
0x40183F: call    edx
0x401841: mov     ebx, eax
0x401843: test    ebx, ebx
0x401845: jnz     loc_4018D2
0x40184B: cmp     [esi+164h], eax
0x401851: jz      short loc_4018CA
0x401853: cmp     byte ptr [esp+0Ch+arg_8], al
0x401857: jz      short loc_4018CA
0x401859: mov     ebx, HeapCriticalSection.RecursionCount
0x40185F: mov     ecx, offset HeapCriticalSection; lpCriticalSection
0x401864: mov     HeapCriticalSection.RecursionCount, 1
0x40186E: call    NiLeaveCriticalSection_0
0x401873: mov     eax, dword_B32B04
0x401878: push    edi
0x401879: mov     dword_B0201C, eax
0x40187E: call    sub_4014A0
0x401883: add     esp, 4
0x401886: push    1; int
0x401888: push    edi; Size
0x401889: mov     ecx, esi
0x40188B: mov     byte ptr [esp+14h+arg_8], al
0x40188F: mov     dword_B0201C, 0FFFFFFFFh
0x401899: call    MemoryHeap_Allocate
0x40189E: mov     ecx, [esp+0Ch+arg_8]
0x4018A2: push    ecx
0x4018A3: mov     esi, eax
0x4018A5: call    sub_4011E0
0x4018AA: add     esp, 4
0x4018AD: push    offset unk_A2F830
0x4018B2: mov     ecx, offset HeapCriticalSection
0x4018B7: call    NiEnterCriticalSection
0x4018BC: pop     edi
0x4018BD: mov     eax, esi
0x4018BF: pop     esi
0x4018C0: mov     HeapCriticalSection.RecursionCount, ebx
0x4018C6: pop     ebx
0x4018C7: retn    0Ch
0x4018CA: pop     edi
0x4018CB: pop     esi
0x4018CC: xor     eax, eax
0x4018CE: pop     ebx
0x4018CF: retn    0Ch
0x4018D2: mov     edx, [esi]
0x4018D4: mov     eax, [edx]
0x4018D6: push    edi
0x4018D7: mov     ecx, esi
0x4018D9: call    eax
0x4018DB: pop     edi
0x4018DC: pop     esi
0x4018DD: mov     eax, ebx
0x4018DF: pop     ebx
0x4018E0: retn    0Ch
