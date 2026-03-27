0x4D3210: push    0FFFFFFFFh
0x4D3212: push    offset TESObjectCELL_constr_SEH
0x4D3217: mov     eax, large fs:0
0x4D321D: push    eax
0x4D321E: push    ecx
0x4D321F: push    ebx
0x4D3220: push    esi
0x4D3221: mov     eax, ds:0B30AACh
0x4D3226: xor     eax, esp
0x4D3228: push    eax
0x4D3229: lea     eax, [esp+1Ch+var_C]
0x4D322D: mov     large fs:0, eax
0x4D3233: mov     esi, ecx
0x4D3235: mov     [esp+1Ch+var_10], esi
0x4D3239: call    TESForm_constr
0x4D323E: xor     ebx, ebx
0x4D3240: mov     dword ptr [esi+18h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4D3247: mov     [esp+1Ch+var_4], ebx
0x4D324B: mov     [esi+1Ch], ebx
0x4D324E: mov     [esi+20h], bx
0x4D3252: mov     [esi+22h], bx
0x4D3256: lea     ecx, [esi+28h]
0x4D3259: mov     byte ptr [esp+1Ch+var_4], 1
0x4D325E: mov     dword ptr [esi], offset ??_7TESObjectCELL@@6BTESObjectCELL@@@; const TESObjectCELL::`vftable'{for `TESObjectCELL'}
0x4D3264: mov     dword ptr [esi+18h], offset ??_7TESObjectCELL@@6BTESFullName@@@; const TESObjectCELL::`vftable'{for `TESFullName'}
0x4D326B: call    ExtraDataList_constr
0x4D3270: mov     [esi+48h], ebx
0x4D3273: mov     [esi+4Ch], ebx
0x4D3276: mov     [esi+54h], ebx
0x4D3279: push    1; a2
0x4D327B: mov     ecx, esi; this
0x4D327D: mov     byte ptr [esp+20h+var_4], 3
0x4D3282: mov     [esi+24h], bl
0x4D3285: mov     [esi+26h], bl
0x4D3288: mov     [esi+3Ch], ebx
0x4D328B: mov     [esi+40h], ebx
0x4D328E: mov     [esi+44h], ebx
0x4D3291: mov     byte ptr [esi+4], 30h ; '0'
0x4D3295: mov     [esi+50h], ebx
0x4D3298: mov     [esi+25h], bl
0x4D329B: call    TESForm_SetIsLinked
0x4D32A0: mov     eax, esi
0x4D32A2: mov     ecx, [esp+1Ch+var_C]
0x4D32A6: mov     large fs:0, ecx
0x4D32AD: pop     ecx
0x4D32AE: pop     esi
0x4D32AF: pop     ebx
0x4D32B0: add     esp, 10h
0x4D32B3: retn
