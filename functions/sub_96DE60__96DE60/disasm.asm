0x96DE60: mov     ecx, [esp+arg_0]
0x96DE64: mov     edx, [ecx+21Ch]
0x96DE6A: mov     [esp+arg_0], edx
0x96DE6E: jmp     loc_96DB20
0x96DB20: push    ecx
0x96DB21: push    1
0x96DB23: lea     eax, [esp+8+var_4]
0x96DB27: push    eax
0x96DB28: mov     eax, [esp+0Ch+arg_0]
0x96DB2C: mov     edx, [eax+4]
0x96DB2F: push    4
0x96DB31: lea     ecx, [esp+10h+arg_0]
0x96DB35: push    ecx
0x96DB36: push    eax
0x96DB37: mov     [esp+18h+var_4], 4
0x96DB3F: call    edx
0x96DB41: mov     eax, [esp+18h+arg_4]
0x96DB45: mov     ecx, [esp+18h+arg_0]
0x96DB49: mov     [eax], ecx
0x96DB4B: add     esp, 18h
0x96DB4E: retn
