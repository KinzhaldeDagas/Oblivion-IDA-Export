0x88A990: mov     eax, [esp+arg_0]
0x88A994: mov     ecx, [eax+10h]
0x88A997: test    ecx, ecx
0x88A999: jz      short locret_88A9AC
0x88A99B: mov     edx, [esp+arg_4]
0x88A99F: cmp     dword ptr [edx+0Ch], 0
0x88A9A3: setnz   al
0x88A9A6: push    eax
0x88A9A7: call    sub_89F520
0x88A9AC: retn
