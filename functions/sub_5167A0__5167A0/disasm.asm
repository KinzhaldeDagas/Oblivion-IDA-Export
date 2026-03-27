0x5167A0: sub     esp, 108h
0x5167A6: mov     eax, ds:0B30AACh
0x5167AB: xor     eax, esp
0x5167AD: mov     [esp+108h+var_4], eax
0x5167B4: mov     ecx, [esp+108h+Format]
0x5167BB: push    esi
0x5167BC: mov     esi, [esp+10Ch+arg_0]
0x5167C3: push    edi; ArgList
0x5167C4: mov     edi, [esp+110h+arg_4]
0x5167CB: lea     eax, [esp+110h+ArgList]
0x5167D2: push    eax; ArgList
0x5167D3: push    ecx; Format
0x5167D4: lea     edx, [esp+118h+DstBuf]
0x5167D8: push    edx; DstBuf
0x5167D9: call    __vsprintf
0x5167DE: add     esp, 0Ch
0x5167E1: cmp     byte ptr ds:0B361ACh, 0
0x5167E8: jz      short loc_5167F6
0x5167EA: lea     eax, [esp+110h+DstBuf]
0x5167EE: push    eax; Format
0x5167EF: call    Interface_ConsolePrint
0x5167F4: jmp     short loc_516800
0x5167F6: lea     ecx, [esp+110h+DstBuf]
0x5167FA: push    ecx; Format
0x5167FB: call    PrintError
0x516800: mov     ecx, [esp+114h+var_4]
0x516807: add     esp, 4
0x51680A: mov     dword ptr [edi+20h], 0
0x516811: pop     edi
0x516812: mov     byte ptr [esi+0A0h], 1
0x516819: pop     esi
0x51681A: xor     ecx, esp
0x51681C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x516821: add     esp, 108h
0x516827: retn
