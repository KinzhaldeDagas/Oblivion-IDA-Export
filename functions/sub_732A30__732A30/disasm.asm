0x732A30: push    0FFFFFFFFh
0x732A32: push    offset SEH_732A30
0x732A37: mov     eax, large fs:0
0x732A3D: push    eax
0x732A3E: push    ecx
0x732A3F: push    ebx
0x732A40: push    esi
0x732A41: push    edi
0x732A42: mov     eax, ds:0B30AACh
0x732A47: xor     eax, esp
0x732A49: push    eax
0x732A4A: lea     eax, [esp+20h+var_C]
0x732A4E: mov     large fs:0, eax
0x732A54: mov     esi, ecx
0x732A56: mov     [esp+20h+var_10], esi
0x732A5A: mov     eax, [esp+20h+arg_14]
0x732A5E: mov     ecx, [esp+20h+arg_10]
0x732A62: mov     edx, [esp+20h+arg_C]
0x732A66: mov     edi, [esp+20h+arg_0]
0x732A6A: push    eax
0x732A6B: mov     eax, [esp+24h+arg_8]
0x732A6F: push    ecx
0x732A70: mov     ecx, [esp+28h+arg_4]
0x732A74: push    edx
0x732A75: push    eax
0x732A76: push    0
0x732A78: push    ecx
0x732A79: push    edi
0x732A7A: mov     ecx, esi
0x732A7C: call    NiGeometryData__NiGeometryData
0x732A81: mov     eax, [esp+20h+arg_18]
0x732A85: test    eax, eax
0x732A87: mov     [esp+20h+var_4], 0
0x732A8F: mov     dword ptr [esi], offset ??_7NiLinesData@@6B@; const NiLinesData::`vftable'
0x732A95: jz      short loc_732A9C
0x732A97: mov     [esi+40h], eax
0x732A9A: jmp     short loc_732ACC
0x732A9C: movzx   edx, di
0x732A9F: push    edx; Size
0x732AA0: call    FormHeapAlloc
0x732AA5: mov     [esi+40h], eax
0x732AA8: add     esp, 4
0x732AAB: xor     eax, eax
0x732AAD: test    di, di
0x732AB0: jbe     short loc_732ACC
0x732AB2: xor     ecx, ecx
0x732AB4: mov     ebx, [esi+40h]
0x732AB7: mov     dl, al
0x732AB9: not     dl
0x732ABB: and     dl, 1
0x732ABE: mov     [ecx+ebx], dl
0x732AC1: add     eax, 1
0x732AC4: add     ecx, 1
0x732AC7: cmp     ax, di
0x732ACA: jb      short loc_732AB4
0x732ACC: mov     eax, esi
0x732ACE: mov     ecx, [esp+20h+var_C]
0x732AD2: mov     large fs:0, ecx
0x732AD9: pop     ecx
0x732ADA: pop     edi
0x732ADB: pop     esi
0x732ADC: pop     ebx
0x732ADD: add     esp, 10h
0x732AE0: retn    1Ch
