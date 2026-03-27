0x6E6860: sub     esp, 24h
0x6E6863: push    esi
0x6E6864: mov     esi, ecx
0x6E6866: fld     dword ptr [esi+8]
0x6E6869: fld     [esp+28h+arg_0]
0x6E686D: fld     st
0x6E686F: fucomp  st(2)
0x6E6871: fnstsw  ax
0x6E6873: fstp    st(1)
0x6E6875: test    ah, 44h
0x6E6878: jp      short loc_6E68A0
0x6E687A: mov     ecx, [esi+1Ch]
0x6E687D: fstp    st
0x6E687F: mov     eax, [esp+28h+arg_8]
0x6E6883: mov     [eax], ecx
0x6E6885: mov     edx, [esi+20h]
0x6E6888: mov     [eax+4], edx
0x6E688B: mov     ecx, [esi+24h]
0x6E688E: mov     [eax+8], ecx
0x6E6891: mov     edx, [esi+28h]
0x6E6894: mov     [eax+0Ch], edx
0x6E6897: mov     al, 1
0x6E6899: pop     esi
0x6E689A: add     esp, 24h
0x6E689D: retn    0Ch
0x6E68A0: mov     eax, [esi+2Ch]
0x6E68A3: cmp     eax, 0FFFFh
0x6E68A8: jz      short loc_6E6915
0x6E68AA: fsub    dword ptr [esi+0Ch]
0x6E68AD: push    eax; int
0x6E68AE: fld     dword ptr [esi+10h]
0x6E68B1: mov     eax, [esi+18h]
0x6E68B4: fsub    dword ptr [esi+0Ch]
0x6E68B7: push    eax; int
0x6E68B8: push    4; int
0x6E68BA: lea     ecx, [esp+34h+var_10]
0x6E68BE: fdivp   st(1), st
0x6E68C0: push    ecx; int
0x6E68C1: push    ecx
0x6E68C2: mov     ecx, [esi+14h]
0x6E68C5: fstp    [esp+3Ch+var_24]
0x6E68C9: fld     [esp+3Ch+var_24]
0x6E68CD: fstp    [esp+3Ch+var_3C]; float
0x6E68D0: call    sub_6E72F0
0x6E68D5: fld     [esp+28h+var_10]
0x6E68D9: fstp    [esp+28h+var_20]
0x6E68DD: fld     [esp+28h+var_C]
0x6E68E1: mov     edx, [esp+28h+var_20]
0x6E68E5: fstp    [esp+28h+var_1C]
0x6E68E9: mov     [esi+1Ch], edx
0x6E68EC: fld     [esp+28h+var_8]
0x6E68F0: mov     eax, [esp+28h+var_1C]
0x6E68F4: fstp    [esp+28h+var_18]
0x6E68F8: mov     [esi+20h], eax
0x6E68FB: fld     [esp+28h+var_4]
0x6E68FF: mov     ecx, [esp+28h+var_18]
0x6E6903: fstp    [esp+28h+var_14]
0x6E6907: mov     [esi+24h], ecx
0x6E690A: mov     edx, [esp+28h+var_14]
0x6E690E: fld     [esp+28h+arg_0]
0x6E6912: mov     [esi+28h], edx
0x6E6915: mov     ecx, [esi+1Ch]
0x6E6918: mov     eax, [esp+28h+arg_8]
0x6E691C: mov     [eax], ecx
0x6E691E: mov     edx, [esi+20h]
0x6E6921: mov     [eax+4], edx
0x6E6924: mov     ecx, [esi+24h]
0x6E6927: mov     [eax+8], ecx
0x6E692A: mov     edx, [esi+28h]
0x6E692D: mov     [eax+0Ch], edx
0x6E6930: fstp    dword ptr [esi+8]
0x6E6933: mov     al, 1
0x6E6935: pop     esi
0x6E6936: add     esp, 24h
0x6E6939: retn    0Ch
