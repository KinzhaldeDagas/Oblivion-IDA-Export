0x4AD010: push    esi
0x4AD011: push    edi
0x4AD012: mov     esi, ecx
0x4AD014: call    TESForm_InitializeFormRecord
0x4AD019: movzx   eax, word ptr [esi+100h]
0x4AD020: cmp     ax, 0FFFFh
0x4AD024: jnz     short loc_4AD03D
0x4AD026: mov     eax, [esi+0FCh]
0x4AD02C: lea     edx, [eax+1]
0x4AD02F: nop
0x4AD030: mov     cl, [eax]
0x4AD032: add     eax, 1
0x4AD035: test    cl, cl
0x4AD037: jnz     short loc_4AD030
0x4AD039: sub     eax, edx
0x4AD03B: jmp     short loc_4AD040
0x4AD03D: movzx   eax, ax
0x4AD040: test    eax, eax
0x4AD042: jnz     short loc_4AD099
0x4AD044: movzx   eax, word ptr [esi+100h]
0x4AD04B: cmp     ax, 0FFFFh
0x4AD04F: jnz     short loc_4AD06D
0x4AD051: mov     eax, [esi+0FCh]
0x4AD057: lea     edx, [eax+1]
0x4AD05A: lea     ebx, [ebx+0]
0x4AD060: mov     cl, [eax]
0x4AD062: add     eax, 1
0x4AD065: test    cl, cl
0x4AD067: jnz     short loc_4AD060
0x4AD069: sub     eax, edx
0x4AD06B: jmp     short loc_4AD070
0x4AD06D: movzx   eax, ax
0x4AD070: mov     ecx, [esi+0FCh]
0x4AD076: test    ecx, ecx
0x4AD078: lea     edi, [esi+0F8h]
0x4AD07E: jnz     short loc_4AD085
0x4AD080: mov     ecx, offset EmptyString
0x4AD085: add     eax, 1
0x4AD088: push    eax
0x4AD089: push    ecx
0x4AD08A: push    4E4F4349h
0x4AD08F: call    j_TESForm_PutCurrentChunkData
0x4AD094: add     esp, 0Ch
0x4AD097: jmp     short loc_4AD0AB
0x4AD099: lea     edi, [esi+0F8h]
0x4AD09F: push    4E4F4349h
0x4AD0A4: mov     ecx, edi
0x4AD0A6: call    TESTexture_Save
0x4AD0AB: movzx   eax, word ptr [esi+10Ch]
0x4AD0B2: cmp     ax, 0FFFFh
0x4AD0B6: jnz     short loc_4AD0CE
0x4AD0B8: mov     eax, [esi+108h]
0x4AD0BE: lea     edx, [eax+1]
0x4AD0C1: mov     cl, [eax]
0x4AD0C3: add     eax, 1
0x4AD0C6: test    cl, cl
0x4AD0C8: jnz     short loc_4AD0C1
0x4AD0CA: sub     eax, edx
0x4AD0CC: jmp     short loc_4AD0D1
0x4AD0CE: movzx   eax, ax
0x4AD0D1: test    eax, eax
0x4AD0D3: jnz     short loc_4AD120
0x4AD0D5: movzx   eax, word ptr [esi+100h]
0x4AD0DC: cmp     ax, 0FFFFh
0x4AD0E0: jnz     short loc_4AD0FD
0x4AD0E2: mov     eax, [esi+0FCh]
0x4AD0E8: lea     edx, [eax+1]
0x4AD0EB: jmp     short loc_4AD0F0
0x4AD0ED: align 10h
0x4AD0F0: mov     cl, [eax]
0x4AD0F2: add     eax, 1
0x4AD0F5: test    cl, cl
0x4AD0F7: jnz     short loc_4AD0F0
0x4AD0F9: sub     eax, edx
0x4AD0FB: jmp     short loc_4AD100
0x4AD0FD: movzx   eax, ax
0x4AD100: mov     ecx, [edi+4]
0x4AD103: test    ecx, ecx
0x4AD105: jnz     short loc_4AD10C
0x4AD107: mov     ecx, offset EmptyString
0x4AD10C: add     eax, 1
0x4AD10F: push    eax
0x4AD110: push    ecx
0x4AD111: push    324F4349h
0x4AD116: call    j_TESForm_PutCurrentChunkData
0x4AD11B: add     esp, 0Ch
0x4AD11E: jmp     short loc_4AD130
0x4AD120: push    324F4349h
0x4AD125: lea     ecx, [esi+104h]
0x4AD12B: call    TESTexture_Save
0x4AD130: push    0E0h ; 'à'; Size
0x4AD135: lea     eax, [esi+18h]
0x4AD138: push    eax; Src
0x4AD139: mov     ecx, esi; this
0x4AD13B: call    TESForm_SaveGenericComponents
0x4AD140: pop     edi
0x4AD141: mov     ecx, esi
0x4AD143: pop     esi
0x4AD144: jmp     TESForm_FinalizeFormRecord
