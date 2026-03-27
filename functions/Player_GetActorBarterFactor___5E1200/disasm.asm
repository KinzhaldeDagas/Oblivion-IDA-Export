0x5E1200: push    esi
0x5E1201: mov     esi, [esp+4+arg_0]
0x5E1205: mov     eax, [esi]
0x5E1207: mov     edx, [eax+284h]
0x5E120D: push    7
0x5E120F: mov     ecx, esi
0x5E1211: call    edx
0x5E1213: push    eax
0x5E1214: mov     eax, [esi]
0x5E1216: mov     edx, [eax+284h]
0x5E121C: push    1Dh
0x5E121E: mov     ecx, esi
0x5E1220: call    edx
0x5E1222: push    eax
0x5E1223: call    Calc_LuckModifiedSkill
0x5E1228: fstp    dword ptr [esp+10h]
0x5E122C: mov     ecx, ds:0B333C4h
0x5E1232: mov     eax, [esi]
0x5E1234: mov     edx, [eax+224h]
0x5E123A: add     esp, 8
0x5E123D: push    ecx
0x5E123E: mov     ecx, esi
0x5E1240: call    edx
0x5E1242: fld     [esp+4+arg_0]
0x5E1246: push    eax
0x5E1247: call    Double_To_SInt32
0x5E124C: push    eax
0x5E124D: call    Calc_ActorBarterFactor?
0x5E1252: add     esp, 8
0x5E1255: pop     esi
0x5E1256: retn    4
