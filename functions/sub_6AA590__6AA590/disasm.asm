0x6AA590: push    0FFFFFFFFh
0x6AA592: push    offset SEH_6AA590
0x6AA597: mov     eax, large fs:0
0x6AA59D: push    eax
0x6AA59E: push    ecx
0x6AA59F: push    ebx
0x6AA5A0: push    esi
0x6AA5A1: push    edi
0x6AA5A2: mov     eax, ds:0B30AACh
0x6AA5A7: xor     eax, esp
0x6AA5A9: push    eax
0x6AA5AA: lea     eax, [esp+20h+var_C]
0x6AA5AE: mov     large fs:0, eax
0x6AA5B4: mov     esi, ecx
0x6AA5B6: mov     [esp+20h+var_10], esi
0x6AA5BA: mov     [esp+20h+var_4], 0
0x6AA5C2: mov     dword ptr [esi+10h], 0
0x6AA5C9: mov     eax, [esp+20h+arg_0]
0x6AA5CD: mov     ecx, [esp+20h+arg_4]
0x6AA5D1: mov     edx, [esp+20h+arg_8]
0x6AA5D5: mov     ebx, [esp+20h+arg_10]
0x6AA5D9: mov     [esi], eax
0x6AA5DB: mov     eax, [esp+20h+arg_C]
0x6AA5DF: mov     [esi+4], ecx
0x6AA5E2: mov     [esi+8], edx
0x6AA5E5: mov     [esi+0Ch], eax
0x6AA5E8: mov     edi, [esi+10h]
0x6AA5EB: cmp     edi, ebx
0x6AA5ED: mov     byte ptr [esp+20h+var_4], 1
0x6AA5F2: jz      short loc_6AA625
0x6AA5F4: test    edi, edi
0x6AA5F6: jz      short loc_6AA614
0x6AA5F8: lea     ecx, [edi+4]
0x6AA5FB: push    ecx; lpAddend
0x6AA5FC: call    dword ptr ds:0A2807Ch
0x6AA602: test    eax, eax
0x6AA604: jnz     short loc_6AA614
0x6AA606: test    edi, edi
0x6AA608: jz      short loc_6AA614
0x6AA60A: mov     edx, [edi]
0x6AA60C: mov     eax, [edx]
0x6AA60E: push    1
0x6AA610: mov     ecx, edi
0x6AA612: call    eax
0x6AA614: test    ebx, ebx
0x6AA616: mov     [esi+10h], ebx
0x6AA619: jz      short loc_6AA625
0x6AA61B: lea     ecx, [ebx+4]
0x6AA61E: push    ecx; lpAddend
0x6AA61F: call    dword ptr ds:0A28078h
0x6AA625: test    ebx, ebx
0x6AA627: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6AA62F: jz      short loc_6AA649
0x6AA631: lea     edx, [ebx+4]
0x6AA634: push    edx; lpAddend
0x6AA635: call    dword ptr ds:0A2807Ch
0x6AA63B: test    eax, eax
0x6AA63D: jnz     short loc_6AA649
0x6AA63F: mov     eax, [ebx]
0x6AA641: mov     edx, [eax]
0x6AA643: push    1
0x6AA645: mov     ecx, ebx
0x6AA647: call    edx
0x6AA649: mov     eax, esi
0x6AA64B: mov     ecx, dword ptr [esp+20h+var_C]
0x6AA64F: mov     large fs:0, ecx
0x6AA656: pop     ecx
0x6AA657: pop     edi
0x6AA658: pop     esi
0x6AA659: pop     ebx
0x6AA65A: add     esp, 10h
0x6AA65D: retn    14h
