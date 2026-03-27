0x6E4F80: push    ebx
0x6E4F81: push    esi
0x6E4F82: mov     esi, [esp+8+arg_0]
0x6E4F86: push    edi
0x6E4F87: push    esi
0x6E4F88: mov     edi, ecx
0x6E4F8A: call    sub_6ED580
0x6E4F8F: mov     eax, ds:0B3E3D8h
0x6E4F94: push    eax; ArgList
0x6E4F95: call    TESOutput_PrintString
0x6E4F9A: movzx   ebx, word ptr [esi+0Ah]
0x6E4F9E: movzx   ecx, word ptr [esi+8]
0x6E4FA2: add     esp, 4
0x6E4FA5: cmp     ebx, ecx
0x6E4FA7: mov     [esp+0Ch+arg_0], eax
0x6E4FAB: jb      short loc_6E4FBB
0x6E4FAD: movzx   edx, word ptr [esi+0Eh]
0x6E4FB1: add     edx, ebx
0x6E4FB3: push    edx
0x6E4FB4: mov     ecx, esi
0x6E4FB6: call    NiTArray_SetSize
0x6E4FBB: lea     eax, [esp+0Ch+arg_0]
0x6E4FBF: push    eax
0x6E4FC0: push    ebx
0x6E4FC1: mov     ecx, esi
0x6E4FC3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E4FC8: push    esi
0x6E4FC9: lea     ecx, [edi+1Ch]
0x6E4FCC: call    sub_6CBAD0
0x6E4FD1: mov     ecx, [edi+3Ch]
0x6E4FD4: push    ecx; int
0x6E4FD5: push    offset aM_ktranscphand; "m_kTransCPHandle"
0x6E4FDA: call    TESOutput_PrintLabeledUnsignedInt
0x6E4FDF: movzx   ebx, word ptr [esi+0Ah]
0x6E4FE3: movzx   edx, word ptr [esi+8]
0x6E4FE7: add     esp, 8
0x6E4FEA: cmp     ebx, edx
0x6E4FEC: mov     [esp+0Ch+arg_0], eax
0x6E4FF0: jb      short loc_6E5000
0x6E4FF2: movzx   eax, word ptr [esi+0Eh]
0x6E4FF6: add     eax, ebx
0x6E4FF8: push    eax
0x6E4FF9: mov     ecx, esi
0x6E4FFB: call    NiTArray_SetSize
0x6E5000: lea     ecx, [esp+0Ch+arg_0]
0x6E5004: push    ecx
0x6E5005: push    ebx
0x6E5006: mov     ecx, esi
0x6E5008: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E500D: mov     edx, [edi+40h]
0x6E5010: push    edx; int
0x6E5011: push    offset aM_krotcphandle; "m_kRotCPHandle"
0x6E5016: call    TESOutput_PrintLabeledUnsignedInt
0x6E501B: movzx   ebx, word ptr [esi+0Ah]
0x6E501F: mov     [esp+14h+arg_0], eax
0x6E5023: movzx   eax, word ptr [esi+8]
0x6E5027: add     esp, 8
0x6E502A: cmp     ebx, eax
0x6E502C: jb      short loc_6E503C
0x6E502E: movzx   ecx, word ptr [esi+0Eh]
0x6E5032: add     ecx, ebx
0x6E5034: push    ecx
0x6E5035: mov     ecx, esi
0x6E5037: call    NiTArray_SetSize
0x6E503C: lea     edx, [esp+0Ch+arg_0]
0x6E5040: push    edx
0x6E5041: push    ebx
0x6E5042: mov     ecx, esi
0x6E5044: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E5049: mov     eax, [edi+44h]
0x6E504C: push    eax; int
0x6E504D: push    offset aM_kscalecphand; "m_kScaleCPHandle"
0x6E5052: call    TESOutput_PrintLabeledUnsignedInt
0x6E5057: movzx   edi, word ptr [esi+0Ah]
0x6E505B: movzx   ecx, word ptr [esi+8]
0x6E505F: add     esp, 8
0x6E5062: cmp     edi, ecx
0x6E5064: mov     [esp+0Ch+arg_0], eax
0x6E5068: jb      short loc_6E5078
0x6E506A: movzx   edx, word ptr [esi+0Eh]
0x6E506E: add     edx, edi
0x6E5070: push    edx
0x6E5071: mov     ecx, esi
0x6E5073: call    NiTArray_SetSize
0x6E5078: lea     eax, [esp+0Ch+arg_0]
0x6E507C: push    eax
0x6E507D: push    edi
0x6E507E: mov     ecx, esi
0x6E5080: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E5085: pop     edi
0x6E5086: pop     esi
0x6E5087: pop     ebx
0x6E5088: retn    4
