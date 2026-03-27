0x42A320: push    0FFFFFFFFh
0x42A322: push    offset ??1ExtraSound@@UAE@XZ_SEH
0x42A327: mov     eax, large fs:0
0x42A32D: push    eax
0x42A32E: push    ecx
0x42A32F: push    esi
0x42A330: push    edi
0x42A331: mov     eax, ___security_cookie
0x42A336: xor     eax, esp
0x42A338: push    eax
0x42A339: lea     eax, [esp+1Ch+var_C]
0x42A33D: mov     large fs:0, eax
0x42A343: mov     esi, ecx
0x42A345: mov     [esp+1Ch+var_10], esi
0x42A349: mov     dword ptr [esi], offset ??_7ExtraRagDollData@@6B@; const ExtraRagDollData::`vftable'
0x42A34F: mov     edi, [esi+0Ch]
0x42A352: test    edi, edi
0x42A354: mov     [esp+1Ch+var_4], 0
0x42A35C: jz      short loc_42A36E
0x42A35E: mov     ecx, edi
0x42A360: call    sub_497220
0x42A365: push    edi
0x42A366: call    FormHeapFree
0x42A36B: add     esp, 4
0x42A36E: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42A374: mov     ecx, [esp+1Ch+var_C]
0x42A378: mov     large fs:0, ecx
0x42A37F: pop     ecx
0x42A380: pop     edi
0x42A381: pop     esi
0x42A382: add     esp, 10h
0x42A385: retn
