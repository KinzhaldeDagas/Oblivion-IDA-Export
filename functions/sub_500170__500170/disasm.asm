0x500170: push    ebx
0x500171: push    ebp
0x500172: mov     ebp, [esp+8+arg_0]
0x500176: test    ebp, ebp
0x500178: push    esi
0x500179: mov     ebx, ecx
0x50017B: jz      loc_500269
0x500181: mov     esi, [esp+0Ch+arg_4]
0x500185: test    esi, esi
0x500187: jz      loc_500269
0x50018D: cmp     dword ptr [esi], 0
0x500190: mov     al, [ebp+28h]
0x500193: mov     [esi+38h], al
0x500196: mov     cl, [ebp+29h]
0x500199: mov     [esi+39h], cl
0x50019C: mov     edx, [ebp+24h]
0x50019F: push    edi; ArgList
0x5001A0: mov     [esi+34h], edx
0x5001A3: jz      short loc_500219
0x5001A5: push    esi
0x5001A6: mov     ecx, ebx
0x5001A8: call    sub_4FF4C0
0x5001AD: cmp     eax, 0FFFFh
0x5001B2: jnz     short loc_5001A5
0x5001B4: cmp     dword ptr [esi+14h], 0
0x5001B8: jg      short loc_5001F9
0x5001BA: cmp     byte ptr [esi+18h], 0
0x5001BE: mov     dword ptr [esi+1Ch], 0
0x5001C5: jnz     short loc_500219
0x5001C7: lea     edi, [esi+50h]
0x5001CA: test    edi, edi
0x5001CC: jz      short loc_500202
0x5001CE: mov     ecx, edi
0x5001D0: call    BSSimpleList_IsEmpty
0x5001D5: test    al, al
0x5001D7: jnz     short loc_500202
0x5001D9: mov     eax, [edi]
0x5001DB: mov     eax, [eax+410h]
0x5001E1: cmp     eax, 0FFFFh
0x5001E6: jz      short loc_5001F9
0x5001E8: cmp     eax, 1Dh
0x5001EB: jnz     short loc_500202
0x5001ED: push    esi
0x5001EE: mov     ecx, ebx
0x5001F0: call    sub_4FD2A0
0x5001F5: test    al, al
0x5001F7: jnz     short loc_500219
0x5001F9: pop     edi
0x5001FA: pop     esi
0x5001FB: pop     ebp
0x5001FC: xor     al, al
0x5001FE: pop     ebx
0x5001FF: retn    8
0x500202: push    offset aYouNeedToStart; "You need to start scripts with \"script"...
0x500207: push    esi; int
0x500208: call    sub_4FCE30
0x50020D: add     esp, 8
0x500210: pop     edi
0x500211: pop     esi
0x500212: pop     ebp
0x500213: xor     al, al
0x500215: pop     ebx
0x500216: retn    8
0x500219: lea     edi, [esi+50h]
0x50021C: test    edi, edi
0x50021E: jz      short loc_500247
0x500220: cmp     dword ptr [edi+4], 0
0x500224: jnz     short loc_50022B
0x500226: cmp     dword ptr [edi], 0
0x500229: jz      short loc_500247
0x50022B: mov     eax, [edi]
0x50022D: mov     ecx, [eax]
0x50022F: push    eax
0x500230: push    esi
0x500231: mov     [esi+1Ch], ecx
0x500234: push    ebp
0x500235: mov     ecx, ebx
0x500237: call    sub_4FF710
0x50023C: test    al, al
0x50023E: jz      short loc_5001F9
0x500240: mov     edi, [edi+4]
0x500243: test    edi, edi
0x500245: jnz     short loc_500220
0x500247: mov     edx, [esi+24h]
0x50024A: mov     ecx, esi; int
0x50024C: mov     [esi+30h], edx
0x50024F: call    sub_4FD060
0x500254: test    al, al
0x500256: jz      short loc_5001F9
0x500258: push    esi
0x500259: mov     ecx, ebp
0x50025B: call    sub_4FC850
0x500260: pop     edi
0x500261: pop     esi
0x500262: pop     ebp
0x500263: mov     al, 1
0x500265: pop     ebx
0x500266: retn    8
0x500269: pop     esi
0x50026A: pop     ebp
0x50026B: xor     al, al
0x50026D: pop     ebx
0x50026E: retn    8
