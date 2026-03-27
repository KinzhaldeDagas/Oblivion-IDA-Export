0x685880: push    ecx
0x685881: push    ebx
0x685882: push    esi
0x685883: mov     esi, ecx
0x685885: fld     dword ptr [esi+1Ch]
0x685888: mov     bl, 1
0x68588A: fsub    [esp+0Ch+arg_0]
0x68588E: fstp    [esp+0Ch+arg_0]
0x685892: fldz
0x685894: fld     [esp+0Ch+arg_0]
0x685898: fcom    st(1)
0x68589A: fnstsw  ax
0x68589C: test    ah, 41h
0x68589F: jnz     short loc_6858AD
0x6858A1: fld     st(1)
0x6858A3: fcomp   dword ptr [esi+20h]
0x6858A6: fnstsw  ax
0x6858A8: test    ah, 44h
0x6858AB: jnp     short loc_685929
0x6858AD: fdiv    dword ptr [esi+20h]
0x6858B0: fcomp   qword ptr ds:0A2F928h
0x6858B6: fnstsw  ax
0x6858B8: test    ah, 41h
0x6858BB: jz      short loc_68592B
0x6858BD: mov     ecx, [esi+30h]
0x6858C0: fstp    st
0x6858C2: test    ecx, ecx
0x6858C4: fld     dword ptr ds:0B3A498h
0x6858CA: fstp    [esp+0Ch+arg_0]
0x6858CE: jz      short loc_6858E8
0x6858D0: call    sub_680CB0
0x6858D5: test    eax, eax
0x6858D7: jz      short loc_6858E8
0x6858D9: cmp     eax, 7
0x6858DC: jz      short loc_6858E8
0x6858DE: fld     dword ptr ds:0B3A4B8h
0x6858E4: fstp    [esp+0Ch+arg_0]
0x6858E8: fld     [esp+0Ch+arg_0]
0x6858EC: fdiv    dword ptr ds:0B06530h
0x6858F2: fstp    [esp+0Ch+arg_0]
0x6858F6: fld     [esp+0Ch+arg_0]
0x6858FA: fld     qword ptr ds:0A3F3F0h
0x685900: fdivr   st, st(1)
0x685902: fstp    [esp+0Ch+var_4]
0x685906: fld     dword ptr ds:0B33E9Ch
0x68590C: fstp    [esp+0Ch+arg_0]
0x685910: fld     [esp+0Ch+arg_0]
0x685914: fld     [esp+0Ch+var_4]
0x685918: fcom    st(1)
0x68591A: fnstsw  ax
0x68591C: fstp    st(1)
0x68591E: test    ah, 5
0x685921: jp      short loc_685946
0x685923: fstp    [esp+0Ch+arg_0]
0x685927: jmp     short loc_685948
0x685929: fstp    st
0x68592B: mov     ecx, [esi+30h]
0x68592E: fst     dword ptr [esi+20h]
0x685931: test    ecx, ecx
0x685933: jz      short loc_685988
0x685935: push    ecx
0x685936: fstp    [esp+10h+var_10]; float
0x685939: call    sub_680D00
0x68593E: pop     esi
0x68593F: mov     al, bl
0x685941: pop     ebx
0x685942: pop     ecx
0x685943: retn    4
0x685946: fstp    st
0x685948: fld     [esp+0Ch+arg_0]
0x68594C: fadd    dword ptr [esi+20h]
0x68594F: fstp    [esp+0Ch+arg_0]
0x685953: fld     [esp+0Ch+arg_0]
0x685957: fst     dword ptr [esi+20h]
0x68595A: fcompp
0x68595C: fnstsw  ax
0x68595E: test    ah, 41h
0x685961: jnz     short loc_68598A
0x685963: mov     ecx, [esi+30h]
0x685966: test    ecx, ecx
0x685968: jz      short loc_685980
0x68596A: call    sub_680D60
0x68596F: test    al, al
0x685971: jz      short loc_685980
0x685973: fldz
0x685975: mov     al, bl
0x685977: fstp    dword ptr [esi+20h]
0x68597A: pop     esi
0x68597B: pop     ebx
0x68597C: pop     ecx
0x68597D: retn    4
0x685980: pop     esi
0x685981: xor     al, al
0x685983: pop     ebx
0x685984: pop     ecx
0x685985: retn    4
0x685988: fstp    st
0x68598A: pop     esi
0x68598B: mov     al, bl
0x68598D: pop     ebx
0x68598E: pop     ecx
0x68598F: retn    4
