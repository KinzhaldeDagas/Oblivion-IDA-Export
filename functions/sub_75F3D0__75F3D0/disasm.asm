0x75F3D0: push    esi
0x75F3D1: mov     esi, ecx
0x75F3D3: mov     al, [esi+8]
0x75F3D6: shr     al, 5
0x75F3D9: test    al, 1
0x75F3DB: jz      short loc_75F3E8
0x75F3DD: fld     dword ptr ds:0A7A164h
0x75F3E3: fstp    dword ptr [esi+28h]
0x75F3E6: jmp     short loc_75F40E
0x75F3E8: fld     [esp+4+arg_0]
0x75F3EC: push    ecx
0x75F3ED: fstp    [esp+8+var_8]; float
0x75F3F0: call    sub_6C36B0
0x75F3F5: test    al, al
0x75F3F7: jz      short loc_75F40E
0x75F3F9: mov     ecx, [esi+3Ch]
0x75F3FC: test    ecx, ecx
0x75F3FE: jz      short loc_75F441
0x75F400: mov     edx, [ecx]
0x75F402: mov     eax, [edx+94h]
0x75F408: call    eax
0x75F40A: test    al, al
0x75F40C: jz      short loc_75F441
0x75F40E: mov     ecx, [esi+3Ch]
0x75F411: test    ecx, ecx
0x75F413: jz      short loc_75F441
0x75F415: mov     edx, [ecx]
0x75F417: fld     dword ptr [esi+28h]
0x75F41A: mov     edx, [edx+60h]
0x75F41D: lea     eax, [esp+4+arg_0]
0x75F421: push    eax
0x75F422: mov     eax, [esi+30h]
0x75F425: push    eax
0x75F426: push    ecx
0x75F427: fstp    [esp+10h+var_10]
0x75F42A: call    edx
0x75F42C: test    al, al
0x75F42E: jz      short loc_75F441
0x75F430: mov     ecx, [esp+4+arg_0]
0x75F434: mov     eax, [esi]
0x75F436: mov     edx, [eax+0B0h]
0x75F43C: push    ecx
0x75F43D: mov     ecx, esi
0x75F43F: call    edx
0x75F441: pop     esi
0x75F442: retn    4
