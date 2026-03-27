0x90A960: mov     ecx, ds:0BA7D98h
0x90A966: mov     eax, [ecx]
0x90A968: push    1Ch
0x90A96A: push    14h
0x90A96C: call    dword ptr [eax+10h]
0x90A96F: mov     ecx, [esp+arg_C]
0x90A973: mov     edx, [esp+arg_8]
0x90A977: push    ecx
0x90A978: mov     ecx, [esp+4+arg_4]
0x90A97C: push    edx
0x90A97D: mov     edx, [esp+8+arg_0]
0x90A981: push    ecx
0x90A982: push    edx
0x90A983: mov     ecx, eax
0x90A985: mov     word ptr [eax+4], 14h
0x90A98B: call    sub_90A8B0
0x90A990: retn
