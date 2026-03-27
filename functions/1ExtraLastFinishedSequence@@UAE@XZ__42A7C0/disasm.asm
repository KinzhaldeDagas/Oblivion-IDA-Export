0x42A7C0: push    0FFFFFFFFh
0x42A7C2: push    offset SEH_42B090
0x42A7C7: mov     eax, large fs:0
0x42A7CD: push    eax
0x42A7CE: push    ecx
0x42A7CF: push    esi
0x42A7D0: mov     eax, ___security_cookie
0x42A7D5: xor     eax, esp
0x42A7D7: push    eax
0x42A7D8: lea     eax, [esp+18h+var_C]
0x42A7DC: mov     large fs:0, eax
0x42A7E2: mov     esi, ecx
0x42A7E4: mov     [esp+18h+var_10], esi
0x42A7E8: mov     dword ptr [esi], offset ??_7ExtraLastFinishedSequence@@6B@; const ExtraLastFinishedSequence::`vftable'
0x42A7EE: mov     eax, [esi+0Ch]
0x42A7F1: push    eax; void *
0x42A7F2: mov     ecx, offset FormHeap
0x42A7F7: mov     [esp+1Ch+var_4], 0
0x42A7FF: call    MemoryHeap_Free_checked
0x42A804: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42A80A: mov     ecx, [esp+18h+var_C]
0x42A80E: mov     large fs:0, ecx
0x42A815: pop     ecx
0x42A816: pop     esi
0x42A817: add     esp, 10h
0x42A81A: retn
