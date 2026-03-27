0x5E4140: push    esi
0x5E4141: mov     esi, ecx
0x5E4143: mov     ecx, [esi+58h]
0x5E4146: mov     eax, [ecx]
0x5E4148: mov     edx, [eax+36Ch]
0x5E414E: call    edx
0x5E4150: test    eax, eax
0x5E4152: jz      loc_5E4250
0x5E4158: mov     eax, [esi]
0x5E415A: mov     edx, [eax+380h]
0x5E4160: mov     ecx, esi
0x5E4162: call    edx
0x5E4164: test    eax, eax
0x5E4166: jnz     loc_5E4250
0x5E416C: push    ebx
0x5E416D: push    edi
0x5E416E: mov     edi, [esi+58h]
0x5E4171: push    eax
0x5E4172: mov     eax, [edi]
0x5E4174: mov     edx, [eax+37Ch]
0x5E417A: mov     ecx, edi
0x5E417C: call    edx
0x5E417E: push    eax
0x5E417F: mov     eax, [edi]
0x5E4181: mov     edx, [eax+378h]
0x5E4187: mov     ecx, edi
0x5E4189: call    edx
0x5E418B: mov     ecx, eax
0x5E418D: call    sub_4D7300
0x5E4192: mov     eax, [esi]
0x5E4194: mov     edx, [eax+164h]
0x5E419A: mov     ecx, esi
0x5E419C: call    edx
0x5E419E: mov     byte ptr [eax+0C4h], 1
0x5E41A5: mov     edi, [esi+58h]
0x5E41A8: mov     ebx, [edi]
0x5E41AA: mov     eax, [ebx+378h]
0x5E41B0: push    7Fh; float
0x5E41B2: mov     ecx, edi
0x5E41B4: call    eax
0x5E41B6: mov     edx, [ebx+370h]
0x5E41BC: push    eax
0x5E41BD: push    0
0x5E41BF: push    esi
0x5E41C0: mov     ecx, edi
0x5E41C2: call    edx
0x5E41C4: fldz
0x5E41C6: mov     ecx, [esi+58h]
0x5E41C9: mov     eax, [ecx]
0x5E41CB: mov     edx, [eax+380h]
0x5E41D1: push    ecx
0x5E41D2: fstp    [esp+14h+var_14]
0x5E41D5: call    edx
0x5E41D7: mov     ecx, eax
0x5E41D9: call    sub_6FAEE0
0x5E41DE: mov     ecx, [esi+58h]
0x5E41E1: mov     eax, [ecx]
0x5E41E3: mov     edx, [eax+380h]
0x5E41E9: call    edx
0x5E41EB: mov     byte ptr [eax+0Eh], 0
0x5E41EF: mov     ecx, [esi+58h]
0x5E41F2: mov     eax, [ecx]
0x5E41F4: mov     edx, [eax+380h]
0x5E41FA: call    edx
0x5E41FC: mov     ecx, ds:0B3F9A8h
0x5E4202: mov     [eax], ecx
0x5E4204: mov     edx, ds:0B3F9ACh
0x5E420A: mov     [eax+4], edx
0x5E420D: mov     ecx, ds:0B3F9B0h
0x5E4213: mov     [eax+8], ecx
0x5E4216: mov     edi, [esi+58h]
0x5E4219: mov     ebx, [edi]
0x5E421B: mov     edx, [ebx+380h]
0x5E4221: mov     ecx, edi
0x5E4223: call    edx
0x5E4225: push    eax
0x5E4226: mov     eax, [ebx+3E8h]
0x5E422C: push    7Fh
0x5E422E: push    0
0x5E4230: mov     ecx, edi
0x5E4232: call    eax
0x5E4234: mov     eax, ds:0B333C4h
0x5E4239: cmp     esi, eax
0x5E423B: pop     edi
0x5E423C: pop     ebx
0x5E423D: jnz     short loc_5E4247
0x5E423F: fldz
0x5E4241: fstp    dword ptr [eax+61Ch]
0x5E4247: push    0
0x5E4249: mov     ecx, esi
0x5E424B: call    sub_65AC20
0x5E4250: pop     esi
0x5E4251: retn
