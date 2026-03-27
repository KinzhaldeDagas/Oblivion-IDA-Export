0x741B00: push    0FFFFFFFFh
0x741B02: push    offset SEH_8C8970
0x741B07: mov     eax, large fs:0
0x741B0D: push    eax
0x741B0E: push    ecx
0x741B0F: push    esi
0x741B10: push    edi
0x741B11: mov     eax, ds:0B30AACh
0x741B16: xor     eax, esp
0x741B18: push    eax
0x741B19: lea     eax, [esp+1Ch+var_C]
0x741B1D: mov     large fs:0, eax
0x741B23: mov     edi, ecx
0x741B25: push    0FCh ; 'ü'; Size
0x741B2A: call    FormHeapAlloc
0x741B2F: add     esp, 4
0x741B32: mov     [esp+1Ch+var_10], eax
0x741B36: xor     esi, esi
0x741B38: cmp     eax, esi
0x741B3A: mov     [esp+1Ch+var_4], esi
0x741B3E: jz      short loc_741B49
0x741B40: mov     ecx, eax
0x741B42: call    sub_741A50
0x741B47: mov     esi, eax
0x741B49: mov     eax, [esp+1Ch+arg_0]
0x741B4D: push    eax
0x741B4E: push    esi
0x741B4F: mov     ecx, edi
0x741B51: mov     [esp+24h+var_4], 0FFFFFFFFh
0x741B59: call    sub_70AC60
0x741B5E: mov     ecx, [edi+0DCh]
0x741B64: lea     eax, [edi+0DCh]
0x741B6A: mov     [esi+0DCh], ecx
0x741B70: mov     edx, [eax+4]
0x741B73: mov     [esi+0E0h], edx
0x741B79: mov     ecx, [eax+8]
0x741B7C: mov     [esi+0E4h], ecx
0x741B82: mov     edx, [eax+0Ch]
0x741B85: mov     [esi+0E8h], edx
0x741B8B: mov     eax, esi
0x741B8D: mov     ecx, [esp+1Ch+var_C]
0x741B91: mov     large fs:0, ecx
0x741B98: pop     ecx
0x741B99: pop     edi
0x741B9A: pop     esi
0x741B9B: add     esp, 10h
0x741B9E: retn    4
