0x74EA30: push    ecx
0x74EA31: push    ebx
0x74EA32: push    esi
0x74EA33: push    edi
0x74EA34: mov     ebx, ecx
0x74EA36: call    sub_749310
0x74EA3B: mov     edx, [ebx+0B4h]
0x74EA41: mov     edi, [edx+68h]
0x74EA44: add     edi, 30h ; '0'
0x74EA47: lea     esi, [ebx+64h]
0x74EA4A: mov     ecx, 9
0x74EA4F: rep movsd
0x74EA51: mov     eax, [edx+68h]
0x74EA54: mov     ecx, [ebx+88h]
0x74EA5A: mov     [eax+54h], ecx
0x74EA5D: mov     ecx, [ebx+8Ch]
0x74EA63: add     eax, 54h ; 'T'
0x74EA66: mov     [eax+4], ecx
0x74EA69: mov     ecx, [ebx+90h]
0x74EA6F: mov     [eax+8], ecx
0x74EA72: mov     ecx, [edx+68h]
0x74EA75: fld     dword ptr [ebx+94h]
0x74EA7B: mov     edx, [ecx]
0x74EA7D: mov     eax, [edx+74h]
0x74EA80: fabs
0x74EA82: fstp    [esp+10h+var_4]
0x74EA86: pop     edi
0x74EA87: fld     [esp+0Ch+var_4]
0x74EA8B: pop     esi
0x74EA8C: fstp    dword ptr [ecx+60h]
0x74EA8F: pop     ebx
0x74EA90: add     esp, 4
0x74EA93: jmp     eax
