0x485091: mov     edx, [esi]
0x485093: mov     eax, [edx+288h]
0x485099: push    7
0x48509B: mov     ecx, esi
0x48509D: call    eax
0x48509F: fstp    [esp+4+arg_C]
0x4850A3: mov     edx, [esi]
0x4850A5: mov     eax, [edx+288h]
0x4850AB: push    3
0x4850AD: mov     ecx, esi
0x4850AF: call    eax
0x4850B1: fstp    [esp+8+arg_C]
0x4850B5: mov     ecx, esi; this
0x4850B7: call    Actor_GetFatigueFraction
0x4850BC: fstp    [esp+8+arg_1C]
0x4850C0: mov     edx, [esi]
0x4850C2: mov     eax, [edx+288h]
0x4850C8: push    1Ch
0x4850CA: mov     ecx, esi
0x4850CC: call    eax
0x4850CE: fstp    [esp+0Ch+arg_0]
0x4850D2: mov     edx, [edi+74h]
0x4850D5: mov     eax, [edx+10h]
0x4850D8: lea     ecx, [edi+74h]
0x4850DB: call    eax
0x4850DD: fld     [esp+0Ch+arg_1C]
0x4850E1: push    0; float
0x4850E3: sub     esp, 8
0x4850E6: fstp    [esp+18h+var_14]; float
0x4850EA: movzx   eax, ax
0x4850ED: fld1
0x4850EF: fstp    [esp+18h+var_18]; float
0x4850F2: push    eax; int
0x4850F3: fld     [esp+1Ch+arg_18]
0x4850F7: push    ecx
0x4850F8: fstp    [esp+20h+var_20]; float
0x4850FB: fld     [esp+20h+arg_8]
0x4850FF: call    Double_To_SInt32
0x485104: fld     [esp+20h+arg_4]
0x485108: push    eax; int
0x485109: call    Double_To_SInt32
0x48510E: fld     [esp+24h+arg_0]
0x485112: push    eax; int
0x485113: call    Double_To_SInt32
0x485118: push    eax; int
0x485119: call    Calc_WeaponDamage
0x48511E: add     esp, 20h
