0x6F2DB0: push    0FFFFFFFFh
0x6F2DB2: push    offset SEH_6F2DB0
0x6F2DB7: mov     eax, large fs:0
0x6F2DBD: push    eax
0x6F2DBE: push    ecx
0x6F2DBF: push    esi
0x6F2DC0: push    edi
0x6F2DC1: mov     eax, ds:0B30AACh
0x6F2DC6: xor     eax, esp
0x6F2DC8: push    eax
0x6F2DC9: lea     eax, [esp+1Ch+var_C]
0x6F2DCD: mov     large fs:0, eax
0x6F2DD3: mov     esi, ecx
0x6F2DD5: mov     [esp+1Ch+var_10], esi
0x6F2DD9: mov     edi, [esp+1Ch+arg_0]
0x6F2DDD: push    0FFFFFFFFh
0x6F2DDF: push    0
0x6F2DE1: mov     dword ptr [esi+18h], 0Fh
0x6F2DE8: mov     dword ptr [esi+14h], 0
0x6F2DEF: push    edi
0x6F2DF0: mov     byte ptr [esi+4], 0
0x6F2DF4: call    sub_414420
0x6F2DF9: mov     eax, [edi+1Ch]
0x6F2DFC: add     edi, 20h ; ' '
0x6F2DFF: push    edi
0x6F2E00: lea     ecx, [esi+20h]
0x6F2E03: mov     [esp+20h+var_4], 0
0x6F2E0B: mov     [esi+1Ch], eax
0x6F2E0E: call    sub_6F23C0
0x6F2E13: mov     eax, esi
0x6F2E15: mov     ecx, [esp+1Ch+var_C]
0x6F2E19: mov     large fs:0, ecx
0x6F2E20: pop     ecx
0x6F2E21: pop     edi
0x6F2E22: pop     esi
0x6F2E23: add     esp, 10h
0x6F2E26: retn    4
