0x899CA0: mov     eax, [ecx+0D8h]
0x899CA6: push    esi
0x899CA7: lea     esi, [ecx+0D0h]
0x899CAD: mov     ecx, [esi+4]
0x899CB0: and     eax, 3FFFFFFFh
0x899CB5: cmp     ecx, eax
0x899CB7: jnz     short loc_899CC4
0x899CB9: push    4
0x899CBB: push    esi
0x899CBC: call    sub_8A6EE0
0x899CC1: add     esp, 8
0x899CC4: mov     ecx, [esi+4]
0x899CC7: mov     edx, [esi]
0x899CC9: mov     eax, [esp+4+arg_0]
0x899CCD: mov     [edx+ecx*4], eax
0x899CD0: inc     dword ptr [esi+4]
0x899CD3: pop     esi
0x899CD4: retn    4
