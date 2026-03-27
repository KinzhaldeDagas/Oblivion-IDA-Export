0x4C90A0: push    ebp
0x4C90A1: mov     ebp, esp
0x4C90A3: sub     esp, 8
0x4C90A6: mov     eax, ds:0B30AACh
0x4C90AB: xor     eax, ebp
0x4C90AD: mov     [ebp+var_4], eax
0x4C90B0: push    ebx
0x4C90B1: push    esi
0x4C90B2: mov     esi, [ebp+a1]
0x4C90B5: mov     ebx, ecx
0x4C90B7: push    edi
0x4C90B8: mov     ecx, esi
0x4C90BA: call    TESFile_GetRecordType
0x4C90BF: cmp     al, 0Eh
0x4C90C1: jz      short loc_4C90CA
0x4C90C3: xor     al, al
0x4C90C5: jmp     loc_4C91A6
0x4C90CA: push    ebx
0x4C90CB: mov     ecx, esi
0x4C90CD: call    TESFile_InitializeFormFromRecord
0x4C90D2: mov     ecx, esi
0x4C90D4: call    TESFile_GetChunkType
0x4C90D9: cmp     eax, 4D414E48h
0x4C90DE: jg      short loc_4C9150
0x4C90E0: jz      short loc_4C9148
0x4C90E2: cmp     eax, 44494445h
0x4C90E7: jz      short loc_4C911F
0x4C90E9: cmp     eax, 4C444F4Dh
0x4C90EE: jz      short loc_4C915E
0x4C90F0: cmp     eax, 4D414E47h
0x4C90F5: jnz     loc_4C918C
0x4C90FB: lea     eax, [ebp+var_8]
0x4C90FE: push    eax
0x4C90FF: mov     ecx, esi
0x4C9101: mov     [ebp+var_8], 0
0x4C9108: call    TESFile_GetChunkData4
0x4C910D: mov     eax, [ebp+var_8]
0x4C9110: test    eax, eax
0x4C9112: jz      short loc_4C918C
0x4C9114: push    eax
0x4C9115: lea     ecx, [ebx+2Ch]
0x4C9118: call    BSSimpleList_PushBack
0x4C911D: jmp     short loc_4C918C
0x4C911F: mov     eax, [esi+254h]
0x4C9125: call    __alloca?
0x4C912A: mov     edi, esp
0x4C912C: push    200h; a4
0x4C9131: push    edi; Dst
0x4C9132: mov     ecx, esi; a1
0x4C9134: call    TESFile_GetChunkData
0x4C9139: mov     edx, [ebx]
0x4C913B: mov     eax, [edx+0D8h]
0x4C9141: push    edi
0x4C9142: mov     ecx, ebx
0x4C9144: call    eax
0x4C9146: jmp     short loc_4C918C
0x4C9148: push    3
0x4C914A: lea     ecx, [ebx+28h]
0x4C914D: push    ecx
0x4C914E: jmp     short loc_4C9185
0x4C9150: cmp     eax, 4D414E53h
0x4C9155: jz      short loc_4C917F
0x4C9157: cmp     eax, 4E4F4349h
0x4C915C: jnz     short loc_4C918C
0x4C915E: test    ebx, ebx
0x4C9160: jz      short loc_4C9171
0x4C9162: lea     eax, [ebx+18h]
0x4C9165: push    esi
0x4C9166: push    eax
0x4C9167: call    TESTexture_Load
0x4C916C: add     esp, 8
0x4C916F: jmp     short loc_4C918C
0x4C9171: xor     eax, eax
0x4C9173: push    esi
0x4C9174: push    eax
0x4C9175: call    TESTexture_Load
0x4C917A: add     esp, 8
0x4C917D: jmp     short loc_4C918C
0x4C917F: push    1; a4
0x4C9181: lea     edx, [ebx+2Bh]
0x4C9184: push    edx; Dst
0x4C9185: mov     ecx, esi; a1
0x4C9187: call    TESFile_GetChunkData
0x4C918C: mov     ecx, esi
0x4C918E: call    TESFile_GetNextChunk
0x4C9193: test    al, al
0x4C9195: jnz     loc_4C90D2
0x4C919B: push    0; a2
0x4C919D: mov     ecx, ebx; this
0x4C919F: call    TESForm_SetIsLinked
0x4C91A4: mov     al, 1
0x4C91A6: lea     esp, [ebp-14h]
0x4C91A9: pop     edi
0x4C91AA: pop     esi
0x4C91AB: pop     ebx
0x4C91AC: mov     ecx, [ebp+var_4]
0x4C91AF: xor     ecx, ebp
0x4C91B1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4C91B6: mov     esp, ebp
0x4C91B8: pop     ebp
0x4C91B9: retn    4
