0x8B7830: push    0FFFFFFFFh
0x8B7832: push    offset SEH_8B7830
0x8B7837: mov     eax, large fs:0
0x8B783D: push    eax
0x8B783E: sub     esp, 10h
0x8B7841: push    ebx
0x8B7842: push    ebp
0x8B7843: push    esi
0x8B7844: push    edi
0x8B7845: mov     eax, ds:0B30AACh
0x8B784A: xor     eax, esp
0x8B784C: push    eax
0x8B784D: lea     eax, [esp+30h+var_C]
0x8B7851: mov     large fs:0, eax
0x8B7857: mov     edi, ecx
0x8B7859: mov     eax, [edi]
0x8B785B: mov     edx, [eax+74h]
0x8B785E: lea     ecx, [esp+30h+var_1C]
0x8B7862: push    ecx
0x8B7863: mov     ecx, edi
0x8B7865: call    edx
0x8B7867: xor     ebp, ebp
0x8B7869: mov     esi, eax
0x8B786B: mov     [esp+30h+var_18], ebp
0x8B786F: mov     [esp+30h+var_14], ebp
0x8B7873: mov     [esp+30h+var_10], 80000000h
0x8B787B: cmp     esi, ebp
0x8B787D: mov     [esp+30h+var_4], ebp
0x8B7881: jz      short loc_8B78A9
0x8B7883: mov     eax, [esi+4]
0x8B7886: mov     [esp+30h+var_18], eax
0x8B788A: mov     ecx, [esi+8]
0x8B788D: mov     [esi+4], ebp
0x8B7890: mov     eax, [esp+30h+var_14]
0x8B7894: mov     [esp+30h+var_14], ecx
0x8B7898: mov     edx, [esi+0Ch]
0x8B789B: mov     [esi+8], eax
0x8B789E: mov     eax, [esp+30h+var_10]
0x8B78A2: mov     [esp+30h+var_10], edx
0x8B78A6: mov     [esi+0Ch], eax
0x8B78A9: mov     ebx, [esp+30h+arg_0]
0x8B78AD: push    ebx
0x8B78AE: mov     ecx, edi
0x8B78B0: call    sub_8A2610
0x8B78B5: cmp     esi, ebp
0x8B78B7: jz      short loc_8B78D5
0x8B78B9: lea     eax, [esp+30h+var_18]
0x8B78BD: push    eax
0x8B78BE: push    ebx
0x8B78BF: call    sub_8E81B0
0x8B78C4: mov     edx, [edi]
0x8B78C6: mov     eax, [esp+38h+var_1C]
0x8B78CA: mov     edx, [edx+64h]
0x8B78CD: add     esp, 8
0x8B78D0: push    eax
0x8B78D1: mov     ecx, edi
0x8B78D3: call    edx
0x8B78D5: mov     eax, [esp+30h+var_10]
0x8B78D9: test    eax, eax
0x8B78DB: mov     [esp+30h+var_4], 0FFFFFFFFh
0x8B78E3: js      short loc_8B791A
0x8B78E5: mov     ecx, ds:0BA9DE4h
0x8B78EB: mov     edx, large fs:2Ch
0x8B78F2: mov     ecx, [edx+ecx*4]
0x8B78F5: mov     ecx, [ecx+19Ch]
0x8B78FB: cmp     ecx, ebp
0x8B78FD: jnz     short loc_8B7905
0x8B78FF: mov     ecx, ds:0BA7D9Ch
0x8B7905: mov     edx, [esp+30h+var_18]
0x8B7909: and     eax, 3FFFFFFFh
0x8B790E: push    14h
0x8B7910: shl     eax, 4
0x8B7913: push    eax
0x8B7914: push    edx
0x8B7915: call    sub_8A75D0
0x8B791A: mov     ecx, [esp+30h+var_C]
0x8B791E: mov     large fs:0, ecx
0x8B7925: pop     ecx
0x8B7926: pop     edi
0x8B7927: pop     esi
0x8B7928: pop     ebp
0x8B7929: pop     ebx
0x8B792A: add     esp, 1Ch
0x8B792D: retn    4
