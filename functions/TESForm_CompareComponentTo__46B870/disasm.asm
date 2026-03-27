0x46B870: mov     eax, [esp+arg_0]
0x46B874: push    esi
0x46B875: push    edi
0x46B876: push    0; int
0x46B878: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x46B87D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46B882: push    0; int
0x46B884: push    eax; void *
0x46B885: mov     edi, ecx
0x46B887: call    OblivionDynamicCast
0x46B88C: mov     esi, eax
0x46B88E: add     esp, 14h
0x46B891: test    esi, esi
0x46B893: jnz     short loc_46B89C
0x46B895: pop     edi
0x46B896: mov     al, 1
0x46B898: pop     esi
0x46B899: retn    4
0x46B89C: mov     cl, [edi+4]
0x46B89F: cmp     cl, [esi+4]
0x46B8A2: jnz     short loc_46B895
0x46B8A4: mov     ecx, edi
0x46B8A6: call    TESForm__GetEditorNameLen
0x46B8AB: test    eax, eax
0x46B8AD: jnz     short loc_46B8BA
0x46B8AF: mov     ecx, esi
0x46B8B1: call    TESForm__GetEditorNameLen
0x46B8B6: test    eax, eax
0x46B8B8: jz      short loc_46B8F6
0x46B8BA: push    ebx
0x46B8BB: mov     ecx, esi
0x46B8BD: call    TESForm__GetEditorNameLen
0x46B8C2: mov     ecx, edi
0x46B8C4: mov     ebx, eax
0x46B8C6: call    TESForm__GetEditorNameLen
0x46B8CB: cmp     eax, ebx
0x46B8CD: pop     ebx
0x46B8CE: jnz     short loc_46B895
0x46B8D0: mov     edx, [esi]
0x46B8D2: mov     eax, [edx+0D4h]
0x46B8D8: mov     ecx, esi
0x46B8DA: call    eax
0x46B8DC: mov     edx, [edi]
0x46B8DE: push    eax; Str2
0x46B8DF: mov     eax, [edx+0D4h]
0x46B8E5: mov     ecx, edi
0x46B8E7: call    eax
0x46B8E9: push    eax; Str1
0x46B8EA: call    __strcmp
0x46B8EF: add     esp, 8
0x46B8F2: test    eax, eax
0x46B8F4: jnz     short loc_46B895
0x46B8F6: mov     ecx, [esi+8]
0x46B8F9: xor     ecx, [edi+8]
0x46B8FC: pop     edi
0x46B8FD: test    ecx, 0FFFFBFF4h
0x46B903: setnz   al
0x46B906: pop     esi
0x46B907: retn    4
