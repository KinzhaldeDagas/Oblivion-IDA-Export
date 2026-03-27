0x80AD10: push    esi
0x80AD11: push    edi
0x80AD12: mov     edi, ecx
0x80AD14: mov     esi, offset dword_B47718
0x80AD19: lea     esp, [esp+0]
0x80AD20: mov     ecx, [esi]
0x80AD22: mov     eax, [edi]
0x80AD24: mov     edx, [eax+94h]
0x80AD2A: push    ecx
0x80AD2B: mov     ecx, edi
0x80AD2D: call    edx
0x80AD2F: add     esi, 4
0x80AD32: cmp     esi, offset unk_B47768
0x80AD38: jl      short loc_80AD20
0x80AD3A: pop     edi
0x80AD3B: pop     esi
0x80AD3C: retn
