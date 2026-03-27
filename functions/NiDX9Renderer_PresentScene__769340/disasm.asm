0x769340: push    ecx
0x769341: cmp     byte ptr [ecx+6F0h], 0
0x769348: mov     [esp+4+var_4], ecx
0x76934B: jnz     loc_7693D4
0x769351: xor     edx, edx
0x769353: cmp     [ecx+900h], edx
0x769359: jz      short loc_7693D4
0x76935B: push    ebx
0x76935C: mov     ebx, ds:0A2807Ch
0x769362: push    ebp
0x769363: push    esi
0x769364: push    edi
0x769365: lea     edi, [ecx+8F4h]
0x76936B: jmp     short loc_769372
0x76936D: align 10h
0x769370: xor     edx, edx
0x769372: mov     ebp, [edi+4]
0x769375: mov     eax, [ebp+0]
0x769378: cmp     eax, edx
0x76937A: mov     [edi+4], eax
0x76937D: jz      short loc_769384
0x76937F: mov     [eax+4], edx
0x769382: jmp     short loc_769387
0x769384: mov     [edi+8], edx
0x769387: mov     esi, [ebp+8]
0x76938A: cmp     esi, edx
0x76938C: jz      short loc_769398
0x76938E: lea     eax, [esi+4]
0x769391: push    eax; lpAddend
0x769392: call    dword ptr ds:0A28078h
0x769398: mov     edx, [edi]
0x76939A: mov     eax, [edx+8]
0x76939D: push    ebp
0x76939E: mov     ecx, edi
0x7693A0: call    eax
0x7693A2: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x7693A6: mov     edx, [esi]
0x7693A8: mov     eax, [edx+28h]
0x7693AB: mov     ecx, esi
0x7693AD: call    eax
0x7693AF: lea     ecx, [esi+4]
0x7693B2: push    ecx; lpAddend
0x7693B3: call    ebx ; InterlockedDecrement
0x7693B5: test    eax, eax
0x7693B7: jnz     short loc_7693C3
0x7693B9: mov     edx, [esi]
0x7693BB: mov     eax, [edx]
0x7693BD: push    1
0x7693BF: mov     ecx, esi
0x7693C1: call    eax
0x7693C3: mov     ecx, [esp+14h+var_4]
0x7693C7: cmp     dword ptr [ecx+900h], 0
0x7693CE: jnz     short loc_769370
0x7693D0: pop     edi
0x7693D1: pop     esi
0x7693D2: pop     ebp
0x7693D3: pop     ebx
0x7693D4: mov     al, 1
0x7693D6: pop     ecx
0x7693D7: retn
