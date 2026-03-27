0x701840: push    ebx
0x701841: push    ebp
0x701842: mov     ebp, [esp+8+arg_0]
0x701846: push    esi
0x701847: push    edi
0x701848: lea     eax, [esp+10h+arg_0]
0x70184C: mov     esi, ecx
0x70184E: push    eax
0x70184F: mov     ecx, ebp
0x701851: call    sub_405760
0x701856: mov     ecx, [eax]
0x701858: mov     eax, [esp+10h+arg_0]
0x70185C: test    eax, eax
0x70185E: mov     ebx, ds:0A2807Ch
0x701864: mov     [esi+0Ch], ecx
0x701867: jz      short loc_701883
0x701869: mov     edi, eax
0x70186B: add     eax, 4
0x70186E: push    eax; lpAddend
0x70186F: call    ebx ; InterlockedDecrement
0x701871: test    eax, eax
0x701873: jnz     short loc_701883
0x701875: test    edi, edi
0x701877: jz      short loc_701883
0x701879: mov     edx, [edi]
0x70187B: mov     eax, [edx]
0x70187D: push    1
0x70187F: mov     ecx, edi
0x701881: call    eax
0x701883: lea     ecx, [esp+10h+arg_0]
0x701887: push    ecx
0x701888: mov     ecx, ebp
0x70188A: call    sub_7016D0
0x70188F: mov     edx, [eax]
0x701891: mov     eax, [esp+10h+arg_0]
0x701895: test    eax, eax
0x701897: mov     [esi+10h], edx
0x70189A: jz      short loc_7018B6
0x70189C: mov     edi, eax
0x70189E: add     eax, 4
0x7018A1: push    eax; lpAddend
0x7018A2: call    ebx ; InterlockedDecrement
0x7018A4: test    eax, eax
0x7018A6: jnz     short loc_7018B6
0x7018A8: test    edi, edi
0x7018AA: jz      short loc_7018B6
0x7018AC: mov     eax, [edi]
0x7018AE: mov     edx, [eax]
0x7018B0: push    1
0x7018B2: mov     ecx, edi
0x7018B4: call    edx
0x7018B6: mov     eax, 1
0x7018BB: cmp     [esi+200h], eax
0x7018C1: jz      short loc_7018CB
0x7018C3: cmp     [esi+204h], eax
0x7018C9: jnz     short loc_7018E0
0x7018CB: cmp     [esi+20Ch], al
0x7018D1: jnz     short loc_7018E0
0x7018D3: mov     eax, [esi]
0x7018D5: mov     edx, [eax+160h]
0x7018DB: push    ebp
0x7018DC: mov     ecx, esi
0x7018DE: call    edx
0x7018E0: pop     edi
0x7018E1: pop     esi
0x7018E2: pop     ebp
0x7018E3: pop     ebx
0x7018E4: retn    4
