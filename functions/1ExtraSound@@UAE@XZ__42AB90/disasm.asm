0x42AB90: push    0FFFFFFFFh
0x42AB92: push    offset ??1ExtraSound@@UAE@XZ_SEH
0x42AB97: mov     eax, large fs:0
0x42AB9D: push    eax
0x42AB9E: push    ecx
0x42AB9F: push    esi
0x42ABA0: push    edi
0x42ABA1: mov     eax, ___security_cookie
0x42ABA6: xor     eax, esp
0x42ABA8: push    eax
0x42ABA9: lea     eax, [esp+1Ch+var_C]
0x42ABAD: mov     large fs:0, eax
0x42ABB3: mov     esi, ecx
0x42ABB5: mov     [esp+1Ch+var_10], esi
0x42ABB9: mov     dword ptr [esi], offset ??_7ExtraSound@@6B@; const ExtraSound::`vftable'
0x42ABBF: mov     edi, [esi+0Ch]
0x42ABC2: test    edi, edi
0x42ABC4: mov     [esp+1Ch+var_4], 0
0x42ABCC: jz      short loc_42ABDE
0x42ABCE: mov     ecx, edi; this
0x42ABD0: call    sub_6B73E0
0x42ABD5: push    edi
0x42ABD6: call    FormHeapFree
0x42ABDB: add     esp, 4
0x42ABDE: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42ABE4: mov     ecx, [esp+1Ch+var_C]
0x42ABE8: mov     large fs:0, ecx
0x42ABEF: pop     ecx
0x42ABF0: pop     edi
0x42ABF1: pop     esi
0x42ABF2: add     esp, 10h
0x42ABF5: retn
