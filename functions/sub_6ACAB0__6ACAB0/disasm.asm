0x6ACAB0: push    0FFFFFFFFh
0x6ACAB2: push    offset SEH_6ACAB0
0x6ACAB7: mov     eax, large fs:0
0x6ACABD: push    eax
0x6ACABE: push    ecx
0x6ACABF: push    esi
0x6ACAC0: push    edi
0x6ACAC1: mov     eax, ds:0B30AACh
0x6ACAC6: xor     eax, esp
0x6ACAC8: push    eax
0x6ACAC9: lea     eax, [esp+1Ch+var_C]
0x6ACACD: mov     large fs:0, eax
0x6ACAD3: mov     edi, ecx
0x6ACAD5: cmp     byte ptr ds:0B16178h, 0
0x6ACADC: jz      loc_6ACBB7
0x6ACAE2: mov     esi, [esp+1Ch+arg_0]
0x6ACAE6: mov     ecx, [edi+300h]
0x6ACAEC: lea     eax, [esp+1Ch+var_10]
0x6ACAF0: push    eax
0x6ACAF1: push    esi
0x6ACAF2: mov     [esp+24h+var_10], 0
0x6ACAFA: call    NiTMap_GetAt
0x6ACAFF: mov     ecx, [esp+1Ch+var_10]
0x6ACB03: test    ecx, ecx
0x6ACB05: jz      loc_6ACBCD
0x6ACB0B: mov     eax, [ecx]
0x6ACB0D: or      eax, 200h
0x6ACB12: mov     [ecx], eax
0x6ACB14: cmp     byte ptr [edi+0A6h], 0
0x6ACB1B: push    14h; Size
0x6ACB1D: jz      short loc_6ACB59
0x6ACB1F: call    FormHeapAlloc
0x6ACB24: add     esp, 4
0x6ACB27: mov     [esp+1Ch+arg_0], eax
0x6ACB2B: test    eax, eax
0x6ACB2D: mov     [esp+1Ch+var_4], 0
0x6ACB35: jz      short loc_6ACB99
0x6ACB37: push    ecx
0x6ACB38: mov     ecx, [esp+20h+arg_4]
0x6ACB3C: mov     edx, esp
0x6ACB3E: mov     [esp+20h+var_10], esp
0x6ACB42: push    0
0x6ACB44: neg     ecx
0x6ACB46: push    ecx
0x6ACB47: push    esi
0x6ACB48: push    3
0x6ACB4A: mov     ecx, eax
0x6ACB4C: mov     dword ptr [edx], 0
0x6ACB52: call    sub_6AA590
0x6ACB57: jmp     short loc_6ACB9B
0x6ACB59: call    FormHeapAlloc
0x6ACB5E: add     esp, 4
0x6ACB61: mov     [esp+1Ch+arg_0], eax
0x6ACB65: test    eax, eax
0x6ACB67: mov     [esp+1Ch+var_4], 1
0x6ACB6F: jz      short loc_6ACB99
0x6ACB71: push    ecx
0x6ACB72: mov     edx, esp
0x6ACB74: mov     [esp+20h+var_10], esp
0x6ACB78: mov     dword ptr [edx], 0
0x6ACB7E: mov     edx, [esp+20h+arg_4]
0x6ACB82: mov     ecx, ds:0B33EA0h
0x6ACB88: push    0
0x6ACB8A: add     ecx, edx
0x6ACB8C: push    ecx
0x6ACB8D: push    esi
0x6ACB8E: push    3
0x6ACB90: mov     ecx, eax
0x6ACB92: call    sub_6AA590
0x6ACB97: jmp     short loc_6ACB9B
0x6ACB99: xor     eax, eax
0x6ACB9B: mov     ecx, [edi+308h]
0x6ACBA1: lea     edx, [esp+1Ch+arg_4]
0x6ACBA5: push    edx
0x6ACBA6: mov     [esp+20h+arg_4], eax
0x6ACBAA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6ACBB2: call    sub_5B1E20
0x6ACBB7: xor     eax, eax
0x6ACBB9: mov     ecx, [esp+1Ch+var_C]
0x6ACBBD: mov     large fs:0, ecx
0x6ACBC4: pop     ecx
0x6ACBC5: pop     edi
0x6ACBC6: pop     esi
0x6ACBC7: add     esp, 10h
0x6ACBCA: retn    0Ch
0x6ACBCD: mov     eax, 80004005h
0x6ACBD2: mov     ecx, [esp+1Ch+var_C]
0x6ACBD6: mov     large fs:0, ecx
0x6ACBDD: pop     ecx
0x6ACBDE: pop     edi
0x6ACBDF: pop     esi
0x6ACBE0: add     esp, 10h
0x6ACBE3: retn    0Ch
