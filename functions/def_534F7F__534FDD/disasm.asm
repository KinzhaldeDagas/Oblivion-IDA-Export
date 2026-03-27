0x534FDD: mov     ecx, [esp+arg_18]; jumptable 00534F7F default case
0x534FE1: mov     eax, [esi]
0x534FE3: mov     edx, [eax+2Ch]
0x534FE6: push    ebx
0x534FE7: push    ebp
0x534FE8: push    ecx
0x534FE9: push    edi
0x534FEA: push    offset aError; "Error"
0x534FEF: mov     ecx, esi
0x534FF1: call    edx
0x534FF3: pop     edi
0x534FF4: pop     esi
0x534FF5: pop     ebp
0x534FF6: pop     ebx
0x534FF7: retn    14h
