0x4A83F0: mov     eax, [esp+arg_0]
0x4A83F4: mov     edx, [esp+arg_4]
0x4A83F8: mov     ecx, eax
0x4A83FA: shr     ecx, 18h
0x4A83FD: mov     [edx], ecx
0x4A83FF: mov     edx, [esp+arg_8]
0x4A8403: mov     ecx, eax
0x4A8405: shr     ecx, 10h
0x4A8408: and     ecx, 0FFh
0x4A840E: mov     [edx], ecx
0x4A8410: mov     edx, [esp+arg_C]
0x4A8414: movzx   ecx, ah
0x4A8417: mov     [edx], ecx
0x4A8419: mov     ecx, [esp+arg_10]
0x4A841D: movzx   eax, al
0x4A8420: mov     [ecx], eax
0x4A8422: retn
