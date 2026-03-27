0x73D5E0: push    0FFFFFFFFh
0x73D5E2: push    offset SEH_8C8970
0x73D5E7: mov     eax, large fs:0
0x73D5ED: push    eax
0x73D5EE: push    ecx
0x73D5EF: push    esi
0x73D5F0: push    edi
0x73D5F1: mov     eax, ds:0B30AACh
0x73D5F6: xor     eax, esp
0x73D5F8: push    eax
0x73D5F9: lea     eax, [esp+1Ch+var_C]
0x73D5FD: mov     large fs:0, eax
0x73D603: mov     edi, ecx
0x73D605: push    1Ch; Size
0x73D607: call    FormHeapAlloc
0x73D60C: mov     esi, eax
0x73D60E: add     esp, 4
0x73D611: mov     [esp+1Ch+var_10], esi
0x73D615: test    esi, esi
0x73D617: mov     [esp+1Ch+var_4], 0
0x73D61F: jz      short loc_73D636
0x73D621: mov     ecx, esi; this
0x73D623: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x73D628: mov     dword ptr [esi], offset ??_7NiSpecularProperty@@6B@; const NiSpecularProperty::`vftable'
0x73D62E: mov     word ptr [esi+18h], 0
0x73D634: jmp     short loc_73D638
0x73D636: xor     esi, esi
0x73D638: mov     eax, [esp+1Ch+arg_0]
0x73D63C: push    eax
0x73D63D: push    esi
0x73D63E: mov     ecx, edi
0x73D640: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73D648: call    sub_700A60
0x73D64D: mov     cx, [edi+18h]
0x73D651: mov     [esi+18h], cx
0x73D655: mov     eax, esi
0x73D657: mov     ecx, [esp+1Ch+var_C]
0x73D65B: mov     large fs:0, ecx
0x73D662: pop     ecx
0x73D663: pop     edi
0x73D664: pop     esi
0x73D665: add     esp, 10h
0x73D668: retn    4
