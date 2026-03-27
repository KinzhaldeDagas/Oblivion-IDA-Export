0x7D9810: push    0FFFFFFFFh
0x7D9812: push    offset SEH_8C8970
0x7D9817: mov     eax, large fs:0
0x7D981D: push    eax
0x7D981E: push    ecx
0x7D981F: push    esi
0x7D9820: push    edi
0x7D9821: mov     eax, ds:0B30AACh
0x7D9826: xor     eax, esp
0x7D9828: push    eax
0x7D9829: lea     eax, [esp+1Ch+var_C]
0x7D982D: mov     large fs:0, eax
0x7D9833: mov     edi, ecx
0x7D9835: push    0F0h ; 'ð'; Size
0x7D983A: call    FormHeapAlloc
0x7D983F: add     esp, 4
0x7D9842: mov     [esp+1Ch+var_10], eax
0x7D9846: xor     esi, esi
0x7D9848: cmp     eax, esi
0x7D984A: mov     [esp+1Ch+var_4], esi
0x7D984E: jz      short loc_7D9859
0x7D9850: mov     ecx, eax; this
0x7D9852: call    ??0BSShaderPPLightingProperty@@QAE@XZ; BSShaderPPLightingProperty::BSShaderPPLightingProperty(void)
0x7D9857: mov     esi, eax
0x7D9859: mov     eax, [esp+1Ch+arg_0]
0x7D985D: push    eax
0x7D985E: push    esi
0x7D985F: mov     ecx, edi
0x7D9861: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7D9869: call    sub_7D7AD0
0x7D986E: mov     eax, esi
0x7D9870: mov     ecx, [esp+1Ch+var_C]
0x7D9874: mov     large fs:0, ecx
0x7D987B: pop     ecx
0x7D987C: pop     edi
0x7D987D: pop     esi
0x7D987E: add     esp, 10h
0x7D9881: retn    4
