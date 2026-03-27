0x5F19DB: mov     eax, [edi]
0x5F19DD: mov     edx, [eax+268h]
0x5F19E3: push    esi
0x5F19E4: push    9
0x5F19E6: push    ebp
0x5F19E7: mov     ecx, edi
0x5F19E9: call    edx
0x5F19EB: mov     [esp+0Ch+arg_0], eax
0x5F19EF: fild    [esp+0Ch+arg_0]
0x5F19F3: fmul    [esp+0Ch+arg_8]
0x5F19F7: call    Double_To_SInt32
0x5F19FC: pop     edi
0x5F19FD: pop     ebx
0x5F19FE: pop     esi
0x5F19FF: pop     ebp
0x5F1A00: pop     ecx
0x5F1A01: retn    4
