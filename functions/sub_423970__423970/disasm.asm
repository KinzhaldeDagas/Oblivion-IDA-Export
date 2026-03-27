0x423970: push    0FFFFFFFFh
0x423972: push    offset SEH_6E3250
0x423977: mov     eax, large fs:0
0x42397D: push    eax
0x42397E: push    esi
0x42397F: push    edi
0x423980: mov     eax, ___security_cookie
0x423985: xor     eax, esp
0x423987: push    eax
0x423988: lea     eax, [esp+18h+var_C]
0x42398C: mov     large fs:0, eax
0x423992: mov     esi, ecx
0x423994: push    4Fh ; 'O'; a2
0x423996: call    BaseExtraList_GetExtraData
0x42399B: mov     edi, [esp+18h+arg_0]
0x42399F: test    edi, edi
0x4239A1: jnz     short loc_4239C5
0x4239A3: test    eax, eax
0x4239A5: jz      short loc_4239E0
0x4239A7: push    1
0x4239A9: push    eax
0x4239AA: mov     ecx, esi
0x4239AC: call    BaseExtraList_RemoveExtraByPtr
0x4239B1: mov     ecx, [esp+18h+var_C]
0x4239B5: mov     large fs:0, ecx
0x4239BC: pop     ecx
0x4239BD: pop     edi
0x4239BE: pop     esi
0x4239BF: add     esp, 0Ch
0x4239C2: retn    4
0x4239C5: test    eax, eax
0x4239C7: jz      short loc_4239E0
0x4239C9: mov     [eax+0Ch], edi
0x4239CC: mov     ecx, [esp+18h+var_C]
0x4239D0: mov     large fs:0, ecx
0x4239D7: pop     ecx
0x4239D8: pop     edi
0x4239D9: pop     esi
0x4239DA: add     esp, 0Ch
0x4239DD: retn    4
0x4239E0: push    10h; Size
0x4239E2: call    FormHeapAlloc
0x4239E7: add     esp, 4
0x4239EA: mov     [esp+18h+arg_0], eax
0x4239EE: test    eax, eax
0x4239F0: mov     [esp+18h+var_4], 0
0x4239F8: jz      short loc_423A04
0x4239FA: push    edi
0x4239FB: mov     ecx, eax
0x4239FD: call    sub_42AB10
0x423A02: jmp     short loc_423A06
0x423A04: xor     eax, eax
0x423A06: push    eax; BSExtraData *
0x423A07: mov     ecx, esi; ExtraDataList *
0x423A09: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x423A11: call    BaseExtraList_AddExtra
0x423A16: mov     ecx, [esp+18h+var_C]
0x423A1A: mov     large fs:0, ecx
0x423A21: pop     ecx
0x423A22: pop     edi
0x423A23: pop     esi
0x423A24: add     esp, 0Ch
0x423A27: retn    4
