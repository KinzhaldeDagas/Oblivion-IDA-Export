0x590740: push    esi
0x590741: mov     esi, ecx
0x590743: cmp     dword ptr [esi+24h], 0
0x590747: jz      loc_5907FC
0x59074D: mov     eax, [esi+40h]
0x590750: test    eax, eax
0x590752: jz      loc_5907FC
0x590758: mov     ecx, [esp+4+arg_0]
0x59075C: test    ecx, ecx
0x59075E: jz      loc_5907FC
0x590764: push    edi
0x590765: lea     edx, [esp+8+arg_0]
0x590769: push    edx
0x59076A: push    ecx
0x59076B: lea     ecx, [eax+58h]
0x59076E: call    NiTMap_GetAt
0x590773: test    al, al
0x590775: jz      short loc_5907F5
0x590777: mov     edi, [esp+8+arg_0]
0x59077B: test    edi, edi
0x59077D: jz      short loc_5907F5
0x59077F: mov     eax, [esi+44h]
0x590782: test    eax, eax
0x590784: jz      short loc_5907AD
0x590786: cmp     dword ptr [eax+44h], 1
0x59078A: jnz     short loc_59079D
0x59078C: fld     dword ptr ds:0A6B040h
0x590792: push    ecx
0x590793: mov     ecx, esi
0x590795: fstp    [esp+0Ch+var_C]; float
0x590798: call    sub_590D20
0x59079D: fldz
0x59079F: push    0; char
0x5907A1: push    ecx
0x5907A2: fstp    [esp+10h+var_10]; float
0x5907A5: mov     ecx, [esi+44h]
0x5907A8: call    sub_6C9CB0
0x5907AD: cmp     dword ptr [edi+44h], 0
0x5907B1: jz      short loc_5907C2
0x5907B3: fldz
0x5907B5: push    0; char
0x5907B7: push    ecx
0x5907B8: fstp    [esp+10h+var_10]; float
0x5907BB: mov     ecx, edi
0x5907BD: call    sub_6C9CB0
0x5907C2: fldz
0x5907C4: mov     ecx, [esi+40h]
0x5907C7: push    0; int
0x5907C9: sub     esp, 8
0x5907CC: fstp    [esp+14h+var_10]; float
0x5907D0: fld1
0x5907D2: fstp    [esp+14h+var_14]; float
0x5907D5: push    1; int
0x5907D7: push    0; int
0x5907D9: push    edi; int
0x5907DA: call    sub_470B20
0x5907DF: test    al, al
0x5907E1: jz      short loc_5907F5
0x5907E3: mov     eax, [esi+40h]
0x5907E6: or      word ptr [eax+8], 8
0x5907EB: mov     [esi+44h], edi
0x5907EE: pop     edi
0x5907EF: mov     al, 1
0x5907F1: pop     esi
0x5907F2: retn    4
0x5907F5: pop     edi
0x5907F6: xor     al, al
0x5907F8: pop     esi
0x5907F9: retn    4
0x5907FC: xor     al, al
0x5907FE: pop     esi
0x5907FF: retn    4
