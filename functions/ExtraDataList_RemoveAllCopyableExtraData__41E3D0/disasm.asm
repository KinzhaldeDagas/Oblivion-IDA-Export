0x41E3D0: push    ebp
0x41E3D1: push    esi
0x41E3D2: push    edi
0x41E3D3: mov     edi, ecx
0x41E3D5: push    offset aExtradatalistR; lpCriticalSection
0x41E3DA: mov     ecx, offset BSExtraDataCS
0x41E3DF: call    NiEnterCriticalSection
0x41E3E4: mov     esi, [edi+4]
0x41E3E7: xor     ebp, ebp
0x41E3E9: test    esi, esi
0x41E3EB: jz      short loc_41E429
0x41E3ED: push    ebx
0x41E3EE: mov     bl, [esp+10h+arg_0]
0x41E3F2: mov     edx, esi
0x41E3F4: mov     esi, [esi+8]
0x41E3F7: push    edx
0x41E3F8: mov     ecx, edi
0x41E3FA: call    sub_41E340
0x41E3FF: test    al, al
0x41E401: jz      short loc_41E422
0x41E403: cmp     edx, [edi+4]
0x41E406: jnz     short loc_41E40B
0x41E408: mov     [edi+4], esi
0x41E40B: test    ebp, ebp
0x41E40D: jz      short loc_41E412
0x41E40F: mov     [ebp+8], esi
0x41E412: test    bl, bl
0x41E414: jz      short loc_41E424
0x41E416: mov     eax, [edx]
0x41E418: mov     ecx, edx
0x41E41A: mov     edx, [eax]
0x41E41C: push    1
0x41E41E: call    edx
0x41E420: jmp     short loc_41E424
0x41E422: mov     ebp, edx
0x41E424: test    esi, esi
0x41E426: jnz     short loc_41E3F2
0x41E428: pop     ebx
0x41E429: push    edi
0x41E42A: call    sub_41DE50
0x41E42F: add     esp, 4
0x41E432: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x41E437: call    NiLeaveCriticalSection_0
0x41E43C: pop     edi
0x41E43D: pop     esi
0x41E43E: pop     ebp
0x41E43F: retn    4
