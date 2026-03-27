0x77DD70: push    esi
0x77DD71: push    edi
0x77DD72: mov     edi, [esp+8+arg_0]
0x77DD76: cmp     dword ptr [edi+1Ch], 0
0x77DD7A: mov     esi, ecx
0x77DD7C: jnz     short loc_77DDAF
0x77DD7E: push    50h ; 'P'; Size
0x77DD80: call    FormHeapAlloc
0x77DD85: add     esp, 4
0x77DD88: test    eax, eax
0x77DD8A: jz      short loc_77DD95
0x77DD8C: mov     ecx, eax
0x77DD8E: call    NiGeometryBufferData__NiGeometryBufferData
0x77DD93: jmp     short loc_77DD97
0x77DD95: xor     eax, eax
0x77DD97: mov     dword ptr [eax+38h], 4
0x77DD9E: mov     [edi+1Ch], eax
0x77DDA1: push    eax
0x77DDA2: mov     ecx, esi
0x77DDA4: mov     dword ptr [eax], 1400000h
0x77DDAA: call    sub_782910
0x77DDAF: pop     edi
0x77DDB0: pop     esi
0x77DDB1: retn    4
