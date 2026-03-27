0x50D4C0: sub     esp, 20Ch
0x50D4C6: mov     eax, ds:0B30AACh
0x50D4CB: xor     eax, esp
0x50D4CD: mov     [esp+20Ch+var_4], eax
0x50D4D4: mov     edx, [esp+20Ch+a4]
0x50D4DB: push    ebx
0x50D4DC: mov     ebx, [esp+210h+arg_1C]
0x50D4E3: mov     ecx, [esp+210h+arg_4]
0x50D4EA: push    ebp
0x50D4EB: mov     ebp, [esp+214h+l]
0x50D4F2: mov     eax, [esp+214h+a1]
0x50D4F9: push    esi
0x50D4FA: mov     esi, [esp+218h+arg_C]
0x50D501: push    edi
0x50D502: mov     edi, [esp+21Ch+arg_10]
0x50D509: mov     [esp+21Ch+a3], ebx
0x50D50D: lea     ebx, [esp+21Ch+var_20C]
0x50D511: push    ebx
0x50D512: lea     ebx, [esp+220h+ArgList]
0x50D516: push    ebx; UInt16
0x50D517: push    ebp; l
0x50D518: push    edi; a6
0x50D519: push    esi; a5
0x50D51A: push    edx; a4
0x50D51B: mov     edx, [esp+234h+a3]
0x50D51F: push    edx; a3
0x50D520: push    ecx; a2
0x50D521: push    eax; a1
0x50D522: mov     [esp+240h+var_20C], 0
0x50D52A: call    Script_ExtractArgs
0x50D52F: add     esp, 24h
0x50D532: test    al, al
0x50D534: jz      loc_50D5BC
0x50D53A: mov     eax, ds:0B33398h
0x50D53F: mov     esi, [eax+24h]
0x50D542: test    esi, esi
0x50D544: jz      short loc_50D554
0x50D546: mov     ecx, esi
0x50D548: call    sub_6A9B40
0x50D54D: mov     ecx, esi
0x50D54F: call    sub_6A8D00
0x50D554: mov     bl, ds:0B42E97h
0x50D55A: mov     ecx, ds:0B33398h
0x50D560: mov     byte ptr ds:0B42E97h, 0
0x50D567: call    sub_40D4D0
0x50D56C: mov     ecx, ds:0B33A10h
0x50D572: call    sub_432860
0x50D577: cmp     [esp+21Ch+var_20C], 0
0x50D57C: push    0; char
0x50D57E: push    1; float
0x50D580: push    0; int
0x50D582: setnz   cl
0x50D585: push    0; int
0x50D587: push    0; int
0x50D589: lea     edx, [esp+230h+ArgList]
0x50D58D: push    ecx; int
0x50D58E: push    edx; ArgList
0x50D58F: call    sub_410BA0
0x50D594: mov     ecx, ds:0B33A10h
0x50D59A: add     esp, 1Ch
0x50D59D: call    sub_432890
0x50D5A2: test    esi, esi
0x50D5A4: mov     ds:0B42E97h, bl
0x50D5AA: jz      short loc_50D5BA
0x50D5AC: mov     ecx, esi
0x50D5AE: call    sub_6A9C00
0x50D5B3: mov     ecx, esi
0x50D5B5: call    sub_6A8D50
0x50D5BA: mov     al, 1
0x50D5BC: mov     ecx, [esp+21Ch+var_4]
0x50D5C3: pop     edi
0x50D5C4: pop     esi
0x50D5C5: pop     ebp
0x50D5C6: pop     ebx
0x50D5C7: xor     ecx, esp
0x50D5C9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50D5CE: add     esp, 20Ch
0x50D5D4: retn
