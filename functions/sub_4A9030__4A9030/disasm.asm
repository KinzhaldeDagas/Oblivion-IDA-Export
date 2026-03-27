0x4A9030: push    ebp
0x4A9031: mov     ebp, esp
0x4A9033: sub     esp, 8
0x4A9036: mov     eax, ds:0B30AACh
0x4A903B: xor     eax, ebp
0x4A903D: mov     [ebp+var_4], eax
0x4A9040: push    ebx
0x4A9041: mov     ebx, [ebp+a2]
0x4A9044: push    esi
0x4A9045: mov     esi, ecx
0x4A9047: push    edi
0x4A9048: mov     ecx, ebx
0x4A904A: call    TESFile_GetRecordType
0x4A904F: cmp     al, 22h ; '"'
0x4A9051: jz      short loc_4A905A
0x4A9053: xor     al, al
0x4A9055: jmp     loc_4A91B2
0x4A905A: push    esi
0x4A905B: mov     ecx, ebx
0x4A905D: call    TESFile_InitializeFormFromRecord
0x4A9062: xor     edi, edi
0x4A9064: push    edi; a2
0x4A9065: mov     ecx, esi; this
0x4A9067: call    TESForm_SetIsLinked
0x4A906C: mov     ecx, ebx
0x4A906E: call    TESFile_GetChunkType
0x4A9073: cmp     eax, edi
0x4A9075: jz      loc_4A91B0
0x4A907B: jmp     short loc_4A9080
0x4A907D: align 10h
0x4A9080: cmp     eax, 4C4C5546h
0x4A9085: jg      loc_4A911C
0x4A908B: jz      short loc_4A90FE
0x4A908D: cmp     eax, 44494445h
0x4A9092: jg      short loc_4A90EE
0x4A9094: jz      short loc_4A90C0
0x4A9096: cmp     eax, 41544144h
0x4A909B: jz      short loc_4A90AD
0x4A909D: cmp     eax, 42444F4Dh
0x4A90A2: jz      loc_4A9181
0x4A90A8: jmp     loc_4A9196
0x4A90AD: push    8; a4
0x4A90AF: lea     eax, [esi+7Ch]
0x4A90B2: push    eax; Dst
0x4A90B3: push    ebx; a2
0x4A90B4: mov     ecx, esi; this
0x4A90B6: call    TESForm_LoadGenericComponents
0x4A90BB: jmp     loc_4A9196
0x4A90C0: mov     eax, [ebx+254h]
0x4A90C6: call    __alloca?
0x4A90CB: mov     edi, esp
0x4A90CD: push    200h; a4
0x4A90D2: push    edi; Dst
0x4A90D3: mov     ecx, ebx; a1
0x4A90D5: call    TESFile_GetChunkData
0x4A90DA: mov     edx, [esi]
0x4A90DC: mov     eax, [edx+0D8h]
0x4A90E2: push    edi
0x4A90E3: mov     ecx, esi
0x4A90E5: call    eax
0x4A90E7: xor     edi, edi
0x4A90E9: jmp     loc_4A9196
0x4A90EE: cmp     eax, 4C444F4Dh
0x4A90F3: jz      loc_4A9181
0x4A90F9: jmp     loc_4A9196
0x4A90FE: cmp     esi, edi
0x4A9100: jz      short loc_4A9111
0x4A9102: lea     eax, [esi+24h]
0x4A9105: push    ebx
0x4A9106: push    eax
0x4A9107: call    TESFullname_Load
0x4A910C: jmp     loc_4A9193
0x4A9111: xor     eax, eax
0x4A9113: push    ebx
0x4A9114: push    eax
0x4A9115: call    TESFullname_Load
0x4A911A: jmp     short loc_4A9193
0x4A911C: cmp     eax, 4E4F4349h
0x4A9121: jg      short loc_4A917A
0x4A9123: jz      short loc_4A915F
0x4A9125: sub     eax, 4D414E41h
0x4A912A: jz      short loc_4A9147
0x4A912C: sub     eax, 4
0x4A912F: jnz     short loc_4A9196
0x4A9131: lea     ecx, [ebp+var_8]
0x4A9134: push    ecx
0x4A9135: mov     ecx, ebx
0x4A9137: mov     [ebp+var_8], edi
0x4A913A: call    TESFile_GetChunkData4
0x4A913F: mov     edx, [ebp+var_8]
0x4A9142: mov     [esi+58h], edx
0x4A9145: jmp     short loc_4A9196
0x4A9147: lea     eax, [ebp+var_8]
0x4A914A: push    eax
0x4A914B: mov     ecx, ebx
0x4A914D: mov     [ebp+var_8], edi
0x4A9150: call    TESFile_GetChunkData2
0x4A9155: mov     cx, word ptr [ebp+var_8]
0x4A9159: mov     [esi+5Ch], cx
0x4A915D: jmp     short loc_4A9196
0x4A915F: cmp     esi, edi
0x4A9161: jz      short loc_4A916F
0x4A9163: lea     eax, [esi+48h]
0x4A9166: push    ebx
0x4A9167: push    eax
0x4A9168: call    TESTexture_Load
0x4A916D: jmp     short loc_4A9193
0x4A916F: xor     eax, eax
0x4A9171: push    ebx
0x4A9172: push    eax
0x4A9173: call    TESTexture_Load
0x4A9178: jmp     short loc_4A9193
0x4A917A: cmp     eax, 54444F4Dh
0x4A917F: jnz     short loc_4A9196
0x4A9181: cmp     esi, edi
0x4A9183: jz      short loc_4A918A
0x4A9185: lea     eax, [esi+30h]
0x4A9188: jmp     short loc_4A918C
0x4A918A: xor     eax, eax
0x4A918C: push    ebx
0x4A918D: push    eax
0x4A918E: call    TESModel_Load
0x4A9193: add     esp, 8
0x4A9196: mov     ecx, ebx
0x4A9198: call    TESFile_GetNextChunk
0x4A919D: test    al, al
0x4A919F: jz      short loc_4A91B0
0x4A91A1: mov     ecx, ebx
0x4A91A3: call    TESFile_GetChunkType
0x4A91A8: cmp     eax, edi
0x4A91AA: jnz     loc_4A9080
0x4A91B0: mov     al, 1
0x4A91B2: lea     esp, [ebp-14h]
0x4A91B5: pop     edi
0x4A91B6: pop     esi
0x4A91B7: pop     ebx
0x4A91B8: mov     ecx, [ebp+var_4]
0x4A91BB: xor     ecx, ebp
0x4A91BD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A91C2: mov     esp, ebp
0x4A91C4: pop     ebp
0x4A91C5: retn    4
