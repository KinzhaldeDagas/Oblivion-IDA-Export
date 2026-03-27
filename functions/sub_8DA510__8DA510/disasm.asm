0x8DA510: push    esi
0x8DA511: mov     esi, ecx
0x8DA513: mov     eax, [esi+1C10h]
0x8DA519: push    edi
0x8DA51A: xor     edi, edi
0x8DA51C: cmp     eax, edi
0x8DA51E: jz      short loc_8DA57A
0x8DA520: mov     ecx, ds:0BA7D98h
0x8DA526: mov     edx, [ecx]
0x8DA528: push    eax
0x8DA529: call    dword ptr [edx+4]
0x8DA52C: mov     ecx, ds:0BA7D98h
0x8DA532: mov     edx, [esi+1C14h]
0x8DA538: mov     eax, [ecx]
0x8DA53A: push    edx
0x8DA53B: call    dword ptr [eax+4]
0x8DA53E: mov     ecx, ds:0BA7D98h
0x8DA544: mov     edx, [esi+1C18h]
0x8DA54A: mov     eax, [ecx]
0x8DA54C: push    edx
0x8DA54D: call    dword ptr [eax+4]
0x8DA550: mov     ecx, ds:0BA7D98h
0x8DA556: mov     edx, [esi+1C1Ch]
0x8DA55C: mov     eax, [ecx]
0x8DA55E: push    edx
0x8DA55F: call    dword ptr [eax+4]
0x8DA562: mov     [esi+1C10h], edi
0x8DA568: mov     [esi+1C14h], edi
0x8DA56E: mov     [esi+1C18h], edi
0x8DA574: mov     [esi+1C1Ch], edi
0x8DA57A: pop     edi
0x8DA57B: pop     esi
0x8DA57C: retn
