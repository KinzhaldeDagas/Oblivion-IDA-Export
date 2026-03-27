0x43FBA0: push    esi
0x43FBA1: mov     esi, [esp+4+arg_0]
0x43FBA5: mov     ecx, esi
0x43FBA7: call    sub_4D6FD0
0x43FBAC: test    al, al
0x43FBAE: jz      short loc_43FC1B
0x43FBB0: mov     eax, [esi]
0x43FBB2: mov     edx, [eax+154h]
0x43FBB8: mov     ecx, esi
0x43FBBA: call    edx
0x43FBBC: test    eax, eax
0x43FBBE: jz      short loc_43FC1B
0x43FBC0: mov     ecx, esi
0x43FBC2: call    sub_4D7000
0x43FBC7: test    al, al
0x43FBC9: jz      short loc_43FC1B
0x43FBCB: mov     eax, [esi]
0x43FBCD: mov     edx, [eax+154h]
0x43FBD3: push    edi
0x43FBD4: mov     ecx, esi
0x43FBD6: call    edx
0x43FBD8: mov     edi, [eax+1Ch]
0x43FBDB: test    edi, edi
0x43FBDD: jz      short loc_43FC08
0x43FBDF: mov     eax, [esi]
0x43FBE1: mov     edx, [eax+154h]
0x43FBE7: push    ebx
0x43FBE8: mov     ebx, [edi]
0x43FBEA: mov     ecx, esi
0x43FBEC: call    edx
0x43FBEE: mov     edx, [ebx+88h]
0x43FBF4: push    eax
0x43FBF5: lea     eax, [esp+10h+arg_0]
0x43FBF9: push    eax
0x43FBFA: mov     ecx, edi
0x43FBFC: call    edx
0x43FBFE: lea     ecx, [esp+0Ch+arg_0]; this
0x43FC02: call    sub_7016A0
0x43FC07: pop     ebx
0x43FC08: push    0
0x43FC0A: mov     ecx, esi
0x43FC0C: call    sub_4D7D10
0x43FC11: push    0
0x43FC13: mov     ecx, esi
0x43FC15: call    sub_4D7010
0x43FC1A: pop     edi
0x43FC1B: pop     esi
0x43FC1C: retn    4
