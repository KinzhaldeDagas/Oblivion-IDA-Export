0x642A70: push    0FFFFFFFFh
0x642A72: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x642A77: mov     eax, large fs:0
0x642A7D: push    eax
0x642A7E: push    ecx
0x642A7F: push    ebx
0x642A80: push    esi
0x642A81: push    edi
0x642A82: mov     eax, ds:0B30AACh
0x642A87: xor     eax, esp
0x642A89: push    eax
0x642A8A: lea     eax, [esp+20h+var_C]
0x642A8E: mov     large fs:0, eax
0x642A94: mov     edi, ecx
0x642A96: push    38h ; '8'; Size
0x642A98: call    FormHeapAlloc
0x642A9D: add     esp, 4
0x642AA0: mov     [esp+20h+var_10], eax
0x642AA4: test    eax, eax
0x642AA6: mov     ebx, [esp+20h+arg_0]
0x642AAA: mov     [esp+20h+var_4], 0
0x642AB2: jz      short loc_642AC6
0x642AB4: mov     ecx, [esp+20h+arg_4]
0x642AB8: push    ecx
0x642AB9: push    ebx
0x642ABA: push    edi
0x642ABB: mov     ecx, eax
0x642ABD: call    sub_6428F0
0x642AC2: mov     esi, eax
0x642AC4: jmp     short loc_642AC8
0x642AC6: xor     esi, esi
0x642AC8: test    esi, esi
0x642ACA: push    0
0x642ACC: push    ecx
0x642ACD: mov     eax, esp
0x642ACF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x642AD7: mov     [esp+28h+arg_0], esp
0x642ADB: mov     [eax], esi
0x642ADD: jz      short loc_642AE9
0x642ADF: lea     edx, [esi+8]
0x642AE2: push    edx; lpAddend
0x642AE3: call    dword ptr ds:0A28078h
0x642AE9: mov     eax, [edi]
0x642AEB: mov     edx, [eax+0Ch]
0x642AEE: push    ebx
0x642AEF: mov     ecx, edi
0x642AF1: call    edx
0x642AF3: mov     ecx, [ebx+58h]
0x642AF6: mov     eax, [ecx]
0x642AF8: mov     edx, [eax+258h]
0x642AFE: push    0
0x642B00: call    edx
0x642B02: mov     ecx, ds:0B33A10h
0x642B08: mov     eax, [ecx]
0x642B0A: mov     edx, [eax+3Ch]
0x642B0D: push    esi
0x642B0E: call    edx
0x642B10: mov     ecx, dword ptr [esp+20h+var_C]
0x642B14: mov     large fs:0, ecx
0x642B1B: pop     ecx
0x642B1C: pop     edi
0x642B1D: pop     esi
0x642B1E: pop     ebx
0x642B1F: add     esp, 10h
0x642B22: retn    8
