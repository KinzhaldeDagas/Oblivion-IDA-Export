0x52A520: push    esi
0x52A521: mov     esi, ecx
0x52A523: push    edi
0x52A524: lea     ecx, [esi+50h]
0x52A527: call    sub_56A750
0x52A52C: mov     ecx, esi
0x52A52E: call    sub_529760
0x52A533: mov     ecx, esi
0x52A535: call    sub_5297C0
0x52A53A: mov     edi, [esi+58h]
0x52A53D: test    edi, edi
0x52A53F: jz      short loc_52A558
0x52A541: mov     ecx, edi
0x52A543: call    ScriptEventList_destr??
0x52A548: push    edi
0x52A549: call    FormHeapFree
0x52A54E: add     esp, 4
0x52A551: mov     dword ptr [esi+58h], 0
0x52A558: pop     edi
0x52A559: mov     ecx, esi
0x52A55B: pop     esi
0x52A55C: jmp     j_TESForm_ClearComponentReferences
