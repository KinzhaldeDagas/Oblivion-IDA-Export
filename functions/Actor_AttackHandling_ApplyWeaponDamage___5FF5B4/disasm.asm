0x5FF5B4: mov     ecx, [esp+arg_28]
0x5FF5B8: mov     edx, [ecx+88h]
0x5FF5BE: mov     eax, [edx+10h]
0x5FF5C1: add     ecx, 88h ; 'ˆ'
0x5FF5C7: call    eax
0x5FF5C9: movzx   ecx, ax
0x5FF5CC: mov     [esp+arg_4C], ecx
0x5FF5D0: push    ecx
0x5FF5D1: fild    [esp+4+arg_4C]
0x5FF5D5: fstp    [esp+4+var_4]; float
0x5FF5D8: call    Calc_DamageToWeapon
0x5FF5DD: mov     edx, [edi]
0x5FF5DF: fstp    [esp+4+arg_4C]
0x5FF5E3: fld     [esp+4+arg_4C]
0x5FF5E7: mov     eax, [edx+2C4h]
0x5FF5ED: add     esp, 4
0x5FF5F0: push    ebp
0x5FF5F1: push    ecx
0x5FF5F2: fstp    [esp+8+var_8]
0x5FF5F5: push    ebx
0x5FF5F6: mov     ecx, edi
0x5FF5F8: call    eax
