0x634630: push    esi
0x634631: mov     esi, ecx
0x634633: mov     eax, [esi]
0x634635: mov     edx, [eax+4CCh]
0x63463B: mov     dword ptr [esi+2D0h], 0
0x634645: mov     byte ptr [esi+2DEh], 0
0x63464C: call    edx
0x63464E: cmp     [esi+2E4h], eax
0x634654: jz      short loc_63466F
0x634656: mov     eax, [esi]
0x634658: mov     edx, [eax+4CCh]
0x63465E: mov     ecx, esi
0x634660: mov     byte ptr [esi+2E8h], 0
0x634667: call    edx
0x634669: mov     [esi+2E4h], eax
0x63466F: pop     esi
0x634670: retn
