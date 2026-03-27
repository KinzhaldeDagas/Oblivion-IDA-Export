0x485260: push    ecx
0x485261: fld     dword ptr ds:0A30634h
0x485267: push    esi
0x485268: push    0; int
0x48526A: fstp    [esp+0Ch+var_4]
0x48526E: push    offset ??_R0?AVTESWeightForm@@@8; struct TypeDescriptor *
0x485273: mov     esi, ecx
0x485275: mov     eax, [esi+8]
0x485278: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48527D: push    0; int
0x48527F: push    eax; void *
0x485280: call    OblivionDynamicCast
0x485285: add     esp, 14h
0x485288: test    eax, eax
0x48528A: jz      short loc_4852A7
0x48528C: mov     ecx, [esi+8]
0x48528F: fld     dword ptr [eax+4]
0x485292: mov     edx, [ecx]
0x485294: fstp    [esp+8+var_4]
0x485298: mov     eax, [edx+78h]
0x48529B: call    eax
0x48529D: test    al, al
0x48529F: jz      short loc_4852A7
0x4852A1: fldz
0x4852A3: fstp    [esp+8+var_4]
0x4852A7: fld     [esp+8+var_4]
0x4852AB: pop     esi
0x4852AC: pop     ecx
0x4852AD: retn    0Ch
