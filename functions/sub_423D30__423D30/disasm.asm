0x423D30: push    ebx
0x423D31: push    esi
0x423D32: push    edi
0x423D33: mov     edi, [esp+0Ch+arg_0]
0x423D37: mov     eax, [edi+18h]
0x423D3A: mov     edx, [eax]
0x423D3C: mov     ebx, ecx
0x423D3E: lea     ecx, [edi+18h]
0x423D41: call    edx
0x423D43: mov     esi, eax
0x423D45: test    esi, esi
0x423D47: jz      short loc_423D6E
0x423D49: mov     ecx, esi; this
0x423D4B: call    TESObjectCELL_GetWorldSpace
0x423D50: test    eax, eax
0x423D52: mov     ecx, ebx
0x423D54: jz      short loc_423D62
0x423D56: push    eax
0x423D57: call    sub_423C90
0x423D5C: pop     edi
0x423D5D: pop     esi
0x423D5E: pop     ebx
0x423D5F: retn    4
0x423D62: push    esi
0x423D63: call    sub_423C90
0x423D68: pop     edi
0x423D69: pop     esi
0x423D6A: pop     ebx
0x423D6B: retn    4
0x423D6E: mov     eax, [edi+0Ch]
0x423D71: push    eax
0x423D72: mov     eax, [edi]
0x423D74: mov     edx, [eax+0D4h]
0x423D7A: mov     ecx, edi
0x423D7C: call    edx
0x423D7E: push    eax; ArgList
0x423D7F: push    offset aReferenceS08xH; "Reference %s %08X has no parent save ce"...
0x423D84: call    PrintError
0x423D89: add     esp, 0Ch
0x423D8C: pop     edi
0x423D8D: pop     esi
0x423D8E: pop     ebx
0x423D8F: retn    4
