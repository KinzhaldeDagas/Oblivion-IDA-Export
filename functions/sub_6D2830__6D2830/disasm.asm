0x6D2830: push    esi
0x6D2831: push    edi
0x6D2832: mov     edi, [esp+8+arg_0]
0x6D2836: push    edi
0x6D2837: mov     esi, ecx
0x6D2839: call    sub_6CD720
0x6D283E: mov     eax, [edi+21Ch]
0x6D2844: mov     edx, [eax+4]
0x6D2847: push    1
0x6D2849: lea     ecx, [esp+0Ch+arg_0]
0x6D284D: push    ecx
0x6D284E: push    4
0x6D2850: add     esi, 30h ; '0'
0x6D2853: push    esi
0x6D2854: push    eax
0x6D2855: mov     [esp+1Ch+arg_0], 4
0x6D285D: call    edx
0x6D285F: add     esp, 14h
0x6D2862: pop     edi
0x6D2863: pop     esi
0x6D2864: retn    4
