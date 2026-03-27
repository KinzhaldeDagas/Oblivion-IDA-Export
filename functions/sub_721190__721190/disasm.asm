0x721190: push    0FFFFFFFFh
0x721192: push    offset SEH_8C62B0
0x721197: mov     eax, large fs:0
0x72119D: push    eax
0x72119E: push    ecx
0x72119F: push    esi
0x7211A0: mov     eax, ds:0B30AACh
0x7211A5: xor     eax, esp
0x7211A7: push    eax
0x7211A8: lea     eax, [esp+18h+var_C]
0x7211AC: mov     large fs:0, eax
0x7211B2: push    10h; Size
0x7211B4: call    FormHeapAlloc
0x7211B9: mov     esi, eax
0x7211BB: add     esp, 4
0x7211BE: mov     [esp+18h+var_10], esi
0x7211C2: xor     eax, eax
0x7211C4: cmp     esi, eax
0x7211C6: mov     [esp+18h+var_4], eax
0x7211CA: jz      short loc_7211E0
0x7211CC: mov     ecx, esi
0x7211CE: call    sub_721350
0x7211D3: fldz
0x7211D5: fstp    dword ptr [esi+0Ch]
0x7211D8: mov     dword ptr [esi], offset ??_7NiFloatExtraData@@6B@; const NiFloatExtraData::`vftable'
0x7211DE: mov     eax, esi
0x7211E0: mov     ecx, [esp+18h+var_C]
0x7211E4: mov     large fs:0, ecx
0x7211EB: pop     ecx
0x7211EC: pop     esi
0x7211ED: add     esp, 10h
0x7211F0: retn
