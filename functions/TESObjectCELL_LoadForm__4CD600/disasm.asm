0x4CD600: push    ebp
0x4CD601: mov     ebp, esp
0x4CD603: sub     esp, 8
0x4CD606: mov     eax, ds:0B30AACh
0x4CD60B: xor     eax, ebp
0x4CD60D: mov     [ebp+var_4], eax
0x4CD610: push    ebx
0x4CD611: mov     ebx, [ebp+a1]
0x4CD614: push    esi
0x4CD615: push    edi
0x4CD616: mov     edi, ecx
0x4CD618: mov     ecx, ebx
0x4CD61A: call    TESFile_GetRecordType
0x4CD61F: cmp     al, 30h ; '0'
0x4CD621: jz      short loc_4CD62A
0x4CD623: xor     al, al
0x4CD625: jmp     loc_4CD947
0x4CD62A: mov     ecx, ebx
0x4CD62C: mov     [ebp+var_8], 0
0x4CD633: call    TESFile_GetIsMaster
0x4CD638: test    al, al
0x4CD63A: jz      short loc_4CD645
0x4CD63C: mov     eax, [ebx+25Ch]
0x4CD642: mov     [ebp+var_8], eax
0x4CD645: push    edi
0x4CD646: mov     ecx, ebx
0x4CD648: call    TESFile_InitializeFormFromRecord
0x4CD64D: mov     ecx, ebx
0x4CD64F: call    TESFile_GetChunkType
0x4CD654: cmp     eax, 4C4C5546h
0x4CD659: jg      loc_4CD885
0x4CD65F: jz      loc_4CD85E
0x4CD665: cmp     eax, 45535558h
0x4CD66A: jg      loc_4CD7DA
0x4CD670: jz      loc_4CD923
0x4CD676: cmp     eax, 43524D58h
0x4CD67B: jg      loc_4CD77A
0x4CD681: jz      loc_4CD923
0x4CD687: cmp     eax, 434C4358h
0x4CD68C: jg      loc_4CD76A
0x4CD692: jz      loc_4CD74C
0x4CD698: cmp     eax, 41544144h
0x4CD69D: jz      short loc_4CD6AF
0x4CD69F: cmp     eax, 424C4758h
0x4CD6A4: jz      loc_4CD923
0x4CD6AA: jmp     loc_4CD92D
0x4CD6AF: push    1; a4
0x4CD6B1: lea     esi, [edi+24h]
0x4CD6B4: push    esi; Dst
0x4CD6B5: mov     ecx, ebx; a1
0x4CD6B7: call    TESFile_GetChunkData
0x4CD6BC: mov     al, [esi]
0x4CD6BE: movsx   ecx, al
0x4CD6C1: cmp     ecx, 0FFh
0x4CD6C7: jle     short loc_4CD6F1
0x4CD6C9: mov     ecx, [edi+0Ch]
0x4CD6CC: or      al, 1
0x4CD6CE: mov     [esi], al
0x4CD6D0: mov     eax, [edi+1Ch]
0x4CD6D3: test    eax, eax
0x4CD6D5: jnz     short loc_4CD6DC
0x4CD6D7: mov     eax, offset EmptyString
0x4CD6DC: push    ecx
0x4CD6DD: push    eax
0x4CD6DE: lea     edx, [ebx+1Ch]
0x4CD6E1: push    edx; ArgList
0x4CD6E2: push    offset aFileSContainsC; "File '%s' contains corrupt data for cel"...
0x4CD6E7: call    PrintError
0x4CD6EC: add     esp, 10h
0x4CD6EF: jmp     short loc_4CD722
0x4CD6F1: test    al, 1
0x4CD6F3: jnz     short loc_4CD6F9
0x4CD6F5: or      al, 2
0x4CD6F7: mov     [esi], al
0x4CD6F9: mov     al, [esi]
0x4CD6FB: test    al, 1
0x4CD6FD: jz      short loc_4CD711
0x4CD6FF: test    al, al
0x4CD701: jns     short loc_4CD711
0x4CD703: fldz
0x4CD705: push    ecx
0x4CD706: lea     ecx, [edi+28h]
0x4CD709: fstp    [esp+18h+var_18]; float
0x4CD70C: call    sub_423FF0
0x4CD711: mov     eax, ds:0B33A98h
0x4CD716: cmp     byte ptr [eax+0CD1h], 0
0x4CD71D: jnz     short loc_4CD722
0x4CD71F: and     byte ptr [esi], 0BFh
0x4CD722: mov     ecx, edi
0x4CD724: call    sub_4CA710
0x4CD729: test    byte ptr [esi], 1
0x4CD72C: jz      loc_4CD92D
0x4CD732: cmp     [ebp+var_8], 0
0x4CD736: jz      loc_4CD92D
0x4CD73C: mov     ecx, [ebp+var_8]
0x4CD73F: push    ecx
0x4CD740: mov     ecx, edi
0x4CD742: call    sub_4C9D30
0x4CD747: jmp     loc_4CD92D
0x4CD74C: mov     ecx, edi; this
0x4CD74E: call    TESObjectCELL__GetCellCoordinatesIfExterior
0x4CD753: test    eax, eax
0x4CD755: jz      loc_4CD92D
0x4CD75B: push    8; a4
0x4CD75D: push    eax; Dst
0x4CD75E: mov     ecx, ebx; a1
0x4CD760: call    TESFile_GetChunkData
0x4CD765: jmp     loc_4CD92D
0x4CD76A: cmp     eax, 434F4C58h
0x4CD76F: jz      loc_4CD923
0x4CD775: jmp     loc_4CD92D
0x4CD77A: cmp     eax, 44494445h
0x4CD77F: jg      short loc_4CD7CA
0x4CD781: jz      short loc_4CD79E
0x4CD783: cmp     eax, 44455358h
0x4CD788: jz      loc_4CD923
0x4CD78E: cmp     eax, 44475258h
0x4CD793: jz      loc_4CD923
0x4CD799: jmp     loc_4CD92D
0x4CD79E: mov     eax, [ebx+254h]
0x4CD7A4: call    __alloca?
0x4CD7A9: mov     esi, esp
0x4CD7AB: push    200h; a4
0x4CD7B0: push    esi; Dst
0x4CD7B1: mov     ecx, ebx; a1
0x4CD7B3: call    TESFile_GetChunkData
0x4CD7B8: mov     edx, [edi]
0x4CD7BA: mov     eax, [edx+0D8h]
0x4CD7C0: push    esi
0x4CD7C1: mov     ecx, edi
0x4CD7C3: call    eax
0x4CD7C5: jmp     loc_4CD92D
0x4CD7CA: cmp     eax, 444F4C58h
0x4CD7CF: jz      loc_4CD923
0x4CD7D5: jmp     loc_4CD92D
0x4CD7DA: cmp     eax, 4B524D58h
0x4CD7DF: jg      short loc_4CD81F
0x4CD7E1: jz      loc_4CD923
0x4CD7E7: cmp     eax, 49435058h
0x4CD7EC: jg      short loc_4CD80F
0x4CD7EE: jz      loc_4CD923
0x4CD7F4: cmp     eax, 47484358h
0x4CD7F9: jz      loc_4CD923
0x4CD7FF: cmp     eax, 47525458h
0x4CD804: jz      loc_4CD923
0x4CD80A: jmp     loc_4CD92D
0x4CD80F: cmp     eax, 4B4E5258h
0x4CD814: jz      loc_4CD923
0x4CD81A: jmp     loc_4CD92D
0x4CD81F: cmp     eax, 4C444558h
0x4CD824: jz      loc_4CD923
0x4CD82A: cmp     eax, 4C455458h
0x4CD82F: jz      loc_4CD923
0x4CD835: cmp     eax, 4C4C4358h
0x4CD83A: jnz     loc_4CD92D
0x4CD840: mov     ecx, edi
0x4CD842: call    TESObjectCELL__GetLightDataIfInterior
0x4CD847: test    eax, eax
0x4CD849: jz      loc_4CD92D
0x4CD84F: push    28h ; '('; a4
0x4CD851: push    eax; Dst
0x4CD852: mov     ecx, ebx; a1
0x4CD854: call    TESFile_GetChunkData
0x4CD859: jmp     loc_4CD92D
0x4CD85E: test    edi, edi
0x4CD860: jz      short loc_4CD874
0x4CD862: lea     eax, [edi+18h]
0x4CD865: push    ebx
0x4CD866: push    eax
0x4CD867: call    TESFullname_Load
0x4CD86C: add     esp, 8
0x4CD86F: jmp     loc_4CD92D
0x4CD874: xor     eax, eax
0x4CD876: push    ebx
0x4CD877: push    eax
0x4CD878: call    TESFullname_Load
0x4CD87D: add     esp, 8
0x4CD880: jmp     loc_4CD92D
0x4CD885: cmp     eax, 50534558h
0x4CD88A: jg      short loc_4CD8E3
0x4CD88C: jz      loc_4CD923
0x4CD892: cmp     eax, 4D495458h
0x4CD897: jg      short loc_4CD8C1
0x4CD899: jz      loc_4CD923
0x4CD89F: cmp     eax, 4D434358h
0x4CD8A4: jg      short loc_4CD8B8
0x4CD8A6: jz      short loc_4CD923
0x4CD8A8: cmp     eax, 4C4F5358h
0x4CD8AD: jz      short loc_4CD923
0x4CD8AF: cmp     eax, 4C535058h
0x4CD8B4: jz      short loc_4CD923
0x4CD8B6: jmp     short loc_4CD92D
0x4CD8B8: cmp     eax, 4D434C58h
0x4CD8BD: jz      short loc_4CD923
0x4CD8BF: jmp     short loc_4CD92D
0x4CD8C1: cmp     eax, 4E535058h
0x4CD8C6: jg      short loc_4CD8DA
0x4CD8C8: jz      short loc_4CD923
0x4CD8CA: cmp     eax, 4D4C4358h
0x4CD8CF: jz      short loc_4CD923
0x4CD8D1: cmp     eax, 4D545258h
0x4CD8D6: jz      short loc_4CD923
0x4CD8D8: jmp     short loc_4CD92D
0x4CD8DA: cmp     eax, 4E574F58h
0x4CD8DF: jz      short loc_4CD923
0x4CD8E1: jmp     short loc_4CD92D
0x4CD8E3: cmp     eax, 544D4358h
0x4CD8E8: jg      short loc_4CD90E
0x4CD8EA: jz      short loc_4CD923
0x4CD8EC: cmp     eax, 54434158h
0x4CD8F1: jg      short loc_4CD905
0x4CD8F3: jz      short loc_4CD923
0x4CD8F5: cmp     eax, 524C4358h
0x4CD8FA: jz      short loc_4CD923
0x4CD8FC: cmp     eax, 53524858h
0x4CD901: jz      short loc_4CD923
0x4CD903: jmp     short loc_4CD92D
0x4CD905: cmp     eax, 544C4858h
0x4CD90A: jz      short loc_4CD923
0x4CD90C: jmp     short loc_4CD92D
0x4CD90E: cmp     eax, 544E4358h
0x4CD913: jz      short loc_4CD923
0x4CD915: cmp     eax, 54574358h
0x4CD91A: jz      short loc_4CD923
0x4CD91C: cmp     eax, 574C4358h
0x4CD921: jnz     short loc_4CD92D
0x4CD923: push    edi
0x4CD924: push    ebx
0x4CD925: lea     ecx, [edi+28h]
0x4CD928: call    ExtraDataList_Load
0x4CD92D: mov     ecx, ebx
0x4CD92F: call    TESFile_GetNextChunk
0x4CD934: test    al, al
0x4CD936: jnz     loc_4CD64D
0x4CD93C: push    0; a2
0x4CD93E: mov     ecx, edi; this
0x4CD940: call    TESForm_SetIsLinked
0x4CD945: mov     al, 1
0x4CD947: lea     esp, [ebp-14h]
0x4CD94A: pop     edi
0x4CD94B: pop     esi
0x4CD94C: pop     ebx
0x4CD94D: mov     ecx, [ebp+var_4]
0x4CD950: xor     ecx, ebp
0x4CD952: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4CD957: mov     esp, ebp
0x4CD959: pop     ebp
0x4CD95A: retn    4
