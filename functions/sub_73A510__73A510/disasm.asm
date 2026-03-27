0x73A510: push    0FFFFFFFFh
0x73A512: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x73A517: mov     eax, large fs:0
0x73A51D: push    eax
0x73A51E: push    ecx
0x73A51F: push    ebx
0x73A520: push    ebp
0x73A521: push    esi
0x73A522: push    edi
0x73A523: mov     eax, ds:0B30AACh
0x73A528: xor     eax, esp
0x73A52A: push    eax
0x73A52B: lea     eax, [esp+24h+var_C]
0x73A52F: mov     large fs:0, eax
0x73A535: mov     esi, ecx
0x73A537: push    0Ch; Size
0x73A539: call    FormHeapAlloc
0x73A53E: add     esp, 4
0x73A541: mov     [esp+24h+var_10], eax
0x73A545: xor     ebx, ebx
0x73A547: cmp     eax, ebx
0x73A549: mov     [esp+24h+var_4], ebx
0x73A54D: jz      short loc_73A563
0x73A54F: mov     ecx, [esp+24h+arg_0]
0x73A553: push    ecx
0x73A554: mov     ecx, eax
0x73A556: call    sub_738920
0x73A55B: mov     ecx, eax
0x73A55D: mov     [esp+24h+var_10], ecx
0x73A561: jmp     short loc_73A569
0x73A563: mov     [esp+24h+var_10], ebx
0x73A567: mov     ecx, ebx
0x73A569: cmp     [esp+24h+arg_0], ebx
0x73A56D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73A575: jbe     short loc_73A5BF
0x73A577: xor     ebp, ebp
0x73A579: cmp     ebx, [ecx+4]
0x73A57C: jb      short loc_73A582
0x73A57E: xor     edi, edi
0x73A580: jmp     short loc_73A586
0x73A582: mov     edi, [ecx]
0x73A584: add     edi, ebp
0x73A586: mov     eax, [esi+4]
0x73A589: cmp     [esi+8], eax
0x73A58C: jnz     short loc_73A5A7
0x73A58E: test    eax, eax
0x73A590: jbe     short loc_73A596
0x73A592: add     eax, eax
0x73A594: jmp     short loc_73A59B
0x73A596: mov     eax, 1
0x73A59B: push    eax
0x73A59C: mov     ecx, esi
0x73A59E: call    sub_6E8CA0
0x73A5A3: mov     ecx, [esp+24h+var_10]
0x73A5A7: mov     edx, [esi+8]
0x73A5AA: mov     eax, [esi]
0x73A5AC: mov     [eax+edx*4], edi
0x73A5AF: add     dword ptr [esi+8], 1
0x73A5B3: add     ebx, 1
0x73A5B6: add     ebp, 14h
0x73A5B9: cmp     ebx, [esp+24h+arg_0]
0x73A5BD: jb      short loc_73A579
0x73A5BF: mov     edx, [esi+14h]
0x73A5C2: mov     [ecx+8], edx
0x73A5C5: mov     [esi+14h], ecx
0x73A5C8: mov     ecx, [esp+24h+var_C]
0x73A5CC: mov     large fs:0, ecx
0x73A5D3: pop     ecx
0x73A5D4: pop     edi
0x73A5D5: pop     esi
0x73A5D6: pop     ebp
0x73A5D7: pop     ebx
0x73A5D8: add     esp, 10h
0x73A5DB: retn    4
