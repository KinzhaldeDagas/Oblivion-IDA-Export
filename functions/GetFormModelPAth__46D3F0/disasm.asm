0x46D3F0: push    esi
0x46D3F1: mov     esi, [esp+4+arg_0]
0x46D3F5: push    0; int
0x46D3F7: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x46D3FC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46D401: push    0; int
0x46D403: push    esi; void *
0x46D404: call    OblivionDynamicCast
0x46D409: add     esp, 14h
0x46D40C: test    eax, eax
0x46D40E: jnz     short loc_46D430
0x46D410: push    eax; int
0x46D411: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x46D416: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46D41B: push    eax; int
0x46D41C: push    esi; void *
0x46D41D: call    OblivionDynamicCast
0x46D422: push    eax
0x46D423: push    esi
0x46D424: call    sub_4694A0
0x46D429: add     esp, 1Ch
0x46D42C: test    eax, eax
0x46D42E: jz      short loc_46D43A
0x46D430: mov     edx, [eax]
0x46D432: mov     ecx, eax
0x46D434: mov     eax, [edx+14h]
0x46D437: pop     esi
0x46D438: jmp     eax
0x46D43A: mov     eax, offset EmptyString
0x46D43F: pop     esi
0x46D440: retn
