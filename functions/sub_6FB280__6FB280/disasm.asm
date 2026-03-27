0x6FB280: push    0FFFFFFFFh
0x6FB282: push    offset SEH_6FB280
0x6FB287: mov     eax, large fs:0
0x6FB28D: push    eax
0x6FB28E: push    ecx
0x6FB28F: push    esi
0x6FB290: mov     eax, ds:0B30AACh
0x6FB295: xor     eax, esp
0x6FB297: push    eax
0x6FB298: lea     eax, [esp+18h+var_C]
0x6FB29C: mov     large fs:0, eax
0x6FB2A2: mov     esi, ecx
0x6FB2A4: mov     [esp+18h+var_10], esi
0x6FB2A8: call    sub_721350
0x6FB2AD: xor     eax, eax
0x6FB2AF: mov     dword ptr [esi], offset ??_7BSFurnitureMarker@@6B@; const BSFurnitureMarker::`vftable'
0x6FB2B5: mov     [esp+18h+var_4], eax
0x6FB2B9: mov     dword ptr [esi+0Ch], offset ??_7?$NiTArray@VFurnitureMark@@@@6B@; const NiTArray<FurnitureMark>::`vftable'
0x6FB2C0: mov     [esi+14h], ax
0x6FB2C4: mov     word ptr [esi+1Ah], 1
0x6FB2CA: mov     [esi+16h], ax
0x6FB2CE: mov     [esi+18h], ax
0x6FB2D2: mov     [esi+10h], eax
0x6FB2D5: push    offset off_A7D238; Src
0x6FB2DA: mov     ecx, esi
0x6FB2DC: mov     byte ptr [esp+1Ch+var_4], 2
0x6FB2E1: call    sub_721440
0x6FB2E6: mov     eax, esi
0x6FB2E8: mov     ecx, [esp+18h+var_C]
0x6FB2EC: mov     large fs:0, ecx
0x6FB2F3: pop     ecx
0x6FB2F4: pop     esi
0x6FB2F5: add     esp, 10h
0x6FB2F8: retn
