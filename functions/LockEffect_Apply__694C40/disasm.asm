0x694C40: push    ebx
0x694C41: push    0; int
0x694C43: push    offset ??_R0?AVNonActorMagicTarget@@@8; struct TypeDescriptor *
0x694C48: mov     ebx, ecx
0x694C4A: mov     eax, [ebx+20h]
0x694C4D: push    offset ??_R0?AVMagicTarget@@@8; struct _s_RTTICompleteObjectLocator *
0x694C52: push    0; int
0x694C54: push    eax; void *
0x694C55: call    OblivionDynamicCast
0x694C5A: add     esp, 14h
0x694C5D: test    eax, eax
0x694C5F: jz      short loc_694C9B
0x694C61: push    esi
0x694C62: lea     esi, [eax+0Ch]
0x694C65: mov     eax, [esi]
0x694C67: mov     edx, [eax+4]
0x694C6A: mov     ecx, esi
0x694C6C: call    edx
0x694C6E: test    eax, eax
0x694C70: jz      short loc_694C9A
0x694C72: mov     eax, [esi]
0x694C74: mov     edx, [eax+4]
0x694C77: mov     ecx, esi
0x694C79: call    edx
0x694C7B: mov     ecx, eax
0x694C7D: call    sub_4D7740
0x694C82: test    eax, eax
0x694C84: jz      short loc_694C9D
0x694C86: mov     al, [eax+8]
0x694C89: test    al, 2
0x694C8B: jz      short loc_694C91
0x694C8D: test    al, 1
0x694C8F: jz      short loc_694C9D
0x694C91: push    0
0x694C93: mov     ecx, ebx
0x694C95: call    ActiveEffect_Base_Remove
0x694C9A: pop     esi
0x694C9B: pop     ebx
0x694C9C: retn
0x694C9D: mov     eax, [esi]
0x694C9F: mov     edx, [eax+4]
0x694CA2: push    edi
0x694CA3: mov     ecx, esi
0x694CA5: call    edx
0x694CA7: mov     ecx, eax
0x694CA9: call    sub_4DBDF0
0x694CAE: fld     dword ptr [ebx+18h]
0x694CB1: mov     edi, eax
0x694CB3: call    Double_To_SInt32
0x694CB8: mov     [edi], al
0x694CBA: mov     dword ptr [edi+4], 0
0x694CC1: mov     byte ptr [edi+8], 2
0x694CC5: mov     eax, [esi]
0x694CC7: mov     edx, [eax+4]
0x694CCA: mov     ecx, esi
0x694CCC: call    edx
0x694CCE: mov     ecx, eax
0x694CD0: call    sub_4D9070
0x694CD5: mov     eax, [esi]
0x694CD7: mov     edx, [eax+4]
0x694CDA: mov     ecx, esi
0x694CDC: call    edx
0x694CDE: pop     edi
0x694CDF: pop     esi
0x694CE0: mov     ecx, eax
0x694CE2: pop     ebx
0x694CE3: jmp     sub_4DBE40
