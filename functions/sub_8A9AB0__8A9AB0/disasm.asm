0x8A9AB0: mov     eax, [ecx+8]
0x8A9AB3: sub     esp, 10h
0x8A9AB6: test    eax, eax
0x8A9AB8: jz      short loc_8A9AF6
0x8A9ABA: mov     edx, [eax+88h]
0x8A9AC0: test    edx, edx
0x8A9AC2: jz      short loc_8A9AF6
0x8A9AC4: mov     dl, byte ptr [esp+10h+arg_4]
0x8A9AC8: mov     [esp+10h+var_C], ecx
0x8A9ACC: mov     cl, byte ptr [esp+10h+arg_0]
0x8A9AD0: mov     [esp+10h+var_8], cl
0x8A9AD4: mov     cl, byte ptr [esp+10h+arg_8]
0x8A9AD8: mov     [esp+10h+var_7], dl
0x8A9ADC: lea     edx, [esp+10h+var_10]
0x8A9ADF: mov     [esp+10h+var_6], cl
0x8A9AE3: push    edx
0x8A9AE4: mov     ecx, eax
0x8A9AE6: mov     [esp+14h+var_10], 4
0x8A9AEB: call    sub_898820
0x8A9AF0: add     esp, 10h
0x8A9AF3: retn    0Ch
0x8A9AF6: mov     eax, [esp+10h+arg_8]
0x8A9AFA: mov     edx, [esp+10h+arg_4]
0x8A9AFE: push    eax
0x8A9AFF: mov     eax, [esp+14h+arg_0]
0x8A9B03: push    edx
0x8A9B04: push    eax
0x8A9B05: push    ecx
0x8A9B06: call    sub_8CD4E0
0x8A9B0B: add     esp, 10h
0x8A9B0E: add     esp, 10h
0x8A9B11: retn    0Ch
