0x507650: sub     esp, 8
0x507653: push    esi; ArgList
0x507654: mov     esi, [esp+0Ch+a4]
0x507658: cmp     ds:0B333C4h, esi
0x50765E: mov     dword ptr [esp+0Ch+var_8], 0
0x507666: mov     [esp+0Ch+var_4], 0
0x50766E: jnz     short loc_507684
0x507670: push    offset aNeverHaveThePl; "Never have the player character activat"...
0x507675: call    PrintError
0x50767A: add     esp, 4
0x50767D: xor     al, al
0x50767F: pop     esi
0x507680: add     esp, 8
0x507683: retn
0x507684: mov     edx, [esp+0Ch+l]
0x507688: lea     eax, [esp+0Ch+var_4]
0x50768C: push    eax
0x50768D: mov     eax, [esp+10h+arg_10]
0x507691: lea     ecx, [esp+10h+var_8]
0x507695: push    ecx; UInt16
0x507696: mov     ecx, [esp+14h+arg_C]
0x50769A: push    edx; l
0x50769B: mov     edx, [esp+18h+a3]
0x50769F: push    eax; a6
0x5076A0: mov     eax, [esp+1Ch+arg_4]
0x5076A4: push    ecx; a5
0x5076A5: mov     ecx, [esp+20h+a1]
0x5076A9: push    esi; a4
0x5076AA: push    edx; a3
0x5076AB: push    eax; a2
0x5076AC: push    ecx; a1
0x5076AD: call    Script_ExtractArgs
0x5076B2: add     esp, 24h
0x5076B5: test    al, al
0x5076B7: jz      short loc_50767D
0x5076B9: test    esi, esi
0x5076BB: jz      short loc_50772D
0x5076BD: mov     eax, dword ptr [esp+0Ch+var_8]
0x5076C1: test    eax, eax
0x5076C3: jnz     short loc_5076D4
0x5076C5: mov     ecx, esi; this
0x5076C7: call    sub_4D8360
0x5076CC: test    eax, eax
0x5076CE: mov     dword ptr [esp+0Ch+var_8], eax
0x5076D2: jz      short loc_50772D
0x5076D4: mov     edx, [eax+8]
0x5076D7: shr     edx, 0Bh
0x5076DA: test    dl, 1
0x5076DD: jnz     short loc_50772D
0x5076DF: cmp     [esp+0Ch+var_4], 0
0x5076E4: push    1
0x5076E6: mov     ecx, esi
0x5076E8: jnz     short loc_507723
0x5076EA: call    sub_4D8270
0x5076EF: push    2
0x5076F1: mov     ecx, esi
0x5076F3: call    sub_4D8270
0x5076F8: mov     eax, dword ptr [esp+0Ch+var_8]
0x5076FC: push    1
0x5076FE: push    0
0x507700: push    0
0x507702: push    eax
0x507703: mov     ecx, esi
0x507705: call    ActivateRef
0x50770A: push    2
0x50770C: mov     ecx, esi
0x50770E: call    sub_4D82E0
0x507713: push    1
0x507715: mov     ecx, esi
0x507717: call    sub_4D82E0
0x50771C: mov     al, 1
0x50771E: pop     esi
0x50771F: add     esp, 8
0x507722: retn
0x507723: push    0
0x507725: push    0
0x507727: push    eax
0x507728: call    ActivateRef
0x50772D: mov     al, 1
0x50772F: pop     esi
0x507730: add     esp, 8
0x507733: retn
