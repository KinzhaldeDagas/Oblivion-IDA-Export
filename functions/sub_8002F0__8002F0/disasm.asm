0x8002F0: push    0FFFFFFFFh
0x8002F2: push    offset SEH_803C90
0x8002F7: mov     eax, large fs:0
0x8002FD: push    eax
0x8002FE: push    ecx
0x8002FF: push    esi
0x800300: push    edi
0x800301: mov     eax, ds:0B30AACh
0x800306: xor     eax, esp
0x800308: push    eax
0x800309: lea     eax, [esp+1Ch+var_C]
0x80030D: mov     large fs:0, eax
0x800313: mov     edi, ecx
0x800315: cmp     dword ptr [edi+30h], 0
0x800319: lea     esi, [edi+30h]
0x80031C: jnz     loc_8003B1
0x800322: push    34h ; '4'; Size
0x800324: call    FormHeapAlloc
0x800329: add     esp, 4
0x80032C: mov     [esp+1Ch+var_10], eax
0x800330: test    eax, eax
0x800332: mov     [esp+1Ch+var_4], 0
0x80033A: jz      short loc_800349
0x80033C: mov     ecx, [edi+14h]
0x80033F: push    ecx
0x800340: mov     ecx, eax
0x800342: call    NiD3DShaderCostantMapVertex__Construct
0x800347: jmp     short loc_80034B
0x800349: xor     eax, eax
0x80034B: push    eax; a2
0x80034C: mov     ecx, esi; this
0x80034E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x800356: call    NiSmartPointer_Set??
0x80035B: mov     ecx, [esi]
0x80035D: mov     edx, [ecx]
0x80035F: mov     edx, [edx+18h]
0x800362: push    0
0x800364: lea     eax, [edi+0A4h]
0x80036A: push    eax
0x80036B: push    4
0x80036D: push    10h
0x80036F: push    offset EmptyString
0x800374: push    1
0x800376: push    6
0x800378: push    0
0x80037A: push    10000007h
0x80037F: push    offset aTexratio0; "texRatio0"
0x800384: call    edx
0x800386: mov     ecx, [esi]
0x800388: mov     eax, [ecx]
0x80038A: mov     eax, [eax+18h]
0x80038D: push    0
0x80038F: lea     edx, [edi+0B4h]
0x800395: push    edx
0x800396: push    4
0x800398: push    10h
0x80039A: push    offset EmptyString
0x80039F: push    1
0x8003A1: push    7
0x8003A3: push    0
0x8003A5: push    10000007h
0x8003AA: push    offset aTexratio1; "texRatio1"
0x8003AF: call    eax
0x8003B1: cmp     dword ptr [edi+2Ch], 0
0x8003B5: lea     esi, [edi+2Ch]
0x8003B8: jnz     short loc_80041C
0x8003BA: push    34h ; '4'; Size
0x8003BC: call    FormHeapAlloc
0x8003C1: add     esp, 4
0x8003C4: mov     [esp+1Ch+var_10], eax
0x8003C8: test    eax, eax
0x8003CA: mov     [esp+1Ch+var_4], 1
0x8003D2: jz      short loc_8003E1
0x8003D4: mov     ecx, [edi+14h]
0x8003D7: push    ecx
0x8003D8: mov     ecx, eax
0x8003DA: call    NiD3DShaderCostantMapPixel__Construct
0x8003DF: jmp     short loc_8003E3
0x8003E1: xor     eax, eax
0x8003E3: push    eax; a2
0x8003E4: mov     ecx, esi; this
0x8003E6: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8003EE: call    NiSmartPointer_Set??
0x8003F3: mov     ecx, [esi]
0x8003F5: mov     edx, [ecx]
0x8003F7: mov     eax, [edx+18h]
0x8003FA: push    0
0x8003FC: push    offset dword_B46498
0x800401: push    4
0x800403: push    10h
0x800405: push    offset EmptyString
0x80040A: push    1
0x80040C: push    1
0x80040E: push    0
0x800410: push    10000007h
0x800415: push    offset aAmbientColor; "Ambient Color"
0x80041A: call    eax
0x80041C: mov     ecx, [esp+1Ch+a2]
0x800420: push    ecx; a2
0x800421: mov     ecx, edi; this
0x800423: call    sub_77AA60
0x800428: mov     ecx, dword ptr [esp+1Ch+var_C]
0x80042C: mov     large fs:0, ecx
0x800433: pop     ecx
0x800434: pop     edi
0x800435: pop     esi
0x800436: add     esp, 10h
0x800439: retn    4
