0x740CF0: mov     eax, [esp+arg_4]
0x740CF4: push    esi
0x740CF5: push    edi
0x740CF6: mov     edi, [esp+8+arg_0]
0x740CFA: push    eax
0x740CFB: push    edi
0x740CFC: mov     esi, ecx
0x740CFE: call    sub_700A60
0x740D03: mov     cx, [esi+18h]
0x740D07: mov     [edi+18h], cx
0x740D0B: fld     dword ptr [esi+1Ch]
0x740D0E: lea     eax, [esi+20h]
0x740D11: fstp    dword ptr [edi+1Ch]
0x740D14: mov     edx, [eax]
0x740D16: lea     ecx, [edi+20h]
0x740D19: mov     [ecx], edx
0x740D1B: mov     edx, [eax+4]
0x740D1E: mov     [ecx+4], edx
0x740D21: mov     eax, [eax+8]
0x740D24: pop     edi
0x740D25: mov     [ecx+8], eax
0x740D28: pop     esi
0x740D29: retn    8
