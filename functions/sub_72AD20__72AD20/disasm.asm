0x72AD20: push    esi
0x72AD21: push    edi
0x72AD22: mov     edi, [esp+8+arg_0]
0x72AD26: push    edi
0x72AD27: mov     esi, ecx
0x72AD29: call    sub_7201B0
0x72AD2E: mov     eax, [edi+220h]
0x72AD34: push    1
0x72AD36: lea     ecx, [esp+0Ch+arg_0]
0x72AD3A: push    ecx
0x72AD3B: push    2
0x72AD3D: lea     edx, [esi+58h]
0x72AD40: push    edx
0x72AD41: push    eax
0x72AD42: mov     eax, [eax+8]
0x72AD45: mov     [esp+1Ch+arg_0], 2
0x72AD4D: call    eax
0x72AD4F: mov     edi, [edi+220h]
0x72AD55: mov     edx, [edi+8]
0x72AD58: push    1
0x72AD5A: lea     ecx, [esp+20h+arg_0]
0x72AD5E: push    ecx
0x72AD5F: push    2
0x72AD61: add     esi, 5Ah ; 'Z'
0x72AD64: push    esi
0x72AD65: push    edi
0x72AD66: mov     [esp+30h+arg_0], 2
0x72AD6E: call    edx
0x72AD70: add     esp, 28h
0x72AD73: pop     edi
0x72AD74: pop     esi
0x72AD75: retn    4
