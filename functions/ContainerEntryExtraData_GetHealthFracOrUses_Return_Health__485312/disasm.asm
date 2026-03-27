0x485312: push    0
0x485314: mov     ecx, esi
0x485316: call    ContainerEntryExtraData_GetHealth
0x48531B: fstp    [esp+arg_8]
0x48531F: mov     eax, [edi]
0x485321: mov     edx, [eax+10h]
0x485324: mov     ecx, edi
0x485326: call    edx
0x485328: test    eax, eax
0x48532A: mov     [esp+arg_14], eax
0x48532E: fild    [esp+arg_14]
0x485332: jge     short loc_48533A
0x485334: fadd    dword ptr ds:0A2FC78h
0x48533A: fdivr   [esp+arg_8]
0x48533E: pop     edi
0x48533F: pop     esi
0x485340: pop     ebx
0x485341: fmul    qword ptr ds:0A309F0h
0x485347: fstp    dword ptr [esp-0Ch+arg_8]
0x48534A: fld     dword ptr [esp-0Ch+arg_8]
0x48534D: add     esp, 8
0x485350: retn    10h
