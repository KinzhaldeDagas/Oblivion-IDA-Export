0x49E500: push    0FFFFFFFFh
0x49E502: push    offset SEH_49E500
0x49E507: mov     eax, large fs:0
0x49E50D: push    eax
0x49E50E: push    ecx
0x49E50F: push    ebx
0x49E510: push    esi
0x49E511: push    edi
0x49E512: mov     eax, ds:0B30AACh
0x49E517: xor     eax, esp
0x49E519: push    eax
0x49E51A: lea     eax, [esp+20h+var_C]
0x49E51E: mov     large fs:0, eax
0x49E524: mov     edi, ecx
0x49E526: mov     [esp+20h+var_10], edi
0x49E52A: mov     [esp+20h+var_4], 4
0x49E532: call    sub_49D1A0
0x49E537: mov     esi, [edi+24h]
0x49E53A: test    esi, esi
0x49E53C: mov     ebx, ds:0A2807Ch
0x49E542: mov     byte ptr [esp+20h+var_4], 3
0x49E547: jz      short loc_49E561
0x49E549: lea     eax, [esi+4]
0x49E54C: push    eax; lpAddend
0x49E54D: call    ebx ; InterlockedDecrement
0x49E54F: test    eax, eax
0x49E551: jnz     short loc_49E561
0x49E553: test    esi, esi
0x49E555: jz      short loc_49E561
0x49E557: mov     edx, [esi]
0x49E559: mov     eax, [edx]
0x49E55B: push    1
0x49E55D: mov     ecx, esi
0x49E55F: call    eax
0x49E561: mov     esi, [edi+20h]
0x49E564: test    esi, esi
0x49E566: mov     byte ptr [esp+20h+var_4], 2
0x49E56B: jz      short loc_49E585
0x49E56D: lea     ecx, [esi+4]
0x49E570: push    ecx; lpAddend
0x49E571: call    ebx ; InterlockedDecrement
0x49E573: test    eax, eax
0x49E575: jnz     short loc_49E585
0x49E577: test    esi, esi
0x49E579: jz      short loc_49E585
0x49E57B: mov     edx, [esi]
0x49E57D: mov     eax, [edx]
0x49E57F: push    1
0x49E581: mov     ecx, esi
0x49E583: call    eax
0x49E585: mov     esi, [edi+1Ch]
0x49E588: test    esi, esi
0x49E58A: mov     byte ptr [esp+20h+var_4], 1
0x49E58F: jz      short loc_49E5A9
0x49E591: lea     ecx, [esi+4]
0x49E594: push    ecx; lpAddend
0x49E595: call    ebx ; InterlockedDecrement
0x49E597: test    eax, eax
0x49E599: jnz     short loc_49E5A9
0x49E59B: test    esi, esi
0x49E59D: jz      short loc_49E5A9
0x49E59F: mov     edx, [esi]
0x49E5A1: mov     eax, [edx]
0x49E5A3: push    1
0x49E5A5: mov     ecx, esi
0x49E5A7: call    eax
0x49E5A9: mov     esi, [edi+10h]
0x49E5AC: test    esi, esi
0x49E5AE: mov     byte ptr [esp+20h+var_4], 0
0x49E5B3: jz      short loc_49E5CD
0x49E5B5: lea     ecx, [esi+4]
0x49E5B8: push    ecx; lpAddend
0x49E5B9: call    ebx ; InterlockedDecrement
0x49E5BB: test    eax, eax
0x49E5BD: jnz     short loc_49E5CD
0x49E5BF: test    esi, esi
0x49E5C1: jz      short loc_49E5CD
0x49E5C3: mov     edx, [esi]
0x49E5C5: mov     eax, [edx]
0x49E5C7: push    1
0x49E5C9: mov     ecx, esi
0x49E5CB: call    eax
0x49E5CD: mov     edi, [edi+4]
0x49E5D0: test    edi, edi
0x49E5D2: mov     [esp+20h+var_4], 0FFFFFFFFh
0x49E5DA: jz      short loc_49E5F4
0x49E5DC: lea     ecx, [edi+4]
0x49E5DF: push    ecx; lpAddend
0x49E5E0: call    ebx ; InterlockedDecrement
0x49E5E2: test    eax, eax
0x49E5E4: jnz     short loc_49E5F4
0x49E5E6: test    edi, edi
0x49E5E8: jz      short loc_49E5F4
0x49E5EA: mov     edx, [edi]
0x49E5EC: mov     eax, [edx]
0x49E5EE: push    1
0x49E5F0: mov     ecx, edi
0x49E5F2: call    eax
0x49E5F4: mov     ecx, dword ptr [esp+20h+var_C]
0x49E5F8: mov     large fs:0, ecx
0x49E5FF: pop     ecx
0x49E600: pop     edi
0x49E601: pop     esi
0x49E602: pop     ebx
0x49E603: add     esp, 10h
0x49E606: retn
