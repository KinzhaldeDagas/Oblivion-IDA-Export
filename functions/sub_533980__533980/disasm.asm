0x533980: push    0FFFFFFFFh
0x533982: push    offset SEH_533980
0x533987: mov     eax, large fs:0
0x53398D: push    eax
0x53398E: push    ecx
0x53398F: push    esi
0x533990: push    edi
0x533991: mov     eax, ds:0B30AACh
0x533996: xor     eax, esp
0x533998: push    eax
0x533999: lea     eax, [esp+1Ch+var_C]
0x53399D: mov     large fs:0, eax
0x5339A3: mov     edi, ecx
0x5339A5: mov     [esp+1Ch+var_10], edi
0x5339A9: mov     esi, [edi+1A0h]
0x5339AF: test    esi, esi
0x5339B1: mov     [esp+1Ch+var_4], 0
0x5339B9: jz      short loc_5339D7
0x5339BB: lea     eax, [esi+4]
0x5339BE: push    eax; lpAddend
0x5339BF: call    dword ptr ds:0A2807Ch
0x5339C5: test    eax, eax
0x5339C7: jnz     short loc_5339D7
0x5339C9: test    esi, esi
0x5339CB: jz      short loc_5339D7
0x5339CD: mov     edx, [esi]
0x5339CF: mov     eax, [edx]
0x5339D1: push    1
0x5339D3: mov     ecx, esi
0x5339D5: call    eax
0x5339D7: mov     ecx, edi; this
0x5339D9: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5339E1: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x5339E6: mov     ecx, dword ptr [esp+1Ch+var_C]
0x5339EA: mov     large fs:0, ecx
0x5339F1: pop     ecx
0x5339F2: pop     edi
0x5339F3: pop     esi
0x5339F4: add     esp, 10h
0x5339F7: retn
