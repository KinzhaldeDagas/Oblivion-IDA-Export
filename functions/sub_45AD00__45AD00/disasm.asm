0x45AD00: push    ebx
0x45AD01: push    ebp
0x45AD02: push    esi
0x45AD03: push    edi
0x45AD04: push    0Ch; Size
0x45AD06: mov     edi, ecx
0x45AD08: call    FormHeapAlloc
0x45AD0D: mov     esi, eax
0x45AD0F: mov     eax, [esp+14h+arg_0]
0x45AD13: mov     ecx, [eax]
0x45AD15: mov     [esi], ecx
0x45AD17: mov     edx, [eax+4]
0x45AD1A: mov     [esi+4], edx
0x45AD1D: mov     eax, [eax+8]
0x45AD20: mov     [esi+8], eax
0x45AD23: mov     cl, [esi+4]
0x45AD26: add     esp, 4
0x45AD29: mov     byte ptr [esp+10h+arg_0], cl
0x45AD2D: mov     ebp, [esp+10h+arg_0]
0x45AD31: mov     ecx, [edi]
0x45AD33: lea     edx, [esp+10h+arg_0]
0x45AD37: push    edx
0x45AD38: push    ebp
0x45AD39: call    sub_4527A0
0x45AD3E: test    al, al
0x45AD40: jnz     short loc_45AD9D
0x45AD42: push    8; Size
0x45AD44: call    FormHeapAlloc
0x45AD49: add     esp, 4
0x45AD4C: test    eax, eax
0x45AD4E: jz      short loc_45AD7C
0x45AD50: push    eax
0x45AD51: mov     dword ptr [eax], 0
0x45AD57: mov     dword ptr [eax+4], 0
0x45AD5E: mov     ecx, [edi]
0x45AD60: push    ebp
0x45AD61: mov     ebx, eax
0x45AD63: call    sub_452710
0x45AD68: push    offset sub_452150
0x45AD6D: push    esi
0x45AD6E: mov     ecx, ebx
0x45AD70: call    BSSimpleList_InsertSorted
0x45AD75: pop     edi
0x45AD76: pop     esi
0x45AD77: pop     ebp
0x45AD78: pop     ebx
0x45AD79: retn    4
0x45AD7C: mov     ecx, [edi]
0x45AD7E: xor     eax, eax
0x45AD80: push    eax
0x45AD81: push    ebp
0x45AD82: mov     ebx, eax
0x45AD84: call    sub_452710
0x45AD89: push    offset sub_452150
0x45AD8E: push    esi
0x45AD8F: mov     ecx, ebx
0x45AD91: call    BSSimpleList_InsertSorted
0x45AD96: pop     edi
0x45AD97: pop     esi
0x45AD98: pop     ebp
0x45AD99: pop     ebx
0x45AD9A: retn    4
0x45AD9D: mov     ebx, [esp+10h+arg_0]
0x45ADA1: push    offset sub_452150
0x45ADA6: push    esi
0x45ADA7: mov     ecx, ebx
0x45ADA9: call    BSSimpleList_InsertSorted
0x45ADAE: pop     edi
0x45ADAF: pop     esi
0x45ADB0: pop     ebp
0x45ADB1: pop     ebx
0x45ADB2: retn    4
