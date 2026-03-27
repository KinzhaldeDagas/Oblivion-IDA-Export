0x41F0D9: push    14h; Size
0x41F0DB: call    FormHeapAlloc
0x41F0E0: add     esp, 4
0x41F0E3: mov     [esp+arg_4], eax
0x41F0E7: test    eax, eax
0x41F0E9: mov     [esp+arg_10], 0
0x41F0F1: jz      short loc_41F101
0x41F0F3: mov     edx, [esp+arg_18]
0x41F0F7: push    edx
0x41F0F8: mov     ecx, eax; this
0x41F0FA: call    ??0ExtraScript@@QAE@XZ; ExtraScript::ExtraScript(void)
0x41F0FF: jmp     short loc_41F103
0x41F101: xor     eax, eax
0x41F103: push    eax; BSExtraData *
0x41F104: mov     ecx, esi; ExtraDataList *
0x41F106: mov     [esp+4+arg_10], 0FFFFFFFFh
0x41F10E: call    BaseExtraList_AddExtra
0x41F113: mov     ecx, [esp+arg_8]
0x41F117: mov     large fs:0, ecx
0x41F11E: pop     ecx
0x41F11F: pop     esi
0x41F120: add     esp, 10h
0x41F123: retn    4
