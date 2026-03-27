0x98090C: cmp     dword ptr ds:0BA9B54h, 0
0x980913: jnz     short loc_980920
0x980915: push    offset __Fac_tidy
0x98091A: call    sub_980D85
0x98091F: pop     ecx
0x980920: push    8; Size
0x980922: call    FormHeapAlloc
0x980927: test    eax, eax
0x980929: pop     ecx
0x98092A: jz      short loc_98093D
0x98092C: mov     ecx, ds:0BA9B54h
0x980932: mov     [eax], ecx
0x980934: mov     ecx, [esp+arg_0]
0x980938: mov     [eax+4], ecx
0x98093B: jmp     short loc_98093F
0x98093D: xor     eax, eax
0x98093F: mov     ds:0BA9B54h, eax
0x980944: retn
