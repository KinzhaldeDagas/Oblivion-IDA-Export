0x42EDF0: sub     esp, 8
0x42EDF3: push    ebx
0x42EDF4: mov     ebx, ArchiveList
0x42EDFA: test    ebx, ebx
0x42EDFC: jz      short loc_42EE76
0x42EDFE: push    ebp
0x42EDFF: mov     ebp, [esp+10h+arg_4]
0x42EE03: push    esi
0x42EE04: push    edi
0x42EE05: cmp     dword ptr [ebx+4], 0
0x42EE09: jnz     short loc_42EE10
0x42EE0B: cmp     dword ptr [ebx], 0
0x42EE0E: jz      short loc_42EE73
0x42EE10: mov     esi, [ebx]
0x42EE12: mov     ax, [esp+18h+arg_8]
0x42EE17: test    [esi+174h], ax
0x42EE1E: jz      short loc_42EE6C
0x42EE20: mov     edx, [esp+18h+arg_0]
0x42EE24: push    0
0x42EE26: lea     ecx, [esp+1Ch+var_8]
0x42EE2A: push    ecx
0x42EE2B: push    edx
0x42EE2C: mov     ecx, esi
0x42EE2E: call    Archive_ContainsFolder
0x42EE33: test    al, al
0x42EE35: jz      short loc_42EE6C
0x42EE37: mov     edi, [esp+18h+var_8]
0x42EE3B: push    0
0x42EE3D: push    0
0x42EE3F: lea     eax, [esp+20h+var_4]
0x42EE43: push    eax
0x42EE44: push    ebp
0x42EE45: push    edi
0x42EE46: mov     ecx, esi
0x42EE48: call    Archive_FolderContainFile
0x42EE4D: test    al, al
0x42EE4F: jz      short loc_42EE6C
0x42EE51: mov     eax, [esp+18h+var_4]
0x42EE55: mov     ecx, [esi+178h]
0x42EE5B: shl     edi, 4
0x42EE5E: shl     eax, 4
0x42EE61: add     eax, [ecx+edi+0Ch]
0x42EE65: and     dword ptr [eax+0Ch], 80000000h
0x42EE6C: mov     ebx, [ebx+4]
0x42EE6F: test    ebx, ebx
0x42EE71: jnz     short loc_42EE05
0x42EE73: pop     edi
0x42EE74: pop     esi
0x42EE75: pop     ebp
0x42EE76: pop     ebx
0x42EE77: add     esp, 8
0x42EE7A: retn
