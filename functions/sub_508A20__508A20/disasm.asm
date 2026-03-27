0x508A20: sub     esp, 208h
0x508A26: mov     eax, ds:0B30AACh
0x508A2B: xor     eax, esp
0x508A2D: mov     [esp+208h+var_4], eax
0x508A34: mov     edx, [esp+208h+a4]
0x508A3B: mov     ecx, [esp+208h+arg_4]
0x508A42: push    ebx
0x508A43: mov     ebx, [esp+20Ch+arg_1C]
0x508A4A: mov     eax, [esp+20Ch+a1]
0x508A51: push    ebp
0x508A52: mov     ebp, [esp+210h+l]
0x508A59: push    esi
0x508A5A: mov     esi, [esp+214h+arg_C]
0x508A61: push    edi
0x508A62: mov     edi, [esp+218h+arg_10]
0x508A69: mov     [esp+218h+a3], ebx
0x508A6D: lea     ebx, [esp+218h+var_204]
0x508A71: push    ebx; UInt16
0x508A72: push    ebp; l
0x508A73: push    edi; a6
0x508A74: push    esi; a5
0x508A75: push    edx; a4
0x508A76: mov     edx, [esp+22Ch+a3]
0x508A7A: push    edx; a3
0x508A7B: push    ecx; a2
0x508A7C: push    eax; a1
0x508A7D: mov     byte ptr [esp+238h+var_204], 0
0x508A82: call    Script_ExtractArgs
0x508A87: add     esp, 20h
0x508A8A: test    al, al
0x508A8C: pop     edi
0x508A8D: pop     esi
0x508A8E: pop     ebp
0x508A8F: pop     ebx
0x508A90: jnz     short loc_508AA7
0x508A92: mov     ecx, [esp+208h+var_4]
0x508A99: xor     ecx, esp
0x508A9B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x508AA0: add     esp, 208h
0x508AA6: retn
0x508AA7: cmp     byte ptr [esp+208h+var_204], 0
0x508AAC: jz      loc_508B4B
0x508AB2: mov     ecx, ds:0B33A98h
0x508AB8: lea     eax, [esp+208h+var_204]
0x508ABC: push    eax
0x508ABD: call    sub_447C50
0x508AC2: test    eax, eax
0x508AC4: jz      short loc_508B19
0x508AC6: mov     ecx, ds:0B33A98h
0x508ACC: mov     byte ptr [ecx+0CD4h], 1
0x508AD3: mov     ecx, eax
0x508AD5: call    TESFile_Close
0x508ADA: mov     edx, ds:0B33A98h
0x508AE0: mov     byte ptr [edx+0CD4h], 0
0x508AE7: cmp     byte ptr ds:0B361ACh, 0
0x508AEE: jz      short loc_508B61
0x508AF0: lea     eax, [esp+208h+var_204]
0x508AF4: push    eax
0x508AF5: push    offset aClosedFileS_; "Closed file '%s'."
0x508AFA: call    Interface_ConsolePrint
0x508AFF: add     esp, 8
0x508B02: mov     al, 1
0x508B04: mov     ecx, [esp+208h+var_4]
0x508B0B: xor     ecx, esp
0x508B0D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x508B12: add     esp, 208h
0x508B18: retn
0x508B19: cmp     byte ptr ds:0B361ACh, 0
0x508B20: jz      short loc_508B61
0x508B22: lea     ecx, [esp+208h+var_204]
0x508B26: push    ecx
0x508B27: push    offset aErrCouldNotFin; "ERR: Could not find file '%s'."
0x508B2C: call    Interface_ConsolePrint
0x508B31: add     esp, 8
0x508B34: mov     al, 1
0x508B36: mov     ecx, [esp+208h+var_4]
0x508B3D: xor     ecx, esp
0x508B3F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x508B44: add     esp, 208h
0x508B4A: retn
0x508B4B: cmp     byte ptr ds:0B361ACh, 0
0x508B52: jz      short loc_508B61
0x508B54: push    offset aErrNoFilename_; "ERR: No Filename."
0x508B59: call    Interface_ConsolePrint
0x508B5E: add     esp, 4
0x508B61: mov     ecx, [esp+208h+var_4]
0x508B68: xor     ecx, esp
0x508B6A: mov     al, 1
0x508B6C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x508B71: add     esp, 208h
0x508B77: retn
