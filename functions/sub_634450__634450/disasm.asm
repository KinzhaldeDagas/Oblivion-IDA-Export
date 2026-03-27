0x634450: mov     eax, [esp+arg_0]
0x634454: push    esi
0x634455: mov     esi, ecx
0x634457: mov     edx, [esi]
0x634459: mov     [esi+2D0h], eax
0x63445F: mov     eax, [edx+4CCh]
0x634465: mov     byte ptr [esi+2DEh], 1
0x63446C: call    eax
0x63446E: cmp     [esi+2E4h], eax
0x634474: jz      short loc_63448F
0x634476: mov     edx, [esi]
0x634478: mov     eax, [edx+4CCh]
0x63447E: mov     ecx, esi
0x634480: mov     byte ptr [esi+2E8h], 0
0x634487: call    eax
0x634489: mov     [esi+2E4h], eax
0x63448F: pop     esi
0x634490: retn    4
