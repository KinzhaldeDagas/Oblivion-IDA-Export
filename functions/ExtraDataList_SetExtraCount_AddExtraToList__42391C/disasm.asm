0x42391C: push    eax; BSExtraData *
0x42391D: mov     ecx, edi; ExtraDataList *
0x42391F: mov     [esp+4+arg_10], 0FFFFFFFFh
0x423927: call    BaseExtraList_AddExtra
0x42392C: mov     ecx, [esp+arg_8]
0x423930: mov     large fs:0, ecx
0x423937: pop     ecx
0x423938: pop     edi
0x423939: pop     esi
0x42393A: add     esp, 0Ch
0x42393D: retn    4
