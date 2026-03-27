0x7407C0: push    ebx
0x7407C1: mov     ebx, [esp+4+arg_0]
0x7407C5: push    esi
0x7407C6: push    edi
0x7407C7: mov     edi, [esp+0Ch+arg_8]
0x7407CB: push    edi
0x7407CC: push    1
0x7407CE: push    ebx
0x7407CF: mov     esi, ecx
0x7407D1: call    sub_722F00
0x7407D6: mov     eax, [esi+0B4h]
0x7407DC: mov     esi, [eax+5Ch]
0x7407DF: mov     edx, [esi]
0x7407E1: mov     eax, [edx+5Ch]
0x7407E4: push    edi
0x7407E5: push    1
0x7407E7: push    ebx
0x7407E8: mov     ecx, esi
0x7407EA: call    eax
0x7407EC: mov     byte ptr [edi], 0
0x7407EF: and     word ptr [esi+18h], 0FFEFh
0x7407F5: pop     edi
0x7407F6: pop     esi
0x7407F7: pop     ebx
0x7407F8: retn    0Ch
