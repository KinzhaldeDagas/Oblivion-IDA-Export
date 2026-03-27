0x46B370: sub     esp, 40h
0x46B373: push    edi
0x46B374: mov     edi, ds:0B33C14h
0x46B37A: xor     eax, eax
0x46B37C: cmp     edi, eax
0x46B37E: jz      loc_46B4B8
0x46B384: mov     ecx, ds:0B33C18h
0x46B38A: cmp     ecx, 14h
0x46B38D: jbe     loc_46B4B8
0x46B393: test    dword ptr [edi+8], 40000h
0x46B39A: jnz     loc_46B4B8
0x46B3A0: push    ebx; ArgList
0x46B3A1: push    38h ; '8'
0x46B3A3: push    offset a1_2_1; "1.2.1"
0x46B3A8: lea     ebx, [ecx-14h]
0x46B3AB: lea     edx, [esp+50h+var_38]
0x46B3AF: lea     ecx, [edi+14h]
0x46B3B2: push    0FFFFFFFFh
0x46B3B4: push    edx
0x46B3B5: mov     [esp+58h+var_3C], ebx
0x46B3B9: mov     [esp+58h+Size], ecx
0x46B3BD: mov     [esp+58h+var_18], eax
0x46B3C1: mov     [esp+58h+var_14], eax
0x46B3C5: mov     [esp+58h+var_10], eax
0x46B3C9: call    sub_744FB0
0x46B3CE: add     esp, 10h
0x46B3D1: test    eax, eax
0x46B3D3: jz      short loc_46B3E8
0x46B3D5: push    offset aErrorInitial_0; "Error initializing ZLib stream for defl"...
0x46B3DA: call    PrintError
0x46B3DF: add     esp, 4
0x46B3E2: pop     ebx
0x46B3E3: pop     edi
0x46B3E4: add     esp, 40h
0x46B3E7: retn
0x46B3E8: push    ebp
0x46B3E9: push    esi; ArgList
0x46B3EA: lea     esi, [ebx+ebx]
0x46B3ED: push    esi; Size
0x46B3EE: call    FormHeapAlloc
0x46B3F3: mov     ebp, eax
0x46B3F5: mov     eax, [esp+54h+Size]
0x46B3F9: lea     ecx, [esp+54h+var_38]
0x46B3FD: push    4
0x46B3FF: push    ecx
0x46B400: mov     [esp+5Ch+var_34], ebx
0x46B404: mov     [esp+5Ch+var_38], eax
0x46B408: mov     [esp+5Ch+var_28], esi
0x46B40C: mov     [esp+5Ch+var_2C], ebp
0x46B410: call    sub_743A40
0x46B415: add     esp, 0Ch
0x46B418: cmp     eax, 0FFFFFFFEh
0x46B41B: jnz     short loc_46B438
0x46B41D: push    offset aErrorDeflating; "Error deflating ZLib stream."
0x46B422: call    PrintError
0x46B427: push    ebp
0x46B428: call    FormHeapFree
0x46B42D: add     esp, 8
0x46B430: pop     esi
0x46B431: pop     ebp
0x46B432: pop     ebx
0x46B433: pop     edi
0x46B434: add     esp, 40h
0x46B437: retn
0x46B438: sub     esi, [esp+50h+var_28]
0x46B43C: lea     ebx, [esi+18h]
0x46B43F: push    ebx; Size
0x46B440: mov     [esp+54h+Size], esi
0x46B444: call    FormHeapAlloc
0x46B449: or      dword ptr [edi+8], 40000h
0x46B450: mov     esi, eax
0x46B452: lea     edx, [ebx-14h]
0x46B455: mov     [edi+4], edx
0x46B458: mov     eax, [edi]
0x46B45A: mov     [esi], eax
0x46B45C: mov     ecx, [edi+4]
0x46B45F: mov     [esi+4], ecx
0x46B462: mov     edx, [edi+8]
0x46B465: mov     [esi+8], edx
0x46B468: mov     eax, [edi+0Ch]
0x46B46B: mov     edx, [esp+54h+var_3C]
0x46B46F: mov     [esi+0Ch], eax
0x46B472: mov     ecx, [edi+10h]
0x46B475: mov     eax, [esp+54h+Size]
0x46B479: push    eax; Size
0x46B47A: mov     [esi+10h], ecx
0x46B47D: lea     ecx, [esi+18h]
0x46B480: push    ebp; Src
0x46B481: push    ecx; Dst
0x46B482: mov     [esi+14h], edx
0x46B485: call    _memcpy
0x46B48A: mov     edx, ds:0B33C14h
0x46B490: push    edx
0x46B491: call    FormHeapFree
0x46B496: lea     eax, [esp+64h+var_38]
0x46B49A: push    eax
0x46B49B: mov     ds:0B33C14h, esi
0x46B4A1: mov     ds:0B33C18h, ebx
0x46B4A7: call    sub_743E50
0x46B4AC: push    ebp
0x46B4AD: call    FormHeapFree
0x46B4B2: add     esp, 1Ch
0x46B4B5: pop     esi
0x46B4B6: pop     ebp
0x46B4B7: pop     ebx
0x46B4B8: pop     edi
0x46B4B9: add     esp, 40h
0x46B4BC: retn
