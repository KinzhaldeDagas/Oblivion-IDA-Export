0x69FD40: push    0FFFFFFFFh
0x69FD42: push    offset SEH_69FD40
0x69FD47: mov     eax, large fs:0
0x69FD4D: push    eax
0x69FD4E: sub     esp, 28h
0x69FD51: push    ebx
0x69FD52: push    ebp
0x69FD53: push    esi
0x69FD54: push    edi; int
0x69FD55: mov     eax, ds:0B30AACh
0x69FD5A: xor     eax, esp
0x69FD5C: push    eax; int
0x69FD5D: lea     eax, [esp+48h+var_C]
0x69FD61: mov     large fs:0, eax
0x69FD67: mov     ebp, ecx
0x69FD69: mov     eax, [ebp+8]
0x69FD6C: mov     ecx, eax
0x69FD6E: shr     ecx, 5
0x69FD71: xor     ebx, ebx
0x69FD73: test    cl, 1
0x69FD76: jnz     loc_69FEEE
0x69FD7C: shr     eax, 0Bh
0x69FD7F: test    al, 1
0x69FD81: jnz     loc_69FEEE
0x69FD87: mov     edx, [ebp+0]
0x69FD8A: mov     eax, [edx+154h]
0x69FD90: mov     ecx, ebp
0x69FD92: call    eax
0x69FD94: test    eax, eax
0x69FD96: jnz     loc_69FED8
0x69FD9C: mov     eax, [ebp+74h]
0x69FD9F: mov     edx, [eax+18h]
0x69FDA2: lea     ecx, [eax+18h]
0x69FDA5: mov     eax, [edx+14h]
0x69FDA8: call    eax
0x69FDAA: push    eax
0x69FDAB: call    sub_69FBF0
0x69FDB0: mov     ebx, eax
0x69FDB2: add     esp, 4
0x69FDB5: test    ebx, ebx
0x69FDB7: jz      loc_69FED8
0x69FDBD: mov     edx, [ebp+0]
0x69FDC0: mov     eax, [edx+170h]
0x69FDC6: mov     ecx, ebp
0x69FDC8: call    eax
0x69FDCA: mov     ecx, [eax+8]
0x69FDCD: shr     ecx, 4
0x69FDD0: test    cl, 1
0x69FDD3: jz      short loc_69FDDE
0x69FDD5: push    1
0x69FDD7: mov     ecx, ebp
0x69FDD9: call    sub_46A9C0
0x69FDDE: push    ebx
0x69FDDF: mov     ecx, ebp
0x69FDE1: call    sub_4D7D10
0x69FDE6: mov     edx, [ebp+0]
0x69FDE9: mov     eax, [edx+174h]
0x69FDEF: mov     ecx, ebp
0x69FDF1: call    eax
0x69FDF3: mov     ecx, [eax]
0x69FDF5: mov     [ebx+54h], ecx
0x69FDF8: mov     edx, [eax+4]
0x69FDFB: mov     [ebx+58h], edx
0x69FDFE: mov     eax, [eax+8]
0x69FE01: lea     ecx, [esp+48h+var_30]
0x69FE05: push    ecx
0x69FE06: mov     ecx, ebp
0x69FE08: mov     [ebx+5Ch], eax
0x69FE0B: call    sub_4D7AF0
0x69FE10: mov     esi, eax
0x69FE12: push    1
0x69FE14: lea     edi, [ebx+30h]
0x69FE17: mov     ecx, 9
0x69FE1C: push    ebx
0x69FE1D: rep movsd
0x69FE1F: call    sub_897A20
0x69FE24: add     esp, 8
0x69FE27: push    offset dword_A7D0EC
0x69FE2C: mov     ecx, ebx
0x69FE2E: call    NiObjectNET_GetExtraData
0x69FE33: test    eax, eax
0x69FE35: jz      short loc_69FE55
0x69FE37: mov     edx, [eax+0Ch]
0x69FE3A: shr     edx, 4
0x69FE3D: test    dl, 1
0x69FE40: jz      short loc_69FE55
0x69FE42: mov     eax, [ebp+8]
0x69FE45: shr     eax, 7
0x69FE48: test    al, 1
0x69FE4A: jnz     short loc_69FE55
0x69FE4C: push    ebx
0x69FE4D: call    sub_4E26F0
0x69FE52: add     esp, 4
0x69FE55: push    offset off_A3CEB0
0x69FE5A: mov     ecx, ebx
0x69FE5C: call    NiObjectNET_GetExtraData
0x69FE61: push    eax
0x69FE62: push    offset dword_B35ACC
0x69FE67: call    NiRTTI_Cast
0x69FE6C: add     esp, 8
0x69FE6F: test    eax, eax
0x69FE71: jz      short loc_69FE78
0x69FE73: mov     [eax+0Ch], ebp
0x69FE76: jmp     short loc_69FEAE
0x69FE78: push    10h; Size
0x69FE7A: call    FormHeapAlloc
0x69FE7F: add     esp, 4
0x69FE82: mov     [esp+48h+var_34], eax
0x69FE86: test    eax, eax
0x69FE88: mov     [esp+48h+var_4], 0
0x69FE90: jz      short loc_69FE9C
0x69FE92: push    ebp
0x69FE93: mov     ecx, eax
0x69FE95: call    sub_4D67C0
0x69FE9A: jmp     short loc_69FE9E
0x69FE9C: xor     eax, eax
0x69FE9E: push    eax
0x69FE9F: mov     ecx, ebx
0x69FEA1: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x69FEA9: call    NiNode_AddNiExtraData
0x69FEAE: mov     ecx, ebp; int
0x69FEB0: call    sub_4E3490
0x69FEB5: mov     edx, [ebp+0]
0x69FEB8: mov     eax, [edx+0ECh]
0x69FEBE: mov     ecx, ebp
0x69FEC0: call    eax
0x69FEC2: fabs
0x69FEC4: mov     edx, [ebx]
0x69FEC6: fstp    [esp+48h+var_34]
0x69FECA: fld     [esp+48h+var_34]
0x69FECE: mov     eax, [edx+50h]
0x69FED1: mov     ecx, ebx
0x69FED3: fstp    dword ptr [ebx+60h]
0x69FED6: call    eax
0x69FED8: mov     eax, ebx
0x69FEDA: mov     ecx, [esp+48h+var_C]
0x69FEDE: mov     large fs:0, ecx
0x69FEE5: pop     ecx
0x69FEE6: pop     edi
0x69FEE7: pop     esi
0x69FEE8: pop     ebp
0x69FEE9: pop     ebx
0x69FEEA: add     esp, 34h
0x69FEED: retn
0x69FEEE: xor     eax, eax
0x69FEF0: mov     ecx, [esp+48h+var_C]
0x69FEF4: mov     large fs:0, ecx
0x69FEFB: pop     ecx
0x69FEFC: pop     edi
0x69FEFD: pop     esi
0x69FEFE: pop     ebp
0x69FEFF: pop     ebx
0x69FF00: add     esp, 34h
0x69FF03: retn
