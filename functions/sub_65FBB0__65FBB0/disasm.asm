0x65FBB0: push    esi
0x65FBB1: push    edi
0x65FBB2: mov     edi, ecx
0x65FBB4: mov     ecx, [edi+5B4h]
0x65FBBA: test    ecx, ecx
0x65FBBC: jz      short loc_65FC34
0x65FBBE: xor     edx, edx
0x65FBC0: mov     eax, ecx
0x65FBC2: cmp     dword ptr [eax], 0
0x65FBC5: jz      short loc_65FBCA
0x65FBC7: add     edx, 1
0x65FBCA: mov     eax, [eax+4]
0x65FBCD: test    eax, eax
0x65FBCF: jnz     short loc_65FBC2
0x65FBD1: cmp     edx, 1
0x65FBD4: jnz     short loc_65FC0B
0x65FBD6: mov     eax, [ecx]
0x65FBD8: push    eax
0x65FBD9: call    FormHeapFree
0x65FBDE: mov     eax, [edi+5B4h]
0x65FBE4: mov     ecx, [eax+4]
0x65FBE7: add     esp, 4
0x65FBEA: test    ecx, ecx
0x65FBEC: jz      short loc_65FC03
0x65FBEE: mov     edx, [ecx+4]
0x65FBF1: mov     [eax+4], edx
0x65FBF4: mov     edx, [ecx]
0x65FBF6: push    ecx
0x65FBF7: mov     [eax], edx
0x65FBF9: call    FormHeapFree
0x65FBFE: add     esp, 4
0x65FC01: jmp     short loc_65FC59
0x65FC03: mov     dword ptr [eax], 0
0x65FC09: jmp     short loc_65FC59
0x65FC0B: mov     edx, ecx
0x65FC0D: mov     eax, [edx+4]
0x65FC10: test    eax, eax
0x65FC12: jz      short loc_65FC1D
0x65FC14: mov     edx, eax
0x65FC16: mov     eax, [edx+4]
0x65FC19: test    eax, eax
0x65FC1B: jnz     short loc_65FC14
0x65FC1D: mov     esi, [edx]
0x65FC1F: test    esi, esi
0x65FC21: jz      short loc_65FC59
0x65FC23: push    esi
0x65FC24: call    BSSimpleList_Remove
0x65FC29: push    esi
0x65FC2A: call    FormHeapFree
0x65FC2F: add     esp, 4
0x65FC32: jmp     short loc_65FC59
0x65FC34: push    8; Size
0x65FC36: call    FormHeapAlloc
0x65FC3B: add     esp, 4
0x65FC3E: test    eax, eax
0x65FC40: jz      short loc_65FC51
0x65FC42: mov     dword ptr [eax], 0
0x65FC48: mov     dword ptr [eax+4], 0
0x65FC4F: jmp     short loc_65FC53
0x65FC51: xor     eax, eax
0x65FC53: mov     [edi+5B4h], eax
0x65FC59: mov     eax, [edi+5B4h]
0x65FC5F: cmp     dword ptr [eax+4], 0
0x65FC63: jnz     short loc_65FC9C
0x65FC65: cmp     dword ptr [eax], 0
0x65FC68: jnz     short loc_65FC9C
0x65FC6A: push    8; Size
0x65FC6C: call    FormHeapAlloc
0x65FC71: add     esp, 4
0x65FC74: test    eax, eax
0x65FC76: jz      short loc_65FC8E
0x65FC78: xor     ecx, ecx
0x65FC7A: mov     [eax], ecx
0x65FC7C: mov     [eax+4], ecx
0x65FC7F: mov     ecx, [edi+5B4h]
0x65FC85: push    eax
0x65FC86: call    BSSimpleList_PushFront
0x65FC8B: pop     edi
0x65FC8C: pop     esi
0x65FC8D: retn
0x65FC8E: mov     ecx, [edi+5B4h]
0x65FC94: xor     eax, eax
0x65FC96: push    eax
0x65FC97: call    BSSimpleList_PushFront
0x65FC9C: pop     edi
0x65FC9D: pop     esi
0x65FC9E: retn
