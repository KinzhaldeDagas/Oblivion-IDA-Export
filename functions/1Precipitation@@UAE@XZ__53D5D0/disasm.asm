0x53D5D0: push    0FFFFFFFFh
0x53D5D2: push    offset ??1Sky@@UAE@XZ_SEH
0x53D5D7: mov     eax, large fs:0
0x53D5DD: push    eax
0x53D5DE: push    ecx
0x53D5DF: push    ebx
0x53D5E0: push    ebp
0x53D5E1: push    esi
0x53D5E2: push    edi
0x53D5E3: mov     eax, ds:0B30AACh
0x53D5E8: xor     eax, esp
0x53D5EA: push    eax
0x53D5EB: lea     eax, [esp+24h+var_C]
0x53D5EF: mov     large fs:0, eax
0x53D5F5: mov     esi, ecx
0x53D5F7: mov     [esp+24h+var_10], esi
0x53D5FB: mov     dword ptr [esi], offset ??_7Precipitation@@6B@; const Precipitation::`vftable'
0x53D601: mov     edi, [esi+4]
0x53D604: mov     ebp, ds:0A2807Ch
0x53D60A: xor     ebx, ebx
0x53D60C: cmp     edi, ebx
0x53D60E: mov     [esp+24h+var_4], 1
0x53D616: jz      short loc_53D633
0x53D618: lea     eax, [edi+4]
0x53D61B: push    eax; lpAddend
0x53D61C: call    ebp ; InterlockedDecrement
0x53D61E: test    eax, eax
0x53D620: jnz     short loc_53D630
0x53D622: cmp     edi, ebx
0x53D624: jz      short loc_53D630
0x53D626: mov     edx, [edi]
0x53D628: mov     eax, [edx]
0x53D62A: push    1
0x53D62C: mov     ecx, edi
0x53D62E: call    eax
0x53D630: mov     [esi+4], ebx
0x53D633: mov     edi, [esi+8]
0x53D636: cmp     edi, ebx
0x53D638: jz      short loc_53D655
0x53D63A: lea     ecx, [edi+4]
0x53D63D: push    ecx; lpAddend
0x53D63E: call    ebp ; InterlockedDecrement
0x53D640: test    eax, eax
0x53D642: jnz     short loc_53D652
0x53D644: cmp     edi, ebx
0x53D646: jz      short loc_53D652
0x53D648: mov     edx, [edi]
0x53D64A: mov     eax, [edx]
0x53D64C: push    1
0x53D64E: mov     ecx, edi
0x53D650: call    eax
0x53D652: mov     [esi+8], ebx
0x53D655: mov     [esi+14h], ebx
0x53D658: mov     edi, [esi+8]
0x53D65B: cmp     edi, ebx
0x53D65D: mov     byte ptr [esp+24h+var_4], bl
0x53D661: jz      short loc_53D67B
0x53D663: lea     ecx, [edi+4]
0x53D666: push    ecx; lpAddend
0x53D667: call    ebp ; InterlockedDecrement
0x53D669: test    eax, eax
0x53D66B: jnz     short loc_53D67B
0x53D66D: cmp     edi, ebx
0x53D66F: jz      short loc_53D67B
0x53D671: mov     edx, [edi]
0x53D673: mov     eax, [edx]
0x53D675: push    1
0x53D677: mov     ecx, edi
0x53D679: call    eax
0x53D67B: mov     esi, [esi+4]
0x53D67E: cmp     esi, ebx
0x53D680: mov     [esp+24h+var_4], 0FFFFFFFFh
0x53D688: jz      short loc_53D6A2
0x53D68A: lea     ecx, [esi+4]
0x53D68D: push    ecx; lpAddend
0x53D68E: call    ebp ; InterlockedDecrement
0x53D690: test    eax, eax
0x53D692: jnz     short loc_53D6A2
0x53D694: cmp     esi, ebx
0x53D696: jz      short loc_53D6A2
0x53D698: mov     edx, [esi]
0x53D69A: mov     eax, [edx]
0x53D69C: push    1
0x53D69E: mov     ecx, esi
0x53D6A0: call    eax
0x53D6A2: mov     ecx, dword ptr [esp+24h+var_C]
0x53D6A6: mov     large fs:0, ecx
0x53D6AD: pop     ecx
0x53D6AE: pop     edi
0x53D6AF: pop     esi
0x53D6B0: pop     ebp
0x53D6B1: pop     ebx
0x53D6B2: add     esp, 10h
0x53D6B5: retn
