0x8D9540: push    esi
0x8D9541: mov     esi, [esp+4+arg_0]
0x8D9545: mov     ecx, [esi]
0x8D9547: cmp     byte ptr [ecx+4], 2
0x8D954B: jnz     short loc_8D9569
0x8D954D: movsx   eax, byte ptr [ecx+5]
0x8D9551: mov     edx, [esi+4]
0x8D9554: push    edi
0x8D9555: movsx   edi, byte ptr [edx+5]
0x8D9559: add     eax, ecx
0x8D955B: mov     ecx, [eax+10h]
0x8D955E: add     ecx, eax
0x8D9560: mov     eax, [ecx]
0x8D9562: add     edi, edx
0x8D9564: push    edi
0x8D9565: call    dword ptr [eax+20h]
0x8D9568: pop     edi
0x8D9569: mov     ecx, [esi+4]
0x8D956C: cmp     byte ptr [ecx+4], 2
0x8D9570: jnz     short loc_8D9590
0x8D9572: movsx   eax, byte ptr [ecx+5]
0x8D9576: mov     esi, [esi]
0x8D9578: add     eax, ecx
0x8D957A: mov     ecx, [eax+10h]
0x8D957D: mov     edx, [ecx+eax]
0x8D9580: add     ecx, eax
0x8D9582: movsx   eax, byte ptr [esi+5]
0x8D9586: add     eax, esi
0x8D9588: pop     esi
0x8D9589: mov     [esp+arg_0], eax
0x8D958D: jmp     dword ptr [edx+20h]
0x8D9590: pop     esi
0x8D9591: retn    4
