0x51E7B0: fld     [esp+arg_4]
0x51E7B4: push    esi
0x51E7B5: mov     esi, ecx
0x51E7B7: push    edi
0x51E7B8: mov     edi, [esi]
0x51E7BA: call    Double_To_SInt32
0x51E7BF: mov     edx, [edi+134h]
0x51E7C5: push    eax
0x51E7C6: mov     eax, [esp+0Ch+arg_0]
0x51E7CA: push    eax
0x51E7CB: mov     ecx, esi
0x51E7CD: call    edx
0x51E7CF: pop     edi
0x51E7D0: pop     esi
0x51E7D1: retn    8
