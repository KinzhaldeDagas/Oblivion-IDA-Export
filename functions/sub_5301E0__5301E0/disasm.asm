0x5301E0: push    ebp
0x5301E1: mov     ebp, esp
0x5301E3: sub     esp, 8
0x5301E6: mov     eax, ds:0B30AACh
0x5301EB: xor     eax, ebp
0x5301ED: mov     [ebp+var_4], eax
0x5301F0: push    ebx
0x5301F1: mov     ebx, [ebp+a1]
0x5301F4: push    esi
0x5301F5: push    edi
0x5301F6: mov     edi, ecx
0x5301F8: mov     ecx, ebx
0x5301FA: call    TESFile_GetRecordType
0x5301FF: cmp     al, 39h ; '9'
0x530201: jz      short loc_53020A
0x530203: xor     al, al
0x530205: jmp     loc_530323
0x53020A: push    edi
0x53020B: mov     ecx, ebx; this
0x53020D: call    TESFile_InitializeFormFromRecord
0x530212: mov     ecx, ebx
0x530214: call    TESFile_GetChunkType
0x530219: test    eax, eax
0x53021B: jz      loc_53031B
0x530221: cmp     eax, 49545351h
0x530226: jg      loc_5302D1
0x53022C: jz      short loc_53027E
0x53022E: cmp     eax, 41544144h
0x530233: jz      short loc_53026C
0x530235: cmp     eax, 44494445h
0x53023A: jnz     loc_530301
0x530240: mov     eax, [ebx+254h]
0x530246: call    __alloca?
0x53024B: mov     esi, esp
0x53024D: push    200h; a4
0x530252: push    esi; Dst
0x530253: mov     ecx, ebx; a1
0x530255: call    TESFile_GetChunkData
0x53025A: mov     eax, [edi]
0x53025C: mov     edx, [eax+0D8h]
0x530262: push    esi
0x530263: mov     ecx, edi
0x530265: call    edx
0x530267: jmp     loc_530301
0x53026C: push    1; a4
0x53026E: lea     eax, [edi+24h]
0x530271: push    eax; Dst
0x530272: mov     ecx, ebx; a1
0x530274: call    TESFile_GetChunkData
0x530279: jmp     loc_530301
0x53027E: lea     ecx, [ebp+var_8]
0x530281: push    ecx
0x530282: mov     ecx, ebx
0x530284: mov     [ebp+var_8], 0
0x53028B: call    TESFile_GetChunkData4
0x530290: push    0FFFFFFFFh; a2
0x530292: mov     ecx, edi; this
0x530294: call    TESForm_GetOverrideFile
0x530299: push    eax; a2
0x53029A: lea     edx, [ebp+var_8]
0x53029D: push    edx; a1
0x53029E: call    TESForm_ResolveFormID
0x5302A3: mov     eax, [ebp+var_8]
0x5302A6: add     esp, 8
0x5302A9: push    0
0x5302AB: push    eax
0x5302AC: mov     ecx, edi
0x5302AE: call    sub_52FC40
0x5302B3: mov     esi, eax
0x5302B5: test    esi, esi
0x5302B7: jz      short loc_530301
0x5302B9: mov     ecx, [esi+0Ch]
0x5302BC: add     ecx, 64h ; 'd'
0x5302BF: push    ecx
0x5302C0: lea     ecx, [esi+4]
0x5302C3: call    sub_452910
0x5302C8: mov     dword ptr [esi+18h], 0Ah
0x5302CF: jmp     short loc_530301
0x5302D1: cmp     eax, 4C4C5546h
0x5302D6: jz      short loc_5302EC
0x5302D8: cmp     eax, 58444958h
0x5302DD: jnz     short loc_530301
0x5302DF: lea     edx, [edi+30h]
0x5302E2: push    edx
0x5302E3: mov     ecx, ebx
0x5302E5: call    TESFile_GetChunkData4
0x5302EA: jmp     short loc_530301
0x5302EC: test    edi, edi
0x5302EE: jz      short loc_5302F5
0x5302F0: lea     eax, [edi+18h]
0x5302F3: jmp     short loc_5302F7
0x5302F5: xor     eax, eax
0x5302F7: push    ebx; a2
0x5302F8: push    eax; a1
0x5302F9: call    TESFullname_Load
0x5302FE: add     esp, 8
0x530301: mov     ecx, ebx
0x530303: call    TESFile_GetNextChunk
0x530308: test    al, al
0x53030A: jz      short loc_53031B
0x53030C: mov     ecx, ebx
0x53030E: call    TESFile_GetChunkType
0x530313: test    eax, eax
0x530315: jnz     loc_530221
0x53031B: mov     ds:0B3650Ch, edi
0x530321: mov     al, 1
0x530323: lea     esp, [ebp-14h]
0x530326: pop     edi
0x530327: pop     esi
0x530328: pop     ebx
0x530329: mov     ecx, [ebp+var_4]
0x53032C: xor     ecx, ebp
0x53032E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x530333: mov     esp, ebp
0x530335: pop     ebp
0x530336: retn    4
