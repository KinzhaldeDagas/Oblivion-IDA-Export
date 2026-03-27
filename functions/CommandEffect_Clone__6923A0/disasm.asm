0x6923A0: push    0FFFFFFFFh
0x6923A2: push    offset SEH_8C8970
0x6923A7: mov     eax, large fs:0
0x6923AD: push    eax
0x6923AE: push    ecx
0x6923AF: push    esi
0x6923B0: push    edi
0x6923B1: mov     eax, ds:0B30AACh
0x6923B6: xor     eax, esp
0x6923B8: push    eax
0x6923B9: lea     eax, [esp+1Ch+var_C]
0x6923BD: mov     large fs:0, eax
0x6923C3: mov     esi, ecx
0x6923C5: push    38h ; '8'; Size
0x6923C7: call    FormHeapAlloc
0x6923CC: mov     edi, eax
0x6923CE: add     esp, 4
0x6923D1: mov     [esp+1Ch+var_10], edi
0x6923D5: test    edi, edi
0x6923D7: mov     [esp+1Ch+var_4], 0
0x6923DF: jz      short loc_6923FC
0x6923E1: mov     eax, [esi+0Ch]
0x6923E4: mov     ecx, [esi+8]
0x6923E7: mov     edx, [esi+24h]
0x6923EA: push    eax
0x6923EB: push    ecx
0x6923EC: push    edx
0x6923ED: mov     ecx, edi; this
0x6923EF: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6923F4: mov     dword ptr [edi], offset ??_7CommandEffect@@6B@; const CommandEffect::`vftable'
0x6923FA: jmp     short loc_6923FE
0x6923FC: xor     edi, edi
0x6923FE: mov     eax, [esi]
0x692400: mov     edx, [eax+2Ch]
0x692403: push    edi
0x692404: mov     ecx, esi
0x692406: mov     [esp+20h+var_4], 0FFFFFFFFh
0x69240E: call    edx
0x692410: mov     eax, edi
0x692412: mov     ecx, dword ptr [esp+1Ch+var_C]
0x692416: mov     large fs:0, ecx
0x69241D: pop     ecx
0x69241E: pop     edi
0x69241F: pop     esi
0x692420: add     esp, 10h
0x692423: retn
