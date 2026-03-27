0x5E0710: push    ebx
0x5E0711: push    esi
0x5E0712: push    edi
0x5E0713: mov     edi, [esp+0Ch+arg_0]
0x5E0717: xor     bl, bl
0x5E0719: test    edi, edi
0x5E071B: mov     esi, ecx
0x5E071D: jz      short loc_5E077B
0x5E071F: push    ebp
0x5E0720: mov     ebp, [esp+10h+arg_4]
0x5E0724: test    ebp, ebp
0x5E0726: jz      short loc_5E0783
0x5E0728: cmp     dword ptr [esi+58h], 0
0x5E072C: jz      short loc_5E0783
0x5E072E: mov     ecx, [esi+58h]
0x5E0731: mov     eax, [ecx]
0x5E0733: mov     edx, [eax+40Ch]
0x5E0739: call    edx
0x5E073B: test    eax, eax
0x5E073D: jz      short loc_5E0783
0x5E073F: mov     ecx, [esi+58h]
0x5E0742: mov     eax, [ecx]
0x5E0744: mov     edx, [eax+40Ch]
0x5E074A: call    edx
0x5E074C: mov     edx, [eax]
0x5E074E: mov     ecx, eax
0x5E0750: mov     eax, [edx+4]
0x5E0753: call    eax
0x5E0755: cmp     eax, 2
0x5E0758: jnz     short loc_5E0783
0x5E075A: mov     ecx, [esi+58h]
0x5E075D: mov     edx, [ecx]
0x5E075F: mov     eax, [edx+40Ch]
0x5E0765: call    eax
0x5E0767: test    eax, eax
0x5E0769: jz      short loc_5E0783
0x5E076B: push    ebp
0x5E076C: push    edi
0x5E076D: mov     ecx, eax
0x5E076F: call    sub_683C70
0x5E0774: pop     ebp
0x5E0775: pop     edi
0x5E0776: pop     esi
0x5E0777: pop     ebx
0x5E0778: retn    8
0x5E077B: pop     edi
0x5E077C: pop     esi
0x5E077D: mov     al, bl
0x5E077F: pop     ebx
0x5E0780: retn    8
0x5E0783: pop     ebp
0x5E0784: pop     edi
0x5E0785: pop     esi
0x5E0786: mov     al, bl
0x5E0788: pop     ebx
0x5E0789: retn    8
