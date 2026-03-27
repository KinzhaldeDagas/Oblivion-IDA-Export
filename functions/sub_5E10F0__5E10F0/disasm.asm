0x5E10F0: sub     esp, 8
0x5E10F3: push    esi
0x5E10F4: mov     esi, ecx
0x5E10F6: mov     eax, [esi]
0x5E10F8: mov     edx, [eax+284h]
0x5E10FE: push    edi
0x5E10FF: push    7
0x5E1101: call    edx
0x5E1103: push    eax
0x5E1104: mov     eax, [esi]
0x5E1106: mov     edx, [eax+284h]
0x5E110C: push    1Dh
0x5E110E: mov     ecx, esi
0x5E1110: call    edx
0x5E1112: push    eax
0x5E1113: call    Calc_LuckModifiedSkill
0x5E1118: fstp    [esp+1Ch+var_8]
0x5E111C: mov     edi, [esp+1Ch]
0x5E1120: mov     eax, [edi]
0x5E1122: mov     edx, [eax+284h]
0x5E1128: add     esp, 8
0x5E112B: push    7
0x5E112D: mov     ecx, edi
0x5E112F: call    edx
0x5E1131: push    eax
0x5E1132: mov     eax, [edi]
0x5E1134: mov     edx, [eax+284h]
0x5E113A: push    1Dh
0x5E113C: mov     ecx, edi
0x5E113E: call    edx
0x5E1140: push    eax
0x5E1141: call    Calc_LuckModifiedSkill
0x5E1146: fstp    [esp+1Ch+var_C]
0x5E114A: mov     eax, [esi]
0x5E114C: mov     edx, [eax+224h]
0x5E1152: add     esp, 8
0x5E1155: push    edi
0x5E1156: mov     ecx, esi
0x5E1158: call    edx
0x5E115A: mov     ecx, ds:0B333C4h
0x5E1160: fild    dword ptr [ecx+11Ch]
0x5E1166: push    ecx
0x5E1167: fstp    [esp+14h+arg_0]
0x5E116B: fld     [esp+14h+arg_0]
0x5E116F: fstp    [esp+14h+var_14]; float
0x5E1172: push    eax; int
0x5E1173: fld     [esp+18h+var_8]
0x5E1177: call    Double_To_SInt32
0x5E117C: fld     [esp+18h+var_4]
0x5E1180: push    eax; int
0x5E1181: call    Double_To_SInt32
0x5E1186: push    eax; int
0x5E1187: call    sub_548130
0x5E118C: add     esp, 10h
0x5E118F: pop     edi
0x5E1190: pop     esi
0x5E1191: add     esp, 8
0x5E1194: retn    4
