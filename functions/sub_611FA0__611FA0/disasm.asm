0x611FA0: sub     esp, 8
0x611FA3: fldz
0x611FA5: push    ebp
0x611FA6: push    esi
0x611FA7: fstp    [esp+10h+var_8]
0x611FAB: push    0; int
0x611FAD: push    offset ??_R0?AVTESContainer@@@8; struct TypeDescriptor *
0x611FB2: push    offset ??_R0?AVCharacter@@@8; struct _s_RTTICompleteObjectLocator *
0x611FB7: mov     esi, ecx
0x611FB9: push    0; int
0x611FBB: push    esi; void *
0x611FBC: call    OblivionDynamicCast
0x611FC1: add     esp, 14h
0x611FC4: lea     ecx, [esi+44h]; this
0x611FC7: call    ExtraDataList_GetContainerChanges
0x611FCC: mov     ebp, eax
0x611FCE: test    ebp, ebp
0x611FD0: jz      loc_6120D7
0x611FD6: push    ebx
0x611FD7: push    edi
0x611FD8: xor     ebx, ebx
0x611FDA: lea     ebx, [ebx+0]
0x611FE0: push    0
0x611FE2: push    ebx
0x611FE3: mov     ecx, ebp
0x611FE5: call    ContainerExtraData_GetEquippedInstance
0x611FEA: mov     esi, eax
0x611FEC: test    esi, esi
0x611FEE: jz      loc_6120C9
0x611FF4: cmp     ebx, 8
0x611FF7: jz      short loc_612078
0x611FF9: cmp     ebx, 7
0x611FFC: jz      short loc_612078
0x611FFE: cmp     ebx, 6
0x612001: jz      short loc_612078
0x612003: mov     eax, [esi+8]
0x612006: push    0; int
0x612008: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x61200D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x612012: push    0; int
0x612014: push    eax; void *
0x612015: call    OblivionDynamicCast
0x61201A: push    0; int
0x61201C: push    offset ??_R0?AVTESObjectCLOT@@@8; struct TypeDescriptor *
0x612021: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x612026: mov     edi, eax
0x612028: mov     eax, [esi+8]
0x61202B: push    0; int
0x61202D: push    eax; void *
0x61202E: call    OblivionDynamicCast
0x612033: add     esp, 28h
0x612036: test    edi, edi
0x612038: jz      short loc_612057
0x61203A: mov     ecx, esi
0x61203C: call    sub_4842E0
0x612041: mov     [esp+18h+var_4], eax
0x612045: fild    [esp+18h+var_4]
0x612049: fmul    dword ptr ds:0B37BB0h
0x61204F: fadd    dword ptr ds:0B37BB8h
0x612055: jmp     short loc_6120B1
0x612057: test    eax, eax
0x612059: jz      short loc_6120B9
0x61205B: mov     ecx, esi
0x61205D: call    sub_4842E0
0x612062: mov     [esp+18h+var_4], eax
0x612066: fild    [esp+18h+var_4]
0x61206A: fmul    dword ptr ds:0B37BA8h
0x612070: fadd    dword ptr ds:0B37BA0h
0x612076: jmp     short loc_6120B1
0x612078: mov     eax, [esi+8]
0x61207B: push    0; int
0x61207D: push    offset ??_R0?AVTESObjectCLOT@@@8; struct TypeDescriptor *
0x612082: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x612087: push    0; int
0x612089: push    eax; void *
0x61208A: call    OblivionDynamicCast
0x61208F: add     esp, 14h
0x612092: test    eax, eax
0x612094: jz      short loc_6120B9
0x612096: mov     ecx, esi
0x612098: call    sub_4842E0
0x61209D: mov     [esp+18h+var_4], eax
0x6120A1: fild    [esp+18h+var_4]
0x6120A5: fmul    dword ptr ds:0B37B98h
0x6120AB: fadd    dword ptr ds:0B37B90h
0x6120B1: fadd    [esp+18h+var_8]
0x6120B5: fstp    [esp+18h+var_8]
0x6120B9: mov     ecx, esi
0x6120BB: call    ContainerEntryExtraData_DestroyDataTable
0x6120C0: push    esi
0x6120C1: call    FormHeapFree
0x6120C6: add     esp, 4
0x6120C9: add     ebx, 1
0x6120CC: cmp     ebx, 10h
0x6120CF: jl      loc_611FE0
0x6120D5: pop     edi
0x6120D6: pop     ebx
0x6120D7: fld     [esp+10h+var_8]
0x6120DB: pop     esi
0x6120DC: fcom    qword ptr ds:0A309F0h
0x6120E2: pop     ebp
0x6120E3: fnstsw  ax
0x6120E5: test    ah, 41h
0x6120E8: jnz     short loc_6120F8
0x6120EA: fstp    st
0x6120EC: fld     dword ptr ds:0A2FE7Ch
0x6120F2: fstp    [esp+8+var_8]
0x6120F5: fld     [esp+8+var_8]
0x6120F8: add     esp, 8
0x6120FB: retn
