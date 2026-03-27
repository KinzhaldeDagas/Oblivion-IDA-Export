0x9047D0: push    ebp
0x9047D1: mov     ebp, esp
0x9047D3: and     esp, 0FFFFFFF0h
0x9047D6: sub     esp, 54h
0x9047D9: mov     ecx, ds:0BA9DE4h
0x9047DF: push    ebx
0x9047E0: mov     ebx, large fs:2Ch
0x9047E7: mov     eax, [ebx+ecx*4]
0x9047EA: mov     edx, [eax+1A4h]
0x9047F0: push    esi
0x9047F1: cmp     edx, [eax+1A8h]
0x9047F7: push    edi
0x9047F8: jnb     short loc_90481E
0x9047FA: mov     esi, eax
0x9047FC: mov     ecx, [esi+1A4h]
0x904802: mov     dword ptr [ecx], offset aTttransform; "TtTransform"
0x904808: rdtsc
0x90480A: mov     [esp+60h+var_54], eax
0x90480E: mov     eax, [esp+60h+var_54]
0x904812: mov     [ecx+4], eax
0x904815: add     ecx, 0Ch
0x904818: mov     [esi+1A4h], ecx
0x90481E: mov     esi, [ebp+arg_0]
0x904821: mov     edi, [esi]
0x904823: mov     edx, [esi+8]
0x904826: lea     ecx, [edi+20h]
0x904829: push    ecx
0x90482A: push    edx
0x90482B: lea     ecx, [esp+68h+var_40]
0x90482F: call    sub_8B1F70
0x904834: mov     [esp+60h+var_44], esi
0x904838: lea     eax, [esp+60h+var_40]
0x90483C: mov     [esp+60h+var_48], eax
0x904840: mov     ecx, [edi+0Ch]
0x904843: mov     edx, [esi+4]
0x904846: mov     [esp+60h+var_4C], edx
0x90484A: mov     [esp+60h+var_50], ecx
0x90484E: mov     eax, [ecx]
0x904850: call    dword ptr [eax+8]
0x904853: mov     edi, [ebp+arg_4]
0x904856: mov     ecx, [edi]
0x904858: mov     edx, [ecx]
0x90485A: mov     esi, eax
0x90485C: call    dword ptr [edx+8]
0x90485F: mov     edx, [ebp+arg_8]
0x904862: mov     ecx, [edx]
0x904864: shl     esi, 5
0x904867: add     esi, ecx
0x904869: movzx   eax, byte ptr [esi+eax+190h]
0x904871: mov     esi, [ebp+arg_C]
0x904874: push    esi
0x904875: push    edx
0x904876: lea     edx, [esp+68h+var_50]
0x90487A: push    edi
0x90487B: lea     eax, [eax+eax*4]
0x90487E: push    edx
0x90487F: call    dword ptr [ecx+eax*4+994h]
0x904886: mov     ecx, ds:0BA9DE4h
0x90488C: mov     eax, [ebx+ecx*4]
0x90488F: mov     edx, [eax+1A4h]
0x904895: mov     esi, [eax+1A8h]
0x90489B: add     esp, 10h
0x90489E: cmp     edx, esi
0x9048A0: jnb     short loc_9048C6
0x9048A2: mov     ebx, eax
0x9048A4: mov     esi, [ebx+1A4h]
0x9048AA: mov     dword ptr [esi], offset aEt; "Et"
0x9048B0: rdtsc
0x9048B2: mov     [esp+60h+var_54], eax
0x9048B6: mov     eax, [esp+60h+var_54]
0x9048BA: mov     [esi+4], eax
0x9048BD: add     esi, 0Ch
0x9048C0: mov     [ebx+1A4h], esi
0x9048C6: pop     edi
0x9048C7: pop     esi
0x9048C8: pop     ebx
0x9048C9: mov     esp, ebp
0x9048CB: pop     ebp
0x9048CC: retn
