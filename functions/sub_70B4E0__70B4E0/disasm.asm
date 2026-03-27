0x70B4E0: mov     eax, [esp+arg_0]
0x70B4E4: push    ebx
0x70B4E5: push    esi
0x70B4E6: mov     esi, [eax+8]
0x70B4E9: test    esi, esi
0x70B4EB: mov     ebx, ecx
0x70B4ED: jz      short loc_70B526
0x70B4EF: push    ebp
0x70B4F0: mov     ebp, [esp+0Ch+arg_4]
0x70B4F4: push    edi
0x70B4F5: mov     edi, [esi+8]
0x70B4F8: lea     eax, [esi+8]
0x70B4FB: mov     esi, [esi+4]
0x70B4FE: lea     ecx, [esp+10h+arg_0]
0x70B502: push    ecx
0x70B503: mov     ecx, [ebp+0]
0x70B506: push    edi
0x70B507: call    NiTMap_GetAt
0x70B50C: test    al, al
0x70B50E: jnz     short loc_70B514
0x70B510: mov     [esp+10h+arg_0], edi
0x70B514: mov     edx, [esp+10h+arg_0]
0x70B518: push    edx
0x70B519: mov     ecx, ebx
0x70B51B: call    sub_708E40
0x70B520: test    esi, esi
0x70B522: jnz     short loc_70B4F5
0x70B524: pop     edi
0x70B525: pop     ebp
0x70B526: pop     esi
0x70B527: pop     ebx
0x70B528: retn    8
