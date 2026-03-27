0x740DC0: push    0FFFFFFFFh
0x740DC2: push    offset SEH_8C8970
0x740DC7: mov     eax, large fs:0
0x740DCD: push    eax
0x740DCE: push    ecx
0x740DCF: push    esi
0x740DD0: push    edi
0x740DD1: mov     eax, ds:0B30AACh
0x740DD6: xor     eax, esp
0x740DD8: push    eax
0x740DD9: lea     eax, [esp+1Ch+var_C]
0x740DDD: mov     large fs:0, eax
0x740DE3: mov     edi, ecx
0x740DE5: push    2Ch ; ','; Size
0x740DE7: call    FormHeapAlloc
0x740DEC: mov     esi, eax
0x740DEE: add     esp, 4
0x740DF1: mov     [esp+1Ch+var_10], esi
0x740DF5: test    esi, esi
0x740DF7: mov     [esp+1Ch+var_4], 0
0x740DFF: jz      short loc_740E40
0x740E01: mov     ecx, esi; this
0x740E03: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x740E08: fldz
0x740E0A: mov     dword ptr [esi], offset ??_7NiFogProperty@@6B@; const NiFogProperty::`vftable'
0x740E10: fst     dword ptr [esi+20h]
0x740E13: fst     dword ptr [esi+24h]
0x740E16: fstp    dword ptr [esi+28h]
0x740E19: fld1
0x740E1B: mov     word ptr [esi+18h], 0
0x740E21: fstp    dword ptr [esi+1Ch]
0x740E24: mov     eax, ds:0B3FA90h
0x740E29: mov     [esi+20h], eax
0x740E2C: mov     ecx, ds:0B3FA94h
0x740E32: mov     [esi+24h], ecx
0x740E35: mov     edx, ds:0B3FA98h
0x740E3B: mov     [esi+28h], edx
0x740E3E: jmp     short loc_740E42
0x740E40: xor     esi, esi
0x740E42: mov     eax, [esp+1Ch+arg_0]
0x740E46: push    eax
0x740E47: push    esi
0x740E48: mov     ecx, edi
0x740E4A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x740E52: call    sub_700A60
0x740E57: mov     cx, [edi+18h]
0x740E5B: mov     [esi+18h], cx
0x740E5F: fld     dword ptr [edi+1Ch]
0x740E62: lea     eax, [edi+20h]
0x740E65: fstp    dword ptr [esi+1Ch]
0x740E68: mov     edx, [eax]
0x740E6A: mov     [esi+20h], edx
0x740E6D: mov     ecx, [eax+4]
0x740E70: mov     [esi+24h], ecx
0x740E73: mov     edx, [eax+8]
0x740E76: mov     [esi+28h], edx
0x740E79: mov     eax, esi
0x740E7B: mov     ecx, [esp+1Ch+var_C]
0x740E7F: mov     large fs:0, ecx
0x740E86: pop     ecx
0x740E87: pop     edi
0x740E88: pop     esi
0x740E89: add     esp, 10h
0x740E8C: retn    4
