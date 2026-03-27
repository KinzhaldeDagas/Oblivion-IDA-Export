0x7BA0F0: push    0FFFFFFFFh
0x7BA0F2: push    offset SEH_7BA0F0
0x7BA0F7: mov     eax, large fs:0
0x7BA0FD: push    eax
0x7BA0FE: sub     esp, 14h
0x7BA101: push    esi
0x7BA102: push    edi
0x7BA103: mov     eax, ds:0B30AACh
0x7BA108: xor     eax, esp
0x7BA10A: push    eax
0x7BA10B: lea     eax, [esp+2Ch+var_C]
0x7BA10F: mov     large fs:0, eax
0x7BA115: cmp     byte ptr ds:0B42F31h, 0
0x7BA11C: jnz     loc_7BA2D8
0x7BA122: push    48h ; 'H'; Size
0x7BA124: call    FormHeapAlloc
0x7BA129: add     esp, 4
0x7BA12C: mov     [esp+2Ch+var_20], eax
0x7BA130: test    eax, eax
0x7BA132: mov     [esp+2Ch+var_4], 0
0x7BA13A: jz      short loc_7BA145
0x7BA13C: mov     ecx, eax
0x7BA13E: call    BSTextureManager_Create
0x7BA143: jmp     short loc_7BA147
0x7BA145: xor     eax, eax
0x7BA147: or      edi, 0FFFFFFFFh
0x7BA14A: push    1Ch; Size
0x7BA14C: mov     [esp+30h+var_4], edi
0x7BA150: mov     ds:0B42F50h, eax
0x7BA155: call    FormHeapAlloc
0x7BA15A: mov     esi, eax
0x7BA15C: add     esp, 4
0x7BA15F: mov     [esp+2Ch+var_20], esi
0x7BA163: test    esi, esi
0x7BA165: mov     [esp+2Ch+var_4], 1
0x7BA16D: jz      short loc_7BA17E
0x7BA16F: call    sub_7DAB80
0x7BA174: push    eax
0x7BA175: mov     ecx, esi
0x7BA177: call    sub_7DB050
0x7BA17C: jmp     short loc_7BA180
0x7BA17E: xor     eax, eax
0x7BA180: mov     ds:0B430B8h, eax
0x7BA185: mov     ecx, [eax]
0x7BA187: push    ecx
0x7BA188: mov     ecx, eax
0x7BA18A: mov     [esp+30h+var_4], edi
0x7BA18E: call    sub_7DACA0
0x7BA193: mov     ecx, ds:0B430B8h
0x7BA199: cmp     dword ptr [ecx+4], 0
0x7BA19D: jnz     short loc_7BA1B9
0x7BA19F: mov     esi, ecx
0x7BA1A1: call    sub_7DB010
0x7BA1A6: push    esi
0x7BA1A7: call    FormHeapFree
0x7BA1AC: add     esp, 4
0x7BA1AF: mov     dword ptr ds:0B430B8h, 0
0x7BA1B9: call    InitBSShaderAccumulator
0x7BA1BE: mov     esi, ds:0B430FCh
0x7BA1C4: mov     edi, eax
0x7BA1C6: cmp     esi, edi
0x7BA1C8: jz      short loc_7BA1FE
0x7BA1CA: test    esi, esi
0x7BA1CC: jz      short loc_7BA1EA
0x7BA1CE: lea     edx, [esi+4]
0x7BA1D1: push    edx; lpAddend
0x7BA1D2: call    dword ptr ds:0A2807Ch
0x7BA1D8: test    eax, eax
0x7BA1DA: jnz     short loc_7BA1EA
0x7BA1DC: test    esi, esi
0x7BA1DE: jz      short loc_7BA1EA
0x7BA1E0: mov     eax, [esi]
0x7BA1E2: mov     edx, [eax]
0x7BA1E4: push    1
0x7BA1E6: mov     ecx, esi
0x7BA1E8: call    edx
0x7BA1EA: test    edi, edi
0x7BA1EC: mov     ds:0B430FCh, edi
0x7BA1F2: jz      short loc_7BA1FE
0x7BA1F4: add     edi, 4
0x7BA1F7: push    edi; lpAddend
0x7BA1F8: call    dword ptr ds:0A28078h
0x7BA1FE: push    1
0x7BA200: call    sub_7AB1D0
0x7BA205: add     esp, 4
0x7BA208: call    sub_7B8990
0x7BA20D: fld     dword ptr ds:0A3D65Ch
0x7BA213: cmp     dword ptr ds:0B43104h, 0
0x7BA21A: fst     [esp+2Ch+var_1C]
0x7BA21E: mov     eax, [esp+2Ch+var_1C]
0x7BA222: fst     [esp+2Ch+var_18]
0x7BA226: mov     ecx, [esp+2Ch+var_18]
0x7BA22A: fstp    [esp+2Ch+var_14]
0x7BA22E: fld1
0x7BA230: mov     edx, [esp+2Ch+var_14]
0x7BA234: fstp    [esp+2Ch+var_10]
0x7BA238: mov     ds:0B4616Ch, eax
0x7BA23D: mov     eax, [esp+2Ch+var_10]
0x7BA241: mov     ds:0B46170h, ecx
0x7BA247: mov     ds:0B46174h, edx
0x7BA24D: mov     ds:0B46178h, eax
0x7BA252: jz      short loc_7BA2D1
0x7BA254: mov     esi, 1
0x7BA259: lea     esp, [esp+0]
0x7BA260: push    esi; a1
0x7BA261: call    GetShaderDefinition
0x7BA266: add     esi, 1
0x7BA269: add     esp, 4
0x7BA26C: cmp     esi, 1Ch
0x7BA26F: jl      short loc_7BA260
0x7BA271: mov     ecx, ds:0B430B8h
0x7BA277: test    ecx, ecx
0x7BA279: jz      short loc_7BA295
0x7BA27B: mov     esi, ecx
0x7BA27D: call    sub_7DB010
0x7BA282: push    esi
0x7BA283: call    FormHeapFree
0x7BA288: add     esp, 4
0x7BA28B: mov     dword ptr ds:0B430B8h, 0
0x7BA295: cmp     dword ptr ds:0B43104h, 0
0x7BA29C: jz      short loc_7BA2D1
0x7BA29E: cmp     byte ptr ds:0B42F3Eh, 0
0x7BA2A5: jz      short loc_7BA2D1
0x7BA2A7: push    1Ch; Size
0x7BA2A9: call    FormHeapAlloc
0x7BA2AE: add     esp, 4
0x7BA2B1: mov     [esp+2Ch+var_20], eax
0x7BA2B5: test    eax, eax
0x7BA2B7: mov     [esp+2Ch+var_4], 2
0x7BA2BF: jz      short loc_7BA2CA
0x7BA2C1: mov     ecx, eax
0x7BA2C3: call    ImageSpaceshaderList__Create; Treat this list as a de facto subclass of a standard NiTPointerList as this is bigger of 3 UInt32
0x7BA2C8: jmp     short loc_7BA2CC
0x7BA2CA: xor     eax, eax
0x7BA2CC: mov     ds:0B42D7Ch, eax
0x7BA2D1: mov     byte ptr ds:0B42F31h, 1
0x7BA2D8: mov     ecx, dword ptr [esp+2Ch+var_C]
0x7BA2DC: mov     large fs:0, ecx
0x7BA2E3: pop     ecx
0x7BA2E4: pop     edi
0x7BA2E5: pop     esi
0x7BA2E6: add     esp, 20h
0x7BA2E9: retn
