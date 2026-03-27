0x49FF20: push    ebx
0x49FF21: push    esi
0x49FF22: mov     esi, [esp+8+arg_0]
0x49FF26: push    edi
0x49FF27: push    esi
0x49FF28: mov     ebx, ecx
0x49FF2A: call    sub_6CA440
0x49FF2F: mov     eax, ds:0B35270h
0x49FF34: push    eax; ArgList
0x49FF35: call    TESOutput_PrintString
0x49FF3A: movzx   edi, word ptr [esi+0Ah]
0x49FF3E: movzx   ecx, word ptr [esi+8]
0x49FF42: add     esp, 4
0x49FF45: cmp     edi, ecx
0x49FF47: mov     [esp+0Ch+arg_0], eax
0x49FF4B: jb      short loc_49FF5B
0x49FF4D: movzx   edx, word ptr [esi+0Eh]
0x49FF51: add     edx, edi
0x49FF53: push    edx
0x49FF54: mov     ecx, esi
0x49FF56: call    NiTArray_SetSize
0x49FF5B: lea     eax, [esp+0Ch+arg_0]
0x49FF5F: push    eax
0x49FF60: push    edi
0x49FF61: mov     ecx, esi
0x49FF63: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x49FF68: push    20h ; ' '; Size
0x49FF6A: call    FormHeapAlloc
0x49FF6F: mov     ecx, [ebx+5Ch]
0x49FF72: push    ecx
0x49FF73: push    offset aAccumrootS; "AccumRoot = %s"
0x49FF78: push    eax
0x49FF79: mov     [esp+1Ch+arg_0], eax
0x49FF7D: call    __sprintf
0x49FF82: movzx   edi, word ptr [esi+0Ah]
0x49FF86: movzx   edx, word ptr [esi+8]
0x49FF8A: add     esp, 10h
0x49FF8D: cmp     edi, edx
0x49FF8F: jb      short loc_49FF9F
0x49FF91: movzx   eax, word ptr [esi+0Eh]
0x49FF95: add     eax, edi
0x49FF97: push    eax
0x49FF98: mov     ecx, esi
0x49FF9A: call    NiTArray_SetSize
0x49FF9F: lea     ecx, [esp+0Ch+arg_0]
0x49FFA3: push    ecx
0x49FFA4: push    edi
0x49FFA5: mov     ecx, esi
0x49FFA7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x49FFAC: pop     edi
0x49FFAD: pop     esi
0x49FFAE: pop     ebx
0x49FFAF: retn    4
