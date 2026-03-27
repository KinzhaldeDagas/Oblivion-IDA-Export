0x74CCA0: push    esi
0x74CCA1: push    edi
0x74CCA2: mov     edi, [esp+8+arg_0]
0x74CCA6: push    edi
0x74CCA7: mov     esi, ecx
0x74CCA9: call    sub_753010
0x74CCAE: mov     eax, [edi+21Ch]
0x74CCB4: push    1
0x74CCB6: lea     ecx, [esp+0Ch+arg_0]
0x74CCBA: push    ecx
0x74CCBB: push    4
0x74CCBD: lea     edx, [esi+54h]
0x74CCC0: push    edx
0x74CCC1: push    eax
0x74CCC2: mov     eax, [eax+4]
0x74CCC5: mov     [esp+1Ch+arg_0], 4
0x74CCCD: call    eax
0x74CCCF: mov     edi, [edi+21Ch]
0x74CCD5: mov     edx, [edi+4]
0x74CCD8: push    1
0x74CCDA: lea     ecx, [esp+20h+arg_0]
0x74CCDE: push    ecx
0x74CCDF: push    4
0x74CCE1: add     esi, 58h ; 'X'
0x74CCE4: push    esi
0x74CCE5: push    edi
0x74CCE6: mov     [esp+30h+arg_0], 4
0x74CCEE: call    edx
0x74CCF0: add     esp, 28h
0x74CCF3: pop     edi
0x74CCF4: pop     esi
0x74CCF5: retn    4
