0x4F9AF0: push    ecx
0x4F9AF1: mov     eax, [esp+4+a2]
0x4F9AF5: push    ebx
0x4F9AF6: push    ebp
0x4F9AF7: push    0; int
0x4F9AF9: push    offset ??_R0?AVTESLoadScreen@@@8; struct TypeDescriptor *
0x4F9AFE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F9B03: mov     ebp, ecx
0x4F9B05: push    0; int
0x4F9B07: push    eax; void *
0x4F9B08: mov     [esp+20h+var_4], ebp
0x4F9B0C: call    OblivionDynamicCast
0x4F9B11: mov     ebx, eax
0x4F9B13: add     esp, 14h
0x4F9B16: test    ebx, ebx
0x4F9B18: mov     [esp+0Ch+a2], ebx
0x4F9B1C: jz      loc_4F9BA6
0x4F9B22: mov     ecx, ebp
0x4F9B24: call    sub_4F99C0
0x4F9B29: add     ebx, 2Ch ; ','
0x4F9B2C: add     ebp, 2Ch ; ','
0x4F9B2F: test    ebx, ebx
0x4F9B31: jz      short loc_4F9B98
0x4F9B33: push    esi
0x4F9B34: push    edi
0x4F9B35: cmp     dword ptr [ebx+4], 0
0x4F9B39: jnz     short loc_4F9B40
0x4F9B3B: cmp     dword ptr [ebx], 0
0x4F9B3E: jz      short loc_4F9B96
0x4F9B40: mov     edi, [ebx]
0x4F9B42: test    edi, edi
0x4F9B44: jz      short loc_4F9B86
0x4F9B46: cmp     dword ptr [ebp+4], 0
0x4F9B4A: lea     eax, [ebp+4]
0x4F9B4D: mov     esi, ebp
0x4F9B4F: jz      short loc_4F9B5C
0x4F9B51: mov     esi, [eax]
0x4F9B53: cmp     dword ptr [esi+4], 0
0x4F9B57: lea     eax, [esi+4]
0x4F9B5A: jnz     short loc_4F9B51
0x4F9B5C: cmp     dword ptr [esi], 0
0x4F9B5F: jz      short loc_4F9B84
0x4F9B61: push    8; Size
0x4F9B63: call    FormHeapAlloc
0x4F9B68: add     esp, 4
0x4F9B6B: test    eax, eax
0x4F9B6D: jz      short loc_4F9B7D
0x4F9B6F: mov     [eax], edi
0x4F9B71: mov     dword ptr [eax+4], 0
0x4F9B78: mov     [esi+4], eax
0x4F9B7B: jmp     short loc_4F9B86
0x4F9B7D: xor     eax, eax
0x4F9B7F: mov     [esi+4], eax
0x4F9B82: jmp     short loc_4F9B86
0x4F9B84: mov     [esi], edi
0x4F9B86: mov     eax, [ebp+4]
0x4F9B89: test    eax, eax
0x4F9B8B: jz      short loc_4F9B8F
0x4F9B8D: mov     ebp, eax
0x4F9B8F: mov     ebx, [ebx+4]
0x4F9B92: test    ebx, ebx
0x4F9B94: jnz     short loc_4F9B35
0x4F9B96: pop     edi
0x4F9B97: pop     esi
0x4F9B98: mov     ecx, [esp+0Ch+a2]
0x4F9B9C: push    ecx; a2
0x4F9B9D: mov     ecx, [esp+10h+var_4]; this
0x4F9BA1: call    TESForm_CopyAllComponentsFrom
0x4F9BA6: pop     ebp
0x4F9BA7: pop     ebx
0x4F9BA8: pop     ecx
0x4F9BA9: retn    4
