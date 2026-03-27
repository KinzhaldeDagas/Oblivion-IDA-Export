0x50BB20: push    ecx
0x50BB21: mov     ecx, [esp+4+l]
0x50BB25: mov     edx, [esp+4+arg_10]
0x50BB29: lea     eax, [esp+4+var_4]
0x50BB2C: push    eax; UInt16
0x50BB2D: mov     eax, [esp+8+arg_C]
0x50BB31: push    ecx; l
0x50BB32: mov     ecx, [esp+0Ch+a4]
0x50BB36: push    edx; a6
0x50BB37: mov     edx, [esp+10h+a3]
0x50BB3B: push    eax; a5
0x50BB3C: mov     eax, [esp+14h+arg_4]
0x50BB40: push    ecx; a4
0x50BB41: mov     ecx, [esp+18h+a1]
0x50BB45: push    edx; a3
0x50BB46: push    eax; a2
0x50BB47: push    ecx; a1
0x50BB48: mov     dword ptr [esp+24h+var_4], 0
0x50BB50: call    Script_ExtractArgs
0x50BB55: add     esp, 20h
0x50BB58: test    al, al
0x50BB5A: jnz     short loc_50BB5E
0x50BB5C: pop     ecx
0x50BB5D: retn
0x50BB5E: mov     eax, ds:0B333C4h
0x50BB63: mov     edx, dword ptr [esp+4+var_4]
0x50BB66: add     [eax+614h], edx
0x50BB6C: mov     al, 1
0x50BB6E: pop     ecx
0x50BB6F: retn
