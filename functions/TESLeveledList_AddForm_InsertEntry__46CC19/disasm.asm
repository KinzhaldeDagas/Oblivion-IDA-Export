0x46CC19: push    0Ch; Size
0x46CC1B: call    FormHeapAlloc
0x46CC20: mov     edx, [esp+4+arg_18]
0x46CC24: mov     cx, [esp+4+arg_14]
0x46CC29: mov     edi, eax
0x46CC2B: mov     ax, [esp+4+arg_10]
0x46CC30: add     esp, 4
0x46CC33: test    esi, esi
0x46CC35: mov     [edi+4], edx
0x46CC38: mov     [edi], ax
0x46CC3B: mov     [edi+8], cx
0x46CC3F: push    edi
0x46CC40: jz      short loc_46CC52
0x46CC42: mov     ecx, esi
0x46CC44: call    BSSimpleList_PushFront
0x46CC49: mov     eax, edi
0x46CC4B: pop     edi
0x46CC4C: pop     esi
0x46CC4D: pop     ebp
0x46CC4E: pop     ebx
0x46CC4F: retn    0Ch
0x46CC52: test    ebx, ebx
0x46CC54: mov     ecx, ebx
0x46CC56: jnz     short loc_46CC5A
0x46CC58: mov     ecx, ebp
0x46CC5A: call    BSSimpleList_PushBack
0x46CC5F: mov     eax, edi
0x46CC61: pop     edi
0x46CC62: pop     esi
0x46CC63: pop     ebp
0x46CC64: pop     ebx
0x46CC65: retn    0Ch
