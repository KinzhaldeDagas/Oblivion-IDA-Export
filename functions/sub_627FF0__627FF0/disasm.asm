0x627FF0: push    esi
0x627FF1: mov     esi, [esp+4+arg_0]
0x627FF5: push    edi
0x627FF6: push    esi
0x627FF7: mov     edi, ecx
0x627FF9: call    Actor__CanUSeDoor?
0x627FFE: add     esp, 4
0x628001: test    al, al
0x628003: jz      short loc_62804A
0x628005: mov     eax, [esi]
0x628007: fld     dword ptr ds:0A6DD10h
0x62800D: mov     edx, [eax+174h]
0x628013: push    esi; int
0x628014: push    offset sub_627DD0; int
0x628019: push    ecx
0x62801A: mov     ecx, esi
0x62801C: fstp    [esp+14h+var_14]; float
0x62801F: call    edx
0x628021: fld     dword ptr ds:0A6DD10h
0x628027: push    eax; int
0x628028: push    ecx
0x628029: mov     ecx, ds:0B33A98h
0x62802F: fstp    [esp+1Ch+var_1C]; float
0x628032: push    esi; int
0x628033: call    sub_446A40
0x628038: mov     eax, ds:0B3B920h
0x62803D: mov     [edi+60h], eax
0x628040: mov     dword ptr ds:0B3B920h, 0
0x62804A: pop     edi
0x62804B: pop     esi
0x62804C: retn    4
