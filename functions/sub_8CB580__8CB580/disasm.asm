0x8CB580: push    ebx
0x8CB581: mov     ebx, [esp+4+arg_4]
0x8CB585: mov     eax, [ebx+3Ch]
0x8CB588: push    ebp
0x8CB589: xor     ebp, ebp
0x8CB58B: test    eax, eax
0x8CB58D: jle     short loc_8CB606
0x8CB58F: push    esi
0x8CB590: push    edi
0x8CB591: mov     eax, [ebx+38h]
0x8CB594: lea     edi, [eax+ebp*8]
0x8CB597: mov     eax, [edi+4]
0x8CB59A: mov     esi, [eax+10h]
0x8CB59D: add     esi, eax
0x8CB59F: mov     al, [esi+91h]
0x8CB5A5: test    al, al
0x8CB5A7: jz      short loc_8CB5BE
0x8CB5A9: mov     edi, [edi]
0x8CB5AB: mov     ecx, [esp+10h+arg_8]
0x8CB5AF: push    edi
0x8CB5B0: push    ecx
0x8CB5B1: call    sub_8E68A0
0x8CB5B6: mov     edx, [esp+18h+arg_0]
0x8CB5BA: push    edi
0x8CB5BB: push    edx
0x8CB5BC: jmp     short loc_8CB5F4
0x8CB5BE: cmp     [esp+10h+arg_C], 7
0x8CB5C3: jnz     short loc_8CB5FC
0x8CB5C5: mov     eax, [esi+54h]
0x8CB5C8: mov     ecx, [ebx+54h]
0x8CB5CB: mov     edx, [edi]
0x8CB5CD: push    eax
0x8CB5CE: push    ecx
0x8CB5CF: push    edx
0x8CB5D0: call    sub_8E7740
0x8CB5D5: mov     ecx, [ebx+54h]
0x8CB5D8: add     esp, 0Ch
0x8CB5DB: cmp     eax, ecx
0x8CB5DD: jnz     short loc_8CB5FC
0x8CB5DF: mov     edi, [edi]
0x8CB5E1: mov     eax, [esi+54h]
0x8CB5E4: add     eax, 44h ; 'D'
0x8CB5E7: push    edi
0x8CB5E8: push    eax
0x8CB5E9: call    sub_8E68A0
0x8CB5EE: mov     ecx, [esp+18h+arg_0]
0x8CB5F2: push    edi
0x8CB5F3: push    ecx
0x8CB5F4: call    sub_8E67F0
0x8CB5F9: add     esp, 10h
0x8CB5FC: mov     eax, [ebx+3Ch]
0x8CB5FF: inc     ebp
0x8CB600: cmp     ebp, eax
0x8CB602: jl      short loc_8CB591
0x8CB604: pop     edi
0x8CB605: pop     esi
0x8CB606: pop     ebp
0x8CB607: pop     ebx
0x8CB608: retn
