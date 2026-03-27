0x485E00: push    0FFFFFFFFh
0x485E02: push    offset SEH_6E3250
0x485E07: mov     eax, large fs:0
0x485E0D: push    eax
0x485E0E: push    esi
0x485E0F: push    edi
0x485E10: mov     eax, ds:0B30AACh
0x485E15: xor     eax, esp
0x485E17: push    eax
0x485E18: lea     eax, [esp+18h+var_C]
0x485E1C: mov     large fs:0, eax
0x485E22: mov     esi, [esp+18h+arg_0]
0x485E26: lea     edi, [esi+44h]
0x485E29: mov     ecx, edi; this
0x485E2B: call    ExtraDataList_GetContainerChanges
0x485E30: test    eax, eax
0x485E32: jnz     short loc_485E6E
0x485E34: push    10h; Size
0x485E36: call    FormHeapAlloc
0x485E3B: add     esp, 4
0x485E3E: mov     [esp+18h+arg_0], eax
0x485E42: test    eax, eax
0x485E44: mov     [esp+18h+var_4], 0
0x485E4C: jz      short loc_485E5A
0x485E4E: push    esi
0x485E4F: mov     ecx, eax
0x485E51: call    ContainerExtraData_constr
0x485E56: mov     esi, eax
0x485E58: jmp     short loc_485E5C
0x485E5A: xor     esi, esi
0x485E5C: push    esi
0x485E5D: mov     ecx, edi
0x485E5F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x485E67: call    ExtraDataList_AddContainerChanges
0x485E6C: mov     eax, esi
0x485E6E: mov     ecx, [esp+18h+var_C]
0x485E72: mov     large fs:0, ecx
0x485E79: pop     ecx
0x485E7A: pop     edi
0x485E7B: pop     esi
0x485E7C: add     esp, 0Ch
0x485E7F: retn
