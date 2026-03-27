0x685FC0: push    0FFFFFFFFh
0x685FC2: push    offset ??0PathHigh@@QAE@XZ_SEH
0x685FC7: mov     eax, large fs:0
0x685FCD: push    eax
0x685FCE: push    ecx
0x685FCF: push    esi
0x685FD0: mov     eax, ds:0B30AACh
0x685FD5: xor     eax, esp
0x685FD7: push    eax
0x685FD8: lea     eax, [esp+18h+var_C]
0x685FDC: mov     large fs:0, eax
0x685FE2: mov     esi, ecx
0x685FE4: mov     [esp+18h+var_10], esi
0x685FE8: call    ??0PathMiddleHigh@@QAE@XZ; PathMiddleHigh::PathMiddleHigh(void)
0x685FED: xor     eax, eax
0x685FEF: mov     dword ptr [esi], offset ??_7PathHigh@@6B@; const PathHigh::`vftable'
0x685FF5: mov     [esp+18h+var_4], eax
0x685FF9: mov     [esi+28h], eax
0x685FFC: mov     cl, 1
0x685FFE: mov     [esi+34h], eax
0x686001: mov     [esi+38h], eax
0x686004: cmp     ds:0B15834h, al
0x68600A: mov     byte ptr [esp+18h+var_4], cl
0x68600E: jnz     short loc_68601D
0x686010: cmp     ds:0B1581Ch, al
0x686016: mov     ds:0B3C08Ah, al
0x68601B: jz      short loc_686023
0x68601D: mov     ds:0B3C08Ah, cl
0x686023: mov     ecx, esi
0x686025: mov     [esi+30h], eax
0x686028: call    sub_684EC0
0x68602D: mov     eax, esi
0x68602F: mov     ecx, [esp+18h+var_C]
0x686033: mov     large fs:0, ecx
0x68603A: pop     ecx
0x68603B: pop     esi
0x68603C: add     esp, 10h
0x68603F: retn
