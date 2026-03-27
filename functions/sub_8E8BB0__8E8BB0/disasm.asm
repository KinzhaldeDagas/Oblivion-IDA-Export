0x8E8BB0: push    ebp
0x8E8BB1: mov     ebp, esp
0x8E8BB3: and     esp, 0FFFFFFF0h
0x8E8BB6: sub     esp, 4Ch
0x8E8BB9: push    esi
0x8E8BBA: mov     esi, ecx
0x8E8BBC: mov     ecx, [ebp+arg_0]
0x8E8BBF: lea     eax, [esi+20h]
0x8E8BC2: push    eax
0x8E8BC3: push    ecx
0x8E8BC4: lea     ecx, [esp+58h+var_40]
0x8E8BC8: call    sub_8B1F70
0x8E8BCD: mov     eax, [ebp+arg_8]
0x8E8BD0: mov     ecx, [esi+0Ch]
0x8E8BD3: mov     edx, [ecx]
0x8E8BD5: push    eax
0x8E8BD6: mov     eax, [ebp+arg_4]
0x8E8BD9: push    eax
0x8E8BDA: lea     eax, [esp+58h+var_40]
0x8E8BDE: push    eax
0x8E8BDF: call    dword ptr [edx+0Ch]
0x8E8BE2: pop     esi
0x8E8BE3: mov     esp, ebp
0x8E8BE5: pop     ebp
0x8E8BE6: retn    0Ch
