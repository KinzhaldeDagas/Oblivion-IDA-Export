0x70B530: push    ecx
0x70B531: push    ebx
0x70B532: mov     ebx, [esp+8+arg_0]
0x70B536: push    ebp
0x70B537: push    esi
0x70B538: push    edi
0x70B539: push    ebx
0x70B53A: mov     edi, ecx
0x70B53C: call    sub_7081B0
0x70B541: mov     ecx, ebx
0x70B543: call    sub_7124D0
0x70B548: mov     ebp, eax
0x70B54A: test    ebp, ebp
0x70B54C: jz      short loc_70B5AB
0x70B54E: push    ebp
0x70B54F: lea     ecx, [edi+0ACh]
0x70B555: call    sub_523B10
0x70B55A: xor     esi, esi
0x70B55C: test    ebp, ebp
0x70B55E: jbe     short loc_70B5AB
0x70B560: mov     ecx, ebx
0x70B562: call    sub_7124A0
0x70B567: mov     edx, [edi]
0x70B569: mov     edx, [edx+90h]
0x70B56F: push    eax
0x70B570: push    esi
0x70B571: lea     eax, [esp+1Ch+var_4]
0x70B575: push    eax
0x70B576: mov     ecx, edi
0x70B578: call    edx
0x70B57A: mov     eax, dword ptr [esp+14h+var_4]
0x70B57E: test    eax, eax
0x70B580: jz      short loc_70B5A4
0x70B582: mov     ebx, eax
0x70B584: add     eax, 4
0x70B587: push    eax; lpAddend
0x70B588: call    dword ptr ds:0A2807Ch
0x70B58E: test    eax, eax
0x70B590: jnz     short loc_70B5A0
0x70B592: test    ebx, ebx
0x70B594: jz      short loc_70B5A0
0x70B596: mov     eax, [ebx]
0x70B598: mov     edx, [eax]
0x70B59A: push    1
0x70B59C: mov     ecx, ebx
0x70B59E: call    edx
0x70B5A0: mov     ebx, [esp+14h+arg_0]
0x70B5A4: add     esi, 1
0x70B5A7: cmp     esi, ebp
0x70B5A9: jb      short loc_70B560
0x70B5AB: mov     ecx, ebx
0x70B5AD: call    sub_7124D0
0x70B5B2: cmp     dword ptr [ebx+0D8h], 4010008h
0x70B5BC: mov     ebp, eax
0x70B5BE: jnb     short loc_70B62F
0x70B5C0: test    ebp, ebp
0x70B5C2: jz      loc_70B68D
0x70B5C8: jmp     short loc_70B5D4
0x70B5CA: align 10h
0x70B5D0: mov     ebx, [esp+14h+arg_0]
0x70B5D4: mov     ecx, ebx
0x70B5D6: sub     ebp, 1
0x70B5D9: call    sub_7124A0
0x70B5DE: mov     ebx, eax
0x70B5E0: test    ebx, ebx
0x70B5E2: jz      short loc_70B623
0x70B5E4: mov     eax, [edi+0BCh]
0x70B5EA: mov     edx, [eax+4]
0x70B5ED: lea     esi, [edi+0BCh]
0x70B5F3: mov     ecx, esi
0x70B5F5: call    edx
0x70B5F7: mov     [eax+8], ebx
0x70B5FA: mov     dword ptr [eax], 0
0x70B600: mov     ecx, [esi+8]
0x70B603: mov     [eax+4], ecx
0x70B606: mov     ecx, [esi+8]
0x70B609: test    ecx, ecx
0x70B60B: jz      short loc_70B611
0x70B60D: mov     [ecx], eax
0x70B60F: jmp     short loc_70B614
0x70B611: mov     [esi+4], eax
0x70B614: add     dword ptr [esi+0Ch], 1
0x70B618: push    edi
0x70B619: mov     ecx, ebx
0x70B61B: mov     [esi+8], eax
0x70B61E: call    sub_708E40
0x70B623: test    ebp, ebp
0x70B625: jnz     short loc_70B5D0
0x70B627: pop     edi
0x70B628: pop     esi
0x70B629: pop     ebp
0x70B62A: pop     ebx
0x70B62B: pop     ecx
0x70B62C: retn    4
0x70B62F: test    ebp, ebp
0x70B631: jz      short loc_70B68D
0x70B633: jmp     short loc_70B639
0x70B635: mov     ebx, [esp+14h+arg_0]
0x70B639: mov     ecx, ebx
0x70B63B: sub     ebp, 1
0x70B63E: call    sub_7124A0
0x70B643: mov     ebx, eax
0x70B645: test    ebx, ebx
0x70B647: jz      short loc_70B689
0x70B649: mov     edx, [edi+0BCh]
0x70B64F: mov     eax, [edx+4]
0x70B652: lea     esi, [edi+0BCh]
0x70B658: mov     ecx, esi
0x70B65A: call    eax
0x70B65C: mov     [eax+8], ebx
0x70B65F: mov     dword ptr [eax+4], 0
0x70B666: mov     ecx, [esi+4]
0x70B669: mov     [eax], ecx
0x70B66B: mov     ecx, [esi+4]
0x70B66E: test    ecx, ecx
0x70B670: jz      short loc_70B677
0x70B672: mov     [ecx+4], eax
0x70B675: jmp     short loc_70B67A
0x70B677: mov     [esi+8], eax
0x70B67A: add     dword ptr [esi+0Ch], 1
0x70B67E: push    edi
0x70B67F: mov     ecx, ebx
0x70B681: mov     [esi+4], eax
0x70B684: call    sub_708E40
0x70B689: test    ebp, ebp
0x70B68B: jnz     short loc_70B635
0x70B68D: pop     edi
0x70B68E: pop     esi
0x70B68F: pop     ebp
0x70B690: pop     ebx
0x70B691: pop     ecx
0x70B692: retn    4
