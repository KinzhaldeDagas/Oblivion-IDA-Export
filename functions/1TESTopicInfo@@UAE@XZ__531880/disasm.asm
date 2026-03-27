0x531880: push    0FFFFFFFFh
0x531882: push    offset ??1TESTopicInfo@@UAE@XZ_SEH
0x531887: mov     eax, large fs:0
0x53188D: push    eax
0x53188E: push    ecx
0x53188F: push    esi
0x531890: mov     eax, ds:0B30AACh
0x531895: xor     eax, esp
0x531897: push    eax
0x531898: lea     eax, [esp+18h+var_C]
0x53189C: mov     large fs:0, eax
0x5318A2: mov     esi, ecx
0x5318A4: mov     [esp+18h+var_10], esi
0x5318A8: mov     dword ptr [esi], offset ??_7TESTopicInfo@@6B@; const TESTopicInfo::`vftable'
0x5318AE: mov     [esp+18h+var_4], 1
0x5318B6: call    sub_530DB0
0x5318BB: lea     ecx, [esi+18h]
0x5318BE: mov     byte ptr [esp+18h+var_4], 0
0x5318C3: call    sub_56A7A0
0x5318C8: mov     ecx, esi; this
0x5318CA: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5318D2: call    TESForm_destr
0x5318D7: mov     ecx, [esp+18h+var_C]
0x5318DB: mov     large fs:0, ecx
0x5318E2: pop     ecx
0x5318E3: pop     esi
0x5318E4: add     esp, 10h
0x5318E7: retn
