0x739C40: push    0FFFFFFFFh
0x739C42: push    offset SEH_8C8970
0x739C47: mov     eax, large fs:0
0x739C4D: push    eax
0x739C4E: push    ecx
0x739C4F: push    esi
0x739C50: push    edi
0x739C51: mov     eax, ds:0B30AACh
0x739C56: xor     eax, esp
0x739C58: push    eax
0x739C59: lea     eax, [esp+1Ch+var_C]
0x739C5D: mov     large fs:0, eax
0x739C63: mov     esi, ecx
0x739C65: push    1Ch; Size
0x739C67: call    FormHeapAlloc
0x739C6C: add     esp, 4
0x739C6F: mov     [esp+1Ch+var_10], eax
0x739C73: xor     edi, edi
0x739C75: cmp     eax, edi
0x739C77: mov     [esp+1Ch+var_4], edi
0x739C7B: jz      short loc_739C97
0x739C7D: mov     ecx, [esi+18h]
0x739C80: mov     edx, [esi+14h]
0x739C83: push    ecx
0x739C84: mov     ecx, [esi+10h]
0x739C87: push    edx
0x739C88: movzx   edx, word ptr [esi+0Ch]
0x739C8C: push    ecx
0x739C8D: push    edx
0x739C8E: mov     ecx, eax; this
0x739C90: call    ??0NiScreenPolygon@@QAE@XZ; NiScreenPolygon::NiScreenPolygon(void)
0x739C95: mov     edi, eax
0x739C97: mov     eax, [esp+1Ch+arg_0]
0x739C9B: push    eax
0x739C9C: push    edi
0x739C9D: mov     ecx, esi
0x739C9F: mov     [esp+24h+var_4], 0FFFFFFFFh
0x739CA7: call    sub_739010
0x739CAC: mov     eax, edi
0x739CAE: mov     ecx, [esp+1Ch+var_C]
0x739CB2: mov     large fs:0, ecx
0x739CB9: pop     ecx
0x739CBA: pop     edi
0x739CBB: pop     esi
0x739CBC: add     esp, 10h
0x739CBF: retn    4
