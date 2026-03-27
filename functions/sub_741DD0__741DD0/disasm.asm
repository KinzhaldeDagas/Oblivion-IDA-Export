0x741DD0: push    0FFFFFFFFh
0x741DD2: push    offset SEH_8C8970
0x741DD7: mov     eax, large fs:0
0x741DDD: push    eax
0x741DDE: push    ecx
0x741DDF: push    esi
0x741DE0: push    edi
0x741DE1: mov     eax, ds:0B30AACh
0x741DE6: xor     eax, esp
0x741DE8: push    eax
0x741DE9: lea     eax, [esp+1Ch+var_C]
0x741DED: mov     large fs:0, eax
0x741DF3: mov     edi, ecx
0x741DF5: push    10h; Size
0x741DF7: call    FormHeapAlloc
0x741DFC: mov     esi, eax
0x741DFE: add     esp, 4
0x741E01: mov     [esp+1Ch+var_10], esi
0x741E05: test    esi, esi
0x741E07: mov     [esp+1Ch+var_4], 0
0x741E0F: jz      short loc_741E24
0x741E11: mov     ecx, esi
0x741E13: call    sub_721350
0x741E18: mov     dword ptr [esi], offset ??_7NiBooleanExtraData@@6B@; const NiBooleanExtraData::`vftable'
0x741E1E: mov     byte ptr [esi+0Ch], 0
0x741E22: jmp     short loc_741E26
0x741E24: xor     esi, esi
0x741E26: mov     eax, [esp+1Ch+arg_0]
0x741E2A: push    eax
0x741E2B: push    esi
0x741E2C: mov     ecx, edi
0x741E2E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x741E36: call    sub_7214A0
0x741E3B: mov     cl, [edi+0Ch]
0x741E3E: mov     [esi+0Ch], cl
0x741E41: mov     eax, esi
0x741E43: mov     ecx, [esp+1Ch+var_C]
0x741E47: mov     large fs:0, ecx
0x741E4E: pop     ecx
0x741E4F: pop     edi
0x741E50: pop     esi
0x741E51: add     esp, 10h
0x741E54: retn    4
