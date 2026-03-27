0x897810: push    esi
0x897811: push    edi
0x897812: mov     edi, [esp+8+arg_0]
0x897816: push    edi
0x897817: mov     esi, ecx
0x897819: call    sub_711CB0
0x89781E: mov     ecx, esi
0x897820: call    sub_452A60
0x897825: test    eax, eax
0x897827: jz      short loc_89783A
0x897829: mov     cx, [eax+18h]
0x89782D: and     cx, 0FFEFh
0x897832: or      cx, 6
0x897836: mov     [eax+18h], cx
0x89783A: mov     ecx, edi
0x89783C: call    sub_7124A0
0x897841: push    eax
0x897842: mov     ecx, esi
0x897844: call    sub_897670
0x897849: pop     edi
0x89784A: pop     esi
0x89784B: retn    4
