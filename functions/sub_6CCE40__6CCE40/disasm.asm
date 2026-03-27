0x6CCE40: push    0FFFFFFFFh
0x6CCE42: push    offset SEH_6CCE40
0x6CCE47: mov     eax, large fs:0
0x6CCE4D: push    eax
0x6CCE4E: push    ecx
0x6CCE4F: push    ebx
0x6CCE50: push    esi
0x6CCE51: push    edi
0x6CCE52: mov     eax, ds:0B30AACh
0x6CCE57: xor     eax, esp
0x6CCE59: push    eax
0x6CCE5A: lea     eax, [esp+20h+var_C]
0x6CCE5E: mov     large fs:0, eax
0x6CCE64: mov     esi, ecx
0x6CCE66: mov     [esp+20h+var_10], esi
0x6CCE6A: call    sub_6EBA00
0x6CCE6F: fld     [esp+20h+arg_4]
0x6CCE73: mov     al, byte ptr [esp+20h+arg_8]
0x6CCE77: fstp    dword ptr [esi+1Ch]
0x6CCE7A: fld     dword ptr ds:0A79F00h
0x6CCE80: xor     ebx, ebx
0x6CCE82: cmp     [esp+20h+arg_0], bl
0x6CCE86: fstp    dword ptr [esi+20h]
0x6CCE89: mov     cl, 80h ; '€'
0x6CCE8B: mov     [esi+0Ch], bl
0x6CCE8E: mov     [esi+10h], cl
0x6CCE91: mov     [esi+11h], cl
0x6CCE94: mov     dword ptr [esi], offset ??_7NiBlendInterpolator@@6B@; const NiBlendInterpolator::`vftable'
0x6CCE9A: mov     [esi+0Dh], al
0x6CCE9D: mov     [esi+0Eh], bl
0x6CCEA0: mov     byte ptr [esi+0Fh], 0FFh
0x6CCEA4: mov     [esi+14h], ebx
0x6CCEA7: mov     [esi+18h], ebx
0x6CCEAA: fld     dword ptr ds:0A7DEB4h
0x6CCEB0: fchs
0x6CCEB2: setnz   cl
0x6CCEB5: cmp     al, bl
0x6CCEB7: fstp    dword ptr [esi+24h]
0x6CCEBA: fld     dword ptr ds:0A7DEB4h
0x6CCEC0: mov     [esp+20h+var_4], ebx
0x6CCEC4: fchs
0x6CCEC6: fstp    dword ptr [esi+28h]
0x6CCEC9: fld     dword ptr ds:0A7DEB4h
0x6CCECF: mov     [esi+0Ch], cl
0x6CCED2: fchs
0x6CCED4: fstp    dword ptr [esi+2Ch]
0x6CCED7: jbe     short loc_6CCF2B
0x6CCED9: movzx   edi, al
0x6CCEDC: xor     ecx, ecx
0x6CCEDE: mov     eax, edi
0x6CCEE0: mov     edx, 18h
0x6CCEE5: mul     edx
0x6CCEE7: seto    cl
0x6CCEEA: neg     ecx
0x6CCEEC: or      ecx, eax
0x6CCEEE: xor     eax, eax
0x6CCEF0: add     ecx, 4
0x6CCEF3: setb    al
0x6CCEF6: neg     eax
0x6CCEF8: or      eax, ecx
0x6CCEFA: push    eax; Size
0x6CCEFB: call    FormHeapAlloc
0x6CCF00: add     esp, 4
0x6CCF03: mov     [esp+20h+arg_8], eax
0x6CCF07: cmp     eax, ebx
0x6CCF09: mov     byte ptr [esp+20h+var_4], 1
0x6CCF0E: jz      short loc_6CCF28
0x6CCF10: push    offset sub_7016A0; a5
0x6CCF15: push    offset sub_6CCDE0; a4
0x6CCF1A: push    edi; size
0x6CCF1B: lea     ebx, [eax+4]
0x6CCF1E: push    18h; a2
0x6CCF20: push    ebx; a1
0x6CCF21: mov     [eax], edi
0x6CCF23: call    ArrayConstructor
0x6CCF28: mov     [esi+14h], ebx
0x6CCF2B: mov     eax, esi
0x6CCF2D: mov     ecx, [esp+20h+var_C]
0x6CCF31: mov     large fs:0, ecx
0x6CCF38: pop     ecx
0x6CCF39: pop     edi
0x6CCF3A: pop     esi
0x6CCF3B: pop     ebx
0x6CCF3C: add     esp, 10h
0x6CCF3F: retn    0Ch
