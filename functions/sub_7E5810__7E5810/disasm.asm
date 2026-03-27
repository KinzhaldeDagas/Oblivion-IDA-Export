0x7E5810: push    0FFFFFFFFh
0x7E5812: push    offset SEH_8C8970
0x7E5817: mov     eax, large fs:0
0x7E581D: push    eax
0x7E581E: push    ecx
0x7E581F: push    esi
0x7E5820: push    edi
0x7E5821: mov     eax, ds:0B30AACh
0x7E5826: xor     eax, esp
0x7E5828: push    eax
0x7E5829: lea     eax, [esp+1Ch+var_C]
0x7E582D: mov     large fs:0, eax
0x7E5833: mov     edi, ecx
0x7E5835: push    128h; Size
0x7E583A: call    FormHeapAlloc
0x7E583F: add     esp, 4
0x7E5842: mov     [esp+1Ch+var_10], eax
0x7E5846: xor     esi, esi
0x7E5848: cmp     eax, esi
0x7E584A: mov     [esp+1Ch+var_4], esi
0x7E584E: jz      short loc_7E5859
0x7E5850: mov     ecx, eax; this
0x7E5852: call    ??0ParticleShaderProperty@@QAE@XZ; ParticleShaderProperty::ParticleShaderProperty(void)
0x7E5857: mov     esi, eax
0x7E5859: mov     eax, [esp+1Ch+arg_0]
0x7E585D: push    eax
0x7E585E: push    esi
0x7E585F: mov     ecx, edi
0x7E5861: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7E5869: call    sub_7E2490
0x7E586E: mov     eax, esi
0x7E5870: mov     ecx, [esp+1Ch+var_C]
0x7E5874: mov     large fs:0, ecx
0x7E587B: pop     ecx
0x7E587C: pop     edi
0x7E587D: pop     esi
0x7E587E: add     esp, 10h
0x7E5881: retn    4
