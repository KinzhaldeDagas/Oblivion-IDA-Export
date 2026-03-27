0x7C2C30: push    0FFFFFFFFh
0x7C2C32: push    offset ??1TallGrassShaderProperty@@UAE@XZ_____ehhandler$??1?$propagator_block@V?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$multi_link_registry@V?$ISource@W4agent_status@Concurrency@@@Concurrency@@@2@V?$ordered_message_processor@I@2@@Concurrency@@UAE@XZ
0x7C2C37: mov     eax, large fs:0
0x7C2C3D: push    eax
0x7C2C3E: push    ecx
0x7C2C3F: push    ebx
0x7C2C40: push    esi
0x7C2C41: push    edi
0x7C2C42: mov     eax, ds:0B30AACh
0x7C2C47: xor     eax, esp
0x7C2C49: push    eax
0x7C2C4A: lea     eax, [esp+20h+var_C]
0x7C2C4E: mov     large fs:0, eax
0x7C2C54: mov     esi, ecx
0x7C2C56: mov     [esp+20h+var_10], esi
0x7C2C5A: call    ??0BSShaderLightingProperty@@QAE@XZ; BSShaderLightingProperty::BSShaderLightingProperty(void)
0x7C2C5F: xor     ebx, ebx
0x7C2C61: mov     dword ptr [esi], offset ??_7TallGrassShaderProperty@@6B@; const TallGrassShaderProperty::`vftable'
0x7C2C67: mov     [esp+20h+var_4], ebx
0x7C2C6B: mov     [esi+0A0h], ebx
0x7C2C71: mov     [esi+0A4h], ebx
0x7C2C77: mov     edi, [esi+0A0h]
0x7C2C7D: cmp     edi, ebx
0x7C2C7F: mov     byte ptr [esp+20h+var_4], 2
0x7C2C84: jz      short loc_7C2CA8
0x7C2C86: lea     eax, [edi+4]
0x7C2C89: push    eax; lpAddend
0x7C2C8A: call    dword ptr ds:0A2807Ch
0x7C2C90: test    eax, eax
0x7C2C92: jnz     short loc_7C2CA2
0x7C2C94: cmp     edi, ebx
0x7C2C96: jz      short loc_7C2CA2
0x7C2C98: mov     edx, [edi]
0x7C2C9A: mov     eax, [edx]
0x7C2C9C: push    1
0x7C2C9E: mov     ecx, edi
0x7C2CA0: call    eax
0x7C2CA2: mov     [esi+0A0h], ebx
0x7C2CA8: mov     eax, esi
0x7C2CAA: mov     [esi+9Ch], ebx
0x7C2CB0: mov     ecx, dword ptr [esp+20h+var_C]
0x7C2CB4: mov     large fs:0, ecx
0x7C2CBB: pop     ecx
0x7C2CBC: pop     edi
0x7C2CBD: pop     esi
0x7C2CBE: pop     ebx
0x7C2CBF: add     esp, 10h
0x7C2CC2: retn
