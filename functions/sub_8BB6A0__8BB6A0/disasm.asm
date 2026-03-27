0x8BB6A0: sub     esp, 274h
0x8BB6A6: mov     eax, ds:0B30AACh
0x8BB6AB: mov     [esp+274h+var_4], eax
0x8BB6B2: mov     eax, dword ptr [esp+274h+ArgList]
0x8BB6B9: cmp     eax, 0FFFFFFFFh
0x8BB6BC: push    esi
0x8BB6BD: push    edi
0x8BB6BE: mov     esi, ecx
0x8BB6C0: jnz     short loc_8BB6D2
0x8BB6C2: mov     ecx, [esi+18h]
0x8BB6C5: test    ecx, ecx
0x8BB6C7: jz      short loc_8BB6D2
0x8BB6C9: mov     eax, ecx
0x8BB6CB: mov     ecx, [esi+14h]
0x8BB6CE: mov     eax, [ecx+eax*4-4]
0x8BB6D2: push    eax; ArgList
0x8BB6D3: lea     edx, [esp+280h+DstBuf]
0x8BB6D7: push    offset a0xX_0; "0x%x"
0x8BB6DC: push    edx; DstBuf
0x8BB6DD: call    sub_8B1750
0x8BB6E2: add     esp, 8
0x8BB6E5: mov     eax, esp
0x8BB6E7: mov     byte ptr [eax], 1
0x8BB6EA: push    200h
0x8BB6EF: lea     eax, [esp+284h+var_204]
0x8BB6F6: push    eax
0x8BB6F7: lea     ecx, [esp+288h+var_26C]
0x8BB6FB: call    sub_8BBFB0
0x8BB700: mov     ecx, [esp+27Ch+arg_8]
0x8BB707: mov     edx, [esp+27Ch+arg_0]
0x8BB70E: push    offset asc_A98304; "'\n"
0x8BB713: push    ecx
0x8BB714: mov     ecx, dword ptr [esp+284h+Args]
0x8BB71B: push    offset asc_A982FC; " : '"
0x8BB720: push    edx
0x8BB721: mov     edx, [esp+28Ch+arg_C]
0x8BB728: push    offset unk_A71E50
0x8BB72D: lea     eax, [esp+290h+DstBuf]
0x8BB734: push    eax
0x8BB735: push    offset asc_A982F4; "): ["
0x8BB73A: push    ecx; Args
0x8BB73B: push    28h ; '('
0x8BB73D: push    edx
0x8BB73E: lea     ecx, [esp+2A4h+var_26C]
0x8BB742: call    sub_8BBDB0
0x8BB747: mov     ecx, eax
0x8BB749: call    sub_8BBD90
0x8BB74E: mov     ecx, eax
0x8BB750: call    sub_8BBE00
0x8BB755: mov     ecx, eax
0x8BB757: call    sub_8BBDB0
0x8BB75C: mov     ecx, eax
0x8BB75E: call    sub_8BBDB0
0x8BB763: mov     ecx, eax
0x8BB765: call    sub_8BBDB0
0x8BB76A: mov     ecx, eax
0x8BB76C: call    sub_8BBDB0
0x8BB771: mov     ecx, eax
0x8BB773: call    sub_8BBDB0
0x8BB778: mov     ecx, eax
0x8BB77A: call    sub_8BBDB0
0x8BB77F: mov     ecx, eax
0x8BB781: call    sub_8BBDB0
0x8BB786: mov     eax, [esi+24h]
0x8BB789: push    eax
0x8BB78A: lea     ecx, [esp+280h+var_204]
0x8BB78E: push    ecx
0x8BB78F: call    dword ptr [esi+20h]
0x8BB792: mov     al, [esp+284h+arg_14]
0x8BB799: add     esp, 8
0x8BB79C: test    al, al
0x8BB79E: jz      short loc_8BB7F2
0x8BB7A0: lea     ecx, [esp+27Ch+var_274]
0x8BB7A4: call    sub_8F61A0
0x8BB7A9: push    14h
0x8BB7AB: lea     edx, [esp+280h+var_260]
0x8BB7AF: push    edx
0x8BB7B0: lea     ecx, [esp+284h+var_274]
0x8BB7B4: call    sub_8F6190
0x8BB7B9: mov     edi, eax
0x8BB7BB: cmp     edi, 2
0x8BB7BE: jle     short loc_8BB7E9
0x8BB7C0: mov     eax, [esi+24h]
0x8BB7C3: push    eax
0x8BB7C4: push    offset aStackTraceIs; "Stack trace is:\n"
0x8BB7C9: call    dword ptr [esi+20h]
0x8BB7CC: mov     ecx, [esi+24h]
0x8BB7CF: mov     edx, [esi+20h]
0x8BB7D2: add     esp, 8
0x8BB7D5: push    ecx
0x8BB7D6: push    edx
0x8BB7D7: add     edi, 0FFFFFFFEh
0x8BB7DA: push    edi
0x8BB7DB: lea     eax, [esp+288h+var_258]
0x8BB7DF: push    eax
0x8BB7E0: lea     ecx, [esp+28Ch+var_274]
0x8BB7E4: call    sub_8F6010
0x8BB7E9: lea     ecx, [esp+27Ch+var_274]
0x8BB7ED: call    sub_8F5FA0
0x8BB7F2: lea     ecx, [esp+27Ch+var_26C]
0x8BB7F6: call    sub_8BC000
0x8BB7FB: mov     ecx, [esp+27Ch+var_4]
0x8BB802: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BB807: pop     edi
0x8BB808: pop     esi
0x8BB809: add     esp, 274h
0x8BB80F: retn    18h
