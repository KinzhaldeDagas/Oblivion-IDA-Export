0x52A570: push    ebp
0x52A571: mov     ebp, esp
0x52A573: push    0FFFFFFFFh
0x52A575: push    offset SEH_52A570
0x52A57A: mov     eax, large fs:0
0x52A580: push    eax
0x52A581: sub     esp, 18h
0x52A584: mov     eax, ds:0B30AACh
0x52A589: xor     eax, ebp
0x52A58B: mov     [ebp+var_10], eax
0x52A58E: push    ebx
0x52A58F: push    esi
0x52A590: push    edi
0x52A591: push    eax
0x52A592: lea     eax, [ebp+var_C]
0x52A595: mov     large fs:0, eax
0x52A59B: mov     ebx, ecx
0x52A59D: mov     edi, [ebp+a2]
0x52A5A0: mov     ecx, edi
0x52A5A2: call    TESFile_GetRecordType
0x52A5A7: cmp     al, 3Bh ; ';'
0x52A5A9: jz      short loc_52A5B2
0x52A5AB: xor     al, al
0x52A5AD: jmp     loc_52A870
0x52A5B2: xor     esi, esi
0x52A5B4: push    ebx
0x52A5B5: mov     ecx, edi
0x52A5B7: mov     [ebp+var_1C], esi
0x52A5BA: mov     [ebp+var_18], esi
0x52A5BD: mov     [ebp+var_20], esi
0x52A5C0: call    TESFile_InitializeFormFromRecord
0x52A5C5: push    esi; a2
0x52A5C6: mov     ecx, ebx; this
0x52A5C8: call    TESForm_SetIsLinked
0x52A5CD: mov     ecx, edi
0x52A5CF: mov     [ebp+var_11], 0
0x52A5D3: call    TESFile_GetChunkType
0x52A5D8: xor     ecx, ecx
0x52A5DA: cmp     eax, ecx
0x52A5DC: jz      loc_52A86E
0x52A5E2: jmp     short loc_52A5F2
0x52A5E4: jmp     short loc_52A5F0
0x52A5E6: align 10h
0x52A5F0: xor     ecx, ecx
0x52A5F2: cmp     eax, 4D414E43h
0x52A5F7: jg      loc_52A72A
0x52A5FD: jz      loc_52A719
0x52A603: cmp     eax, 41545351h
0x52A608: jg      short loc_52A688
0x52A60A: jz      short loc_52A640
0x52A60C: cmp     eax, 41444353h
0x52A611: jz      loc_52A750
0x52A617: cmp     eax, 41445443h
0x52A61C: jz      loc_52A838
0x52A622: cmp     eax, 41544144h
0x52A627: jnz     loc_52A854
0x52A62D: push    2; a4
0x52A62F: lea     eax, [ebx+3Ch]
0x52A632: push    eax; Dst
0x52A633: push    edi; a2
0x52A634: mov     ecx, ebx; this
0x52A636: call    TESForm_LoadGenericComponents
0x52A63B: jmp     loc_52A854
0x52A640: push    14h; Size
0x52A642: mov     [ebp+var_1C], ecx
0x52A645: mov     [ebp+var_18], ecx
0x52A648: call    FormHeapAlloc
0x52A64D: add     esp, 4
0x52A650: mov     [ebp+var_20], eax
0x52A653: xor     esi, esi
0x52A655: cmp     eax, esi
0x52A657: mov     [ebp+var_4], esi
0x52A65A: jz      short loc_52A665
0x52A65C: mov     ecx, eax
0x52A65E: call    sub_52B310
0x52A663: mov     esi, eax
0x52A665: push    edi
0x52A666: mov     ecx, esi
0x52A668: mov     [ebp+var_4], 0FFFFFFFFh
0x52A66F: mov     [ebp+var_20], esi
0x52A672: call    sub_52B3F0
0x52A677: push    esi
0x52A678: lea     ecx, [ebx+48h]
0x52A67B: call    BSSimpleList_PushBack
0x52A680: mov     esi, [ebp+var_18]
0x52A683: jmp     loc_52A854
0x52A688: cmp     eax, 44494445h
0x52A68D: jz      short loc_52A6EA
0x52A68F: cmp     eax, 49524353h
0x52A694: jz      short loc_52A6C8
0x52A696: cmp     eax, 4C4C5546h
0x52A69B: jnz     loc_52A854
0x52A6A1: cmp     ebx, ecx
0x52A6A3: jz      short loc_52A6B7
0x52A6A5: lea     eax, [ebx+30h]
0x52A6A8: push    edi
0x52A6A9: push    eax
0x52A6AA: call    TESFullname_Load
0x52A6AF: add     esp, 8
0x52A6B2: jmp     loc_52A854
0x52A6B7: xor     eax, eax
0x52A6B9: push    edi
0x52A6BA: push    eax
0x52A6BB: call    TESFullname_Load
0x52A6C0: add     esp, 8
0x52A6C3: jmp     loc_52A854
0x52A6C8: mov     [ebp+var_24], ecx
0x52A6CB: lea     ecx, [ebp+var_24]
0x52A6CE: push    ecx
0x52A6CF: mov     ecx, edi
0x52A6D1: call    TESFile_GetChunkData4
0x52A6D6: mov     edx, [ebp+var_24]
0x52A6D9: push    ebx
0x52A6DA: lea     ecx, [ebx+18h]
0x52A6DD: mov     [ebx+1Ch], edx
0x52A6E0: call    TESScriptableForm_Link
0x52A6E5: jmp     loc_52A854
0x52A6EA: mov     eax, [edi+254h]
0x52A6F0: call    __alloca?
0x52A6F5: mov     esi, esp
0x52A6F7: push    200h; a4
0x52A6FC: push    esi; Dst
0x52A6FD: mov     ecx, edi; a1
0x52A6FF: call    TESFile_GetChunkData
0x52A704: mov     eax, [ebx]
0x52A706: mov     edx, [eax+0D8h]
0x52A70C: push    esi
0x52A70D: mov     ecx, ebx
0x52A70F: call    edx
0x52A711: mov     esi, [ebp+var_18]
0x52A714: jmp     loc_52A854
0x52A719: cmp     esi, ecx
0x52A71B: jz      loc_52A854
0x52A721: mov     byte ptr [esi+61h], 1
0x52A725: jmp     loc_52A854
0x52A72A: cmp     eax, 54445351h
0x52A72F: jg      loc_52A7E5
0x52A735: jz      short loc_52A78C
0x52A737: cmp     eax, 4E4F4349h
0x52A73C: jz      short loc_52A765
0x52A73E: cmp     eax, 4F524353h
0x52A743: jz      short loc_52A750
0x52A745: cmp     eax, 52484353h
0x52A74A: jnz     loc_52A854
0x52A750: cmp     esi, ecx
0x52A752: jz      loc_52A854
0x52A758: push    edi
0x52A759: mov     ecx, esi
0x52A75B: call    sub_52B1F0
0x52A760: jmp     loc_52A854
0x52A765: cmp     ebx, ecx
0x52A767: jz      short loc_52A77B
0x52A769: lea     eax, [ebx+24h]
0x52A76C: push    edi
0x52A76D: push    eax
0x52A76E: call    TESTexture_Load
0x52A773: add     esp, 8
0x52A776: jmp     loc_52A854
0x52A77B: xor     eax, eax
0x52A77D: push    edi
0x52A77E: push    eax
0x52A77F: call    TESTexture_Load
0x52A784: add     esp, 8
0x52A787: jmp     loc_52A854
0x52A78C: cmp     [ebp+var_1C], ecx
0x52A78F: jz      loc_52A854
0x52A795: push    6Ch ; 'l'; Size
0x52A797: call    FormHeapAlloc
0x52A79C: add     esp, 4
0x52A79F: mov     [ebp+var_18], eax
0x52A7A2: test    eax, eax
0x52A7A4: mov     [ebp+var_4], 2
0x52A7AB: jz      short loc_52A7B8
0x52A7AD: mov     ecx, eax
0x52A7AF: call    sub_52ACC0
0x52A7B4: mov     esi, eax
0x52A7B6: jmp     short loc_52A7BA
0x52A7B8: xor     esi, esi
0x52A7BA: push    edi
0x52A7BB: mov     ecx, esi
0x52A7BD: mov     [ebp+var_4], 0FFFFFFFFh
0x52A7C4: mov     [ebp+var_18], esi
0x52A7C7: call    sub_52B1F0
0x52A7CC: mov     al, [ebp+var_11]
0x52A7CF: mov     ecx, [ebp+var_1C]
0x52A7D2: mov     [esi+60h], al
0x52A7D5: add     al, 1
0x52A7D7: push    esi
0x52A7D8: add     ecx, 4
0x52A7DB: mov     [ebp+var_11], al
0x52A7DE: call    BSSimpleList_PushBack
0x52A7E3: jmp     short loc_52A854
0x52A7E5: cmp     eax, 54445443h
0x52A7EA: jz      short loc_52A838
0x52A7EC: cmp     eax, 58444E49h
0x52A7F1: jnz     short loc_52A854
0x52A7F3: push    0Ch; Size
0x52A7F5: call    FormHeapAlloc
0x52A7FA: add     esp, 4
0x52A7FD: mov     [ebp+var_1C], eax
0x52A800: test    eax, eax
0x52A802: mov     [ebp+var_4], 1
0x52A809: jz      short loc_52A816
0x52A80B: mov     ecx, eax
0x52A80D: call    sub_52AC20
0x52A812: mov     esi, eax
0x52A814: jmp     short loc_52A818
0x52A816: xor     esi, esi
0x52A818: push    edi
0x52A819: mov     ecx, esi
0x52A81B: mov     [ebp+var_4], 0FFFFFFFFh
0x52A822: mov     [ebp+var_1C], esi
0x52A825: call    sub_52AC60
0x52A82A: push    esi
0x52A82B: lea     ecx, [ebx+40h]
0x52A82E: call    BSSimpleList_PushBack
0x52A833: mov     esi, [ebp+var_18]
0x52A836: jmp     short loc_52A854
0x52A838: cmp     esi, ecx
0x52A83A: jz      short loc_52A841
0x52A83C: lea     ecx, [esi+4]
0x52A83F: jmp     short loc_52A84E
0x52A841: mov     eax, [ebp+var_20]
0x52A844: cmp     eax, ecx
0x52A846: lea     ecx, [eax+4]
0x52A849: jnz     short loc_52A84E
0x52A84B: lea     ecx, [ebx+50h]
0x52A84E: push    edi
0x52A84F: call    ConditionList_LoadCondition
0x52A854: mov     ecx, edi
0x52A856: call    TESFile_GetNextChunk
0x52A85B: test    al, al
0x52A85D: jz      short loc_52A86E
0x52A85F: mov     ecx, edi
0x52A861: call    TESFile_GetChunkType
0x52A866: test    eax, eax
0x52A868: jnz     loc_52A5F0
0x52A86E: mov     al, 1
0x52A870: lea     esp, [ebp-34h]
0x52A873: mov     ecx, [ebp+var_C]
0x52A876: mov     large fs:0, ecx
0x52A87D: pop     ecx
0x52A87E: pop     edi
0x52A87F: pop     esi
0x52A880: pop     ebx
0x52A881: mov     ecx, [ebp+var_10]
0x52A884: xor     ecx, ebp
0x52A886: call    @__security_check_cookie@4; __security_check_cookie(x)
0x52A88B: mov     esp, ebp
0x52A88D: pop     ebp
0x52A88E: retn    4
