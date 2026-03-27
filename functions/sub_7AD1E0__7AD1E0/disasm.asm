0x7AD1E0: push    edi
0x7AD1E1: mov     edi, ecx
0x7AD1E3: mov     eax, [edi+2230h]
0x7AD1E9: test    eax, eax
0x7AD1EB: jz      short loc_7AD242
0x7AD1ED: mov     edx, [esp+4+arg_0]
0x7AD1F1: push    esi
0x7AD1F2: mov     esi, [eax+8]
0x7AD1F5: test    esi, esi
0x7AD1F7: lea     ecx, [eax+8]
0x7AD1FA: mov     eax, [eax]
0x7AD1FC: mov     [esp+8+arg_0], esi
0x7AD200: jz      short loc_7AD207
0x7AD202: cmp     [esi+10h], edx
0x7AD205: jz      short loc_7AD210
0x7AD207: test    eax, eax
0x7AD209: jnz     short loc_7AD1F2
0x7AD20B: pop     esi
0x7AD20C: pop     edi
0x7AD20D: retn    4
0x7AD210: cmp     dword ptr [esi+14h], 0
0x7AD214: jz      short loc_7AD228
0x7AD216: mov     eax, [esi+14h]
0x7AD219: mov     ecx, [eax]
0x7AD21B: mov     edx, [ecx+8]
0x7AD21E: push    eax
0x7AD21F: call    edx
0x7AD221: mov     dword ptr [esi+14h], 0
0x7AD228: push    esi
0x7AD229: call    FormHeapFree
0x7AD22E: add     esp, 4
0x7AD231: lea     eax, [esp+8+arg_0]
0x7AD235: push    eax
0x7AD236: lea     ecx, [edi+222Ch]
0x7AD23C: call    sub_776690
0x7AD241: pop     esi
0x7AD242: pop     edi
0x7AD243: retn    4
