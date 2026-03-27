0x416673: test    bl, bl
0x416675: jnz     BSSimpleList_InsertSorted___Done_
0x41667B: mov     eax, [esi]
0x41667D: test    eax, eax
0x41667F: jnz     short loc_416685
0x416681: mov     [esi], ebp
0x416683: jmp     short BSSimpleList_InsertSorted___NodeLoop_Break
0x416685: push    eax
0x416686: push    ebp
0x416687: call    [esp+8+arg_18]
0x41668B: add     esp, 8
0x41668E: test    eax, eax
0x416690: jg      short loc_4166CB
0x416692: test    edi, edi
0x416694: jnz     short loc_4166A2
0x416696: mov     ecx, [esp+arg_C]
0x41669A: push    ebp
0x41669B: call    BSSimpleList_PushFront
0x4166A0: jmp     short BSSimpleList_InsertSorted___NodeLoop_Break
0x4166A2: push    8; Size
0x4166A4: call    FormHeapAlloc
0x4166A9: add     esp, 4
0x4166AC: test    eax, eax
0x4166AE: jz      short loc_4166C1
0x4166B0: mov     [eax], ebp
0x4166B2: mov     dword ptr [eax+4], 0
0x4166B9: mov     [edi+4], eax
0x4166BC: mov     [eax+4], esi
0x4166BF: jmp     short BSSimpleList_InsertSorted___NodeLoop_Break
0x4166C1: xor     eax, eax
0x4166C3: mov     [edi+4], eax
0x4166C6: mov     [eax+4], esi
0x4166C9: jmp     short BSSimpleList_InsertSorted___NodeLoop_Break
0x4166CB: cmp     dword ptr [esi+4], 0
0x4166CF: jnz     short BSSimpleList_InsertSorted___NodeLoop_Next
0x4166D1: push    8; Size
0x4166D3: call    FormHeapAlloc
0x4166D8: add     esp, 4
0x4166DB: test    eax, eax
0x4166DD: jz      short loc_4166EA
0x4166DF: mov     [eax], ebp
0x4166E1: mov     dword ptr [eax+4], 0
0x4166E8: jmp     short loc_4166EC
0x4166EA: xor     eax, eax
0x4166EC: mov     [esi+4], eax
