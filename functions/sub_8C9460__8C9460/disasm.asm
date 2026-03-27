0x8C9460: push    0FFFFFFFFh
0x8C9462: push    offset SEH_8C8970
0x8C9467: mov     eax, large fs:0
0x8C946D: push    eax
0x8C946E: push    ecx
0x8C946F: push    esi
0x8C9470: push    edi
0x8C9471: mov     eax, ds:0B30AACh
0x8C9476: xor     eax, esp
0x8C9478: push    eax
0x8C9479: lea     eax, [esp+1Ch+var_C]
0x8C947D: mov     large fs:0, eax
0x8C9483: mov     esi, ecx
0x8C9485: push    offset stru_BA7C80; lpCriticalSection
0x8C948A: call    dword ptr ds:0A2806Ch
0x8C9490: call    dword ptr ds:0A2808Ch
0x8C9496: add     dword ptr ds:0BA7CFCh, 1
0x8C949D: push    14h; Size
0x8C949F: mov     ds:0BA7CF8h, eax
0x8C94A4: call    FormHeapAlloc
0x8C94A9: add     esp, 4
0x8C94AC: mov     [esp+1Ch+var_10], eax
0x8C94B0: test    eax, eax
0x8C94B2: mov     [esp+1Ch+var_4], 0
0x8C94BA: jz      short loc_8C94C7
0x8C94BC: mov     ecx, eax; this
0x8C94BE: call    ??0bhkConvexTransformShape@@QAE@XZ; bhkConvexTransformShape::bhkConvexTransformShape(void)
0x8C94C3: mov     edi, eax
0x8C94C5: jmp     short loc_8C94C9
0x8C94C7: xor     edi, edi
0x8C94C9: mov     ecx, [esp+1Ch+arg_0]
0x8C94CD: mov     eax, [esi]
0x8C94CF: mov     edx, [eax+80h]
0x8C94D5: push    ecx
0x8C94D6: push    edi
0x8C94D7: mov     ecx, esi
0x8C94D9: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8C94E1: call    edx
0x8C94E3: sub     dword ptr ds:0BA7CFCh, 1
0x8C94EA: jnz     short loc_8C94F6
0x8C94EC: mov     dword ptr ds:0BA7CF8h, 0
0x8C94F6: push    offset stru_BA7C80; lpCriticalSection
0x8C94FB: call    dword ptr ds:0A28074h
0x8C9501: mov     eax, edi
0x8C9503: mov     ecx, dword ptr [esp+1Ch+var_C]
0x8C9507: mov     large fs:0, ecx
0x8C950E: pop     ecx
0x8C950F: pop     edi
0x8C9510: pop     esi
0x8C9511: add     esp, 10h
0x8C9514: retn    4
