0x754140: push    esi
0x754141: push    edi
0x754142: push    3Ch ; '<'; Size
0x754144: mov     edi, ecx
0x754146: call    FormHeapAlloc
0x75414B: mov     esi, eax
0x75414D: add     esp, 4
0x754150: test    esi, esi
0x754152: jz      short loc_75417C
0x754154: mov     ecx, esi
0x754156: call    sub_75E800
0x75415B: fldz
0x75415D: fstp    dword ptr [esi+30h]
0x754160: mov     dword ptr [esi], offset ??_7NiPSysTurbulenceFieldModifier@@6B@; const NiPSysTurbulenceFieldModifier::`vftable'
0x754166: fld     dword ptr ds:0A7DEB4h
0x75416C: fchs
0x75416E: fstp    dword ptr [esi+38h]
0x754171: fld     dword ptr ds:0A5A04Ch
0x754177: fstp    dword ptr [esi+34h]
0x75417A: jmp     short loc_75417E
0x75417C: xor     esi, esi
0x75417E: mov     eax, [esp+8+arg_0]
0x754182: push    eax
0x754183: push    esi
0x754184: mov     ecx, edi
0x754186: call    sub_75E830
0x75418B: fld     dword ptr [edi+30h]
0x75418E: fstp    [esp+8+arg_0]
0x754192: fld     [esp+8+arg_0]
0x754196: fst     dword ptr [esi+30h]
0x754199: fcom    qword ptr ds:0A68FE0h
0x75419F: fnstsw  ax
0x7541A1: test    ah, 5
0x7541A4: mov     eax, esi
0x7541A6: jp      short loc_7541B8
0x7541A8: fstp    st
0x7541AA: pop     edi
0x7541AB: fld     dword ptr ds:0A5A04Ch
0x7541B1: fstp    dword ptr [esi+34h]
0x7541B4: pop     esi
0x7541B5: retn    4
0x7541B8: fld1
0x7541BA: pop     edi
0x7541BB: fdivrp  st(1), st
0x7541BD: fstp    dword ptr [esi+34h]
0x7541C0: pop     esi
0x7541C1: retn    4
