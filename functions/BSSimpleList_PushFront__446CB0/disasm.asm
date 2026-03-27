0x446CB0: push    esi
0x446CB1: push    edi
0x446CB2: mov     edi, [esp+8+arg_0]
0x446CB6: test    edi, edi
0x446CB8: mov     esi, ecx
0x446CBA: jz      short BSSimpleList_PushFront___Done
0x446CBC: cmp     dword ptr [esi], 0
0x446CBF: jz      short BSSimpleList_PushFront___SetNodeData
0x446CC1: push    8; Size
0x446CC3: call    FormHeapAlloc
0x446CC8: add     esp, 4
0x446CCB: test    eax, eax
0x446CCD: jz      short loc_446CEA
0x446CCF: mov     ecx, [esi]
0x446CD1: mov     [eax], ecx
0x446CD3: mov     dword ptr [eax+4], 0
0x446CDA: mov     edx, [esi+4]
0x446CDD: mov     [eax+4], edx
0x446CE0: mov     [esi], edi
0x446CE2: pop     edi
0x446CE3: mov     [esi+4], eax
0x446CE6: pop     esi
0x446CE7: retn    4
0x446CEA: mov     edx, [esi+4]
0x446CED: xor     eax, eax
0x446CEF: mov     [eax+4], edx
0x446CF2: mov     [esi+4], eax
