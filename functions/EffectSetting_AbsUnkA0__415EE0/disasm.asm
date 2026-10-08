0x415EE0: push    ecx
0x415EE1: push    esi
0x415EE2: mov     esi, ecx
0x415EE4: fild    dword ptr [esi+0A0h]
0x415EEA: fabs
0x415EEC: fstp    [esp+8+var_4]
0x415EF0: fld     [esp+8+var_4]
0x415EF4: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x415EF9: mov     [esi+0A0h], eax
0x415EFF: pop     esi
0x415F00: pop     ecx
0x415F01: retn
