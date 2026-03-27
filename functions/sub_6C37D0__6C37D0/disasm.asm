0x6C37D0: push    0FFFFFFFFh
0x6C37D2: push    offset SEH_6C37D0
0x6C37D7: mov     eax, large fs:0
0x6C37DD: push    eax
0x6C37DE: push    ecx
0x6C37DF: push    ebp
0x6C37E0: push    esi
0x6C37E1: push    edi
0x6C37E2: mov     eax, ds:0B30AACh
0x6C37E7: xor     eax, esp
0x6C37E9: push    eax
0x6C37EA: lea     eax, [esp+20h+var_C]
0x6C37EE: mov     large fs:0, eax
0x6C37F4: mov     esi, ecx
0x6C37F6: mov     [esp+20h+var_10], esi
0x6C37FA: mov     eax, [esp+20h+arg_8]
0x6C37FE: fld     [esp+20h+arg_4]
0x6C3802: push    eax; int
0x6C3803: push    ecx
0x6C3804: mov     ecx, dword ptr [esp+28h+arg_0]
0x6C3808: fstp    [esp+28h+var_28]; float
0x6C380B: push    ecx; char
0x6C380C: mov     ecx, esi
0x6C380E: call    sub_6CCE40
0x6C3813: mov     dword ptr [esi], offset ??_7NiBlendAccumTransformInterpolator@@6B@; const NiBlendAccumTransformInterpolator::`vftable'
0x6C3819: mov     edx, ds:0B24260h
0x6C381F: mov     [esi+30h], edx
0x6C3822: mov     eax, ds:0B24264h
0x6C3827: mov     [esi+34h], eax
0x6C382A: mov     ecx, ds:0B24268h
0x6C3830: mov     [esi+38h], ecx
0x6C3833: mov     edx, ds:0B3CBA4h
0x6C3839: mov     [esi+3Ch], edx
0x6C383C: mov     eax, ds:0B3CBA8h
0x6C3841: mov     [esi+40h], eax
0x6C3844: mov     ecx, ds:0B3CBACh
0x6C384A: mov     [esi+44h], ecx
0x6C384D: mov     edx, ds:0B3CBB0h
0x6C3853: mov     [esi+48h], edx
0x6C3856: fld     dword ptr ds:0A79E10h
0x6C385C: fstp    dword ptr [esi+4Ch]
0x6C385F: mov     al, [esi+0Dh]
0x6C3862: test    al, al
0x6C3864: mov     [esp+20h+var_4], 0
0x6C386C: mov     dword ptr [esi+50h], 0
0x6C3873: mov     byte ptr [esi+54h], 0
0x6C3877: jbe     short loc_6C38BB
0x6C3879: movzx   ebp, al
0x6C387C: xor     ecx, ecx
0x6C387E: mov     eax, ebp
0x6C3880: mov     edx, 68h ; 'h'
0x6C3885: mul     edx
0x6C3887: seto    cl
0x6C388A: neg     ecx
0x6C388C: or      ecx, eax
0x6C388E: push    ecx; Size
0x6C388F: call    FormHeapAlloc
0x6C3894: mov     edi, eax
0x6C3896: add     esp, 4
0x6C3899: mov     [esp+20h+arg_8], edi
0x6C389D: test    edi, edi
0x6C389F: mov     byte ptr [esp+20h+var_4], 1
0x6C38A4: jz      short loc_6C38B6
0x6C38A6: push    offset sub_6C3730
0x6C38AB: push    ebp
0x6C38AC: push    68h ; 'h'
0x6C38AE: push    edi
0x6C38AF: call    sub_401080
0x6C38B4: jmp     short loc_6C38B8
0x6C38B6: xor     edi, edi
0x6C38B8: mov     [esi+50h], edi
0x6C38BB: mov     eax, esi
0x6C38BD: mov     ecx, [esp+20h+var_C]
0x6C38C1: mov     large fs:0, ecx
0x6C38C8: pop     ecx
0x6C38C9: pop     edi
0x6C38CA: pop     esi
0x6C38CB: pop     ebp
0x6C38CC: add     esp, 10h
0x6C38CF: retn    0Ch
