0x4F9EC0: push    esi
0x4F9EC1: mov     esi, [esp+4+arg_4]
0x4F9EC5: test    esi, esi
0x4F9EC7: jz      short loc_4F9EF6
0x4F9EC9: mov     ecx, esi; this
0x4F9ECB: call    ExtraDataList_GetExtraScriptEventList
0x4F9ED0: test    eax, eax
0x4F9ED2: jz      short loc_4F9EF6
0x4F9ED4: mov     ecx, esi; this
0x4F9ED6: call    ExtraDataList_GetExtraScriptEventList
0x4F9EDB: cmp     dword ptr [eax+8], 0
0x4F9EDF: jnz     short loc_4F9EF6
0x4F9EE1: mov     ecx, [esp+4+arg_0]
0x4F9EE5: mov     edx, [eax]
0x4F9EE7: push    eax
0x4F9EE8: push    ecx
0x4F9EE9: push    edx
0x4F9EEA: call    ScriptRunner_GetSingleton
0x4F9EEF: mov     ecx, eax
0x4F9EF1: call    sub_517950
0x4F9EF6: pop     esi
0x4F9EF7: retn
