0x719960: push    0FFFFFFFFh
0x719962: push    offset SEH_8C62B0
0x719967: mov     eax, large fs:0
0x71996D: push    eax
0x71996E: push    ecx
0x71996F: push    esi
0x719970: mov     eax, ds:0B30AACh
0x719975: xor     eax, esp
0x719977: push    eax
0x719978: lea     eax, [esp+18h+var_C]
0x71997C: mov     large fs:0, eax
0x719982: mov     esi, ecx
0x719984: push    50h ; 'P'; Size
0x719986: call    FormHeapAlloc
0x71998B: add     esp, 4
0x71998E: mov     [esp+18h+var_10], eax
0x719992: test    eax, eax
0x719994: mov     [esp+18h+var_4], 0
0x71999C: jz      short loc_7199DE
0x71999E: mov     ecx, [esp+18h+arg_28]
0x7199A2: mov     edx, [esp+18h+arg_24]
0x7199A6: push    ecx
0x7199A7: mov     ecx, [esp+1Ch+arg_20]
0x7199AB: push    edx
0x7199AC: mov     edx, [esp+20h+arg_1C]
0x7199B0: push    ecx
0x7199B1: mov     ecx, [esp+24h+arg_18]
0x7199B5: push    edx
0x7199B6: mov     edx, [esp+28h+arg_14]
0x7199BA: push    ecx
0x7199BB: mov     ecx, [esp+2Ch+arg_10]
0x7199BF: push    edx
0x7199C0: mov     edx, [esp+30h+arg_C]
0x7199C4: push    ecx
0x7199C5: mov     ecx, [esp+34h+arg_8]
0x7199C9: push    edx
0x7199CA: mov     edx, [esp+38h+arg_4]
0x7199CE: push    ecx
0x7199CF: mov     ecx, [esp+3Ch+arg_0]
0x7199D3: push    edx
0x7199D4: push    ecx
0x7199D5: mov     ecx, eax
0x7199D7: call    sub_719CB0
0x7199DC: jmp     short loc_7199E0
0x7199DE: xor     eax, eax
0x7199E0: push    eax
0x7199E1: mov     ecx, esi
0x7199E3: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7199EB: call    NiTriBasedGeom__NiTriBasedGeom
0x7199F0: mov     dword ptr [esi], offset ??_7NiTriStrips@@6B@; const NiTriStrips::`vftable'
0x7199F6: mov     eax, esi
0x7199F8: mov     ecx, [esp+18h+var_C]
0x7199FC: mov     large fs:0, ecx
0x719A03: pop     ecx
0x719A04: pop     esi
0x719A05: add     esp, 10h
0x719A08: retn    2Ch ; ','
