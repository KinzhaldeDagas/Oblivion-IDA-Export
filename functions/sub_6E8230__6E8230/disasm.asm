0x6E8230: push    ecx
0x6E8231: push    esi
0x6E8232: mov     esi, ecx
0x6E8234: fld     dword ptr [esi+8]
0x6E8237: fld     [esp+8+arg_0]
0x6E823B: fld     st
0x6E823D: fucomp  st(2)
0x6E823F: fnstsw  ax
0x6E8241: fstp    st(1)
0x6E8243: test    ah, 44h
0x6E8246: jp      short loc_6E8275
0x6E8248: mov     al, [esi+0Ch]
0x6E824B: fstp    st
0x6E824D: cmp     al, ds:0A7C6ACh
0x6E8253: jnz     short loc_6E8263
0x6E8255: mov     eax, [esp+8+arg_8]
0x6E8259: mov     byte ptr [eax], 0
0x6E825C: xor     al, al
0x6E825E: pop     esi
0x6E825F: pop     ecx
0x6E8260: retn    0Ch
0x6E8263: mov     edx, [esp+8+arg_8]
0x6E8267: test    al, al
0x6E8269: setnz   cl
0x6E826C: mov     [edx], cl
0x6E826E: mov     al, 1
0x6E8270: pop     esi
0x6E8271: pop     ecx
0x6E8272: retn    0Ch
0x6E8275: mov     eax, [esi+10h]
0x6E8278: test    eax, eax
0x6E827A: jz      short loc_6E82B6
0x6E827C: mov     ecx, [eax+8]
0x6E827F: test    ecx, ecx
0x6E8281: mov     dl, [eax+14h]
0x6E8284: push    edi
0x6E8285: mov     edi, [eax+10h]
0x6E8288: mov     eax, [eax+0Ch]
0x6E828B: mov     [esp+0Ch+var_4], dl
0x6E828F: jbe     short loc_6E82B5
0x6E8291: mov     edx, dword ptr [esp+0Ch+var_4]
0x6E8295: push    edx; char
0x6E8296: lea     edx, [esi+14h]
0x6E8299: push    edx; int
0x6E829A: push    ecx; int
0x6E829B: push    edi; int
0x6E829C: push    eax; int
0x6E829D: push    ecx
0x6E829E: fstp    [esp+24h+var_24]; float
0x6E82A1: call    sub_6BDBA0
0x6E82A6: fld     [esp+24h+arg_0]
0x6E82AA: add     esp, 18h
0x6E82AD: test    al, al
0x6E82AF: setnz   al
0x6E82B2: mov     [esi+0Ch], al
0x6E82B5: pop     edi
0x6E82B6: mov     al, [esi+0Ch]
0x6E82B9: cmp     al, ds:0A7C6ACh
0x6E82BF: jnz     short loc_6E82D1
0x6E82C1: mov     ecx, [esp+8+arg_8]
0x6E82C5: fstp    st
0x6E82C7: mov     byte ptr [ecx], 0
0x6E82CA: xor     al, al
0x6E82CC: pop     esi
0x6E82CD: pop     ecx
0x6E82CE: retn    0Ch
0x6E82D1: test    al, al
0x6E82D3: mov     eax, [esp+8+arg_8]
0x6E82D7: setnz   dl
0x6E82DA: mov     [eax], dl
0x6E82DC: fstp    dword ptr [esi+8]
0x6E82DF: mov     al, 1
0x6E82E1: pop     esi
0x6E82E2: pop     ecx
0x6E82E3: retn    0Ch
