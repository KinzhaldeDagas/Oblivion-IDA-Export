0x6EAC40: push    0FFFFFFFFh
0x6EAC42: push    offset SEH_8C8970
0x6EAC47: mov     eax, large fs:0
0x6EAC4D: push    eax
0x6EAC4E: push    ecx
0x6EAC4F: push    esi
0x6EAC50: push    edi
0x6EAC51: mov     eax, ds:0B30AACh
0x6EAC56: xor     eax, esp
0x6EAC58: push    eax
0x6EAC59: lea     eax, [esp+1Ch+var_C]
0x6EAC5D: mov     large fs:0, eax
0x6EAC63: mov     edi, ecx
0x6EAC65: push    40h ; '@'; Size
0x6EAC67: call    FormHeapAlloc
0x6EAC6C: mov     esi, eax
0x6EAC6E: add     esp, 4
0x6EAC71: mov     [esp+1Ch+var_10], esi
0x6EAC75: test    esi, esi
0x6EAC77: mov     [esp+1Ch+var_4], 0
0x6EAC7F: jz      short loc_6EACAE
0x6EAC81: mov     ecx, esi
0x6EAC83: call    sub_6CC4E0
0x6EAC88: mov     dword ptr [esi], offset ??_7NiBlendPoint3Interpolator@@6B@; const NiBlendPoint3Interpolator::`vftable'
0x6EAC8E: mov     eax, ds:0B24FC8h
0x6EAC93: mov     [esi+30h], eax
0x6EAC96: mov     ecx, ds:0B24FCCh
0x6EAC9C: mov     [esi+34h], ecx
0x6EAC9F: mov     edx, ds:0B24FD0h
0x6EACA5: mov     [esi+38h], edx
0x6EACA8: mov     byte ptr [esi+3Ch], 0
0x6EACAC: jmp     short loc_6EACB0
0x6EACAE: xor     esi, esi
0x6EACB0: mov     eax, [esp+1Ch+arg_0]
0x6EACB4: push    eax
0x6EACB5: push    esi
0x6EACB6: mov     ecx, edi
0x6EACB8: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6EACC0: call    sub_6CD3D0
0x6EACC5: mov     ecx, [edi+30h]
0x6EACC8: mov     [esi+30h], ecx
0x6EACCB: mov     edx, [edi+34h]
0x6EACCE: mov     [esi+34h], edx
0x6EACD1: mov     eax, [edi+38h]
0x6EACD4: mov     [esi+38h], eax
0x6EACD7: mov     cl, [edi+3Ch]
0x6EACDA: mov     [esi+3Ch], cl
0x6EACDD: mov     eax, esi
0x6EACDF: mov     ecx, [esp+1Ch+var_C]
0x6EACE3: mov     large fs:0, ecx
0x6EACEA: pop     ecx
0x6EACEB: pop     edi
0x6EACEC: pop     esi
0x6EACED: add     esp, 10h
0x6EACF0: retn    4
