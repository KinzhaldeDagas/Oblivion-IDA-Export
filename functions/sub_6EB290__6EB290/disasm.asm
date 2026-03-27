0x6EB290: push    0FFFFFFFFh
0x6EB292: push    offset SEH_8C8970
0x6EB297: mov     eax, large fs:0
0x6EB29D: push    eax
0x6EB29E: push    ecx
0x6EB29F: push    esi
0x6EB2A0: push    edi
0x6EB2A1: mov     eax, ds:0B30AACh
0x6EB2A6: xor     eax, esp
0x6EB2A8: push    eax
0x6EB2A9: lea     eax, [esp+1Ch+var_C]
0x6EB2AD: mov     large fs:0, eax
0x6EB2B3: mov     edi, ecx
0x6EB2B5: push    44h ; 'D'; Size
0x6EB2B7: call    FormHeapAlloc
0x6EB2BC: mov     esi, eax
0x6EB2BE: add     esp, 4
0x6EB2C1: mov     [esp+1Ch+var_10], esi
0x6EB2C5: test    esi, esi
0x6EB2C7: mov     [esp+1Ch+var_4], 0
0x6EB2CF: jz      short loc_6EB306
0x6EB2D1: mov     ecx, esi
0x6EB2D3: call    sub_6CC4E0
0x6EB2D8: mov     dword ptr [esi], offset ??_7NiBlendColorInterpolator@@6B@; const NiBlendColorInterpolator::`vftable'
0x6EB2DE: mov     eax, ds:0B24FD4h
0x6EB2E3: mov     [esi+30h], eax
0x6EB2E6: mov     ecx, ds:0B24FD8h
0x6EB2EC: mov     [esi+34h], ecx
0x6EB2EF: mov     edx, ds:0B24FDCh
0x6EB2F5: mov     [esi+38h], edx
0x6EB2F8: mov     eax, ds:0B24FE0h
0x6EB2FD: mov     [esi+3Ch], eax
0x6EB300: mov     byte ptr [esi+40h], 0
0x6EB304: jmp     short loc_6EB308
0x6EB306: xor     esi, esi
0x6EB308: mov     ecx, [esp+1Ch+arg_0]
0x6EB30C: push    ecx
0x6EB30D: push    esi
0x6EB30E: mov     ecx, edi
0x6EB310: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6EB318: call    sub_6CD3D0
0x6EB31D: mov     edx, [edi+30h]
0x6EB320: mov     [esi+30h], edx
0x6EB323: mov     eax, [edi+34h]
0x6EB326: mov     [esi+34h], eax
0x6EB329: mov     ecx, [edi+38h]
0x6EB32C: mov     [esi+38h], ecx
0x6EB32F: mov     edx, [edi+3Ch]
0x6EB332: mov     [esi+3Ch], edx
0x6EB335: mov     al, [edi+40h]
0x6EB338: mov     [esi+40h], al
0x6EB33B: mov     eax, esi
0x6EB33D: mov     ecx, [esp+1Ch+var_C]
0x6EB341: mov     large fs:0, ecx
0x6EB348: pop     ecx
0x6EB349: pop     edi
0x6EB34A: pop     esi
0x6EB34B: add     esp, 10h
0x6EB34E: retn    4
