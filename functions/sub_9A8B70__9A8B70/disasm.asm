0x9A8B70: push    esi
0x9A8B71: mov     esi, ecx
0x9A8B73: mov     eax, [esi+0Ch]
0x9A8B76: push    eax
0x9A8B77: mov     dword ptr [esi], offset ??_7NiD3DShaderConstantMapEntry@@6B@; const NiD3DShaderConstantMapEntry::`vftable'
0x9A8B7D: call    FormHeapFree
0x9A8B82: mov     ecx, [esi+24h]
0x9A8B85: push    ecx
0x9A8B86: call    FormHeapFree
0x9A8B8B: add     esp, 8
0x9A8B8E: cmp     byte ptr [esi+34h], 0
0x9A8B92: jz      short loc_9A8BA0
0x9A8B94: mov     edx, [esi+30h]
0x9A8B97: push    edx
0x9A8B98: call    FormHeapFree
0x9A8B9D: add     esp, 4
0x9A8BA0: push    offset NiRefObject_objcount; lpAddend
0x9A8BA5: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x9A8BAB: call    ds:InterlockedDecrement
0x9A8BB1: test    [esp+4+arg_0], 1
0x9A8BB6: jz      short loc_9A8BC1
0x9A8BB8: push    esi
0x9A8BB9: call    FormHeapFree
0x9A8BBE: add     esp, 4
0x9A8BC1: mov     eax, esi
0x9A8BC3: pop     esi
0x9A8BC4: retn    4
