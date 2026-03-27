0x71AEC0: sub     esp, 414h
0x71AEC6: mov     eax, ds:0B30AACh
0x71AECB: xor     eax, esp
0x71AECD: mov     [esp+414h+var_4], eax
0x71AED4: mov     eax, [esp+414h+arg_C]
0x71AEDB: mov     edx, [esp+414h+arg_14]
0x71AEE2: push    ebx
0x71AEE3: mov     ebx, [esp+418h+arg_4]
0x71AEEA: push    ebp
0x71AEEB: mov     ebp, [esp+41Ch+arg_8]
0x71AEF2: push    esi
0x71AEF3: mov     esi, ecx
0x71AEF5: mov     ecx, [esp+420h+arg_10]
0x71AEFC: push    edi
0x71AEFD: mov     edi, [esp+424h+FullPath]
0x71AF04: mov     [esp+424h+var_414], ecx
0x71AF08: push    edi; FullPath
0x71AF09: lea     ecx, [esp+428h+Dir]; Dir
0x71AF0D: mov     [esp+428h+var_410], eax
0x71AF11: mov     [esp+428h+var_40C], edx
0x71AF15: call    sub_748760
0x71AF1A: mov     eax, [esi+80h]
0x71AF20: mov     edx, [eax+4]
0x71AF23: add     esi, 80h ; '€'
0x71AF29: lea     ecx, [esp+424h+var_305]
0x71AF30: push    ecx
0x71AF31: mov     ecx, esi
0x71AF33: call    edx
0x71AF35: test    al, al
0x71AF37: jz      short loc_71AF93
0x71AF39: push    8000h
0x71AF3E: push    0
0x71AF40: push    edi
0x71AF41: call    NiFile_GetNiFile_Indirect
0x71AF46: mov     edi, eax
0x71AF48: add     esp, 0Ch
0x71AF4B: test    edi, edi
0x71AF4D: jz      short loc_71AF93
0x71AF4F: mov     eax, [edi]
0x71AF51: mov     edx, [eax+4]
0x71AF54: mov     ecx, edi
0x71AF56: call    edx
0x71AF58: test    al, al
0x71AF5A: jz      short loc_71AF89
0x71AF5C: mov     ecx, [esp+424h+var_40C]
0x71AF60: mov     edx, [esp+424h+var_414]
0x71AF64: mov     eax, [esi]
0x71AF66: push    ecx
0x71AF67: mov     ecx, [esp+428h+var_410]
0x71AF6B: push    ebp
0x71AF6C: push    ebx
0x71AF6D: push    edx
0x71AF6E: mov     edx, [eax+0Ch]
0x71AF71: push    ecx
0x71AF72: push    edi
0x71AF73: mov     ecx, esi
0x71AF75: call    edx
0x71AF77: test    al, al
0x71AF79: mov     eax, [edi]
0x71AF7B: mov     edx, [eax]
0x71AF7D: push    1
0x71AF7F: mov     ecx, edi
0x71AF81: jz      short loc_71AF91
0x71AF83: call    edx
0x71AF85: mov     al, 1
0x71AF87: jmp     short loc_71AF95
0x71AF89: mov     eax, [edi]
0x71AF8B: mov     edx, [eax]
0x71AF8D: push    1
0x71AF8F: mov     ecx, edi
0x71AF91: call    edx
0x71AF93: xor     al, al
0x71AF95: mov     ecx, [esp+424h+var_4]
0x71AF9C: pop     edi
0x71AF9D: pop     esi
0x71AF9E: pop     ebp
0x71AF9F: pop     ebx
0x71AFA0: xor     ecx, esp
0x71AFA2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x71AFA7: add     esp, 414h
0x71AFAD: retn    18h
