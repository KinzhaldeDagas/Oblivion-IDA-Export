0x487C30: push    0FFFFFFFFh
0x487C32: push    offset SEH_6CF490
0x487C37: mov     eax, large fs:0
0x487C3D: push    eax
0x487C3E: push    ebx
0x487C3F: push    ebp
0x487C40: push    esi
0x487C41: push    edi
0x487C42: mov     eax, ds:0B30AACh
0x487C47: xor     eax, esp
0x487C49: push    eax
0x487C4A: lea     eax, [esp+20h+var_C]
0x487C4E: mov     large fs:0, eax
0x487C54: mov     esi, ecx
0x487C56: mov     edi, [esp+20h+arg_4]
0x487C5A: mov     eax, [esp+20h+arg_0]
0x487C5E: push    edi
0x487C5F: push    1
0x487C61: push    eax
0x487C62: call    ContainerExtraData_GetEntryForForm
0x487C67: mov     ebx, eax
0x487C69: xor     ebp, ebp
0x487C6B: cmp     ebx, ebp
0x487C6D: jnz     loc_487D04
0x487C73: cmp     edi, ebp
0x487C75: jnz     loc_487D04
0x487C7B: mov     ecx, [esi+4]; this
0x487C7E: cmp     ecx, ebp
0x487C80: jz      short loc_487C89
0x487C82: call    TESObjectREFR_GetContainer
0x487C87: jmp     short loc_487C8B
0x487C89: xor     eax, eax
0x487C8B: lea     edi, [eax+8]
0x487C8E: cmp     edi, ebp
0x487C90: jz      short loc_487D02
0x487C92: cmp     [edi+4], ebp
0x487C95: jnz     short loc_487C9B
0x487C97: cmp     [edi], ebp
0x487C99: jz      short loc_487D02
0x487C9B: mov     eax, [edi]
0x487C9D: mov     ecx, [esp+20h+arg_0]
0x487CA1: cmp     [eax+4], ecx
0x487CA4: jnz     short loc_487CFB
0x487CA6: push    0Ch; Size
0x487CA8: call    FormHeapAlloc
0x487CAD: mov     esi, eax
0x487CAF: add     esp, 4
0x487CB2: mov     [esp+20h+arg_4], esi
0x487CB6: cmp     esi, ebp
0x487CB8: mov     [esp+20h+var_4], ebp
0x487CBC: jz      short loc_487CE8
0x487CBE: mov     edx, [esp+20h+arg_0]
0x487CC2: push    8; Size
0x487CC4: mov     [esi+8], edx
0x487CC7: call    FormHeapAlloc
0x487CCC: add     esp, 4
0x487CCF: cmp     eax, ebp
0x487CD1: jz      short loc_487CDF
0x487CD3: mov     [eax], ebp
0x487CD5: mov     [eax+4], ebp
0x487CD8: mov     [esi], eax
0x487CDA: mov     [esi+4], ebp
0x487CDD: jmp     short loc_487CEA
0x487CDF: xor     eax, eax
0x487CE1: mov     [esi], eax
0x487CE3: mov     [esi+4], ebp
0x487CE6: jmp     short loc_487CEA
0x487CE8: xor     esi, esi
0x487CEA: mov     eax, [edi]
0x487CEC: mov     ecx, [eax]
0x487CEE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x487CF6: mov     ebx, esi
0x487CF8: mov     [esi+4], ecx
0x487CFB: mov     edi, [edi+4]
0x487CFE: cmp     edi, ebp
0x487D00: jnz     short loc_487C92
0x487D02: mov     eax, ebx
0x487D04: mov     ecx, dword ptr [esp+20h+var_C]
0x487D08: mov     large fs:0, ecx
0x487D0F: pop     ecx
0x487D10: pop     edi
0x487D11: pop     esi
0x487D12: pop     ebp
0x487D13: pop     ebx
0x487D14: add     esp, 0Ch
0x487D17: retn    8
