0x6E3070: push    0FFFFFFFFh
0x6E3072: push    offset SEH_8C8970
0x6E3077: mov     eax, large fs:0
0x6E307D: push    eax
0x6E307E: sub     esp, 8
0x6E3081: push    esi
0x6E3082: mov     eax, ds:0B30AACh
0x6E3087: xor     eax, esp
0x6E3089: push    eax
0x6E308A: lea     eax, [esp+1Ch+var_C]
0x6E308E: mov     large fs:0, eax
0x6E3094: mov     esi, ecx
0x6E3096: push    18h; Size
0x6E3098: call    FormHeapAlloc
0x6E309D: add     esp, 4
0x6E30A0: mov     [esp+1Ch+var_10], eax
0x6E30A4: test    eax, eax
0x6E30A6: mov     [esp+1Ch+var_4], 0
0x6E30AE: jz      short loc_6E30DC
0x6E30B0: mov     ecx, [esi+44h]
0x6E30B3: fld     dword ptr [ecx+0Ch]
0x6E30B6: push    ecx
0x6E30B7: fstp    [esp+20h+var_14]
0x6E30BB: mov     ecx, eax
0x6E30BD: fld     [esp+20h+var_14]
0x6E30C1: fstp    [esp+20h+var_20]; float
0x6E30C4: call    sub_6D29E0
0x6E30C9: mov     ecx, [esp+1Ch+var_C]
0x6E30CD: mov     large fs:0, ecx
0x6E30D4: pop     ecx
0x6E30D5: pop     esi
0x6E30D6: add     esp, 14h
0x6E30D9: retn    4
0x6E30DC: xor     eax, eax
0x6E30DE: mov     ecx, [esp+1Ch+var_C]
0x6E30E2: mov     large fs:0, ecx
0x6E30E9: pop     ecx
0x6E30EA: pop     esi
0x6E30EB: add     esp, 14h
0x6E30EE: retn    4
