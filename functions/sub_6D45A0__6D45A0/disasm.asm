0x6D45A0: push    0FFFFFFFFh
0x6D45A2: push    offset SEH_8C8970
0x6D45A7: mov     eax, large fs:0
0x6D45AD: push    eax
0x6D45AE: push    ecx
0x6D45AF: push    esi
0x6D45B0: push    edi
0x6D45B1: mov     eax, ds:0B30AACh
0x6D45B6: xor     eax, esp
0x6D45B8: push    eax
0x6D45B9: lea     eax, [esp+1Ch+var_C]
0x6D45BD: mov     large fs:0, eax
0x6D45C3: mov     edi, ecx
0x6D45C5: push    40h ; '@'; Size
0x6D45C7: call    FormHeapAlloc
0x6D45CC: mov     esi, eax
0x6D45CE: add     esp, 4
0x6D45D1: mov     [esp+1Ch+var_10], esi
0x6D45D5: test    esi, esi
0x6D45D7: mov     [esp+1Ch+var_4], 0
0x6D45DF: jz      short loc_6D45F0
0x6D45E1: mov     ecx, esi
0x6D45E3: call    sub_6EC630
0x6D45E8: mov     dword ptr [esi], offset ??_7NiVisController@@6B@; const NiVisController::`vftable'
0x6D45EE: jmp     short loc_6D45F2
0x6D45F0: xor     esi, esi
0x6D45F2: mov     eax, [esp+1Ch+arg_0]
0x6D45F6: push    eax
0x6D45F7: push    esi
0x6D45F8: mov     ecx, edi
0x6D45FA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6D4602: call    sub_6ECB60
0x6D4607: mov     eax, esi
0x6D4609: mov     ecx, [esp+1Ch+var_C]
0x6D460D: mov     large fs:0, ecx
0x6D4614: pop     ecx
0x6D4615: pop     edi
0x6D4616: pop     esi
0x6D4617: add     esp, 10h
0x6D461A: retn    4
