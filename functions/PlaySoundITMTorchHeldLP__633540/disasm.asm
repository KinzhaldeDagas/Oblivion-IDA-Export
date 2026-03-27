0x633540: push    esi
0x633541: mov     esi, ecx
0x633543: mov     ecx, [esi+224h]
0x633549: test    ecx, ecx
0x63354B: jz      short loc_633556
0x63354D: call    sub_6B73A0
0x633552: test    al, al
0x633554: jnz     short loc_633587
0x633556: mov     ecx, ds:0B33A98h
0x63355C: push    offset aItmtorchheldlp; "ITMTorchHeldLP"
0x633561: call    sub_447490
0x633566: mov     ecx, [esp+4+arg_0]; this
0x63356A: test    ecx, ecx
0x63356C: jz      short loc_633587
0x63356E: test    eax, eax
0x633570: jz      short loc_633587
0x633572: mov     eax, [eax+0Ch]
0x633575: push    1; a5
0x633577: push    2; a4
0x633579: push    1; a3
0x63357B: push    eax; a2
0x63357C: call    sub_65AC50
0x633581: mov     [esi+224h], eax
0x633587: pop     esi
0x633588: retn    4
