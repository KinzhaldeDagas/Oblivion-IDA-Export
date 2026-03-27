0x77C950: push    ecx
0x77C951: push    ebx
0x77C952: push    ebp
0x77C953: mov     ebp, [esp+0Ch+arg_0]
0x77C957: push    esi
0x77C958: push    edi
0x77C959: lea     eax, [esp+14h+var_4]
0x77C95D: mov     esi, ecx
0x77C95F: mov     ecx, [esi+20h]
0x77C962: push    eax
0x77C963: push    ebp
0x77C964: mov     [esp+1Ch+var_4], 0
0x77C96C: call    sub_4A1AB0
0x77C971: test    al, al
0x77C973: mov     edi, [esp+14h+var_4]
0x77C977: jz      short loc_77C98E
0x77C979: cmp     dword ptr [edi+4], 2
0x77C97D: lea     ebx, [edi+4]
0x77C980: jnz     short loc_77C98E
0x77C982: mov     ecx, [esi+20h]
0x77C985: push    ebp
0x77C986: call    NiTMap_RemoveAt
0x77C98B: push    ebx
0x77C98C: jmp     short loc_77C996
0x77C98E: test    edi, edi
0x77C990: jz      short loc_77C9AA
0x77C992: lea     ecx, [edi+4]
0x77C995: push    ecx; lpAddend
0x77C996: call    dword ptr ds:0A2807Ch
0x77C99C: test    eax, eax
0x77C99E: jnz     short loc_77C9AA
0x77C9A0: mov     edx, [edi]
0x77C9A2: mov     eax, [edx]
0x77C9A4: push    1
0x77C9A6: mov     ecx, edi
0x77C9A8: call    eax
0x77C9AA: pop     edi
0x77C9AB: pop     esi
0x77C9AC: pop     ebp
0x77C9AD: pop     ebx
0x77C9AE: pop     ecx
0x77C9AF: retn    4
