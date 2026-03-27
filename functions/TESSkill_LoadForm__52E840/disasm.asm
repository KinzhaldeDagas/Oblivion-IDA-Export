0x52E840: push    ebp
0x52E841: mov     ebp, esp
0x52E843: push    ecx
0x52E844: mov     eax, ds:0B30AACh
0x52E849: xor     eax, ebp
0x52E84B: mov     [ebp+var_4], eax
0x52E84E: push    ebx
0x52E84F: push    esi
0x52E850: push    edi
0x52E851: mov     edi, [ebp+a2]
0x52E854: mov     esi, ecx
0x52E856: mov     ecx, edi
0x52E858: call    TESFile_GetRecordType
0x52E85D: cmp     eax, 0Bh
0x52E860: jz      short loc_52E869
0x52E862: xor     al, al
0x52E864: jmp     loc_52E96C
0x52E869: push    esi
0x52E86A: mov     ecx, edi
0x52E86C: call    TESFile_InitializeFormFromRecord
0x52E871: mov     ecx, edi
0x52E873: call    TESFile_GetChunkType
0x52E878: test    eax, eax
0x52E87A: jz      loc_52E96A
0x52E880: cmp     eax, 4D414E45h
0x52E885: jg      loc_52E90E
0x52E88B: jz      short loc_52E907
0x52E88D: cmp     eax, 44494445h
0x52E892: jg      short loc_52E8FB
0x52E894: jz      short loc_52E8D2
0x52E896: cmp     eax, 41544144h
0x52E89B: jz      short loc_52E8BF
0x52E89D: cmp     eax, 43534544h
0x52E8A2: jnz     loc_52E950
0x52E8A8: test    esi, esi
0x52E8AA: jz      short loc_52E8B6
0x52E8AC: lea     eax, [esi+18h]
0x52E8AF: push    edi
0x52E8B0: push    eax
0x52E8B1: jmp     loc_52E948
0x52E8B6: xor     eax, eax
0x52E8B8: push    edi
0x52E8B9: push    eax
0x52E8BA: jmp     loc_52E948
0x52E8BF: push    14h; a4
0x52E8C1: lea     eax, [esi+2Ch]
0x52E8C4: push    eax; Dst
0x52E8C5: push    edi; a2
0x52E8C6: mov     ecx, esi; this
0x52E8C8: call    TESForm_LoadGenericComponents
0x52E8CD: jmp     loc_52E950
0x52E8D2: mov     eax, [edi+254h]
0x52E8D8: call    __alloca?
0x52E8DD: mov     ebx, esp
0x52E8DF: push    200h; a4
0x52E8E4: push    ebx; Dst
0x52E8E5: mov     ecx, edi; a1
0x52E8E7: call    TESFile_GetChunkData
0x52E8EC: mov     edx, [esi]
0x52E8EE: mov     eax, [edx+0D8h]
0x52E8F4: push    ebx
0x52E8F5: mov     ecx, esi
0x52E8F7: call    eax
0x52E8F9: jmp     short loc_52E950
0x52E8FB: cmp     eax, 4D414E41h
0x52E900: jnz     short loc_52E950
0x52E902: lea     ecx, [esi+40h]
0x52E905: jmp     short loc_52E946
0x52E907: push    edi
0x52E908: lea     edx, [esi+50h]
0x52E90B: push    edx
0x52E90C: jmp     short loc_52E948
0x52E90E: sub     eax, 4D414E4Ah
0x52E913: jz      short loc_52E943
0x52E915: sub     eax, 3
0x52E918: jz      short loc_52E93C
0x52E91A: sub     eax, 10DF4FCh
0x52E91F: jnz     short loc_52E950
0x52E921: test    esi, esi
0x52E923: jz      short loc_52E931
0x52E925: lea     eax, [esi+20h]
0x52E928: push    edi
0x52E929: push    eax
0x52E92A: call    TESTexture_Load
0x52E92F: jmp     short loc_52E94D
0x52E931: xor     eax, eax
0x52E933: push    edi
0x52E934: push    eax
0x52E935: call    TESTexture_Load
0x52E93A: jmp     short loc_52E94D
0x52E93C: push    edi
0x52E93D: lea     eax, [esi+58h]
0x52E940: push    eax
0x52E941: jmp     short loc_52E948
0x52E943: lea     ecx, [esi+48h]
0x52E946: push    edi
0x52E947: push    ecx
0x52E948: call    TESDescription_Load
0x52E94D: add     esp, 8
0x52E950: mov     ecx, edi
0x52E952: call    TESFile_GetNextChunk
0x52E957: test    al, al
0x52E959: jz      short loc_52E96A
0x52E95B: mov     ecx, edi
0x52E95D: call    TESFile_GetChunkType
0x52E962: test    eax, eax
0x52E964: jnz     loc_52E880
0x52E96A: mov     al, 1
0x52E96C: lea     esp, [ebp-10h]
0x52E96F: pop     edi
0x52E970: pop     esi
0x52E971: pop     ebx
0x52E972: mov     ecx, [ebp+var_4]
0x52E975: xor     ecx, ebp
0x52E977: call    @__security_check_cookie@4; __security_check_cookie(x)
0x52E97C: mov     esp, ebp
0x52E97E: pop     ebp
0x52E97F: retn    4
