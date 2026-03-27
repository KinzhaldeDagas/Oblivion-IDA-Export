0x52A4D6: mov     ebp, [ebp+4]
0x52A4D9: cmp     ebp, ebx
0x52A4DB: jnz     short sub_52A496
0x52A4DD: mov     edi, [esp+arg_14]
0x52A4E1: mov     [esi+5Ch], bl
0x52A4E4: pop     ebp
0x52A4E5: test    edi, 8000000h
0x52A4EB: jz      short loc_52A4F9
0x52A4ED: mov     ecx, [esi+58h]
0x52A4F0: cmp     ecx, ebx
0x52A4F2: jz      short loc_52A4F9
0x52A4F4: call    ScriptEventList_Preload?
0x52A4F9: pop     edi
0x52A4FA: pop     esi
0x52A4FB: pop     ebx
0x52A4FC: pop     ecx
0x52A4FD: retn    4
