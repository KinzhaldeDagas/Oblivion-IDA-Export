0x4C5AA0: mov     eax, [esp+arg_0]
0x4C5AA4: sub     esp, 50h
0x4C5AA7: push    esi
0x4C5AA8: push    edi
0x4C5AA9: push    1
0x4C5AAB: mov     esi, ecx
0x4C5AAD: push    eax
0x4C5AAE: lea     ecx, [esp+60h+var_50]
0x4C5AB2: push    ecx
0x4C5AB3: mov     ecx, esi
0x4C5AB5: xor     edi, edi
0x4C5AB7: call    sub_4C3030
0x4C5ABC: test    al, al
0x4C5ABE: jz      short loc_4C5AD9
0x4C5AC0: mov     edx, dword ptr [esp+58h+var_14]
0x4C5AC4: mov     eax, [esp+58h+var_38]
0x4C5AC8: push    edx; __int16
0x4C5AC9: push    eax; float
0x4C5ACA: mov     ecx, esi
0x4C5ACC: call    sub_4C0190
0x4C5AD1: pop     edi
0x4C5AD2: pop     esi
0x4C5AD3: add     esp, 50h
0x4C5AD6: retn    4
0x4C5AD9: mov     eax, edi
0x4C5ADB: pop     edi
0x4C5ADC: pop     esi
0x4C5ADD: add     esp, 50h
0x4C5AE0: retn    4
