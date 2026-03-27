0x77DF80: push    esi
0x77DF81: mov     esi, [esp+4+arg_0]
0x77DF85: cmp     dword ptr [esi+1Ch], 0
0x77DF89: push    edi
0x77DF8A: mov     edi, ecx
0x77DF8C: jnz     short loc_77DFC5
0x77DF8E: push    50h ; 'P'; Size
0x77DF90: call    FormHeapAlloc
0x77DF95: add     esp, 4
0x77DF98: test    eax, eax
0x77DF9A: jz      short loc_77DFA5
0x77DF9C: mov     ecx, eax
0x77DF9E: call    NiGeometryBufferData__NiGeometryBufferData
0x77DFA3: jmp     short loc_77DFA7
0x77DFA5: xor     eax, eax
0x77DFA7: mov     dword ptr [eax+38h], 4
0x77DFAE: mov     [esi+1Ch], eax
0x77DFB1: push    eax
0x77DFB2: mov     ecx, edi
0x77DFB4: mov     dword ptr [eax], 1400000h
0x77DFBA: call    sub_782910
0x77DFBF: mov     word ptr [esi+18h], 0FFFFh
0x77DFC5: pop     edi
0x77DFC6: pop     esi
0x77DFC7: retn    4
