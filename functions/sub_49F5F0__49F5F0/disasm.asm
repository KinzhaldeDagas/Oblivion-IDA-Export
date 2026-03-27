0x49F5F0: push    ecx
0x49F5F1: push    esi
0x49F5F2: push    edi
0x49F5F3: push    4; Size
0x49F5F5: lea     eax, [esp+10h+Dst]
0x49F5F9: mov     esi, ecx
0x49F5FB: mov     ecx, ds:0B33B00h
0x49F601: push    eax; Dst
0x49F602: call    SaveLoad_LoadData
0x49F607: mov     ecx, ds:0B33B00h
0x49F60D: push    4; Size
0x49F60F: lea     edi, [esi+44h]
0x49F612: push    edi; Dst
0x49F613: call    SaveLoad_LoadData
0x49F618: mov     ecx, ds:0B33B00h
0x49F61E: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x49F622: jnb     short loc_49F630
0x49F624: push    4; Size
0x49F626: lea     edx, [esp+10h+Dst]
0x49F62A: push    edx; Dst
0x49F62B: call    SaveLoad_LoadData
0x49F630: fld     [esp+0Ch+Dst]
0x49F634: push    4; Size
0x49F636: fsub    [esp+10h+arg_0]
0x49F63A: lea     eax, [esi+34h]
0x49F63D: push    eax; Dst
0x49F63E: fstp    dword ptr [esi+48h]
0x49F641: mov     ecx, ds:0B33B00h
0x49F647: call    SaveLoad_LoadData
0x49F64C: push    4; Size
0x49F64E: lea     ecx, [esi+38h]
0x49F651: push    ecx; Dst
0x49F652: mov     ecx, ds:0B33B00h
0x49F658: call    SaveLoad_LoadData
0x49F65D: mov     ecx, ds:0B33B00h
0x49F663: push    4; Size
0x49F665: lea     edx, [esi+54h]
0x49F668: push    edx; Dst
0x49F669: call    SaveLoad_LoadData
0x49F66E: fld     dword ptr ds:0A7DEB4h
0x49F674: mov     edi, [edi]
0x49F676: fchs
0x49F678: fstp    dword ptr [esi+4Ch]
0x49F67B: add     edi, 0FFFFFFFFh
0x49F67E: cmp     edi, 2
0x49F681: fld     dword ptr ds:0A7DEB4h
0x49F687: fchs
0x49F689: fstp    dword ptr [esi+50h]
0x49F68C: ja      short loc_49F6AC
0x49F68E: fld     dword ptr [esi+48h]
0x49F691: push    1; char
0x49F693: fadd    [esp+10h+arg_0]
0x49F697: push    ecx
0x49F698: mov     ecx, esi
0x49F69A: fstp    [esp+14h+arg_0]
0x49F69E: fld     [esp+14h+arg_0]
0x49F6A2: fstp    [esp+14h+var_14]; float
0x49F6A5: call    sub_6C5FC0
0x49F6AA: fstp    st
0x49F6AC: pop     edi
0x49F6AD: pop     esi
0x49F6AE: pop     ecx
0x49F6AF: retn    4
