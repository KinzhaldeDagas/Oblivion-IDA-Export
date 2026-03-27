0x88E9F0: sub     esp, 6Ch
0x88E9F3: push    ebx
0x88E9F4: mov     ebx, ecx
0x88E9F6: cmp     dword ptr [ebx+10h], 0
0x88E9FA: push    esi
0x88E9FB: push    edi
0x88E9FC: jz      short loc_88EA03
0x88E9FE: call    sub_88EDC0
0x88EA03: lea     esi, [ebx+28h]
0x88EA06: mov     ecx, 9
0x88EA0B: lea     edi, [esp+78h+var_6C]
0x88EA0F: rep movsd
0x88EA11: mov     ecx, ebx
0x88EA13: call    sub_452A60
0x88EA18: mov     ecx, ebx
0x88EA1A: mov     esi, eax
0x88EA1C: call    sub_452A60
0x88EA21: mov     eax, [eax+1Ch]
0x88EA24: lea     ecx, [esp+78h+var_6C]
0x88EA28: push    ecx
0x88EA29: lea     edx, [esp+7Ch+var_48]
0x88EA2D: push    edx
0x88EA2E: add     esi, 30h ; '0'
0x88EA31: push    esi
0x88EA32: lea     ecx, [esp+84h+var_24]
0x88EA36: push    ecx
0x88EA37: lea     ecx, [eax+64h]
0x88EA3A: call    NiMAtrix33_Multiply
0x88EA3F: mov     ecx, eax
0x88EA41: call    NiMAtrix33_Multiply
0x88EA46: mov     ecx, ebx
0x88EA48: mov     esi, eax
0x88EA4A: call    sub_452A60
0x88EA4F: lea     edi, [eax+64h]
0x88EA52: mov     ecx, 9
0x88EA57: rep movsd
0x88EA59: pop     edi
0x88EA5A: pop     esi
0x88EA5B: pop     ebx
0x88EA5C: add     esp, 6Ch
0x88EA5F: retn
