0x764770: push    ebx
0x764771: mov     ebx, [esp+4+arg_0]
0x764775: test    ebx, ebx
0x764777: push    esi
0x764778: mov     esi, ecx
0x76477A: jnz     short loc_764783
0x76477C: pop     esi
0x76477D: xor     eax, eax
0x76477F: pop     ebx
0x764780: retn    0Ch
0x764783: mov     ecx, [esi+878h]
0x764789: mov     eax, [ecx]
0x76478B: mov     edx, [eax+80h]
0x764791: push    edi
0x764792: push    0
0x764794: call    edx
0x764796: push    eax
0x764797: push    offset unk_B4265C
0x76479C: call    sub_497DD0
0x7647A1: push    ebx
0x7647A2: mov     edi, eax
0x7647A4: call    sub_76BEF0
0x7647A9: mov     ecx, [esp+18h+arg_8]
0x7647AD: mov     edx, [esp+18h+arg_4]
0x7647B1: add     esp, 0Ch
0x7647B4: push    ecx
0x7647B5: mov     ecx, [esi+5D0h]
0x7647BB: push    edx
0x7647BC: push    eax
0x7647BD: mov     eax, [edi+1Ch]
0x7647C0: push    eax
0x7647C1: call    sub_775280
0x7647C6: test    eax, eax
0x7647C8: pop     edi
0x7647C9: jz      short loc_76477C
0x7647CB: push    eax; a1
0x7647CC: call    CreateSurfaceData
0x7647D1: add     esp, 4
0x7647D4: pop     esi
0x7647D5: pop     ebx
0x7647D6: retn    0Ch
