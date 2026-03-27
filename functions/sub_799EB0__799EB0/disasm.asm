0x799EB0: push    ebx
0x799EB1: mov     ebx, [esp+4+arg_0]
0x799EB5: push    esi
0x799EB6: push    edi
0x799EB7: mov     edi, ecx
0x799EB9: mov     esi, [edi+30h]
0x799EBC: cmp     esi, ebx
0x799EBE: jz      short loc_799ED7
0x799EC0: test    esi, esi
0x799EC2: jz      short loc_799ED4
0x799EC4: mov     ecx, esi
0x799EC6: call    sub_784B60
0x799ECB: push    esi
0x799ECC: call    FormHeapFree
0x799ED1: add     esp, 4
0x799ED4: mov     [edi+30h], ebx
0x799ED7: pop     edi
0x799ED8: pop     esi
0x799ED9: pop     ebx
0x799EDA: retn    4
