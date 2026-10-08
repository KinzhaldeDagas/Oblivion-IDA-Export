0x6E03C0: push    esi
0x6E03C1: push    edi
0x6E03C2: mov     edi, [esp+8+arg_0]
0x6E03C6: push    edi
0x6E03C7: mov     esi, ecx
0x6E03C9: call    NiTimeController_LinkObject; Resolves streamed next-controller and target links. Next +0x34 is refcounted; target +0x30 is non-owning. For streams older than 0x0A000110, propagates the controller manager-controlled state to the linked target property flags.
0x6E03CE: mov     ecx, edi
0x6E03D0: call    sub_7124A0
0x6E03D5: pop     edi
0x6E03D6: mov     [esi+40h], eax
0x6E03D9: pop     esi
0x6E03DA: retn    4
