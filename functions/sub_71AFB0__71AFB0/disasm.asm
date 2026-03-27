0x71AFB0: sub     esp, 408h
0x71AFB6: mov     eax, ds:0B30AACh
0x71AFBB: xor     eax, esp
0x71AFBD: mov     [esp+408h+var_4], eax
0x71AFC4: push    ebx
0x71AFC5: mov     ebx, [esp+40Ch+arg_4]
0x71AFCC: push    esi
0x71AFCD: push    edi
0x71AFCE: mov     edi, [esp+414h+FullPath]
0x71AFD5: mov     esi, ecx
0x71AFD7: push    edi; FullPath
0x71AFD8: lea     ecx, [esp+418h+Dir]; Dir
0x71AFDC: call    sub_748760
0x71AFE1: mov     eax, [esi+80h]
0x71AFE7: mov     edx, [eax+4]
0x71AFEA: add     esi, 80h ; '€'
0x71AFF0: lea     ecx, [esp+414h+var_305]
0x71AFF7: push    ecx
0x71AFF8: mov     ecx, esi
0x71AFFA: call    edx
0x71AFFC: test    al, al
0x71AFFE: jz      short loc_71B04C
0x71B000: push    8000h
0x71B005: push    0
0x71B007: push    edi
0x71B008: call    NiFile_GetNiFile_Indirect
0x71B00D: mov     edi, eax
0x71B00F: add     esp, 0Ch
0x71B012: test    edi, edi
0x71B014: jz      short loc_71B04C
0x71B016: mov     eax, [edi]
0x71B018: mov     edx, [eax+4]
0x71B01B: mov     ecx, edi
0x71B01D: call    edx
0x71B01F: test    al, al
0x71B021: jz      short loc_71B042
0x71B023: mov     eax, [esi]
0x71B025: mov     edx, [eax+8]
0x71B028: push    ebx
0x71B029: push    edi
0x71B02A: mov     ecx, esi
0x71B02C: call    edx
0x71B02E: mov     esi, eax
0x71B030: mov     eax, [edi]
0x71B032: mov     edx, [eax]
0x71B034: push    1
0x71B036: mov     ecx, edi
0x71B038: call    edx
0x71B03A: test    esi, esi
0x71B03C: jz      short loc_71B04C
0x71B03E: mov     eax, esi
0x71B040: jmp     short loc_71B04E
0x71B042: mov     eax, [edi]
0x71B044: mov     edx, [eax]
0x71B046: push    1
0x71B048: mov     ecx, edi
0x71B04A: call    edx
0x71B04C: xor     eax, eax
0x71B04E: mov     ecx, [esp+414h+var_4]
0x71B055: pop     edi
0x71B056: pop     esi
0x71B057: pop     ebx
0x71B058: xor     ecx, esp
0x71B05A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x71B05F: add     esp, 408h
0x71B065: retn    8
