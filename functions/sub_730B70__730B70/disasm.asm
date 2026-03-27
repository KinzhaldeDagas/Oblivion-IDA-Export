0x730B70: push    0FFFFFFFFh
0x730B72: push    offset SEH_8C62B0
0x730B77: mov     eax, large fs:0
0x730B7D: push    eax
0x730B7E: push    ecx
0x730B7F: push    esi
0x730B80: mov     eax, ds:0B30AACh
0x730B85: xor     eax, esp
0x730B87: push    eax
0x730B88: lea     eax, [esp+18h+var_C]
0x730B8C: mov     large fs:0, eax
0x730B92: push    0Ch; Size
0x730B94: call    FormHeapAlloc
0x730B99: mov     esi, eax
0x730B9B: add     esp, 4
0x730B9E: mov     [esp+18h+var_10], esi
0x730BA2: xor     eax, eax
0x730BA4: cmp     esi, eax
0x730BA6: mov     [esp+18h+var_4], eax
0x730BAA: jz      short loc_730BBB
0x730BAC: mov     ecx, esi
0x730BAE: call    sub_721350
0x730BB3: mov     dword ptr [esi], offset ??_7NiVertWeightsExtraData@@6B@; const NiVertWeightsExtraData::`vftable'
0x730BB9: mov     eax, esi
0x730BBB: mov     ecx, [esp+18h+var_C]
0x730BBF: mov     large fs:0, ecx
0x730BC6: pop     ecx
0x730BC7: pop     esi
0x730BC8: add     esp, 10h
0x730BCB: retn
