0x805670: push    0FFFFFFFFh
0x805672: push    offset SEH_7E9A20
0x805677: mov     eax, large fs:0
0x80567D: push    eax
0x80567E: sub     esp, 0Ch
0x805681: push    ebx
0x805682: push    esi
0x805683: push    edi
0x805684: mov     eax, ds:0B30AACh
0x805689: xor     eax, esp
0x80568B: push    eax
0x80568C: lea     eax, [esp+28h+var_C]
0x805690: mov     large fs:0, eax
0x805696: mov     [esp+28h+var_10], ecx
0x80569A: lea     edi, [ecx+7Ch]
0x80569D: mov     [esp+28h+var_18], 2
0x8056A5: or      ebx, 0FFFFFFFFh
0x8056A8: jmp     short loc_8056B0
0x8056AA: align 10h
0x8056B0: lea     eax, [esp+28h+var_14]
0x8056B4: push    eax
0x8056B5: call    sub_7606A0
0x8056BA: add     esp, 4
0x8056BD: mov     esi, eax
0x8056BF: mov     ecx, [edi]
0x8056C1: cmp     ecx, [esi]
0x8056C3: mov     [esp+28h+var_4], 0
0x8056CB: jz      short loc_8056E7
0x8056CD: test    ecx, ecx
0x8056CF: jz      short loc_8056DB
0x8056D1: add     [ecx+60h], ebx
0x8056D4: jnz     short loc_8056DB
0x8056D6: call    sub_7604D0
0x8056DB: mov     eax, [esi]
0x8056DD: test    eax, eax
0x8056DF: mov     [edi], eax
0x8056E1: jz      short loc_8056E7
0x8056E3: add     dword ptr [eax+60h], 1
0x8056E7: mov     eax, [esp+28h+var_14]
0x8056EB: test    eax, eax
0x8056ED: mov     [esp+28h+var_4], ebx
0x8056F1: jz      short loc_805705
0x8056F3: add     [eax+60h], ebx
0x8056F6: mov     ecx, eax
0x8056F8: add     eax, 60h ; '`'
0x8056FB: cmp     dword ptr [eax], 0
0x8056FE: jnz     short loc_805705
0x805700: call    sub_7604D0
0x805705: add     edi, 4
0x805708: sub     [esp+28h+var_18], 1
0x80570D: jnz     short loc_8056B0
0x80570F: mov     ecx, [esp+28h+var_10]
0x805713: mov     edx, [ecx]
0x805715: mov     eax, [edx+0A8h]
0x80571B: call    eax
0x80571D: mov     al, 1
0x80571F: mov     ecx, [esp+28h+var_C]
0x805723: mov     large fs:0, ecx
0x80572A: pop     ecx
0x80572B: pop     edi
0x80572C: pop     esi
0x80572D: pop     ebx
0x80572E: add     esp, 18h
0x805731: retn
