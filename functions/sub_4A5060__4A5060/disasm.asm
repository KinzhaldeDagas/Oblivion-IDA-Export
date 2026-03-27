0x4A5060: push    0FFFFFFFFh
0x4A5062: push    offset ??1TESRegionDataLandscape@@UAE@XZ_SEH
0x4A5067: mov     eax, large fs:0
0x4A506D: push    eax
0x4A506E: push    ecx
0x4A506F: push    esi
0x4A5070: push    edi
0x4A5071: mov     eax, ds:0B30AACh
0x4A5076: xor     eax, esp
0x4A5078: push    eax
0x4A5079: lea     eax, [esp+1Ch+var_C]
0x4A507D: mov     large fs:0, eax
0x4A5083: mov     esi, ecx
0x4A5085: mov     [esp+1Ch+var_10], esi
0x4A5089: mov     edi, [esp+1Ch+arg_0]
0x4A508D: push    edi
0x4A508E: call    sub_4A34E0
0x4A5093: xor     eax, eax
0x4A5095: mov     dword ptr [esi], offset ??_7TESRegionDataSound@@6B@; const TESRegionDataSound::`vftable'
0x4A509B: mov     [esp+1Ch+var_4], eax
0x4A509F: mov     [esi+0Ch], eax
0x4A50A2: mov     [esi+10h], eax
0x4A50A5: mov     eax, [edi]
0x4A50A7: mov     edx, [eax+24h]
0x4A50AA: mov     ecx, edi
0x4A50AC: call    edx
0x4A50AE: cmp     eax, 2
0x4A50B1: ja      short loc_4A50BB
0x4A50B3: cmp     eax, [esi+8]
0x4A50B6: jz      short loc_4A50BB
0x4A50B8: mov     [esi+8], eax
0x4A50BB: mov     eax, esi
0x4A50BD: mov     ecx, [esp+1Ch+var_C]
0x4A50C1: mov     large fs:0, ecx
0x4A50C8: pop     ecx
0x4A50C9: pop     edi
0x4A50CA: pop     esi
0x4A50CB: add     esp, 10h
0x4A50CE: retn    4
