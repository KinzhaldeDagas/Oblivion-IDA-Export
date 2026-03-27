0x56A510: sub     esp, 8
0x56A513: mov     eax, [esp+8+arg_8]
0x56A517: push    ebx
0x56A518: xor     bl, bl
0x56A51A: push    ebp
0x56A51B: mov     ebp, [esp+10h+arg_4]
0x56A51F: test    ebp, ebp
0x56A521: push    esi
0x56A522: push    edi
0x56A523: mov     edi, ecx
0x56A525: mov     [esp+18h+var_6], 1
0x56A52A: mov     [esp+18h+var_4], bl
0x56A52E: mov     [esp+18h+var_5], bl
0x56A532: mov     [esp+18h+var_3], bl
0x56A536: mov     [esp+18h+var_1], bl
0x56A53A: mov     [eax], bl
0x56A53C: mov     [esp+18h+var_2], bl
0x56A540: jz      short loc_56A54F
0x56A542: mov     ecx, ebp; this
0x56A544: call    TESForm__GetExtraXTarget
0x56A549: test    eax, eax
0x56A54B: jz      short loc_56A54F
0x56A54D: mov     ebp, eax
0x56A54F: test    edi, edi
0x56A551: jz      loc_56A739
0x56A557: cmp     dword ptr [edi+4], 0
0x56A55B: jnz     short loc_56A566
0x56A55D: cmp     dword ptr [edi], 0
0x56A560: jz      loc_56A607
0x56A566: cmp     [esp+18h+var_4], 0
0x56A56B: mov     esi, [edi]
0x56A56D: mov     byte ptr [esp+18h+arg_4], 0
0x56A572: jnz     loc_56A684
0x56A578: test    byte ptr [esi], 1
0x56A57B: mov     edx, [esp+18h+arg_0]
0x56A57F: lea     ecx, [esp+18h+arg_4]
0x56A583: push    ecx
0x56A584: push    ebp
0x56A585: mov     ecx, esi
0x56A587: push    edx
0x56A588: jnz     loc_56A651
0x56A58E: call    sub_56AC50
0x56A593: cmp     [esp+18h+var_6], 0
0x56A598: mov     bl, al
0x56A59A: jz      short loc_56A5A5
0x56A59C: test    bl, bl
0x56A59E: mov     [esp+18h+var_6], 1
0x56A5A3: jnz     short loc_56A5AA
0x56A5A5: mov     [esp+18h+var_6], 0
0x56A5AA: cmp     byte ptr [esp+18h+arg_4], 0
0x56A5AF: jz      loc_56A63F
0x56A5B5: mov     eax, [esp+18h+arg_8]
0x56A5B9: mov     byte ptr [eax], 1
0x56A5BC: cmp     [esp+18h+var_6], 0
0x56A5C1: jnz     short loc_56A5D7
0x56A5C3: cmp     [esp+18h+var_4], 0
0x56A5C8: jnz     short loc_56A5D7
0x56A5CA: mov     eax, [esp+18h+arg_8]
0x56A5CE: cmp     byte ptr [eax], 0
0x56A5D1: jz      loc_56A732
0x56A5D7: mov     eax, [esp+18h+arg_C]
0x56A5DB: test    eax, eax
0x56A5DD: mov     edi, [edi+4]
0x56A5E0: jz      short loc_56A5FF
0x56A5E2: cmp     [esp+18h+var_1], 0
0x56A5E7: jnz     short loc_56A5FF
0x56A5E9: test    edi, edi
0x56A5EB: jz      short loc_56A5F8
0x56A5ED: cmp     dword ptr [edi+4], 0
0x56A5F1: jnz     short loc_56A5FF
0x56A5F3: cmp     dword ptr [edi], 0
0x56A5F6: jnz     short loc_56A5FF
0x56A5F8: mov     edi, eax
0x56A5FA: mov     [esp+18h+var_1], 1
0x56A5FF: test    edi, edi
0x56A601: jnz     loc_56A557
0x56A607: cmp     [esp+18h+var_4], 0
0x56A60C: jz      loc_56A72B
0x56A612: cmp     [esp+18h+var_6], 0
0x56A617: jz      loc_56A70F
0x56A61D: test    bl, bl
0x56A61F: jz      loc_56A70F
0x56A625: mov     edx, [esp+18h+arg_8]
0x56A629: pop     edi
0x56A62A: pop     esi
0x56A62B: mov     [esp+10h+var_6], 1
0x56A630: mov     al, [esp+10h+var_6]
0x56A634: pop     ebp
0x56A635: mov     byte ptr [edx], 0
0x56A638: pop     ebx
0x56A639: add     esp, 8
0x56A63C: retn    10h
0x56A63F: test    bl, bl
0x56A641: jnz     loc_56A5BC
0x56A647: mov     [esp+18h+var_2], 1
0x56A64C: jmp     loc_56A5BC
0x56A651: call    sub_56AC50
0x56A656: mov     bl, al
0x56A658: mov     al, byte ptr [esp+18h+arg_4]
0x56A65C: test    al, al
0x56A65E: mov     [esp+18h+var_4], 1
0x56A663: mov     [esp+18h+var_3], 0
0x56A668: mov     [esp+18h+var_5], al
0x56A66C: jnz     loc_56A5BC
0x56A672: test    bl, bl
0x56A674: jnz     loc_56A5BC
0x56A67A: mov     [esp+18h+var_3], 1
0x56A67F: jmp     loc_56A5BC
0x56A684: test    bl, bl
0x56A686: jnz     short loc_56A6C3
0x56A688: mov     ecx, [esp+18h+arg_0]
0x56A68C: lea     eax, [esp+18h+arg_4]
0x56A690: push    eax
0x56A691: push    ebp
0x56A692: push    ecx
0x56A693: mov     ecx, esi
0x56A695: call    sub_56AC50
0x56A69A: cmp     [esp+18h+var_5], 0
0x56A69F: mov     bl, al
0x56A6A1: mov     al, byte ptr [esp+18h+arg_4]
0x56A6A5: jnz     short loc_56A6B1
0x56A6A7: test    al, al
0x56A6A9: jnz     short loc_56A6B1
0x56A6AB: mov     [esp+18h+var_5], al
0x56A6AF: jmp     short loc_56A6BA
0x56A6B1: test    al, al
0x56A6B3: mov     [esp+18h+var_5], 1
0x56A6B8: jnz     short loc_56A6C3
0x56A6BA: test    bl, bl
0x56A6BC: jnz     short loc_56A6C3
0x56A6BE: mov     [esp+18h+var_3], 1
0x56A6C3: test    byte ptr [esi], 1
0x56A6C6: jnz     loc_56A5BC
0x56A6CC: cmp     [esp+18h+var_6], 0
0x56A6D1: mov     [esp+18h+var_4], 0
0x56A6D6: jz      short loc_56A6E6
0x56A6D8: test    bl, bl
0x56A6DA: jz      short loc_56A6E6
0x56A6DC: mov     [esp+18h+var_6], 1
0x56A6E1: jmp     loc_56A5D7
0x56A6E6: cmp     [esp+18h+var_5], 0
0x56A6EB: mov     [esp+18h+var_6], 0
0x56A6F0: jz      short loc_56A705
0x56A6F2: cmp     [esp+18h+var_3], 0
0x56A6F7: jnz     short loc_56A705
0x56A6F9: mov     edx, [esp+18h+arg_8]
0x56A6FD: mov     byte ptr [edx], 1
0x56A700: jmp     loc_56A5D7
0x56A705: mov     [esp+18h+var_2], 1
0x56A70A: jmp     loc_56A5CA
0x56A70F: cmp     [esp+18h+var_5], 0
0x56A714: mov     [esp+18h+var_6], 0
0x56A719: jz      short loc_56A739
0x56A71B: cmp     [esp+18h+var_3], 0
0x56A720: jnz     short loc_56A739
0x56A722: mov     ecx, [esp+18h+arg_8]
0x56A726: mov     byte ptr [ecx], 1
0x56A729: jmp     short loc_56A732
0x56A72B: cmp     [esp+18h+var_6], 0
0x56A730: jnz     short loc_56A739
0x56A732: cmp     [esp+18h+var_2], 0
0x56A737: jz      short loc_56A740
0x56A739: mov     edx, [esp+18h+arg_8]
0x56A73D: mov     byte ptr [edx], 0
0x56A740: mov     al, [esp+18h+var_6]
0x56A744: pop     edi
0x56A745: pop     esi
0x56A746: pop     ebp
0x56A747: pop     ebx
0x56A748: add     esp, 8
0x56A74B: retn    10h
