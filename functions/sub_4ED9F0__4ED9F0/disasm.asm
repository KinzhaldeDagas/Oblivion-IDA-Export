0x4ED9F0: sub     esp, 0Ch
0x4ED9F3: push    esi
0x4ED9F4: mov     esi, ecx
0x4ED9F6: call    TESForm_InitializeFormRecord
0x4ED9FB: movzx   eax, word ptr [esi+28h]
0x4ED9FF: cmp     ax, 0FFFFh
0x4EDA03: jnz     short loc_4EDA1D
0x4EDA05: mov     eax, [esi+24h]
0x4EDA08: lea     edx, [eax+1]
0x4EDA0B: jmp     short loc_4EDA10
0x4EDA0D: align 10h
0x4EDA10: mov     cl, [eax]
0x4EDA12: add     eax, 1
0x4EDA15: test    cl, cl
0x4EDA17: jnz     short loc_4EDA10
0x4EDA19: sub     eax, edx
0x4EDA1B: jmp     short loc_4EDA20
0x4EDA1D: movzx   eax, ax
0x4EDA20: mov     ecx, [esi+24h]
0x4EDA23: test    ecx, ecx
0x4EDA25: jnz     short loc_4EDA2C
0x4EDA27: mov     ecx, offset EmptyString
0x4EDA2C: add     eax, 1
0x4EDA2F: push    eax
0x4EDA30: push    ecx
0x4EDA31: push    4D414E54h
0x4EDA36: call    j_TESForm_PutCurrentChunkData
0x4EDA3B: push    1; Size
0x4EDA3D: lea     eax, [esi+2Ch]
0x4EDA40: push    eax; Src
0x4EDA41: push    4D414E41h; int
0x4EDA46: call    TESForm_PutFormRecordChunkData
0x4EDA4B: push    1; Size
0x4EDA4D: lea     ecx, [esi+2Dh]
0x4EDA50: push    ecx; Src
0x4EDA51: push    4D414E46h; int
0x4EDA56: call    TESForm_PutFormRecordChunkData
0x4EDA5B: movzx   eax, word ptr [esi+34h]
0x4EDA5F: add     esp, 24h
0x4EDA62: cmp     ax, 0FFFFh
0x4EDA66: jnz     short loc_4EDA7D
0x4EDA68: mov     eax, [esi+30h]
0x4EDA6B: lea     edx, [eax+1]
0x4EDA6E: mov     edi, edi
0x4EDA70: mov     cl, [eax]
0x4EDA72: add     eax, 1
0x4EDA75: test    cl, cl
0x4EDA77: jnz     short loc_4EDA70
0x4EDA79: sub     eax, edx
0x4EDA7B: jmp     short loc_4EDA80
0x4EDA7D: movzx   eax, ax
0x4EDA80: mov     ecx, [esi+30h]
0x4EDA83: test    ecx, ecx
0x4EDA85: jnz     short loc_4EDA8C
0x4EDA87: mov     ecx, offset EmptyString
0x4EDA8C: add     eax, 1
0x4EDA8F: push    eax; Size
0x4EDA90: push    ecx; Src
0x4EDA91: push    4D414E4Dh; int
0x4EDA96: call    TESForm_PutFormRecordChunkData
0x4EDA9B: mov     eax, [esi+38h]
0x4EDA9E: add     esp, 0Ch
0x4EDAA1: test    eax, eax
0x4EDAA3: jz      short loc_4EDAB6
0x4EDAA5: mov     edx, [eax+0Ch]
0x4EDAA8: push    edx
0x4EDAA9: push    4D414E53h
0x4EDAAE: call    TESForm_PutCurrentChunkData4
0x4EDAB3: add     esp, 8
0x4EDAB6: push    64h ; 'd'; Size
0x4EDAB8: lea     eax, [esi+3Ch]
0x4EDABB: push    eax; Src
0x4EDABC: mov     ecx, esi; this
0x4EDABE: call    TESForm_SaveGenericComponents
0x4EDAC3: mov     eax, [esi+0A0h]
0x4EDAC9: test    eax, eax
0x4EDACB: jz      short loc_4EDAD6
0x4EDACD: mov     ecx, [eax+0Ch]
0x4EDAD0: mov     [esp+10h+Src], ecx
0x4EDAD4: jmp     short loc_4EDADE
0x4EDAD6: mov     [esp+10h+Src], 0
0x4EDADE: mov     eax, [esi+0A4h]
0x4EDAE4: test    eax, eax
0x4EDAE6: jz      short loc_4EDAF1
0x4EDAE8: mov     edx, [eax+0Ch]
0x4EDAEB: mov     [esp+10h+var_8], edx
0x4EDAEF: jmp     short loc_4EDAF9
0x4EDAF1: mov     [esp+10h+var_8], 0
0x4EDAF9: mov     eax, [esi+0A8h]
0x4EDAFF: test    eax, eax
0x4EDB01: jz      short loc_4EDB0C
0x4EDB03: mov     eax, [eax+0Ch]
0x4EDB06: mov     [esp+10h+var_4], eax
0x4EDB0A: jmp     short loc_4EDB14
0x4EDB0C: mov     [esp+10h+var_4], 0
0x4EDB14: push    0Ch; Size
0x4EDB16: lea     ecx, [esp+14h+Src]
0x4EDB1A: push    ecx; Src
0x4EDB1B: push    4D414E47h; int
0x4EDB20: call    TESForm_PutFormRecordChunkData
0x4EDB25: add     esp, 0Ch
0x4EDB28: mov     ecx, esi; this
0x4EDB2A: call    TESForm_FinalizeFormRecord
0x4EDB2F: pop     esi
0x4EDB30: add     esp, 0Ch
0x4EDB33: retn
