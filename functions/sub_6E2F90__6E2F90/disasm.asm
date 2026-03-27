0x6E2F90: push    0FFFFFFFFh
0x6E2F92: push    offset SEH_8C8900
0x6E2F97: mov     eax, large fs:0
0x6E2F9D: push    eax
0x6E2F9E: push    ecx
0x6E2F9F: mov     eax, ds:0B30AACh
0x6E2FA4: xor     eax, esp
0x6E2FA6: push    eax
0x6E2FA7: lea     eax, [esp+14h+var_C]
0x6E2FAB: mov     large fs:0, eax
0x6E2FB1: push    34h ; '4'; Size
0x6E2FB3: call    FormHeapAlloc
0x6E2FB8: add     esp, 4
0x6E2FBB: mov     [esp+14h+var_10], eax
0x6E2FBF: test    eax, eax
0x6E2FC1: mov     [esp+14h+var_4], 0
0x6E2FC9: jz      short loc_6E2FF6
0x6E2FCB: mov     ecx, [esp+14h+arg_10]
0x6E2FCF: fld     [esp+14h+arg_C]
0x6E2FD3: mov     edx, dword ptr [esp+14h+arg_4]
0x6E2FD7: push    ecx; int
0x6E2FD8: push    ecx
0x6E2FD9: fstp    [esp+1Ch+var_1C]; float
0x6E2FDC: push    edx; char
0x6E2FDD: mov     ecx, eax
0x6E2FDF: call    sub_6D2480
0x6E2FE4: mov     ecx, [esp+14h+var_C]
0x6E2FE8: mov     large fs:0, ecx
0x6E2FEF: pop     ecx
0x6E2FF0: add     esp, 10h
0x6E2FF3: retn    14h
0x6E2FF6: xor     eax, eax
0x6E2FF8: mov     ecx, [esp+14h+var_C]
0x6E2FFC: mov     large fs:0, ecx
0x6E3003: pop     ecx
0x6E3004: add     esp, 10h
0x6E3007: retn    14h
