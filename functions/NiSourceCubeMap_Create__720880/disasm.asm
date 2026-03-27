0x720880: push    0FFFFFFFFh
0x720882: push    offset SEH_8C62B0
0x720887: mov     eax, large fs:0
0x72088D: push    eax
0x72088E: push    ecx
0x72088F: push    esi
0x720890: mov     eax, ds:0B30AACh
0x720895: xor     eax, esp
0x720897: push    eax
0x720898: lea     eax, [esp+18h+var_C]
0x72089C: mov     large fs:0, eax
0x7208A2: push    4Ch ; 'L'; Size
0x7208A4: call    FormHeapAlloc
0x7208A9: mov     esi, eax
0x7208AB: add     esp, 4
0x7208AE: mov     [esp+18h+var_10], esi
0x7208B2: test    esi, esi
0x7208B4: mov     [esp+18h+var_4], 0
0x7208BC: jz      short loc_7208E5
0x7208BE: mov     ecx, esi; this
0x7208C0: call    ??0NiSourceTexture@@QAE@XZ; NiSourceTexture::NiSourceTexture(void)
0x7208C5: mov     dword ptr [esi], offset NiSourceCubeMap__VTBL
0x7208CB: mov     dword ptr [esi+48h], 0
0x7208D2: mov     eax, esi
0x7208D4: mov     ecx, [esp+18h+var_C]
0x7208D8: mov     large fs:0, ecx
0x7208DF: pop     ecx
0x7208E0: pop     esi
0x7208E1: add     esp, 10h
0x7208E4: retn
0x7208E5: xor     eax, eax
0x7208E7: mov     ecx, [esp+18h+var_C]
0x7208EB: mov     large fs:0, ecx
0x7208F2: pop     ecx
0x7208F3: pop     esi
0x7208F4: add     esp, 10h
0x7208F7: retn
