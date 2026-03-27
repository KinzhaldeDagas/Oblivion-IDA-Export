0x6D27A0: push    0FFFFFFFFh
0x6D27A2: push    offset SEH_8C8970
0x6D27A7: mov     eax, large fs:0
0x6D27AD: push    eax
0x6D27AE: push    ecx
0x6D27AF: push    esi
0x6D27B0: push    edi
0x6D27B1: mov     eax, ds:0B30AACh
0x6D27B6: xor     eax, esp
0x6D27B8: push    eax
0x6D27B9: lea     eax, [esp+1Ch+var_C]
0x6D27BD: mov     large fs:0, eax
0x6D27C3: mov     edi, ecx
0x6D27C5: push    34h ; '4'; Size
0x6D27C7: call    FormHeapAlloc
0x6D27CC: mov     esi, eax
0x6D27CE: add     esp, 4
0x6D27D1: mov     [esp+1Ch+var_10], esi
0x6D27D5: test    esi, esi
0x6D27D7: mov     [esp+1Ch+var_4], 0
0x6D27DF: jz      short loc_6D27F9
0x6D27E1: mov     ecx, esi
0x6D27E3: call    sub_6CC4E0
0x6D27E8: mov     dword ptr [esi], offset ??_7NiBlendFloatInterpolator@@6B@; const NiBlendFloatInterpolator::`vftable'
0x6D27EE: fld     dword ptr ds:0A7C6B0h
0x6D27F4: fstp    dword ptr [esi+30h]
0x6D27F7: jmp     short loc_6D27FB
0x6D27F9: xor     esi, esi
0x6D27FB: mov     eax, [esp+1Ch+arg_0]
0x6D27FF: push    eax
0x6D2800: push    esi
0x6D2801: mov     ecx, edi
0x6D2803: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6D280B: call    sub_6CD3D0
0x6D2810: fld     dword ptr [edi+30h]
0x6D2813: fstp    dword ptr [esi+30h]
0x6D2816: mov     eax, esi
0x6D2818: mov     ecx, [esp+1Ch+var_C]
0x6D281C: mov     large fs:0, ecx
0x6D2823: pop     ecx
0x6D2824: pop     edi
0x6D2825: pop     esi
0x6D2826: add     esp, 10h
0x6D2829: retn    4
