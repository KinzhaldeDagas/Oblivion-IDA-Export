0x863400: push    ecx
0x863401: mov     eax, [ecx]
0x863403: mov     eax, [eax+5Ch]
0x863406: push    0
0x863408: lea     edx, [esp+8+var_4]
0x86340C: push    edx
0x86340D: mov     edx, [esp+0Ch+arg_0]
0x863411: push    2Fh ; '/'
0x863413: push    edx
0x863414: mov     [esp+14h+var_4], 0
0x86341C: call    eax
0x86341E: mov     ax, word ptr [esp+4+var_4]
0x863422: pop     ecx
0x863423: retn    4
