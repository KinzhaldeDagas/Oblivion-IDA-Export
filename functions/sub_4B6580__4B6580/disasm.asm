0x4B6580: push    esi
0x4B6581: mov     esi, ecx
0x4B6583: call    TESForm_InitializeFormRecord
0x4B6588: lea     ecx, [esi+34h]
0x4B658B: call    TESFullName_Save
0x4B6590: push    54444F4Dh
0x4B6595: push    42444F4Dh
0x4B659A: push    4C444F4Dh
0x4B659F: lea     ecx, [esi+40h]
0x4B65A2: call    TESModel_Save
0x4B65A7: lea     ecx, [esi+58h]
0x4B65AA: call    TESScriptableForm_Save
0x4B65AF: lea     ecx, [esi+24h]
0x4B65B2: call    TESContainer_SaveComponent
0x4B65B7: push    1; Size
0x4B65B9: lea     eax, [esi+78h]
0x4B65BC: push    eax; Src
0x4B65BD: mov     ecx, esi; this
0x4B65BF: call    TESForm_SaveGenericComponents
0x4B65C4: mov     eax, [esi+70h]
0x4B65C7: test    eax, eax
0x4B65C9: jz      short loc_4B65DC
0x4B65CB: mov     ecx, [eax+0Ch]
0x4B65CE: push    ecx
0x4B65CF: push    4D414E53h
0x4B65D4: call    TESForm_PutCurrentChunkData4
0x4B65D9: add     esp, 8
0x4B65DC: mov     eax, [esi+74h]
0x4B65DF: test    eax, eax
0x4B65E1: jz      short loc_4B65F4
0x4B65E3: mov     edx, [eax+0Ch]
0x4B65E6: push    edx
0x4B65E7: push    4D414E51h
0x4B65EC: call    TESForm_PutCurrentChunkData4
0x4B65F1: add     esp, 8
0x4B65F4: mov     ecx, esi
0x4B65F6: pop     esi
0x4B65F7: jmp     TESForm_FinalizeFormRecord
