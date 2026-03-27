0x58B040: push    0FFFFFFFFh
0x58B042: push    offset SEH_690310
0x58B047: mov     eax, large fs:0
0x58B04D: push    eax
0x58B04E: push    ecx
0x58B04F: push    ebx
0x58B050: push    ebp
0x58B051: push    esi
0x58B052: push    edi
0x58B053: mov     eax, ds:0B30AACh
0x58B058: xor     eax, esp
0x58B05A: push    eax
0x58B05B: lea     eax, [esp+24h+var_C]
0x58B05F: mov     large fs:0, eax
0x58B065: mov     ebx, [esp+24h+a2]
0x58B069: mov     al, [ebx]
0x58B06B: cmp     al, 26h ; '&'
0x58B06D: jnz     loc_58B10A
0x58B073: mov     eax, 1Bh
0x58B078: shl     eax, 4
0x58B07B: mov     esi, ds:dword_B3B0B4[eax]
0x58B081: test    esi, esi
0x58B083: jz      short loc_58B0AB
0x58B085: mov     edi, [esi+8]
0x58B088: lea     eax, [esi+8]
0x58B08B: mov     eax, [edi+8]
0x58B08E: cmp     byte ptr [eax], 0
0x58B091: mov     esi, [esi]
0x58B093: jz      short loc_58B0A7
0x58B095: push    ebx; unsigned __int8 *
0x58B096: push    eax; unsigned __int8 *
0x58B097: call    __mbsicmp
0x58B09C: add     esp, 8
0x58B09F: test    eax, eax
0x58B0A1: jz      loc_58B18D
0x58B0A7: test    esi, esi
0x58B0A9: jnz     short loc_58B085
0x58B0AB: mov     ebp, [esp+24h+arg_4]
0x58B0AF: cmp     ebp, 0FFFFFFFFh
0x58B0B2: jnz     short loc_58B0C1
0x58B0B4: movzx   ebp, word ptr ds:0B13BCEh
0x58B0BB: add     ebp, 2710h
0x58B0C1: push    10h; Size
0x58B0C3: call    FormHeapAlloc
0x58B0C8: mov     esi, eax
0x58B0CA: add     esp, 4
0x58B0CD: mov     [esp+24h+a2], esi
0x58B0D1: xor     edx, edx
0x58B0D3: cmp     esi, edx
0x58B0D5: mov     [esp+24h+var_4], edx
0x58B0D9: jz      loc_58B1A7
0x58B0DF: sub     esp, 8
0x58B0E2: mov     ecx, esp; this
0x58B0E4: mov     [esp+2Ch+var_10], esp
0x58B0E8: push    edx; a3
0x58B0E9: push    ebx; a2
0x58B0EA: mov     [ecx], edx
0x58B0EC: mov     [ecx+4], dx
0x58B0F0: mov     [ecx+6], dx
0x58B0F4: call    BSStringT_Set
0x58B0F9: push    ebp
0x58B0FA: mov     ecx, esi
0x58B0FC: call    sub_589F20
0x58B101: mov     edi, eax
0x58B103: xor     edx, edx
0x58B105: jmp     loc_58B1A9
0x58B10A: cmp     al, 5Fh ; '_'
0x58B10C: jz      short loc_58B130
0x58B10E: movsx   eax, al
0x58B111: sub     eax, 40h ; '@'
0x58B114: cmp     eax, 20h ; ' '
0x58B117: jle     short loc_58B11C
0x58B119: sub     eax, 20h ; ' '
0x58B11C: test    eax, eax
0x58B11E: jl      short loc_58B129
0x58B120: cmp     eax, 1Ah
0x58B123: jle     loc_58B078
0x58B129: xor     eax, eax
0x58B12B: jmp     loc_58B078
0x58B130: xor     edi, edi
0x58B132: cmp     ds:0B13BCEh, di
0x58B139: jbe     loc_58B0AB
0x58B13F: nop
0x58B140: mov     eax, ds:0B13BC8h
0x58B145: mov     esi, [eax+edi*4]
0x58B148: mov     ecx, [esi+8]
0x58B14B: cmp     byte ptr [ecx], 0
0x58B14E: jz      short loc_58B160
0x58B150: mov     eax, ecx
0x58B152: push    ebx; unsigned __int8 *
0x58B153: push    eax; unsigned __int8 *
0x58B154: call    __mbsicmp
0x58B159: add     esp, 8
0x58B15C: test    eax, eax
0x58B15E: jz      short loc_58B173
0x58B160: movzx   edx, word ptr ds:0B13BCEh
0x58B167: add     edi, 1
0x58B16A: cmp     edi, edx
0x58B16C: jb      short loc_58B140
0x58B16E: jmp     loc_58B0AB
0x58B173: add     dword ptr [esi+4], 1
0x58B177: mov     eax, [esi]
0x58B179: mov     ecx, [esp+24h+var_C]
0x58B17D: mov     large fs:0, ecx
0x58B184: pop     ecx
0x58B185: pop     edi
0x58B186: pop     esi
0x58B187: pop     ebp
0x58B188: pop     ebx
0x58B189: add     esp, 10h
0x58B18C: retn
0x58B18D: add     dword ptr [edi+4], 1
0x58B191: mov     eax, [edi]
0x58B193: mov     ecx, [esp+24h+var_C]
0x58B197: mov     large fs:0, ecx
0x58B19E: pop     ecx
0x58B19F: pop     edi
0x58B1A0: pop     esi
0x58B1A1: pop     ebp
0x58B1A2: pop     ebx
0x58B1A3: add     esp, 10h
0x58B1A6: retn
0x58B1A7: xor     edi, edi
0x58B1A9: mov     [edi+4], edx
0x58B1AC: movzx   esi, word ptr ds:0B13BCEh
0x58B1B3: movzx   ecx, word ptr ds:0B13BCCh
0x58B1BA: cmp     esi, ecx
0x58B1BC: mov     [esp+24h+var_4], 0FFFFFFFFh
0x58B1C4: jb      short loc_58B1DC
0x58B1C6: movzx   edx, word ptr ds:0B13BD2h
0x58B1CD: add     edx, esi
0x58B1CF: push    edx
0x58B1D0: mov     ecx, offset off_B13BC4
0x58B1D5: call    NiTArray_SetSize
0x58B1DA: xor     edx, edx
0x58B1DC: movzx   eax, word ptr ds:0B13BCEh
0x58B1E3: cmp     esi, eax
0x58B1E5: mov     eax, ds:0B13BC8h
0x58B1EA: jb      short loc_58B1F8
0x58B1EC: lea     ecx, [esi+1]
0x58B1EF: mov     ds:0B13BCEh, cx
0x58B1F6: jmp     short loc_58B1FD
0x58B1F8: cmp     [eax+esi*4], edx
0x58B1FB: jnz     short loc_58B205
0x58B1FD: add     word ptr ds:0B13BD0h, 1
0x58B205: mov     [eax+esi*4], edi
0x58B208: mov     eax, ebp
0x58B20A: mov     ecx, [esp+24h+var_C]
0x58B20E: mov     large fs:0, ecx
0x58B215: pop     ecx
0x58B216: pop     edi
0x58B217: pop     esi
0x58B218: pop     ebp
0x58B219: pop     ebx
0x58B21A: add     esp, 10h
0x58B21D: retn
