0x69EDD0: mov     eax, [esp+targetReference]; Verified (Oblivion): model extra size uses the owner ActiveEffect* only as a non-null context for process-data sizing, and uses the target reference for actor/process checks; it adds the resource-stream payload length to base size +2.
0x69EDD4: push    esi
0x69EDD5: mov     esi, ecx
0x69EDD7: mov     ecx, [esp+4+linkContext]
0x69EDDB: push    eax; targetReference
0x69EDDC: push    ecx; ownerActiveEffect
0x69EDDD: mov     ecx, esi; this
0x69EDDF: call    MagicHitEffect_GetExtraSaveSize; Verified (Oblivion): base GetExtraSaveSize receives owner ActiveEffect* and target TESObjectREFR*; it returns 5 bytes before version 0x72 and 9 bytes from version 0x72.
0x69EDE4: add     ax, 2
0x69EDE8: movzx   edx, ax
0x69EDEB: mov     eax, [esi+30h]
0x69EDEE: test    eax, eax
0x69EDF0: mov     [esp+4+targetReference], edx
0x69EDF4: pop     esi
0x69EDF5: jz      short loc_69EE23
0x69EDF7: mov     eax, [eax+0Ch]
0x69EDFA: push    eax
0x69EDFB: push    offset stru_B3CAC0
0x69EE00: call    NiRTTI_Cast
0x69EE05: add     esp, 8
0x69EE08: test    eax, eax
0x69EE0A: jz      short loc_69EE23
0x69EE0C: push    eax
0x69EE0D: call    sub_4DA760
0x69EE12: mov     cx, word ptr [esp+4+targetReference]
0x69EE17: add     esp, 4
0x69EE1A: add     cx, ax
0x69EE1D: mov     ax, cx
0x69EE20: retn    8
0x69EE23: mov     ax, word ptr [esp+targetReference]
0x69EE28: retn    8
