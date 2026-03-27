0x893950: push    ecx
0x893951: push    edi
0x893952: mov     edi, ecx
0x893954: call    sub_891160
0x893959: test    eax, eax
0x89395B: jz      short loc_89399C
0x89395D: mov     ecx, [eax+1Ch]
0x893960: test    ecx, ecx
0x893962: jz      short loc_89399C
0x893964: mov     edx, [ecx]
0x893966: mov     edx, [edx+88h]
0x89396C: push    eax
0x89396D: lea     eax, [esp+0Ch+var_4]
0x893971: push    eax
0x893972: call    edx
0x893974: mov     eax, dword ptr [esp+8+var_4]
0x893978: test    eax, eax
0x89397A: jz      short loc_89399C
0x89397C: push    esi
0x89397D: mov     esi, eax
0x89397F: add     eax, 4
0x893982: push    eax; lpAddend
0x893983: call    dword ptr ds:0A2807Ch
0x893989: test    eax, eax
0x89398B: jnz     short loc_89399B
0x89398D: test    esi, esi
0x89398F: jz      short loc_89399B
0x893991: mov     eax, [esi]
0x893993: mov     edx, [eax]
0x893995: push    1
0x893997: mov     ecx, esi
0x893999: call    edx
0x89399B: pop     esi
0x89399C: and     dword ptr [edi+1F4h], 0FFFF7FFFh
0x8939A6: pop     edi
0x8939A7: pop     ecx
0x8939A8: retn
