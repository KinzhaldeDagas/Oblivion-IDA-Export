0x72EFB0: push    esi
0x72EFB1: mov     esi, ecx
0x72EFB3: cmp     dword ptr [esi+44h], 0
0x72EFB7: jz      short loc_72EFEC
0x72EFB9: push    ebx
0x72EFBA: xor     ebx, ebx
0x72EFBC: cmp     [esi+40h], ebx
0x72EFBF: jbe     short loc_72EFEB
0x72EFC1: push    edi
0x72EFC2: xor     edi, edi
0x72EFC4: mov     eax, [esi+44h]
0x72EFC7: mov     ecx, [edi+eax+44h]
0x72EFCB: push    ecx
0x72EFCC: call    FormHeapFree
0x72EFD1: mov     edx, [esi+44h]
0x72EFD4: mov     dword ptr [edi+edx+44h], 0
0x72EFDC: add     ebx, 1
0x72EFDF: add     esp, 4
0x72EFE2: add     edi, 4Ch ; 'L'
0x72EFE5: cmp     ebx, [esi+40h]
0x72EFE8: jb      short loc_72EFC4
0x72EFEA: pop     edi
0x72EFEB: pop     ebx
0x72EFEC: pop     esi
0x72EFED: retn
