0x566190: push    esi
0x566191: mov     esi, ecx
0x566193: push    edi
0x566194: mov     edi, [esi+24h]
0x566197: test    edi, edi
0x566199: jz      short loc_5661AB
0x56619B: mov     ecx, edi
0x56619D: call    TESPackage_LocationData_destr
0x5661A2: push    edi
0x5661A3: call    FormHeapFree
0x5661A8: add     esp, 4
0x5661AB: mov     edi, [esi+28h]
0x5661AE: test    edi, edi
0x5661B0: jz      short loc_5661C2
0x5661B2: mov     ecx, edi; void *
0x5661B4: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5661B9: push    edi
0x5661BA: call    FormHeapFree
0x5661BF: add     esp, 4
0x5661C2: lea     ecx, [esi+34h]
0x5661C5: call    sub_56A750
0x5661CA: pop     edi
0x5661CB: mov     ecx, esi
0x5661CD: pop     esi
0x5661CE: jmp     j_TESForm_ClearComponentReferences
