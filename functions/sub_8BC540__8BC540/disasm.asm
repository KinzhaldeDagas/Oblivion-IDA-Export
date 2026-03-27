0x8BC540: sub     esp, 1Ch
0x8BC543: push    edi
0x8BC544: mov     edi, [esp+20h+arg_C]
0x8BC548: xor     cl, cl
0x8BC54A: test    edi, edi
0x8BC54C: jz      loc_8BC653
0x8BC552: mov     al, [esp+20h+arg_10]
0x8BC556: test    al, al
0x8BC558: mov     ecx, ds:0BA7D98h
0x8BC55E: push    ebx
0x8BC55F: push    esi
0x8BC560: push    6
0x8BC562: push    6Ch ; 'l'
0x8BC564: jz      short loc_8BC57A
0x8BC566: mov     eax, [ecx]
0x8BC568: call    dword ptr [eax+10h]
0x8BC56B: mov     ecx, eax
0x8BC56D: mov     word ptr [eax+4], 6Ch ; 'l'
0x8BC573: call    sub_90D7D0
0x8BC578: jmp     short loc_8BC58C
0x8BC57A: mov     edx, [ecx]
0x8BC57C: call    dword ptr [edx+10h]
0x8BC57F: mov     ecx, eax
0x8BC581: mov     word ptr [eax+4], 6Ch ; 'l'
0x8BC587: call    sub_90D430
0x8BC58C: mov     edx, dword ptr [esp+20h+arg_10]
0x8BC590: lea     ecx, [esp+20h+var_8]
0x8BC594: push    ecx
0x8BC595: mov     ecx, [esp+24h+arg_C]
0x8BC599: mov     esi, eax
0x8BC59B: push    edx
0x8BC59C: mov     [esp+28h+var_8], offset off_A98360
0x8BC5A4: mov     [esp+28h+var_4], 0
0x8BC5AC: mov     dword ptr [esp+28h], 0
0x8BC5B4: mov     [esp+28h+arg_0], 80000000h
0x8BC5BC: mov     eax, [esi]
0x8BC5BE: push    ecx
0x8BC5BF: mov     ecx, esi
0x8BC5C1: call    dword ptr [eax+0Ch]
0x8BC5C4: lea     ecx, [esp+20h+var_10]
0x8BC5C8: mov     [esp+20h+var_14], 0
0x8BC5D0: call    sub_90BB90
0x8BC5D5: mov     eax, [esp+20h+arg_1C]
0x8BC5D9: test    eax, eax
0x8BC5DB: mov     byte ptr [esp+20h+arg_14], 73h ; 's'
0x8BC5E0: mov     byte ptr [esp+20h+arg_14+1], 6Eh ; 'n'
0x8BC5E5: mov     byte ptr [esp+20h+arg_14+2], 61h ; 'a'
0x8BC5EA: mov     byte ptr [esp+20h+arg_14+3], 70h ; 'p'
0x8BC5EF: mov     edx, [esp+20h+arg_14]
0x8BC5F3: mov     byte ptr [esp+20h+var_C], 1
0x8BC5F8: mov     [esp+20h+var_14], edx
0x8BC5FC: jz      short loc_8BC60E
0x8BC5FE: push    eax
0x8BC5FF: lea     ecx, [esp+24h+arg_14]
0x8BC603: call    sub_90BBA0
0x8BC608: mov     eax, [eax]
0x8BC60A: mov     [esp+20h+var_10], eax
0x8BC60E: mov     edx, [esi]
0x8BC610: lea     eax, [esp+20h+var_14]
0x8BC614: push    eax
0x8BC615: push    edi
0x8BC616: mov     ecx, esi
0x8BC618: call    dword ptr [edx+10h]
0x8BC61B: mov     ebx, eax
0x8BC61D: neg     ebx
0x8BC61F: sbb     bl, bl
0x8BC621: inc     bl
0x8BC623: cmp     word ptr [esi+4], 0
0x8BC628: jz      short loc_8BC63D
0x8BC62A: dec     word ptr [esi+6]
0x8BC62E: cmp     word ptr [esi+6], 0
0x8BC633: jnz     short loc_8BC63D
0x8BC635: mov     edx, [esi]
0x8BC637: push    1
0x8BC639: mov     ecx, esi
0x8BC63B: call    dword ptr [edx]
0x8BC63D: lea     ecx, [esp+28h+var_10]
0x8BC641: call    sub_8BC370
0x8BC646: mov     eax, [esp+28h+arg_0]
0x8BC64A: pop     esi
0x8BC64B: mov     [eax], bl
0x8BC64D: pop     ebx
0x8BC64E: pop     edi
0x8BC64F: add     esp, 1Ch
0x8BC652: retn
0x8BC653: mov     eax, [esp+20h+arg_0]
0x8BC657: mov     [eax], cl
0x8BC659: pop     edi
0x8BC65A: add     esp, 1Ch
0x8BC65D: retn
