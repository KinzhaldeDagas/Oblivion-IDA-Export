0x4F9700: push    ebp
0x4F9701: mov     ebp, esp
0x4F9703: push    ecx
0x4F9704: mov     eax, ds:0B30AACh
0x4F9709: xor     eax, ebp
0x4F970B: mov     [ebp+var_4], eax
0x4F970E: push    ebx
0x4F970F: push    esi
0x4F9710: push    edi
0x4F9711: mov     edi, [ebp+a1]
0x4F9714: mov     esi, ecx
0x4F9716: push    esi
0x4F9717: mov     ecx, edi
0x4F9719: call    TESFile_InitializeFormFromRecord
0x4F971E: push    0; a2
0x4F9720: mov     ecx, esi; this
0x4F9722: call    TESForm_SetIsLinked
0x4F9727: mov     ecx, edi
0x4F9729: call    TESFile_GetChunkType
0x4F972E: test    eax, eax
0x4F9730: jz      loc_4F9869
0x4F9736: jmp     short loc_4F9740
0x4F9738: align 10h
0x4F9740: cmp     eax, 4D414E46h
0x4F9745: jg      loc_4F97D6
0x4F974B: jz      short loc_4F97B2
0x4F974D: cmp     eax, 43534544h
0x4F9752: jz      short loc_4F978B
0x4F9754: cmp     eax, 44494445h
0x4F9759: jnz     loc_4F984F
0x4F975F: mov     eax, [edi+254h]
0x4F9765: call    __alloca?
0x4F976A: mov     ebx, esp
0x4F976C: push    200h; a4
0x4F9771: push    ebx; Dst
0x4F9772: mov     ecx, edi; a1
0x4F9774: call    TESFile_GetChunkData
0x4F9779: mov     eax, [esi]
0x4F977B: mov     edx, [eax+0D8h]
0x4F9781: push    ebx
0x4F9782: mov     ecx, esi
0x4F9784: call    edx
0x4F9786: jmp     loc_4F984F
0x4F978B: mov     eax, [edi+254h]
0x4F9791: call    __alloca?
0x4F9796: mov     ebx, esp
0x4F9798: push    0; a4
0x4F979A: push    ebx; Dst
0x4F979B: mov     ecx, edi; a1
0x4F979D: call    TESFile_GetChunkData
0x4F97A2: push    0; a3
0x4F97A4: push    ebx; a2
0x4F97A5: lea     ecx, [esi+34h]; this
0x4F97A8: call    BSStringT_Set
0x4F97AD: jmp     loc_4F984F
0x4F97B2: mov     eax, [esi+0Ch]
0x4F97B5: push    eax
0x4F97B6: mov     eax, [esi]
0x4F97B8: mov     edx, [eax+0D4h]
0x4F97BE: mov     ecx, esi
0x4F97C0: call    edx
0x4F97C2: push    eax
0x4F97C3: lea     eax, [edi+1Ch]
0x4F97C6: push    eax; ArgList
0x4F97C7: push    offset aFileSContainsO; "File %s contains old data for loadscree"...
0x4F97CC: call    PrintError
0x4F97D1: add     esp, 10h
0x4F97D4: jmp     short loc_4F984F
0x4F97D6: cmp     eax, 4D414E4Ch
0x4F97DB: jz      short loc_4F9805
0x4F97DD: cmp     eax, 4E4F4349h
0x4F97E2: jnz     short loc_4F984F
0x4F97E4: test    esi, esi
0x4F97E6: jz      short loc_4F97F7
0x4F97E8: lea     eax, [esi+18h]
0x4F97EB: push    edi
0x4F97EC: push    eax
0x4F97ED: call    TESTexture_Load
0x4F97F2: add     esp, 8
0x4F97F5: jmp     short loc_4F984F
0x4F97F7: xor     eax, eax
0x4F97F9: push    edi
0x4F97FA: push    eax
0x4F97FB: call    TESTexture_Load
0x4F9800: add     esp, 8
0x4F9803: jmp     short loc_4F984F
0x4F9805: push    0Ch; Size
0x4F9807: call    FormHeapAlloc
0x4F980C: add     esp, 4
0x4F980F: mov     ebx, eax
0x4F9811: push    0Ch; a4
0x4F9813: push    ebx; Dst
0x4F9814: mov     ecx, edi; a1
0x4F9816: call    TESFile_GetChunkData
0x4F981B: test    ebx, ebx
0x4F981D: jz      short loc_4F984F
0x4F981F: cmp     dword ptr [esi+2Ch], 0
0x4F9823: jz      short loc_4F984C
0x4F9825: push    8; Size
0x4F9827: call    FormHeapAlloc
0x4F982C: add     esp, 4
0x4F982F: test    eax, eax
0x4F9831: jz      short loc_4F9841
0x4F9833: mov     ecx, [esi+2Ch]
0x4F9836: mov     [eax], ecx
0x4F9838: mov     dword ptr [eax+4], 0
0x4F983F: jmp     short loc_4F9843
0x4F9841: xor     eax, eax
0x4F9843: mov     edx, [esi+30h]
0x4F9846: mov     [eax+4], edx
0x4F9849: mov     [esi+30h], eax
0x4F984C: mov     [esi+2Ch], ebx
0x4F984F: mov     ecx, edi
0x4F9851: call    TESFile_GetNextChunk
0x4F9856: test    al, al
0x4F9858: jz      short loc_4F9869
0x4F985A: mov     ecx, edi
0x4F985C: call    TESFile_GetChunkType
0x4F9861: test    eax, eax
0x4F9863: jnz     loc_4F9740
0x4F9869: mov     al, 1
0x4F986B: lea     esp, [ebp-10h]
0x4F986E: pop     edi
0x4F986F: pop     esi
0x4F9870: pop     ebx
0x4F9871: mov     ecx, [ebp+var_4]
0x4F9874: xor     ecx, ebp
0x4F9876: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F987B: mov     esp, ebp
0x4F987D: pop     ebp
0x4F987E: retn    4
