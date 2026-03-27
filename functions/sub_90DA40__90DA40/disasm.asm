0x90DA40: sub     esp, 74h
0x90DA43: push    40h ; '@'
0x90DA45: lea     eax, [esp+78h+var_40]
0x90DA49: push    0FFFFFFFFh
0x90DA4B: push    eax
0x90DA4C: call    sub_8B18C0
0x90DA51: mov     edx, [esp+80h+arg_4]
0x90DA58: mov     ecx, [esp+80h+arg_8]
0x90DA5F: push    4
0x90DA61: push    edx
0x90DA62: lea     eax, [esp+88h+var_30]
0x90DA66: push    eax
0x90DA67: mov     [esp+8Ch+var_40], 57E0E057h
0x90DA6F: mov     [esp+8Ch+var_3C], 10C0C010h
0x90DA77: mov     [esp+8Ch+var_38], ecx
0x90DA7B: mov     [esp+8Ch+var_34], 2
0x90DA83: call    sub_8B1890
0x90DA88: mov     ecx, [esp+8Ch+arg_C]
0x90DA8F: push    18h
0x90DA91: lea     edx, [esp+90h+var_18]
0x90DA95: push    0FFFFFFFFh
0x90DA97: push    edx
0x90DA98: mov     [esp+98h+var_2C], ecx
0x90DA9C: call    sub_8B18C0
0x90DAA1: mov     ecx, 80000000h
0x90DAA6: add     esp, 24h
0x90DAA9: xor     eax, eax
0x90DAAB: mov     [esp+74h+var_6C], ecx
0x90DAAF: mov     [esp+74h+var_60], ecx
0x90DAB3: mov     [esp+74h+var_54], ecx
0x90DAB7: mov     [esp+74h+var_48], ecx
0x90DABB: lea     ecx, [esp+74h+var_74]
0x90DABE: push    ecx
0x90DABF: mov     ecx, [esp+78h+arg_0]
0x90DAC3: push    offset unk_BA9474
0x90DAC8: lea     edx, [esp+7Ch+var_40]
0x90DACC: push    edx
0x90DACD: mov     [esp+80h+var_74], eax
0x90DAD1: mov     [esp+80h+var_70], eax
0x90DAD5: mov     [esp+80h+var_68], eax
0x90DAD9: mov     [esp+80h+var_64], eax
0x90DADD: mov     [esp+80h+var_5C], eax
0x90DAE1: mov     [esp+80h+var_58], eax
0x90DAE5: mov     [esp+80h+var_50], eax
0x90DAE9: mov     [esp+80h+var_4C], eax
0x90DAED: mov     [esp+80h+var_44], eax
0x90DAF1: mov     eax, [esi]
0x90DAF3: push    ecx
0x90DAF4: mov     ecx, esi
0x90DAF6: call    dword ptr [eax+8]
0x90DAF9: lea     ecx, [esp+74h+var_74]
0x90DAFC: call    sub_941400
0x90DB01: add     esp, 74h
0x90DB04: retn
