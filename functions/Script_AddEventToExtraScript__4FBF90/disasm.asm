0x4FBF90: push    ebx
0x4FBF91: push    esi
0x4FBF92: mov     esi, [esp+8+arg_4]
0x4FBF96: xor     bl, bl
0x4FBF98: test    esi, esi
0x4FBF9A: jz      short Script_AddEventToExtraScript___Return_0
0x4FBF9C: mov     ecx, esi; this
0x4FBF9E: call    ExtraDataList_GetExtraScriptEventList
0x4FBFA3: test    eax, eax
0x4FBFA5: jz      short Script_AddEventToExtraScript___Return_0
0x4FBFA7: mov     ecx, esi; this
0x4FBFA9: call    ExtraDataList_GetExtraScriptEventList
0x4FBFAE: mov     ecx, [esp+8+arg_8]
0x4FBFB2: mov     edx, [esp+8+arg_0]
0x4FBFB6: push    ecx
0x4FBFB7: push    edx
0x4FBFB8: mov     ecx, eax
0x4FBFBA: call    ScriptEventList_AddEvent
0x4FBFBF: pop     esi
0x4FBFC0: pop     ebx
0x4FBFC1: retn
