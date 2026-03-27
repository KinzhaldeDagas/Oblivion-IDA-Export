0x782B20: push    esi
0x782B21: mov     esi, ecx
0x782B23: mov     eax, [esi+8]
0x782B26: push    eax
0x782B27: mov     dword ptr [esi], offset ??_7NiD3DShaderConstantManager@@6B@; const NiD3DShaderConstantManager::`vftable'
0x782B2D: call    FormHeapFree
0x782B32: mov     ecx, [esi+0Ch]
0x782B35: push    ecx
0x782B36: call    FormHeapFree
0x782B3B: mov     edx, [esi+10h]
0x782B3E: push    edx
0x782B3F: call    FormHeapFree
0x782B44: mov     eax, [esi+14h]
0x782B47: push    eax
0x782B48: call    FormHeapFree
0x782B4D: mov     ecx, [esi+30h]
0x782B50: push    ecx
0x782B51: call    FormHeapFree
0x782B56: mov     edx, [esi+34h]
0x782B59: push    edx
0x782B5A: call    FormHeapFree
0x782B5F: mov     eax, [esi+38h]
0x782B62: push    eax
0x782B63: call    FormHeapFree
0x782B68: mov     ecx, [esi+3Ch]
0x782B6B: push    ecx
0x782B6C: call    FormHeapFree
0x782B71: mov     edx, [esi+58h]
0x782B74: push    edx
0x782B75: call    FormHeapFree
0x782B7A: mov     eax, [esi+5Ch]
0x782B7D: push    eax
0x782B7E: call    FormHeapFree
0x782B83: mov     ecx, [esi+60h]
0x782B86: push    ecx
0x782B87: call    FormHeapFree
0x782B8C: mov     edx, [esi+64h]
0x782B8F: push    edx
0x782B90: call    FormHeapFree
0x782B95: mov     eax, [esi+80h]
0x782B9B: add     esp, 30h
0x782B9E: test    eax, eax
0x782BA0: jz      short loc_782BB4
0x782BA2: mov     ecx, [eax]
0x782BA4: mov     edx, [ecx+8]
0x782BA7: push    eax
0x782BA8: call    edx
0x782BAA: mov     dword ptr [esi+80h], 0
0x782BB4: push    offset NiRefObject_objcount; lpAddend
0x782BB9: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x782BBF: call    dword ptr ds:0A2807Ch
0x782BC5: pop     esi
0x782BC6: retn
