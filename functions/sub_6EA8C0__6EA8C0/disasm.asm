0x6EA8C0: push    0FFFFFFFFh
0x6EA8C2: push    offset SEH_8C62B0
0x6EA8C7: mov     eax, large fs:0
0x6EA8CD: push    eax
0x6EA8CE: push    ecx
0x6EA8CF: push    esi
0x6EA8D0: mov     eax, ds:0B30AACh
0x6EA8D5: xor     eax, esp
0x6EA8D7: push    eax
0x6EA8D8: lea     eax, [esp+18h+var_C]
0x6EA8DC: mov     large fs:0, eax
0x6EA8E2: push    40h ; '@'; Size
0x6EA8E4: call    FormHeapAlloc
0x6EA8E9: mov     esi, eax
0x6EA8EB: add     esp, 4
0x6EA8EE: mov     [esp+18h+var_10], esi
0x6EA8F2: test    esi, esi
0x6EA8F4: mov     [esp+18h+var_4], 0
0x6EA8FC: jz      short loc_6EA93C
0x6EA8FE: mov     ecx, esi
0x6EA900: call    sub_6CC4E0
0x6EA905: mov     dword ptr [esi], offset ??_7NiBlendPoint3Interpolator@@6B@; const NiBlendPoint3Interpolator::`vftable'
0x6EA90B: mov     eax, ds:0B24FC8h
0x6EA910: mov     [esi+30h], eax
0x6EA913: mov     ecx, ds:0B24FCCh
0x6EA919: mov     [esi+34h], ecx
0x6EA91C: mov     edx, ds:0B24FD0h
0x6EA922: mov     [esi+38h], edx
0x6EA925: mov     byte ptr [esi+3Ch], 0
0x6EA929: mov     eax, esi
0x6EA92B: mov     ecx, [esp+18h+var_C]
0x6EA92F: mov     large fs:0, ecx
0x6EA936: pop     ecx
0x6EA937: pop     esi
0x6EA938: add     esp, 10h
0x6EA93B: retn
0x6EA93C: xor     eax, eax
0x6EA93E: mov     ecx, [esp+18h+var_C]
0x6EA942: mov     large fs:0, ecx
0x6EA949: pop     ecx
0x6EA94A: pop     esi
0x6EA94B: add     esp, 10h
0x6EA94E: retn
