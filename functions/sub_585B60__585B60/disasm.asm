0x585B60: push    0FFFFFFFFh
0x585B62: push    offset SEH_585B60
0x585B67: mov     eax, large fs:0
0x585B6D: push    eax
0x585B6E: push    ecx
0x585B6F: push    ebx
0x585B70: push    esi
0x585B71: push    edi
0x585B72: mov     eax, ds:0B30AACh
0x585B77: xor     eax, esp
0x585B79: push    eax
0x585B7A: lea     eax, [esp+20h+var_C]
0x585B7E: mov     large fs:0, eax
0x585B84: mov     esi, ecx
0x585B86: mov     [esp+20h+var_10], esi
0x585B8A: xor     ebx, ebx
0x585B8C: mov     eax, offset ??_7?$NiTList@V?$BSStringT@D@@@@6B@; const NiTList<BSStringT<char>>::`vftable'
0x585B91: mov     [esi+10h], ebx
0x585B94: mov     [esi+8], ebx
0x585B97: mov     [esi+0Ch], ebx
0x585B9A: mov     [esi+4], eax
0x585B9D: mov     [esp+20h+var_4], ebx
0x585BA1: mov     [esi+20h], ebx
0x585BA4: mov     [esi+18h], ebx
0x585BA7: mov     [esi+1Ch], ebx
0x585BAA: mov     [esi+14h], eax
0x585BAD: mov     [esi+32h], bl
0x585BB0: mov     [esi], ebx
0x585BB2: mov     [esi+2Ch], ebx
0x585BB5: mov     [esi+31h], bl
0x585BB8: mov     [esi+24h], ebx
0x585BBB: mov     edi, ds:0B13994h
0x585BC1: mov     byte ptr [esp+20h+var_4], 1
0x585BC6: add     edi, 0FFFFFFFFh
0x585BC9: call    FontManager_GetSingleton
0x585BCE: mov     eax, [eax+edi*4]
0x585BD1: mov     eax, [eax+38h]
0x585BD4: cmp     eax, ebx
0x585BD6: jz      short loc_585BDC
0x585BD8: fld     dword ptr [eax]
0x585BDA: jmp     short loc_585BDE
0x585BDC: fldz
0x585BDE: fstp    [esp+20h+var_10]
0x585BE2: fld     [esp+20h+var_10]
0x585BE6: fadd    qword ptr ds:0A30E48h
0x585BEC: call    Double_To_SInt32
0x585BF1: mov     ds:0B13980h, eax
0x585BF6: mov     eax, esi
0x585BF8: mov     ecx, [esp+20h+var_C]
0x585BFC: mov     large fs:0, ecx
0x585C03: pop     ecx
0x585C04: pop     edi
0x585C05: pop     esi
0x585C06: pop     ebx
0x585C07: add     esp, 10h
0x585C0A: retn
