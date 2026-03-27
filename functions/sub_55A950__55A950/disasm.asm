0x55A950: mov     eax, [esp+arg_10]
0x55A954: cmp     eax, 3; switch 4 cases
0x55A957: ja      short def_55A959
0x55A959: jmp     ds:jpt_55A959[eax*4]; switch jump
0x55A960: mov     edx, [esp+arg_14]; jumptable 0055A959 case 1
0x55A964: fld     [esp+arg_C]
0x55A968: mov     eax, [ecx]
0x55A96A: mov     eax, [eax+34h]
0x55A96D: push    edx
0x55A96E: mov     edx, [esp+4+arg_8]
0x55A972: push    ecx
0x55A973: fstp    [esp+8+var_8]
0x55A976: push    edx
0x55A977: mov     edx, [esp+0Ch+arg_4]
0x55A97B: push    edx
0x55A97C: mov     edx, [esp+10h+arg_0]
0x55A980: push    edx
0x55A981: call    eax
0x55A983: retn    18h
0x55A986: mov     edx, [ecx]; jumptable 0055A959 case 2
0x55A988: mov     edx, [edx+3Ch]
0x55A98B: jmp     short loc_55A9B8
0x55A98D: mov     edx, [esp+arg_14]; jumptable 0055A959 case 0
0x55A991: fld     [esp+arg_C]
0x55A995: mov     eax, [ecx]
0x55A997: mov     eax, [eax+44h]
0x55A99A: push    edx
0x55A99B: mov     edx, [esp+4+arg_8]
0x55A99F: push    ecx
0x55A9A0: fstp    [esp+8+var_8]
0x55A9A3: push    edx
0x55A9A4: mov     edx, [esp+0Ch+arg_4]
0x55A9A8: push    edx
0x55A9A9: mov     edx, [esp+10h+arg_0]
0x55A9AD: push    edx
0x55A9AE: call    eax
0x55A9B0: retn    18h
0x55A9B3: mov     edx, [ecx]; jumptable 0055A959 case 3
0x55A9B5: mov     edx, [edx+4Ch]
0x55A9B8: mov     eax, [esp+arg_14]
0x55A9BC: fld     [esp+arg_C]
0x55A9C0: push    eax
0x55A9C1: mov     eax, [esp+4+arg_8]
0x55A9C5: push    ecx
0x55A9C6: fstp    [esp+8+var_8]
0x55A9C9: push    eax
0x55A9CA: mov     eax, [esp+0Ch+arg_4]
0x55A9CE: push    eax
0x55A9CF: mov     eax, [esp+10h+arg_0]
0x55A9D3: push    eax
0x55A9D4: call    edx
