0x9A46A0: push    ebx
0x9A46A1: push    esi
0x9A46A2: push    edi
0x9A46A3: mov     esi, ecx
0x9A46A5: xor     ebx, ebx
0x9A46A7: push    offset NiRefObject_objcount; lpAddend
0x9A46AC: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x9A46B2: mov     [esi+4], ebx
0x9A46B5: call    ds:InterlockedIncrement
0x9A46BB: mov     dword ptr [esi], offset ??_7NiD3DShaderConstantMap@@6B@; const NiD3DShaderConstantMap::`vftable'
0x9A46C1: mov     dword ptr [esi+8], 2
0x9A46C8: lea     edi, [esi+0Ch]
0x9A46CB: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiD3DShaderConstantMapEntry@@@@@@6B@; const NiTArray<NiPointer<NiD3DShaderConstantMapEntry>>::`vftable'
0x9A46D1: mov     [edi+8], bx
0x9A46D5: mov     [edi+0Ah], bx
0x9A46D9: mov     [edi+0Ch], bx
0x9A46DD: mov     [edi+4], ebx
0x9A46E0: mov     eax, 1
0x9A46E5: mov     [edi+0Eh], ax
0x9A46E9: mov     [esi+1Ch], al
0x9A46EC: mov     eax, [esp+0Ch+arg_0]
0x9A46F0: push    eax
0x9A46F1: mov     ecx, esi
0x9A46F3: mov     [esi+20h], ebx
0x9A46F6: mov     [esi+24h], ebx
0x9A46F9: mov     [esi+28h], ebx
0x9A46FC: mov     [esi+2Ch], ebx
0x9A46FF: mov     [esi+30h], ebx
0x9A4702: call    sub_9A8BD0
0x9A4707: mov     ecx, edi
0x9A4709: call    sub_9A4310
0x9A470E: pop     edi
0x9A470F: mov     eax, esi
0x9A4711: pop     esi
0x9A4712: pop     ebx
0x9A4713: retn    4
