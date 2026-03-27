0x4CBBB0: push    esi
0x4CBBB1: mov     esi, ecx
0x4CBBB3: push    edi
0x4CBBB4: push    esi; a2
0x4CBBB5: mov     ecx, offset stru_B35C80; this
0x4CBBBA: call    sub_496EA0
0x4CBBBF: mov     ecx, [esp+8+arg_0]
0x4CBBC3: lea     eax, [esi+48h]
0x4CBBC6: push    eax
0x4CBBC7: push    ecx
0x4CBBC8: call    sub_4BC4A0
0x4CBBCD: add     esp, 8
0x4CBBD0: push    esi; a2
0x4CBBD1: mov     ecx, offset stru_B35C80; this
0x4CBBD6: mov     edi, eax
0x4CBBD8: call    sub_496F50
0x4CBBDD: mov     eax, edi
0x4CBBDF: pop     edi
0x4CBBE0: pop     esi
0x4CBBE1: retn    4
