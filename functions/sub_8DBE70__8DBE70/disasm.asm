0x8DBE70: mov     eax, [esp+arg_0]
0x8DBE74: push    ebx
0x8DBE75: push    esi
0x8DBE76: mov     esi, [eax+10h]
0x8DBE79: push    edi
0x8DBE7A: add     esi, eax
0x8DBE7C: mov     eax, [esp+0Ch+arg_4]
0x8DBE80: mov     edi, [eax+10h]
0x8DBE83: mov     ebx, ecx
0x8DBE85: mov     ecx, ds:0BA7D98h
0x8DBE8B: push    1Fh
0x8DBE8D: add     edi, eax
0x8DBE8F: mov     eax, [ecx]
0x8DBE91: push    9Ch ; 'œ'
0x8DBE96: call    dword ptr [eax+10h]
0x8DBE99: push    edi
0x8DBE9A: mov     word ptr [eax+4], 9Ch ; 'œ'
0x8DBEA0: mov     ecx, [ebx+8]
0x8DBEA3: push    esi
0x8DBEA4: push    ecx
0x8DBEA5: mov     ecx, eax
0x8DBEA7: call    sub_8DBD90
0x8DBEAC: pop     edi
0x8DBEAD: pop     esi
0x8DBEAE: pop     ebx
0x8DBEAF: retn    0Ch
