0x6A48C0: push    0FFFFFFFFh
0x6A48C2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x6A48C7: mov     eax, large fs:0
0x6A48CD: push    eax
0x6A48CE: push    ecx
0x6A48CF: push    ebx
0x6A48D0: push    esi
0x6A48D1: push    edi
0x6A48D2: mov     eax, ds:0B30AACh
0x6A48D7: xor     eax, esp
0x6A48D9: push    eax
0x6A48DA: lea     eax, [esp+20h+var_C]
0x6A48DE: mov     large fs:0, eax
0x6A48E4: mov     ebx, ecx
0x6A48E6: push    40h ; '@'; Size
0x6A48E8: call    FormHeapAlloc
0x6A48ED: mov     esi, eax
0x6A48EF: add     esp, 4
0x6A48F2: mov     [esp+20h+var_10], esi
0x6A48F6: test    esi, esi
0x6A48F8: mov     [esp+20h+var_4], 0
0x6A4900: jz      short loc_6A493B
0x6A4902: mov     edi, [ebx+0Ch]
0x6A4905: mov     eax, [ebx+8]
0x6A4908: mov     ecx, [ebx+24h]
0x6A490B: push    edi; int
0x6A490C: push    eax; int
0x6A490D: push    ecx; int
0x6A490E: mov     ecx, esi; this
0x6A4910: call    ValueModifierEffect_constr
0x6A4915: mov     dword ptr [esi], offset ??_7ShieldEffect@@6B@; const ShieldEffect::`vftable'
0x6A491B: cmp     dword ptr [edi], 444C4853h
0x6A4921: jz      short loc_6A4932
0x6A4923: mov     edi, [edi+14h]
0x6A4926: mov     [esi+38h], edi
0x6A4929: mov     dword ptr [esi+3Ch], 2Bh ; '+'
0x6A4930: jmp     short loc_6A493D
0x6A4932: mov     dword ptr [esi+3Ch], 48h ; 'H'
0x6A4939: jmp     short loc_6A493D
0x6A493B: xor     esi, esi
0x6A493D: mov     eax, [ebx]
0x6A493F: mov     edx, [eax+2Ch]
0x6A4942: push    esi
0x6A4943: mov     ecx, ebx
0x6A4945: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6A494D: call    edx
0x6A494F: mov     eax, esi
0x6A4951: mov     ecx, dword ptr [esp+20h+var_C]
0x6A4955: mov     large fs:0, ecx
0x6A495C: pop     ecx
0x6A495D: pop     edi
0x6A495E: pop     esi
0x6A495F: pop     ebx
0x6A4960: add     esp, 10h
0x6A4963: retn
