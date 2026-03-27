0x65E860: sub     esp, 8
0x65E863: push    ebp
0x65E864: push    esi
0x65E865: mov     ebp, ecx
0x65E867: call    TESObjectREFR_GetWorldSpace
0x65E86C: mov     esi, eax
0x65E86E: cmp     [ebp+744h], esi
0x65E874: mov     [esp+10h+var_4], esi
0x65E878: jz      short loc_65E8F7
0x65E87A: mov     ecx, ebp
0x65E87C: call    sub_65E800
0x65E881: test    esi, esi
0x65E883: jz      short loc_65E8F1
0x65E885: push    ebx
0x65E886: mov     ecx, esi
0x65E888: call    sub_4F0620
0x65E88D: mov     ebx, eax
0x65E88F: test    ebx, ebx
0x65E891: mov     [esp+14h+var_8], ebx
0x65E895: jz      short loc_65E8E0
0x65E897: push    edi
0x65E898: mov     edi, [ebx]
0x65E89A: test    edi, edi
0x65E89C: jz      short loc_65E8D0
0x65E89E: push    8; Size
0x65E8A0: call    FormHeapAlloc
0x65E8A5: add     esp, 4
0x65E8A8: mov     ecx, edi
0x65E8AA: mov     esi, eax
0x65E8AC: call    sub_4D7730
0x65E8B1: test    eax, eax
0x65E8B3: mov     [esi], eax
0x65E8B5: mov     [esi+4], edi
0x65E8B8: push    esi
0x65E8B9: jz      short loc_65E8C8
0x65E8BB: lea     ecx, [ebp+73Ch]
0x65E8C1: call    BSSimpleList_PushFront
0x65E8C6: jmp     short loc_65E8D0
0x65E8C8: call    FormHeapFree
0x65E8CD: add     esp, 4
0x65E8D0: mov     ebx, [ebx+4]
0x65E8D3: test    ebx, ebx
0x65E8D5: jnz     short loc_65E898
0x65E8D7: mov     ebx, [esp+18h+var_8]
0x65E8DB: mov     esi, [esp+18h+var_4]
0x65E8DF: pop     edi
0x65E8E0: mov     ecx, ebx
0x65E8E2: call    BSSimpleList_Clear
0x65E8E7: push    ebx
0x65E8E8: call    FormHeapFree
0x65E8ED: add     esp, 4
0x65E8F0: pop     ebx
0x65E8F1: mov     [ebp+744h], esi
0x65E8F7: pop     esi
0x65E8F8: pop     ebp
0x65E8F9: add     esp, 8
0x65E8FC: retn
