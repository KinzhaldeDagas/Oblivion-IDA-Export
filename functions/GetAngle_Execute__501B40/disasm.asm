0x501B40: push    ecx
0x501B41: mov     ecx, [esp+4+l]
0x501B45: mov     edx, [esp+4+arg_10]
0x501B49: push    esi
0x501B4A: mov     esi, [esp+8+a4]
0x501B4E: lea     eax, [esp+8+var_1]
0x501B52: push    eax; UInt16
0x501B53: mov     eax, [esp+0Ch+arg_C]
0x501B57: push    ecx; l
0x501B58: mov     ecx, [esp+10h+a3]
0x501B5C: push    edx; a6
0x501B5D: mov     edx, [esp+14h+arg_4]
0x501B61: push    eax; a5
0x501B62: mov     eax, [esp+18h+a1]
0x501B66: push    esi; a4
0x501B67: push    ecx; a3
0x501B68: push    edx; a2
0x501B69: push    eax; a1
0x501B6A: call    Script_ExtractArgs
0x501B6F: add     esp, 20h
0x501B72: test    al, al
0x501B74: jnz     short loc_501B79
0x501B76: pop     esi
0x501B77: pop     ecx
0x501B78: retn
0x501B79: mov     ecx, [esp+8+arg_18]
0x501B7D: movsx   edx, [esp+8+var_1]
0x501B82: push    ecx
0x501B83: push    0
0x501B85: push    edx
0x501B86: push    esi
0x501B87: call    GetAngle_Eval
0x501B8C: add     esp, 10h
0x501B8F: pop     esi
0x501B90: pop     ecx
0x501B91: retn
