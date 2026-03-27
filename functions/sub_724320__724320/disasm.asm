0x724320: fld     [esp+arg_0]
0x724324: push    esi
0x724325: mov     esi, ecx
0x724327: test    byte ptr [esi+0DCh], 1
0x72432E: fst     dword ptr [esi+0E4h]
0x724334: jz      loc_7243D0
0x72433A: movzx   eax, byte ptr [esi+18h]
0x72433E: add     dword ptr [esi+0E8h], 1
0x724345: shr     al, 3
0x724348: push    ebx
0x724349: lea     ebx, [esi+0E8h]
0x72434F: and     eax, 0FFFFFF01h
0x724354: push    eax; char
0x724355: push    ecx
0x724356: fstp    [esp+10h+var_10]; float
0x724359: call    sub_47C930
0x72435E: mov     edx, [esi]
0x724360: mov     eax, [edx+74h]
0x724363: mov     ecx, esi
0x724365: call    eax
0x724367: mov     eax, [esi+0E0h]
0x72436D: test    eax, eax
0x72436F: jl      short loc_7243CB
0x724371: mov     ecx, [esi+0B0h]
0x724377: push    edi
0x724378: mov     edi, [ecx+eax*4]
0x72437B: test    edi, edi
0x72437D: jz      short loc_7243CA
0x72437F: mov     dl, [edi+18h]
0x724382: shr     dl, 1
0x724384: test    dl, 1
0x724387: jz      short loc_72439A
0x724389: mov     eax, [edi]
0x72438B: fld     [esp+0Ch+arg_0]
0x72438F: mov     edx, [eax+68h]
0x724392: push    ecx
0x724393: mov     ecx, edi
0x724395: fstp    [esp+10h+var_10]
0x724398: call    edx
0x72439A: mov     eax, [esi+0E0h]
0x7243A0: push    ebx
0x7243A1: push    eax
0x7243A2: lea     ecx, [esi+0ECh]
0x7243A8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7243AD: mov     edx, [edi+20h]
0x7243B0: lea     eax, [edi+20h]
0x7243B3: lea     ecx, [esi+20h]
0x7243B6: mov     [ecx], edx
0x7243B8: mov     edx, [eax+4]
0x7243BB: mov     [ecx+4], edx
0x7243BE: mov     edx, [eax+8]
0x7243C1: mov     [ecx+8], edx
0x7243C4: mov     eax, [eax+0Ch]
0x7243C7: mov     [ecx+0Ch], eax
0x7243CA: pop     edi
0x7243CB: pop     ebx
0x7243CC: pop     esi
0x7243CD: retn    4
0x7243D0: push    ecx
0x7243D1: fstp    [esp+8+var_8]; float
0x7243D4: call    sub_70A280
0x7243D9: pop     esi
0x7243DA: retn    4
