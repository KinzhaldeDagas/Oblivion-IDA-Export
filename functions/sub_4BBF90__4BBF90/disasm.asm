0x4BBF90: push    ebx
0x4BBF91: mov     ebx, [esp+4+arg_0]
0x4BBF95: push    esi
0x4BBF96: push    edi
0x4BBF97: push    0; int
0x4BBF99: push    offset ??_R0?AVTESSoulGem@@@8; struct TypeDescriptor *
0x4BBF9E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BBFA3: push    0; int
0x4BBFA5: push    ebx; void *
0x4BBFA6: mov     edi, ecx
0x4BBFA8: call    OblivionDynamicCast
0x4BBFAD: mov     esi, eax
0x4BBFAF: add     esp, 14h
0x4BBFB2: test    esi, esi
0x4BBFB4: jz      short loc_4BBFCA
0x4BBFB6: push    ebx
0x4BBFB7: mov     ecx, edi
0x4BBFB9: call    TESObjectMISC_CopyFrom
0x4BBFBE: mov     al, [esi+70h]
0x4BBFC1: mov     [edi+70h], al
0x4BBFC4: mov     cl, [esi+71h]
0x4BBFC7: mov     [edi+71h], cl
0x4BBFCA: pop     edi
0x4BBFCB: pop     esi
0x4BBFCC: pop     ebx
0x4BBFCD: retn    4
