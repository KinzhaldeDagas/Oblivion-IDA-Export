0x6F3310: push    ebp
0x6F3311: mov     ebp, esp
0x6F3313: push    0FFFFFFFFh
0x6F3315: push    offset SEH_6F3310
0x6F331A: mov     eax, large fs:0
0x6F3320: push    eax
0x6F3321: sub     esp, 0Ch
0x6F3324: push    ebx
0x6F3325: push    esi
0x6F3326: push    edi
0x6F3327: mov     eax, ds:0B30AACh
0x6F332C: xor     eax, ebp
0x6F332E: push    eax
0x6F332F: lea     eax, [ebp+var_C]
0x6F3332: mov     large fs:0, eax
0x6F3338: mov     [ebp+var_10], esp
0x6F333B: mov     esi, [ebp+arg_8]
0x6F333E: mov     edi, [ebp+arg_0]
0x6F3341: xor     ebx, ebx
0x6F3343: mov     [ebp+var_14], esi
0x6F3346: mov     [ebp+var_4], ebx
0x6F3349: lea     esp, [esp+0]
0x6F3350: cmp     edi, [ebp+arg_4]
0x6F3353: jz      short loc_6F339E
0x6F3355: mov     [ebp+arg_0], esi
0x6F3358: mov     [ebp+var_18], esi
0x6F335B: cmp     esi, ebx
0x6F335D: mov     byte ptr [ebp+var_4], 1
0x6F3361: jz      short loc_6F336B
0x6F3363: push    edi
0x6F3364: mov     ecx, esi
0x6F3366: call    sub_6F2D30
0x6F336B: add     esi, 2Ch ; ','
0x6F336E: mov     byte ptr [ebp+var_4], bl
0x6F3371: mov     [ebp+arg_8], esi
0x6F3374: add     edi, 2Ch ; ','
0x6F3377: jmp     short loc_6F3350
0x6F3379: mov     esi, [ebp+var_14]
0x6F337C: mov     edi, [ebp+arg_8]
0x6F337F: cmp     esi, edi
0x6F3381: jz      short loc_6F3395
0x6F3383: mov     ebx, [ebp+arg_C]
0x6F3386: push    esi
0x6F3387: mov     ecx, ebx
0x6F3389: call    sub_557130
0x6F338E: add     esi, 2Ch ; ','
0x6F3391: cmp     esi, edi
0x6F3393: jnz     short loc_6F3386
0x6F3395: xor     ebx, ebx
0x6F3397: push    ebx
0x6F3398: push    ebx
0x6F3399: call    ThrowException??
0x6F339E: mov     eax, esi
0x6F33A0: mov     ecx, [ebp+var_C]
0x6F33A3: mov     large fs:0, ecx
0x6F33AA: pop     ecx
0x6F33AB: pop     edi
0x6F33AC: pop     esi
0x6F33AD: pop     ebx
0x6F33AE: mov     esp, ebp
0x6F33B0: pop     ebp
0x6F33B1: retn
