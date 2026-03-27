0x502B80: push    ecx
0x502B81: mov     ecx, [esp+4+l]
0x502B85: mov     edx, [esp+4+arg_10]
0x502B89: push    esi
0x502B8A: mov     esi, [esp+8+a4]
0x502B8E: lea     eax, [esp+8+var_4]
0x502B92: push    eax; UInt16
0x502B93: mov     eax, [esp+0Ch+arg_C]
0x502B97: push    ecx; l
0x502B98: mov     ecx, [esp+10h+a3]
0x502B9C: push    edx; a6
0x502B9D: mov     edx, [esp+14h+arg_4]
0x502BA1: push    eax; a5
0x502BA2: mov     eax, [esp+18h+a1]
0x502BA6: push    esi; a4
0x502BA7: push    ecx; a3
0x502BA8: push    edx; a2
0x502BA9: push    eax; a1
0x502BAA: mov     dword ptr [esp+28h+var_4], 0
0x502BB2: call    Script_ExtractArgs
0x502BB7: add     esp, 20h
0x502BBA: test    al, al
0x502BBC: jnz     short loc_502BC1
0x502BBE: pop     esi
0x502BBF: pop     ecx
0x502BC0: retn
0x502BC1: mov     ecx, [esp+8+arg_18]
0x502BC5: mov     edx, dword ptr [esp+8+var_4]
0x502BC9: push    ecx
0x502BCA: push    0
0x502BCC: push    edx
0x502BCD: push    esi
0x502BCE: call    sub_4F67A0
0x502BD3: add     esp, 10h
0x502BD6: pop     esi
0x502BD7: pop     ecx
0x502BD8: retn
