0x6EA700: push    0FFFFFFFFh
0x6EA702: push    offset SEH_8C8970
0x6EA707: mov     eax, large fs:0
0x6EA70D: push    eax
0x6EA70E: push    ecx
0x6EA70F: push    esi
0x6EA710: push    edi
0x6EA711: mov     eax, ds:0B30AACh
0x6EA716: xor     eax, esp
0x6EA718: push    eax
0x6EA719: lea     eax, [esp+1Ch+var_C]
0x6EA71D: mov     large fs:0, eax
0x6EA723: mov     edi, ecx
0x6EA725: push    40h ; '@'; Size
0x6EA727: call    FormHeapAlloc
0x6EA72C: mov     esi, eax
0x6EA72E: add     esp, 4
0x6EA731: mov     [esp+1Ch+var_10], esi
0x6EA735: test    esi, esi
0x6EA737: mov     [esp+1Ch+var_4], 0
0x6EA73F: jz      short loc_6EA772
0x6EA741: mov     ecx, esi
0x6EA743: call    sub_6CC4E0
0x6EA748: mov     dword ptr [esi], offset ??_7NiBlendQuaternionInterpolator@@6B@; const NiBlendQuaternionInterpolator::`vftable'
0x6EA74E: mov     eax, ds:0B3EBA0h
0x6EA753: mov     [esi+30h], eax
0x6EA756: mov     ecx, ds:0B3EBA4h
0x6EA75C: mov     [esi+34h], ecx
0x6EA75F: mov     edx, ds:0B3EBA8h
0x6EA765: mov     [esi+38h], edx
0x6EA768: mov     eax, ds:0B3EBACh
0x6EA76D: mov     [esi+3Ch], eax
0x6EA770: jmp     short loc_6EA774
0x6EA772: xor     esi, esi
0x6EA774: mov     ecx, [esp+1Ch+arg_0]
0x6EA778: push    ecx
0x6EA779: push    esi
0x6EA77A: mov     ecx, edi
0x6EA77C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6EA784: call    sub_6CD3D0
0x6EA789: mov     edx, [edi+30h]
0x6EA78C: lea     eax, [edi+30h]
0x6EA78F: mov     [esi+30h], edx
0x6EA792: mov     ecx, [eax+4]
0x6EA795: mov     [esi+34h], ecx
0x6EA798: mov     edx, [eax+8]
0x6EA79B: mov     [esi+38h], edx
0x6EA79E: mov     eax, [eax+0Ch]
0x6EA7A1: mov     [esi+3Ch], eax
0x6EA7A4: mov     eax, esi
0x6EA7A6: mov     ecx, [esp+1Ch+var_C]
0x6EA7AA: mov     large fs:0, ecx
0x6EA7B1: pop     ecx
0x6EA7B2: pop     edi
0x6EA7B3: pop     esi
0x6EA7B4: add     esp, 10h
0x6EA7B7: retn    4
