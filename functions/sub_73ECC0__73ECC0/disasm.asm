0x73ECC0: push    ebp
0x73ECC1: mov     ebp, esp
0x73ECC3: and     esp, 0FFFFFFC0h
0x73ECC6: sub     esp, 34h
0x73ECC9: mov     eax, ds:0B401C0h
0x73ECCE: push    ebx
0x73ECCF: push    esi
0x73ECD0: push    edi
0x73ECD1: mov     ebx, ecx
0x73ECD3: push    eax; ArgList
0x73ECD4: mov     [esp+44h+var_4], ebx
0x73ECD8: call    TESOutput_PrintString
0x73ECDD: mov     esi, [ebp+arg_0]
0x73ECE0: movzx   edi, word ptr [esi+0Ah]
0x73ECE4: movzx   ecx, word ptr [esi+8]
0x73ECE8: add     esp, 4
0x73ECEB: cmp     edi, ecx
0x73ECED: mov     [esp+40h+var_8], eax
0x73ECF1: jb      short loc_73ED01
0x73ECF3: movzx   edx, word ptr [esi+0Eh]
0x73ECF7: add     edx, edi
0x73ECF9: push    edx
0x73ECFA: mov     ecx, esi
0x73ECFC: call    NiTArray_SetSize
0x73ED01: lea     eax, [esp+40h+var_8]
0x73ED05: push    eax
0x73ED06: push    edi
0x73ED07: mov     ecx, esi
0x73ED09: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73ED0E: push    offset aBound; "Bound"
0x73ED13: lea     ecx, [ebx+8]
0x73ED16: call    sub_72A040
0x73ED1B: movzx   edi, word ptr [esi+0Ah]
0x73ED1F: movzx   ecx, word ptr [esi+8]
0x73ED23: cmp     edi, ecx
0x73ED25: mov     [esp+40h+var_8], eax
0x73ED29: jb      short loc_73ED39
0x73ED2B: movzx   edx, word ptr [esi+0Eh]
0x73ED2F: add     edx, edi
0x73ED31: push    edx
0x73ED32: mov     ecx, esi
0x73ED34: call    NiTArray_SetSize
0x73ED39: lea     eax, [esp+40h+var_8]
0x73ED3D: push    eax
0x73ED3E: push    edi
0x73ED3F: mov     ecx, esi
0x73ED41: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73ED46: push    offset aWorldBound; "World Bound"
0x73ED4B: lea     ecx, [ebx+18h]
0x73ED4E: call    sub_72A040
0x73ED53: movzx   edi, word ptr [esi+0Ah]
0x73ED57: movzx   ecx, word ptr [esi+8]
0x73ED5B: cmp     edi, ecx
0x73ED5D: mov     [esp+40h+var_8], eax
0x73ED61: jb      short loc_73ED71
0x73ED63: movzx   edx, word ptr [esi+0Eh]
0x73ED67: add     edx, edi
0x73ED69: push    edx
0x73ED6A: mov     ecx, esi
0x73ED6C: call    NiTArray_SetSize
0x73ED71: lea     eax, [esp+40h+var_8]
0x73ED75: push    eax
0x73ED76: push    edi
0x73ED77: mov     ecx, esi
0x73ED79: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73ED7E: xor     edi, edi
0x73ED80: cmp     [ebx+28h], edi
0x73ED83: mov     [esp+40h+var_8], edi
0x73ED87: jbe     loc_73EE37
0x73ED8D: jmp     short loc_73ED94
0x73ED8F: align 10h
0x73ED90: mov     edi, [esp+40h+var_8]
0x73ED94: push    80h ; '€'; Size
0x73ED99: call    FormHeapAlloc
0x73ED9E: mov     ecx, [esp+44h+var_4]
0x73EDA2: mov     edx, [ecx+2Ch]
0x73EDA5: fld     dword ptr [edx+edi*4]
0x73EDA8: push    ecx
0x73EDA9: fstp    [esp+48h+var_48]
0x73EDAC: push    edi; ArgList
0x73EDAD: push    offset aProportionDG; "Proportion[%d] = %g"
0x73EDB2: mov     ebx, eax
0x73EDB4: push    80h ; '€'; SizeInBytes
0x73EDB9: push    ebx; DstBuf
0x73EDBA: call    sub_6C5D40
0x73EDBF: movzx   edi, word ptr [esi+0Ah]
0x73EDC3: movzx   eax, word ptr [esi+8]
0x73EDC7: add     esp, 18h
0x73EDCA: cmp     edi, eax
0x73EDCC: jb      short loc_73EDDC
0x73EDCE: movzx   ecx, word ptr [esi+0Eh]
0x73EDD2: add     ecx, edi
0x73EDD4: push    ecx
0x73EDD5: mov     ecx, esi
0x73EDD7: call    NiTArray_SetSize
0x73EDDC: movzx   edx, word ptr [esi+0Ah]
0x73EDE0: cmp     edi, edx
0x73EDE2: jb      short loc_73EDF6
0x73EDE4: test    ebx, ebx
0x73EDE6: lea     eax, [edi+1]
0x73EDE9: mov     [esi+0Ah], ax
0x73EDED: jz      short loc_73EE19
0x73EDEF: add     word ptr [esi+0Ch], 1
0x73EDF4: jmp     short loc_73EE19
0x73EDF6: test    ebx, ebx
0x73EDF8: jz      short loc_73EE0A
0x73EDFA: mov     ecx, [esi+4]
0x73EDFD: cmp     dword ptr [ecx+edi*4], 0
0x73EE01: jnz     short loc_73EE19
0x73EE03: add     word ptr [esi+0Ch], 1
0x73EE08: jmp     short loc_73EE19
0x73EE0A: mov     edx, [esi+4]
0x73EE0D: cmp     dword ptr [edx+edi*4], 0
0x73EE11: jz      short loc_73EE19
0x73EE13: add     word ptr [esi+0Ch], 0FFFFh
0x73EE19: mov     eax, [esi+4]
0x73EE1C: mov     ecx, [esp+40h+var_4]
0x73EE20: mov     [eax+edi*4], ebx
0x73EE23: mov     eax, [esp+40h+var_8]
0x73EE27: add     eax, 1
0x73EE2A: cmp     eax, [ecx+28h]
0x73EE2D: mov     [esp+40h+var_8], eax
0x73EE31: jb      loc_73ED90
0x73EE37: pop     edi
0x73EE38: pop     esi
0x73EE39: pop     ebx
0x73EE3A: mov     esp, ebp
0x73EE3C: pop     ebp
0x73EE3D: retn    4
