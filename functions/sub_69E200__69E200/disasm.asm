0x69E200: push    esi
0x69E201: push    edi
0x69E202: mov     edi, [esp+8+arg_0]
0x69E206: mov     eax, [edi]
0x69E208: mov     edx, [eax+154h]
0x69E20E: mov     esi, ecx
0x69E210: mov     ecx, edi
0x69E212: call    edx
0x69E214: test    eax, eax
0x69E216: jz      short loc_69E244
0x69E218: mov     eax, [edi]
0x69E21A: mov     edx, [eax+154h]
0x69E220: mov     ecx, edi
0x69E222: call    edx
0x69E224: cmp     dword ptr [esi+4], 0
0x69E228: jz      short loc_69E244
0x69E22A: push    eax; a2
0x69E22B: mov     ecx, esi; this
0x69E22D: call    NiSmartPointer_Set??
0x69E232: mov     ecx, [esi]
0x69E234: mov     eax, [ecx]
0x69E236: mov     edx, [esi+8]
0x69E239: mov     eax, [eax+84h]
0x69E23F: push    1
0x69E241: push    edx
0x69E242: call    eax
0x69E244: pop     edi
0x69E245: pop     esi
0x69E246: retn    4
