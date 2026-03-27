0x5040D0: push    ecx
0x5040D1: mov     ecx, [esp+4+arg_10]
0x5040D5: mov     edx, [esp+4+arg_C]
0x5040D9: push    esi
0x5040DA: mov     esi, [esp+8+a4]
0x5040DE: push    edi
0x5040DF: mov     edi, [esp+0Ch+l]
0x5040E3: lea     eax, [esp+0Ch+var_4]
0x5040E7: push    eax; UInt16
0x5040E8: mov     eax, [esp+10h+a3]
0x5040EC: push    edi; l
0x5040ED: push    ecx; a6
0x5040EE: mov     ecx, [esp+18h+arg_4]
0x5040F2: push    edx; a5
0x5040F3: mov     edx, [esp+1Ch+a1]
0x5040F7: push    esi; a4
0x5040F8: push    eax; a3
0x5040F9: push    ecx; a2
0x5040FA: push    edx; a1
0x5040FB: mov     dword ptr [esp+2Ch+var_4], 0
0x504103: call    Script_ExtractArgs
0x504108: add     esp, 20h
0x50410B: test    al, al
0x50410D: jnz     short loc_504113
0x50410F: pop     edi
0x504110: pop     esi
0x504111: pop     ecx
0x504112: retn
0x504113: test    esi, esi
0x504115: fldz
0x504117: push    ebx
0x504118: mov     ebx, [esp+10h+arg_18]
0x50411C: fstp    qword ptr [ebx]
0x50411E: jz      short loc_50413D
0x504120: test    edi, edi
0x504122: jz      short loc_50413D
0x504124: mov     eax, dword ptr [esp+10h+var_4]
0x504128: push    100h
0x50412D: push    eax
0x50412E: mov     ecx, edi
0x504130: call    sub_4FB5F0
0x504135: test    al, al
0x504137: jz      short loc_50413D
0x504139: fld1
0x50413B: fstp    qword ptr [ebx]
0x50413D: pop     ebx
0x50413E: pop     edi
0x50413F: mov     al, 1
0x504141: pop     esi
0x504142: pop     ecx
0x504143: retn
