0x503410: push    ecx
0x503411: mov     ecx, [esp+4+l]
0x503415: mov     edx, [esp+4+arg_10]
0x503419: push    esi
0x50341A: mov     esi, [esp+8+a4]
0x50341E: lea     eax, [esp+8+var_4]
0x503422: push    eax; UInt16
0x503423: mov     eax, [esp+0Ch+arg_C]
0x503427: push    ecx; l
0x503428: mov     ecx, [esp+10h+a3]
0x50342C: push    edx; a6
0x50342D: mov     edx, [esp+14h+arg_4]
0x503431: push    eax; a5
0x503432: mov     eax, [esp+18h+a1]
0x503436: push    esi; a4
0x503437: push    ecx; a3
0x503438: push    edx; a2
0x503439: push    eax; a1
0x50343A: mov     dword ptr [esp+28h+var_4], 0
0x503442: call    Script_ExtractArgs
0x503447: add     esp, 20h
0x50344A: test    al, al
0x50344C: jnz     short loc_503451
0x50344E: pop     esi
0x50344F: pop     ecx
0x503450: retn
0x503451: mov     ecx, [esp+8+arg_18]
0x503455: mov     edx, dword ptr [esp+8+var_4]
0x503459: push    ecx
0x50345A: push    0
0x50345C: push    edx
0x50345D: push    esi
0x50345E: call    sub_4F70C0
0x503463: add     esp, 10h
0x503466: pop     esi
0x503467: pop     ecx
0x503468: retn
