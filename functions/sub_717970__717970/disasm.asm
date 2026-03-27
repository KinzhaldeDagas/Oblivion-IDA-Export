0x717970: push    0FFFFFFFFh
0x717972: push    offset SEH_8C8970
0x717977: mov     eax, large fs:0
0x71797D: push    eax
0x71797E: push    ecx
0x71797F: push    esi
0x717980: push    edi
0x717981: mov     eax, ds:0B30AACh
0x717986: xor     eax, esp
0x717988: push    eax
0x717989: lea     eax, [esp+1Ch+var_C]
0x71798D: mov     large fs:0, eax
0x717993: mov     edi, ecx
0x717995: push    0C0h ; 'À'; Size
0x71799A: call    FormHeapAlloc
0x71799F: mov     esi, eax
0x7179A1: add     esp, 4
0x7179A4: mov     [esp+1Ch+var_10], esi
0x7179A8: test    esi, esi
0x7179AA: mov     [esp+1Ch+var_4], 0
0x7179B2: jz      short loc_7179C3
0x7179B4: mov     ecx, esi
0x7179B6: call    NiGeometry__NiGeometry_0
0x7179BB: mov     dword ptr [esi], offset ??_7NiLines@@6B@; const NiLines::`vftable'
0x7179C1: jmp     short loc_7179C5
0x7179C3: xor     esi, esi
0x7179C5: mov     eax, [esp+1Ch+arg_0]
0x7179C9: push    eax
0x7179CA: push    esi
0x7179CB: mov     ecx, edi
0x7179CD: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7179D5: call    sub_723020
0x7179DA: mov     eax, esi
0x7179DC: mov     ecx, [esp+1Ch+var_C]
0x7179E0: mov     large fs:0, ecx
0x7179E7: pop     ecx
0x7179E8: pop     edi
0x7179E9: pop     esi
0x7179EA: add     esp, 10h
0x7179ED: retn    4
