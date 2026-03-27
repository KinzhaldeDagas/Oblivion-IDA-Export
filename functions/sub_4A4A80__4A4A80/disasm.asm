0x4A4A80: push    0FFFFFFFFh
0x4A4A82: push    offset SEH_4A4A80
0x4A4A87: mov     eax, large fs:0
0x4A4A8D: push    eax
0x4A4A8E: push    ecx
0x4A4A8F: push    esi
0x4A4A90: mov     eax, ds:0B30AACh
0x4A4A95: xor     eax, esp
0x4A4A97: push    eax
0x4A4A98: lea     eax, [esp+18h+var_C]
0x4A4A9C: mov     large fs:0, eax
0x4A4AA2: mov     esi, ecx
0x4A4AA4: mov     [esp+18h+var_10], esi
0x4A4AA8: call    sub_4A34C0
0x4A4AAD: xor     eax, eax
0x4A4AAF: lea     ecx, [esi+8]; this
0x4A4AB2: mov     dword ptr [esi], offset ??_7TESRegionDataMap@@6B@; const TESRegionDataMap::`vftable'
0x4A4AB8: mov     [esp+18h+var_4], eax
0x4A4ABC: mov     [ecx], eax
0x4A4ABE: mov     [ecx+4], ax
0x4A4AC2: mov     [ecx+6], ax
0x4A4AC6: push    eax; a3
0x4A4AC7: push    offset aDefaultRegionN; "Default Region Name"
0x4A4ACC: mov     byte ptr [esp+20h+var_4], 1
0x4A4AD1: call    BSStringT_Set
0x4A4AD6: mov     eax, esi
0x4A4AD8: mov     ecx, [esp+18h+var_C]
0x4A4ADC: mov     large fs:0, ecx
0x4A4AE3: pop     ecx
0x4A4AE4: pop     esi
0x4A4AE5: add     esp, 10h
0x4A4AE8: retn
