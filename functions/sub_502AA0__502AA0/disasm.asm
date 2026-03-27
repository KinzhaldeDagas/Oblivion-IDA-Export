0x502AA0: push    ecx
0x502AA1: mov     ecx, [esp+4+l]
0x502AA5: mov     edx, [esp+4+arg_10]
0x502AA9: push    esi
0x502AAA: mov     esi, [esp+8+a4]
0x502AAE: lea     eax, [esp+8+var_4]
0x502AB2: push    eax; UInt16
0x502AB3: mov     eax, [esp+0Ch+arg_C]
0x502AB7: push    ecx; l
0x502AB8: mov     ecx, [esp+10h+a3]
0x502ABC: push    edx; a6
0x502ABD: mov     edx, [esp+14h+arg_4]
0x502AC1: push    eax; a5
0x502AC2: mov     eax, [esp+18h+a1]
0x502AC6: push    esi; a4
0x502AC7: push    ecx; a3
0x502AC8: push    edx; a2
0x502AC9: push    eax; a1
0x502ACA: mov     dword ptr [esp+28h+var_4], 0
0x502AD2: call    Script_ExtractArgs
0x502AD7: add     esp, 20h
0x502ADA: test    al, al
0x502ADC: jnz     short loc_502AE1
0x502ADE: pop     esi
0x502ADF: pop     ecx
0x502AE0: retn
0x502AE1: mov     ecx, [esp+8+arg_18]
0x502AE5: mov     edx, dword ptr [esp+8+var_4]
0x502AE9: push    ecx
0x502AEA: push    0
0x502AEC: push    edx
0x502AED: push    esi
0x502AEE: call    sub_4F66A0
0x502AF3: add     esp, 10h
0x502AF6: pop     esi
0x502AF7: pop     ecx
0x502AF8: retn
