0x4D8FB0: sub     esp, 0Ch
0x4D8FB3: fldz
0x4D8FB5: push    esi
0x4D8FB6: fstp    [esp+10h+var_C]
0x4D8FBA: mov     esi, ecx
0x4D8FBC: call    TESObjectREFR_GetContainer
0x4D8FC1: test    eax, eax
0x4D8FC3: jz      short loc_4D8FEC
0x4D8FC5: lea     ecx, [esi+44h]; this
0x4D8FC8: call    ExtraDataList_GetContainerChanges
0x4D8FCD: test    eax, eax
0x4D8FCF: jz      short loc_4D8FDA
0x4D8FD1: mov     ecx, eax
0x4D8FD3: call    ContainerExtraData_GetEncoumberance
0x4D8FD8: jmp     short loc_4D8FE8
0x4D8FDA: mov     ecx, esi; this
0x4D8FDC: call    TESObjectREFR_GetContainer
0x4D8FE1: mov     ecx, eax
0x4D8FE3: call    TESContainer_GetEncumberance
0x4D8FE8: fstp    [esp+10h+var_C]
0x4D8FEC: mov     eax, [esi]
0x4D8FEE: mov     edx, [eax+190h]
0x4D8FF4: mov     ecx, esi
0x4D8FF6: call    edx
0x4D8FF8: test    al, al
0x4D8FFA: jz      short loc_4D9029
0x4D8FFC: cmp     esi, ds:0B333C4h
0x4D9002: jz      short loc_4D9029
0x4D9004: fld     [esp+10h+var_C]
0x4D9008: mov     ecx, esi
0x4D900A: fstp    [esp+10h+var_8]
0x4D900E: call    Actor_GetBaseEncumberance
0x4D9013: fcomp   [esp+10h+var_8]
0x4D9017: fnstsw  ax
0x4D9019: test    ah, 5
0x4D901C: jp      short loc_4D9029
0x4D901E: mov     ecx, esi
0x4D9020: call    Actor_GetBaseEncumberance
0x4D9025: fstp    [esp+10h+var_C]
0x4D9029: fld     [esp+10h+var_C]
0x4D902D: pop     esi
0x4D902E: add     esp, 0Ch
0x4D9031: retn
