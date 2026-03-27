0x8B22F0: push    ecx
0x8B22F1: mov     eax, [ecx+14h]
0x8B22F4: cmp     eax, 1
0x8B22F7: mov     byte ptr [esp+4+var_4], 0
0x8B22FB: jle     short loc_8B2311
0x8B22FD: mov     edx, [esp+4+var_4]
0x8B2300: push    edx
0x8B2301: dec     eax
0x8B2302: push    eax
0x8B2303: mov     eax, [ecx+10h]
0x8B2306: push    0
0x8B2308: push    eax
0x8B2309: call    sub_8B21F0
0x8B230E: add     esp, 10h
0x8B2311: pop     ecx
0x8B2312: retn
