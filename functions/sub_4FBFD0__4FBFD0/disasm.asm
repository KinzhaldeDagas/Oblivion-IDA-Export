0x4FBFD0: push    0FFFFFFFFh
0x4FBFD2: push    offset SEH_5A3F40
0x4FBFD7: mov     eax, large fs:0
0x4FBFDD: push    eax
0x4FBFDE: push    ecx
0x4FBFDF: push    esi
0x4FBFE0: push    edi
0x4FBFE1: mov     eax, ds:0B30AACh
0x4FBFE6: xor     eax, esp
0x4FBFE8: push    eax
0x4FBFE9: lea     eax, [esp+1Ch+var_C]
0x4FBFED: mov     large fs:0, eax
0x4FBFF3: mov     esi, ecx
0x4FBFF5: mov     [esp+1Ch+var_10], esi
0x4FBFF9: xor     eax, eax
0x4FBFFB: mov     [esi], eax
0x4FBFFD: mov     [esi+4], ax
0x4FC001: mov     [esi+6], ax
0x4FC005: mov     edi, [esp+1Ch+arg_0]
0x4FC009: push    eax; a3
0x4FC00A: mov     [esp+20h+var_4], eax
0x4FC00E: mov     eax, [edi]
0x4FC010: push    eax; a2
0x4FC011: call    BSStringT_Set
0x4FC016: mov     ecx, [edi+8]
0x4FC019: mov     [esi+8], ecx
0x4FC01C: mov     edx, [edi+0Ch]
0x4FC01F: mov     [esi+0Ch], edx
0x4FC022: mov     eax, esi
0x4FC024: mov     ecx, [esp+1Ch+var_C]
0x4FC028: mov     large fs:0, ecx
0x4FC02F: pop     ecx
0x4FC030: pop     edi
0x4FC031: pop     esi
0x4FC032: add     esp, 10h
0x4FC035: retn    4
