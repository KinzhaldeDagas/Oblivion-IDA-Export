0x741390: push    0FFFFFFFFh
0x741392: push    offset SEH_8C8970
0x741397: mov     eax, large fs:0
0x74139D: push    eax
0x74139E: push    ecx
0x74139F: push    esi
0x7413A0: push    edi
0x7413A1: mov     eax, ds:0B30AACh
0x7413A6: xor     eax, esp
0x7413A8: push    eax
0x7413A9: lea     eax, [esp+1Ch+var_C]
0x7413AD: mov     large fs:0, eax
0x7413B3: mov     edi, ecx
0x7413B5: push    1Ch; Size
0x7413B7: call    FormHeapAlloc
0x7413BC: mov     esi, eax
0x7413BE: add     esp, 4
0x7413C1: mov     [esp+1Ch+var_10], esi
0x7413C5: test    esi, esi
0x7413C7: mov     [esp+1Ch+var_4], 0
0x7413CF: jz      short loc_7413E6
0x7413D1: mov     ecx, esi; this
0x7413D3: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7413D8: mov     dword ptr [esi], offset ??_7NiDitherProperty@@6B@; const NiDitherProperty::`vftable'
0x7413DE: mov     word ptr [esi+18h], 0
0x7413E4: jmp     short loc_7413E8
0x7413E6: xor     esi, esi
0x7413E8: mov     eax, [esp+1Ch+arg_0]
0x7413EC: push    eax
0x7413ED: push    esi
0x7413EE: mov     ecx, edi
0x7413F0: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7413F8: call    sub_700A60
0x7413FD: mov     cx, [edi+18h]
0x741401: mov     [esi+18h], cx
0x741405: mov     eax, esi
0x741407: mov     ecx, [esp+1Ch+var_C]
0x74140B: mov     large fs:0, ecx
0x741412: pop     ecx
0x741413: pop     edi
0x741414: pop     esi
0x741415: add     esp, 10h
0x741418: retn    4
