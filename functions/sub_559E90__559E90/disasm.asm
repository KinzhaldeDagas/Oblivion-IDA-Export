0x559E90: push    0FFFFFFFFh
0x559E92: push    offset SEH_5A3F40
0x559E97: mov     eax, large fs:0
0x559E9D: push    eax
0x559E9E: push    ecx
0x559E9F: push    esi
0x559EA0: push    edi
0x559EA1: mov     eax, ds:0B30AACh
0x559EA6: xor     eax, esp
0x559EA8: push    eax
0x559EA9: lea     eax, [esp+1Ch+var_C]
0x559EAD: mov     large fs:0, eax
0x559EB3: mov     esi, ecx
0x559EB5: mov     [esp+1Ch+var_10], esi
0x559EB9: mov     edi, [esi+8]
0x559EBC: test    edi, edi
0x559EBE: mov     [esp+1Ch+var_4], 0
0x559EC6: jz      short loc_559ED8
0x559EC8: mov     ecx, edi
0x559ECA: call    sub_559A70
0x559ECF: push    edi
0x559ED0: call    FormHeapFree
0x559ED5: add     esp, 4
0x559ED8: mov     eax, [esi]
0x559EDA: push    eax
0x559EDB: call    FormHeapFree
0x559EE0: add     esp, 4
0x559EE3: mov     dword ptr [esi], 0
0x559EE9: mov     word ptr [esi+6], 0
0x559EEF: mov     word ptr [esi+4], 0
0x559EF5: mov     ecx, [esp+1Ch+var_C]
0x559EF9: mov     large fs:0, ecx
0x559F00: pop     ecx
0x559F01: pop     edi
0x559F02: pop     esi
0x559F03: add     esp, 10h
0x559F06: retn
