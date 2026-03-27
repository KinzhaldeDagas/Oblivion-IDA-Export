0x429CC0: push    0FFFFFFFFh
0x429CC2: push    offset ??1ExtraSound@@UAE@XZ_SEH
0x429CC7: mov     eax, large fs:0
0x429CCD: push    eax
0x429CCE: push    ecx
0x429CCF: push    esi
0x429CD0: push    edi
0x429CD1: mov     eax, ___security_cookie
0x429CD6: xor     eax, esp
0x429CD8: push    eax
0x429CD9: lea     eax, [esp+1Ch+var_C]
0x429CDD: mov     large fs:0, eax
0x429CE3: mov     esi, ecx
0x429CE5: mov     [esp+1Ch+var_10], esi
0x429CE9: mov     dword ptr [esi], offset ??_7ExtraMapMarker@@6B@; const ExtraMapMarker::`vftable'
0x429CEF: mov     edi, [esi+0Ch]
0x429CF2: test    edi, edi
0x429CF4: mov     [esp+1Ch+var_4], 0
0x429CFC: jz      short loc_429D0E
0x429CFE: mov     ecx, edi; this
0x429D00: call    TESFullName_Initialize
0x429D05: push    edi
0x429D06: call    FormHeapFree
0x429D0B: add     esp, 4
0x429D0E: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x429D14: mov     ecx, [esp+1Ch+var_C]
0x429D18: mov     large fs:0, ecx
0x429D1F: pop     ecx
0x429D20: pop     edi
0x429D21: pop     esi
0x429D22: add     esp, 10h
0x429D25: retn
