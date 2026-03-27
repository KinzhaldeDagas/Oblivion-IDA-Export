0x5028F0: push    ecx
0x5028F1: push    esi
0x5028F2: mov     esi, [esp+8+arg_8]
0x5028F6: test    esi, esi
0x5028F8: jz      short loc_50294D
0x5028FA: mov     eax, [esi]
0x5028FC: mov     edx, [eax+190h]
0x502902: mov     ecx, esi
0x502904: call    edx
0x502906: test    al, al
0x502908: jz      short loc_50294D
0x50290A: mov     eax, [esi]
0x50290C: mov     edx, [eax+288h]
0x502912: push    8
0x502914: mov     ecx, esi
0x502916: call    edx
0x502918: fstp    [esp+8+var_4]
0x50291C: push    8
0x50291E: mov     ecx, esi
0x502920: call    Actor_GetBaseCalcAVi
0x502925: mov     [esp+8+arg_8], eax
0x502929: fild    [esp+8+arg_8]
0x50292D: mov     eax, [esi]
0x50292F: mov     edx, [eax+2A4h]
0x502935: push    0
0x502937: fsub    [esp+0Ch+var_4]
0x50293B: push    ecx
0x50293C: mov     ecx, esi
0x50293E: fstp    [esp+10h+arg_8]
0x502942: fld     [esp+10h+arg_8]
0x502946: fstp    [esp+10h+var_10]
0x502949: push    8
0x50294B: call    edx
0x50294D: mov     al, 1
0x50294F: pop     esi
0x502950: pop     ecx
0x502951: retn
