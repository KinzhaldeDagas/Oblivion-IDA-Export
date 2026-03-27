0x8C3640: push    ecx
0x8C3641: push    esi
0x8C3642: push    edi
0x8C3643: mov     edi, [esp+0Ch+arg_0]
0x8C3647: push    edi
0x8C3648: mov     esi, ecx
0x8C364A: call    sub_8A1DB0
0x8C364F: mov     eax, [esi]
0x8C3651: mov     edx, [eax+74h]
0x8C3654: lea     ecx, [esp+0Ch+arg_0]
0x8C3658: push    ecx
0x8C3659: mov     ecx, esi
0x8C365B: call    edx
0x8C365D: mov     esi, eax
0x8C365F: test    esi, esi
0x8C3661: jz      short loc_8C36B6
0x8C3663: lea     eax, [esp+0Ch+var_4]
0x8C3667: push    eax
0x8C3668: push    edi
0x8C3669: mov     [esp+14h+var_4], 0
0x8C3671: call    sub_8E84B0
0x8C3676: add     esp, 8
0x8C3679: cmp     dword ptr [edi+4], 2
0x8C367D: jnb     short loc_8C36AF
0x8C367F: mov     eax, [esp+0Ch+var_4]
0x8C3683: mov     dword ptr [esi+8], 0
0x8C368A: cmp     word ptr [eax+4], 0
0x8C368F: mov     ecx, eax
0x8C3691: jz      short loc_8C36B6
0x8C3693: add     word ptr [eax+6], 0FFFFh
0x8C3698: add     eax, 6
0x8C369B: cmp     word ptr [eax], 0
0x8C369F: jnz     short loc_8C36B6
0x8C36A1: mov     edx, [ecx]
0x8C36A3: mov     eax, [edx]
0x8C36A5: push    1
0x8C36A7: call    eax
0x8C36A9: pop     edi
0x8C36AA: pop     esi
0x8C36AB: pop     ecx
0x8C36AC: retn    4
0x8C36AF: mov     ecx, [esp+0Ch+var_4]
0x8C36B3: mov     [esi+8], ecx
0x8C36B6: pop     edi
0x8C36B7: pop     esi
0x8C36B8: pop     ecx
0x8C36B9: retn    4
