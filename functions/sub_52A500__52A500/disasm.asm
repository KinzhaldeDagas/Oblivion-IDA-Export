0x52A500: push    esi
0x52A501: mov     esi, ecx
0x52A503: or      byte ptr [esi+3Ch], 1
0x52A507: mov     eax, [esi]
0x52A509: mov     edx, [eax+40h]
0x52A50C: push    4
0x52A50E: call    edx
0x52A510: mov     byte ptr [esi+5Ch], 0
0x52A514: mov     ecx, esi
0x52A516: pop     esi
0x52A517: jmp     j_TESForm_InitializeComponents
