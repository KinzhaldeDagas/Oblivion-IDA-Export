0x7A6BB0: push    0FFFFFFFFh
0x7A6BB2: push    offset SEH_7A6BB0
0x7A6BB7: mov     eax, large fs:0
0x7A6BBD: push    eax
0x7A6BBE: push    ecx
0x7A6BBF: push    esi
0x7A6BC0: push    edi
0x7A6BC1: mov     eax, ds:0B30AACh
0x7A6BC6: xor     eax, esp
0x7A6BC8: push    eax
0x7A6BC9: lea     eax, [esp+1Ch+var_C]
0x7A6BCD: mov     large fs:0, eax
0x7A6BD3: mov     esi, ecx
0x7A6BD5: mov     [esp+1Ch+var_10], esi
0x7A6BD9: call    sub_78E550
0x7A6BDE: lea     edi, [esi+18h]
0x7A6BE1: mov     ecx, edi
0x7A6BE3: mov     [esp+1Ch+var_4], 0
0x7A6BEB: call    sub_78E550
0x7A6BF0: fld     dword ptr ds:0A32048h
0x7A6BF6: fst     dword ptr [esi+8]
0x7A6BF9: mov     eax, esi
0x7A6BFB: fst     dword ptr [esi+4]
0x7A6BFE: fstp    dword ptr [esi]
0x7A6C00: fld     dword ptr ds:0A3B888h
0x7A6C06: fst     dword ptr [esi+20h]
0x7A6C09: fst     dword ptr [esi+1Ch]
0x7A6C0C: fstp    dword ptr [edi]
0x7A6C0E: mov     ecx, [esp+1Ch+var_C]
0x7A6C12: mov     large fs:0, ecx
0x7A6C19: pop     ecx
0x7A6C1A: pop     edi
0x7A6C1B: pop     esi
0x7A6C1C: add     esp, 10h
0x7A6C1F: retn
