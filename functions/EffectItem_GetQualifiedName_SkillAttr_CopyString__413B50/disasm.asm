0x413B50: mov     al, [ecx]
0x413B52: mov     [edx], al
0x413B54: add     ecx, 1
0x413B57: add     edx, 1
0x413B5A: test    al, al
0x413B5C: jnz     short EffectItem_GetQualifiedName_SkillAttr___CopyString
0x413B5E: mov     eax, [esp+arg_0]
0x413B62: push    eax
0x413B63: call    FormHeapFree
0x413B68: add     esp, 4
0x413B6B: pop     esi
0x413B6C: add     esp, 8
0x413B6F: retn    4
