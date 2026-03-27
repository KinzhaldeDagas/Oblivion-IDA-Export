0x8D4020: sub     esp, 408h
0x8D4026: push    ebx
0x8D4027: mov     ebx, [esp+40Ch+arg_8]
0x8D402E: mov     eax, [ebx+4]
0x8D4031: push    ebp
0x8D4032: xor     ebp, ebp
0x8D4034: cmp     eax, ebp
0x8D4036: push    esi
0x8D4037: push    edi
0x8D4038: mov     [esp+418h+var_408], ebp
0x8D403C: jle     short loc_8D40A8
0x8D403E: mov     edi, [esp+418h+arg_4]
0x8D4045: mov     esi, [ebx]
0x8D4047: mov     eax, [esi+ebp]
0x8D404A: mov     cl, [eax+18h]
0x8D404D: add     esi, ebp
0x8D404F: cmp     cl, 4
0x8D4052: jnz     short loc_8D4095
0x8D4054: mov     edx, [esi+4]
0x8D4057: mov     eax, [edi+4]
0x8D405A: lea     ecx, [esp+418h+var_400]
0x8D405E: push    ecx
0x8D405F: push    100h
0x8D4064: push    edx
0x8D4065: push    eax
0x8D4066: call    sub_91FF70
0x8D406B: mov     ecx, [esp+428h+arg_C]
0x8D4072: push    ecx; int
0x8D4073: push    eax; int
0x8D4074: mov     eax, [edi]
0x8D4076: mov     ecx, [eax+8]
0x8D4079: lea     edx, [esp+430h+var_400]
0x8D407D: push    edx; int
0x8D407E: push    esi; int
0x8D407F: push    ecx; float
0x8D4080: lea     edx, [esp+43Ch+var_404]
0x8D4084: push    edx; int
0x8D4085: call    sub_8D3980
0x8D408A: mov     al, byte ptr [esp+440h+var_404]
0x8D408E: add     esp, 28h
0x8D4091: test    al, al
0x8D4093: jz      short loc_8D40BD
0x8D4095: mov     eax, [esp+418h+var_408]
0x8D4099: mov     ecx, [ebx+4]
0x8D409C: inc     eax
0x8D409D: add     ebp, 0Ch
0x8D40A0: cmp     eax, ecx
0x8D40A2: mov     [esp+418h+var_408], eax
0x8D40A6: jl      short loc_8D4045
0x8D40A8: mov     eax, [esp+418h+arg_0]
0x8D40AF: pop     edi
0x8D40B0: pop     esi
0x8D40B1: pop     ebp
0x8D40B2: mov     byte ptr [eax], 1
0x8D40B5: pop     ebx
0x8D40B6: add     esp, 408h
0x8D40BC: retn
0x8D40BD: mov     eax, [esp+418h+arg_0]
0x8D40C4: pop     edi
0x8D40C5: pop     esi
0x8D40C6: pop     ebp
0x8D40C7: mov     byte ptr [eax], 0
0x8D40CA: pop     ebx
0x8D40CB: add     esp, 408h
0x8D40D1: retn
