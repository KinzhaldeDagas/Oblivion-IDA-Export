0x6A2AEA: mov     edx, [ebp+0Ch]
0x6A2AED: mov     eax, [edx+1Ch]
0x6A2AF0: test    dword ptr [eax+58h], 30000h
0x6A2AF7: jz      short MagicTarget_AddEffect___CloneActiveEffect
0x6A2AF9: mov     eax, [edi]
0x6A2AFB: mov     edx, [eax+8]
0x6A2AFE: mov     ecx, edi
0x6A2B00: call    edx
0x6A2B02: mov     ebx, eax
0x6A2B04: test    ebx, ebx
0x6A2B06: jz      short MagicTarget_AddEffect___CloneActiveEffect
