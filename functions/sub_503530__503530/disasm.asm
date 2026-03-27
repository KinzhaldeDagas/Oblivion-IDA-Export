0x503530: push    ecx
0x503531: mov     ecx, [esp+4+l]
0x503535: mov     edx, [esp+4+arg_10]
0x503539: lea     eax, [esp+4+var_4]
0x50353C: push    eax; UInt16
0x50353D: mov     eax, [esp+8+arg_C]
0x503541: push    ecx; l
0x503542: mov     ecx, [esp+0Ch+a4]
0x503546: push    edx; a6
0x503547: mov     edx, [esp+10h+a3]
0x50354B: push    eax; a5
0x50354C: mov     eax, [esp+14h+arg_4]
0x503550: push    ecx; a4
0x503551: mov     ecx, [esp+18h+a1]
0x503555: push    edx; a3
0x503556: push    eax; a2
0x503557: push    ecx; a1
0x503558: call    Script_ExtractArgs
0x50355D: add     esp, 20h
0x503560: test    al, al
0x503562: jnz     short loc_503566
0x503564: pop     ecx
0x503565: retn
0x503566: mov     edx, [esp+4+arg_18]
0x50356A: mov     eax, dword ptr [esp+4+var_4]
0x50356D: mov     ecx, ds:0B333C4h
0x503573: push    edx
0x503574: push    0
0x503576: push    eax
0x503577: push    ecx
0x503578: call    sub_4F6FC0
0x50357D: add     esp, 10h
0x503580: pop     ecx
0x503581: retn
