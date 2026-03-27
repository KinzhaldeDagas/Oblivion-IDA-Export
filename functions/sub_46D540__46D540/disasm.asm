0x46D540: mov     eax, [esp+arg_4]
0x46D544: test    eax, eax
0x46D546: jz      short locret_46D56F
0x46D548: push    0; int
0x46D54A: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x46D54F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46D554: push    0; int
0x46D556: push    eax; void *
0x46D557: call    OblivionDynamicCast
0x46D55C: add     esp, 14h
0x46D55F: test    eax, eax
0x46D561: jz      short locret_46D56F
0x46D563: mov     ecx, [esp+Str]
0x46D567: push    ecx; Str
0x46D568: mov     ecx, eax
0x46D56A: call    sub_46D4F0
0x46D56F: retn
