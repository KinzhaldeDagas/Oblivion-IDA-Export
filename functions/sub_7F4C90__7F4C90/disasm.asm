0x7F4C90: push    0FFFFFFFFh
0x7F4C92: push    offset SEH_787830
0x7F4C97: mov     eax, large fs:0
0x7F4C9D: push    eax
0x7F4C9E: push    ebx
0x7F4C9F: push    esi
0x7F4CA0: push    edi
0x7F4CA1: mov     eax, ds:0B30AACh
0x7F4CA6: xor     eax, esp
0x7F4CA8: push    eax
0x7F4CA9: lea     eax, [esp+1Ch+var_C]
0x7F4CAD: mov     large fs:0, eax
0x7F4CB3: mov     ebx, ecx
0x7F4CB5: mov     edi, [esp+1Ch+a2]
0x7F4CB9: push    4; a2
0x7F4CBB: mov     ecx, edi; this
0x7F4CBD: call    NiNode_GetNiPropertyByID
0x7F4CC2: xor     esi, esi
0x7F4CC4: cmp     eax, esi
0x7F4CC6: jz      short loc_7F4CE3
0x7F4CC8: mov     edx, [eax]
0x7F4CCA: mov     ecx, eax
0x7F4CCC: mov     eax, [edx+4]
0x7F4CCF: call    eax
0x7F4CD1: cmp     eax, esi
0x7F4CD3: jz      short loc_7F4CE3
0x7F4CD5: cmp     eax, offset dword_B468EC
0x7F4CDA: jz      short loc_7F4D42
0x7F4CDC: mov     eax, [eax+4]
0x7F4CDF: cmp     eax, esi
0x7F4CE1: jnz     short loc_7F4CD5
0x7F4CE3: push    19Ch; Size
0x7F4CE8: call    FormHeapAlloc
0x7F4CED: add     esp, 4
0x7F4CF0: mov     [esp+1Ch+a2], eax
0x7F4CF4: cmp     eax, esi
0x7F4CF6: mov     [esp+1Ch+var_4], esi
0x7F4CFA: jz      short loc_7F4D05
0x7F4CFC: mov     ecx, eax; this
0x7F4CFE: call    ??0BoltShaderProperty@@QAE@XZ; BoltShaderProperty::BoltShaderProperty(void)
0x7F4D03: mov     esi, eax
0x7F4D05: push    esi; a2
0x7F4D06: mov     ecx, edi; this
0x7F4D08: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F4D10: call    sub_405680
0x7F4D15: mov     edx, [esi]
0x7F4D17: mov     eax, [edx+58h]
0x7F4D1A: push    edi
0x7F4D1B: mov     ecx, esi
0x7F4D1D: call    eax
0x7F4D1F: test    al, al
0x7F4D21: jnz     short loc_7F4D42
0x7F4D23: push    esi
0x7F4D24: mov     ecx, edi
0x7F4D26: call    sub_4A1220
0x7F4D2B: xor     al, al
0x7F4D2D: mov     ecx, [esp+1Ch+var_C]
0x7F4D31: mov     large fs:0, ecx
0x7F4D38: pop     ecx
0x7F4D39: pop     edi
0x7F4D3A: pop     esi
0x7F4D3B: pop     ebx
0x7F4D3C: add     esp, 0Ch
0x7F4D3F: retn    4
0x7F4D42: push    edi; a2
0x7F4D43: mov     ecx, ebx; this
0x7F4D45: call    sub_77AA60
0x7F4D4A: mov     ecx, [esp+1Ch+var_C]
0x7F4D4E: mov     large fs:0, ecx
0x7F4D55: pop     ecx
0x7F4D56: pop     edi
0x7F4D57: pop     esi
0x7F4D58: pop     ebx
0x7F4D59: add     esp, 0Ch
0x7F4D5C: retn    4
