0x68DA10: mov     eax, [esp+a3]; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x68DA14: mov     ecx, [esp+a2]
0x68DA18: push    eax; a3
0x68DA19: push    ecx; a2
0x68DA1A: mov     ecx, offset NiTMap_AECreatorFuncs; this
0x68DA1F: call    NiTMap_SetAt
0x68DA24: mov     al, 1
0x68DA26: retn
