0x6E5FC0: push    esi
0x6E5FC1: push    edi
0x6E5FC2: mov     edi, [esp+8+arg_0]
0x6E5FC6: push    edi
0x6E5FC7: mov     esi, ecx
0x6E5FC9: call    sub_6E5380
0x6E5FCE: mov     eax, [edi+21Ch]
0x6E5FD4: mov     edx, [eax+4]
0x6E5FD7: push    1
0x6E5FD9: lea     ecx, [esp+0Ch+arg_0]
0x6E5FDD: push    ecx
0x6E5FDE: push    8
0x6E5FE0: add     esi, 2Ch ; ','
0x6E5FE3: push    esi
0x6E5FE4: push    eax
0x6E5FE5: mov     [esp+1Ch+arg_0], 4
0x6E5FED: call    edx
0x6E5FEF: add     esp, 14h
0x6E5FF2: pop     edi
0x6E5FF3: pop     esi
0x6E5FF4: retn    4
