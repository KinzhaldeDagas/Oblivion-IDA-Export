0x4EED80: push    esi
0x4EED81: mov     esi, [esp+4+arg_0]
0x4EED85: test    esi, esi
0x4EED87: push    edi
0x4EED88: mov     edi, ecx
0x4EED8A: jz      short loc_4EEDC8
0x4EED8C: cmp     [esp+8+arg_4], 0
0x4EED91: jnz     short loc_4EED98
0x4EED93: call    sub_5B1D70
0x4EED98: cmp     dword ptr [esi+4], 0
0x4EED9C: jnz     short loc_4EEDA3
0x4EED9E: cmp     dword ptr [esi], 0
0x4EEDA1: jz      short loc_4EEDC8
0x4EEDA3: push    8; Size
0x4EEDA5: call    FormHeapAlloc
0x4EEDAA: mov     ecx, [esi]
0x4EEDAC: mov     edx, [ecx]
0x4EEDAE: mov     [eax], edx
0x4EEDB0: mov     ecx, [ecx+4]
0x4EEDB3: add     esp, 4
0x4EEDB6: mov     [eax+4], ecx
0x4EEDB9: push    eax
0x4EEDBA: mov     ecx, edi
0x4EEDBC: call    BSSimpleList_PushBack
0x4EEDC1: mov     esi, [esi+4]
0x4EEDC4: test    esi, esi
0x4EEDC6: jnz     short loc_4EEDA3
0x4EEDC8: pop     edi
0x4EEDC9: pop     esi
0x4EEDCA: retn    8
