0x46DDC0: mov     eax, [esp+arg_0]
0x46DDC4: push    esi
0x46DDC5: push    edi
0x46DDC6: push    0; int
0x46DDC8: push    offset ??_R0?AVTESModelList@@@8; struct TypeDescriptor *
0x46DDCD: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46DDD2: push    0; int
0x46DDD4: push    eax; void *
0x46DDD5: mov     edi, ecx
0x46DDD7: call    OblivionDynamicCast
0x46DDDC: mov     esi, eax
0x46DDDE: add     esp, 14h
0x46DDE1: test    esi, esi
0x46DDE3: jz      short loc_46DE08
0x46DDE5: mov     edx, [edi]
0x46DDE7: mov     eax, [edx+4]
0x46DDEA: mov     ecx, edi
0x46DDEC: call    eax
0x46DDEE: add     esi, 4
0x46DDF1: jz      short loc_46DE08
0x46DDF3: mov     eax, [esi]
0x46DDF5: test    eax, eax
0x46DDF7: jz      short loc_46DE01
0x46DDF9: push    eax
0x46DDFA: mov     ecx, edi
0x46DDFC: call    sub_46DD70
0x46DE01: mov     esi, [esi+4]
0x46DE04: test    esi, esi
0x46DE06: jnz     short loc_46DDF3
0x46DE08: pop     edi
0x46DE09: pop     esi
0x46DE0A: retn    4
