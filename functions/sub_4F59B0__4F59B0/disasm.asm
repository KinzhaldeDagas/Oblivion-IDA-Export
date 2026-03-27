0x4F59B0: fldz
0x4F59B2: push    esi
0x4F59B3: mov     esi, [esp+4+arg_C]
0x4F59B7: fstp    qword ptr [esi]
0x4F59B9: mov     ecx, ds:0B333C4h
0x4F59BF: mov     eax, [ecx]
0x4F59C1: mov     edx, [eax+208h]
0x4F59C7: call    edx
0x4F59C9: mov     [esp+4+arg_C], eax
0x4F59CD: fild    [esp+4+arg_C]
0x4F59D1: fst     qword ptr [esi]
0x4F59D3: cmp     byte ptr ds:0B361ACh, 0
0x4F59DA: pop     esi
0x4F59DB: jz      short loc_4F59F3
0x4F59DD: sub     esp, 8
0x4F59E0: fstp    [esp+8+var_8]
0x4F59E3: push    offset aPlayerInfamyIs; "Player Infamy is %0.2f"
0x4F59E8: call    Interface_ConsolePrint
0x4F59ED: add     esp, 0Ch
0x4F59F0: mov     al, 1
0x4F59F2: retn
0x4F59F3: fstp    st
0x4F59F5: mov     al, 1
0x4F59F7: retn
