0x529920: push    esi
0x529921: push    edi
0x529922: mov     edi, ecx
0x529924: call    TESForm_InitializeFormRecord
0x529929: lea     ecx, [edi+18h]
0x52992C: call    TESScriptableForm_Save
0x529931: lea     ecx, [edi+30h]
0x529934: call    TESFullName_Save
0x529939: push    4E4F4349h
0x52993E: lea     ecx, [edi+24h]
0x529941: call    TESTexture_Save
0x529946: push    2; Size
0x529948: lea     eax, [edi+3Ch]
0x52994B: push    eax; Src
0x52994C: mov     ecx, edi; this
0x52994E: call    TESForm_SaveGenericComponents
0x529953: lea     ecx, [edi+50h]
0x529956: test    ecx, ecx
0x529958: jz      short loc_52995F
0x52995A: call    sub_56A450
0x52995F: lea     esi, [edi+40h]
0x529962: test    esi, esi
0x529964: jz      short loc_52997F
0x529966: cmp     dword ptr [esi+4], 0
0x52996A: jnz     short loc_529971
0x52996C: cmp     dword ptr [esi], 0
0x52996F: jz      short loc_52997F
0x529971: mov     ecx, [esi]; void *
0x529973: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x529978: mov     esi, [esi+4]
0x52997B: test    esi, esi
0x52997D: jnz     short loc_529966
0x52997F: lea     esi, [edi+48h]
0x529982: test    esi, esi
0x529984: jz      short loc_52999F
0x529986: cmp     dword ptr [esi+4], 0
0x52998A: jnz     short loc_529991
0x52998C: cmp     dword ptr [esi], 0
0x52998F: jz      short loc_52999F
0x529991: mov     ecx, [esi]; void *
0x529993: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x529998: mov     esi, [esi+4]
0x52999B: test    esi, esi
0x52999D: jnz     short loc_529986
0x52999F: mov     ecx, edi
0x5299A1: pop     edi
0x5299A2: pop     esi
0x5299A3: jmp     TESForm_FinalizeFormRecord
