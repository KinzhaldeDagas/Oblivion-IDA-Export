0x6FBAC0: push    ebx
0x6FBAC1: push    esi
0x6FBAC2: mov     esi, [esp+8+arg_0]
0x6FBAC6: push    edi
0x6FBAC7: push    esi
0x6FBAC8: mov     ebx, ecx
0x6FBACA: call    sub_721730
0x6FBACF: mov     eax, ds:0B3F4BCh
0x6FBAD4: push    eax; ArgList
0x6FBAD5: call    TESOutput_PrintString
0x6FBADA: movzx   edi, word ptr [esi+0Ah]
0x6FBADE: movzx   ecx, word ptr [esi+8]
0x6FBAE2: add     esp, 4
0x6FBAE5: cmp     edi, ecx
0x6FBAE7: mov     [esp+0Ch+arg_0], eax
0x6FBAEB: jb      short loc_6FBAFB
0x6FBAED: movzx   edx, word ptr [esi+0Eh]
0x6FBAF1: add     edx, edi
0x6FBAF3: push    edx
0x6FBAF4: mov     ecx, esi
0x6FBAF6: call    NiTArray_SetSize
0x6FBAFB: lea     eax, [esp+0Ch+arg_0]
0x6FBAFF: push    eax
0x6FBB00: push    edi
0x6FBB01: mov     ecx, esi
0x6FBB03: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FBB08: push    offset aCenter_1; "Center"
0x6FBB0D: lea     ecx, [ebx+0Ch]
0x6FBB10: call    sub_707280
0x6FBB15: movzx   edi, word ptr [esi+0Ah]
0x6FBB19: movzx   ecx, word ptr [esi+8]
0x6FBB1D: cmp     edi, ecx
0x6FBB1F: mov     [esp+0Ch+arg_0], eax
0x6FBB23: jb      short loc_6FBB33
0x6FBB25: movzx   edx, word ptr [esi+0Eh]
0x6FBB29: add     edx, edi
0x6FBB2B: push    edx
0x6FBB2C: mov     ecx, esi
0x6FBB2E: call    NiTArray_SetSize
0x6FBB33: lea     eax, [esp+0Ch+arg_0]
0x6FBB37: push    eax
0x6FBB38: push    edi
0x6FBB39: mov     ecx, esi
0x6FBB3B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FBB40: push    offset aExtents; "Extents"
0x6FBB45: lea     ecx, [ebx+18h]
0x6FBB48: call    sub_707280
0x6FBB4D: movzx   edi, word ptr [esi+0Ah]
0x6FBB51: movzx   ecx, word ptr [esi+8]
0x6FBB55: cmp     edi, ecx
0x6FBB57: mov     [esp+0Ch+arg_0], eax
0x6FBB5B: jb      short loc_6FBB6B
0x6FBB5D: movzx   edx, word ptr [esi+0Eh]
0x6FBB61: add     edx, edi
0x6FBB63: push    edx
0x6FBB64: mov     ecx, esi
0x6FBB66: call    NiTArray_SetSize
0x6FBB6B: lea     eax, [esp+0Ch+arg_0]
0x6FBB6F: push    eax
0x6FBB70: push    edi
0x6FBB71: mov     ecx, esi
0x6FBB73: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FBB78: pop     edi
0x6FBB79: pop     esi
0x6FBB7A: pop     ebx
0x6FBB7B: retn    4
