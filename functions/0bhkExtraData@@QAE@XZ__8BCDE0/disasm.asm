0x8BCDE0: push    0FFFFFFFFh
0x8BCDE2: push    offset ??0bhkExtraData@@QAE@XZ_SEH
0x8BCDE7: mov     eax, large fs:0
0x8BCDED: push    eax
0x8BCDEE: push    ecx
0x8BCDEF: push    esi
0x8BCDF0: mov     eax, ds:0B30AACh
0x8BCDF5: xor     eax, esp
0x8BCDF7: push    eax
0x8BCDF8: lea     eax, [esp+18h+var_C]
0x8BCDFC: mov     large fs:0, eax
0x8BCE02: mov     esi, ecx
0x8BCE04: mov     [esp+18h+var_10], esi
0x8BCE08: call    sub_721350
0x8BCE0D: xor     eax, eax
0x8BCE0F: mov     dword ptr [esi], offset ??_7bhkExtraData@@6B@; const bhkExtraData::`vftable'
0x8BCE15: mov     [esp+18h+var_4], eax
0x8BCE19: mov     dword ptr [esi+0Ch], offset ??_7?$NiTLargeArray@V?$NiPointer@VNiTimeController@@@@@@6B@; const NiTLargeArray<NiPointer<NiTimeController>>::`vftable'
0x8BCE20: mov     [esi+14h], eax
0x8BCE23: mov     dword ptr [esi+20h], 1
0x8BCE2A: mov     [esi+18h], eax
0x8BCE2D: mov     [esi+1Ch], eax
0x8BCE30: mov     [esi+10h], eax
0x8BCE33: push    offset off_A98390; Src
0x8BCE38: mov     ecx, esi
0x8BCE3A: mov     byte ptr [esp+1Ch+var_4], 2
0x8BCE3F: call    sub_721440
0x8BCE44: mov     eax, esi
0x8BCE46: mov     ecx, [esp+18h+var_C]
0x8BCE4A: mov     large fs:0, ecx
0x8BCE51: pop     ecx
0x8BCE52: pop     esi
0x8BCE53: add     esp, 10h
0x8BCE56: retn
