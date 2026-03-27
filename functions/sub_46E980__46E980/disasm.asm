0x46E980: push    ebx
0x46E981: mov     ebx, [esp+4+arg_0]
0x46E985: test    ebx, ebx
0x46E987: jz      short loc_46E9E8
0x46E989: push    ebp
0x46E98A: mov     ebp, [esp+8+arg_4]
0x46E98E: test    ebp, ebp
0x46E990: jz      short loc_46E9E7
0x46E992: push    esi
0x46E993: push    edi
0x46E994: lea     edi, [ecx+4]
0x46E997: mov     eax, edi
0x46E999: test    eax, eax
0x46E99B: jz      short loc_46E9B1
0x46E99D: lea     ecx, [ecx+0]
0x46E9A0: mov     esi, [eax]
0x46E9A2: test    esi, esi
0x46E9A4: jz      short loc_46E9B1
0x46E9A6: cmp     [esi], ebx
0x46E9A8: jz      short loc_46E9CF
0x46E9AA: mov     eax, [eax+4]
0x46E9AD: test    eax, eax
0x46E9AF: jnz     short loc_46E9A0
0x46E9B1: push    8; Size
0x46E9B3: call    FormHeapAlloc
0x46E9B8: add     esp, 4
0x46E9BB: push    eax
0x46E9BC: mov     ecx, edi
0x46E9BE: mov     [eax], ebx
0x46E9C0: mov     [eax+4], ebp
0x46E9C3: call    BSSimpleList_PushBack
0x46E9C8: pop     edi
0x46E9C9: pop     esi
0x46E9CA: pop     ebp
0x46E9CB: pop     ebx
0x46E9CC: retn    8
0x46E9CF: add     [esi+4], ebp
0x46E9D2: jnz     short loc_46E9E5
0x46E9D4: push    esi
0x46E9D5: mov     ecx, edi
0x46E9D7: call    BSSimpleList_Remove
0x46E9DC: push    esi
0x46E9DD: call    FormHeapFree
0x46E9E2: add     esp, 4
0x46E9E5: pop     edi
0x46E9E6: pop     esi
0x46E9E7: pop     ebp
0x46E9E8: pop     ebx
0x46E9E9: retn    8
