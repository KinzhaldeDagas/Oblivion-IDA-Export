0x52B660: push    esi
0x52B661: mov     esi, ecx
0x52B663: cmp     dword ptr [esi+0ACh], 0
0x52B66A: jz      short loc_52B68D
0x52B66C: push    edi
0x52B66D: lea     ecx, [ecx+0]
0x52B670: mov     eax, [esi+0ACh]
0x52B676: mov     edi, [eax+4]
0x52B679: push    eax
0x52B67A: call    FormHeapFree
0x52B67F: add     esp, 4
0x52B682: test    edi, edi
0x52B684: mov     [esi+0ACh], edi
0x52B68A: jnz     short loc_52B670
0x52B68C: pop     edi
0x52B68D: mov     dword ptr [esi+0A8h], 0
0x52B697: pop     esi
0x52B698: retn
