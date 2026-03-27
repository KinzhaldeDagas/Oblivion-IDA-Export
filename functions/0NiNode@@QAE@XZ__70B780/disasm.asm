0x70B780: push    0FFFFFFFFh
0x70B782: push    offset SEH_70D590
0x70B787: mov     eax, large fs:0
0x70B78D: push    eax
0x70B78E: push    ecx
0x70B78F: push    esi
0x70B790: push    edi
0x70B791: mov     eax, ds:0B30AACh
0x70B796: xor     eax, esp
0x70B798: push    eax
0x70B799: lea     eax, [esp+1Ch+var_C]
0x70B79D: mov     large fs:0, eax
0x70B7A3: mov     esi, ecx
0x70B7A5: mov     [esp+1Ch+var_10], esi
0x70B7A9: call    ??0NiAVObject@@QAE@XZ; NiAVObject::NiAVObject(void)
0x70B7AE: mov     eax, [esp+1Ch+arg_0]
0x70B7B2: push    1
0x70B7B4: xor     edi, edi
0x70B7B6: push    eax
0x70B7B7: lea     ecx, [esi+0ACh]
0x70B7BD: mov     [esp+24h+var_4], edi
0x70B7C1: mov     dword ptr [esi], offset ??_7NiNode@@6B@; const NiNode::`vftable'
0x70B7C7: call    sub_4B2D30
0x70B7CC: mov     [esi+0C8h], edi
0x70B7D2: mov     [esi+0C0h], edi
0x70B7D8: mov     [esi+0C4h], edi
0x70B7DE: mov     dword ptr [esi+0BCh], offset ??_7?$NiTPointerList@PAVNiDynamicEffect@@@@6B@; const NiTPointerList<NiDynamicEffect *>::`vftable'
0x70B7E8: mov     eax, esi
0x70B7EA: mov     ecx, [esp+1Ch+var_C]
0x70B7EE: mov     large fs:0, ecx
0x70B7F5: pop     ecx
0x70B7F6: pop     edi
0x70B7F7: pop     esi
0x70B7F8: add     esp, 10h
0x70B7FB: retn    4
