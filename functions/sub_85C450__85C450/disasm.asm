0x85C450: push    0FFFFFFFFh
0x85C452: push    offset SEH_85DE70
0x85C457: mov     eax, large fs:0
0x85C45D: push    eax
0x85C45E: push    ecx
0x85C45F: push    ebx
0x85C460: push    ebp
0x85C461: push    esi
0x85C462: push    edi
0x85C463: mov     eax, ds:0B30AACh
0x85C468: xor     eax, esp
0x85C46A: push    eax
0x85C46B: lea     eax, [esp+24h+var_C]
0x85C46F: mov     large fs:0, eax
0x85C475: mov     ebx, ecx
0x85C477: mov     esi, ds:0B477A4h
0x85C47D: mov     eax, [esi+24h]
0x85C480: mov     ecx, [esp+24h+arg_C]
0x85C484: mov     edi, [eax]
0x85C486: push    0
0x85C488: push    ecx
0x85C489: mov     ecx, ebx
0x85C48B: mov     [esp+2Ch+var_10], edi
0x85C48F: call    sub_848FD0
0x85C494: mov     edi, [edi+4]
0x85C497: mov     ebp, eax
0x85C499: cmp     edi, ebp
0x85C49B: jz      short loc_85C4D2
0x85C49D: test    edi, edi
0x85C49F: jz      short loc_85C4BD
0x85C4A1: lea     edx, [edi+4]
0x85C4A4: push    edx; lpAddend
0x85C4A5: call    dword ptr ds:0A2807Ch
0x85C4AB: test    eax, eax
0x85C4AD: jnz     short loc_85C4BD
0x85C4AF: test    edi, edi
0x85C4B1: jz      short loc_85C4BD
0x85C4B3: mov     eax, [edi]
0x85C4B5: mov     edx, [eax]
0x85C4B7: push    1
0x85C4B9: mov     ecx, edi
0x85C4BB: call    edx
0x85C4BD: test    ebp, ebp
0x85C4BF: mov     eax, [esp+24h+var_10]
0x85C4C3: mov     [eax+4], ebp
0x85C4C6: jz      short loc_85C4D2
0x85C4C8: add     ebp, 4
0x85C4CB: push    ebp; lpAddend
0x85C4CC: call    dword ptr ds:0A28078h
0x85C4D2: cmp     byte ptr [esp+24h+arg_10], 0
0x85C4D7: jnz     short loc_85C514
0x85C4D9: mov     edi, 1
0x85C4DE: add     [esi+60h], edi
0x85C4E1: mov     [esp+24h+arg_10], esi
0x85C4E5: mov     edx, [ebx+38h]
0x85C4E8: lea     ecx, [esp+24h+arg_10]
0x85C4EC: push    ecx
0x85C4ED: push    edx
0x85C4EE: lea     ecx, [ebx+40h]
0x85C4F1: mov     [esp+2Ch+var_4], 0
0x85C4F9: call    sub_76CE40
0x85C4FE: or      eax, 0FFFFFFFFh
0x85C501: add     [esi+60h], eax
0x85C504: mov     [esp+24h+var_4], eax
0x85C508: jnz     short loc_85C511
0x85C50A: mov     ecx, esi
0x85C50C: call    sub_7604D0
0x85C511: add     [ebx+38h], edi
0x85C514: mov     ecx, dword ptr [esp+24h+var_C]
0x85C518: mov     large fs:0, ecx
0x85C51F: pop     ecx
0x85C520: pop     edi
0x85C521: pop     esi
0x85C522: pop     ebp
0x85C523: pop     ebx
0x85C524: add     esp, 10h
0x85C527: retn    14h
