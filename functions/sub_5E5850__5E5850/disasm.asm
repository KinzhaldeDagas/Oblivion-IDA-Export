0x5E5850: push    ecx
0x5E5851: fldz
0x5E5853: push    esi
0x5E5854: mov     esi, ecx
0x5E5856: fstp    [esp+8+var_4]
0x5E585A: mov     eax, [esi]
0x5E585C: mov     edx, [eax+164h]
0x5E5862: call    edx
0x5E5864: test    eax, eax
0x5E5866: jz      short loc_5E58B0
0x5E5868: push    edi
0x5E5869: mov     edi, [esp+0Ch+arg_0]
0x5E586D: push    0
0x5E586F: push    0
0x5E5871: push    edi
0x5E5872: mov     ecx, esi
0x5E5874: call    Actor_LoadAnimGroup?
0x5E5879: test    ax, ax
0x5E587C: jz      short loc_5E58AF
0x5E587E: push    0
0x5E5880: push    0
0x5E5882: push    edi
0x5E5883: mov     ecx, esi
0x5E5885: call    Actor_LoadAnimGroup?
0x5E588A: mov     ecx, esi
0x5E588C: push    eax
0x5E588D: mov     eax, [esi]
0x5E588F: mov     edx, [eax+164h]
0x5E5895: call    edx
0x5E5897: mov     ecx, eax
0x5E5899: call    sub_4729B0
0x5E589E: test    eax, eax
0x5E58A0: jz      short loc_5E58AF
0x5E58A2: push    1; ArgList
0x5E58A4: mov     ecx, eax
0x5E58A6: call    sub_51AE20
0x5E58AB: fstp    [esp+0Ch+var_4]
0x5E58AF: pop     edi
0x5E58B0: fld     [esp+8+var_4]
0x5E58B4: pop     esi
0x5E58B5: pop     ecx
0x5E58B6: retn    4
