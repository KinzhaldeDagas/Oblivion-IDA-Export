0x4BC7D0: push    0FFFFFFFFh
0x4BC7D2: push    offset SEH_4BC7D0
0x4BC7D7: mov     eax, large fs:0
0x4BC7DD: push    eax
0x4BC7DE: sub     esp, 10h
0x4BC7E1: push    esi
0x4BC7E2: push    edi
0x4BC7E3: mov     eax, ds:0B30AACh
0x4BC7E8: xor     eax, esp
0x4BC7EA: push    eax
0x4BC7EB: lea     eax, [esp+28h+var_C]
0x4BC7EF: mov     large fs:0, eax
0x4BC7F5: mov     esi, [esp+28h+arg_0]
0x4BC7F9: xor     edi, edi
0x4BC7FB: test    esi, esi
0x4BC7FD: jz      loc_4BC90A
0x4BC803: mov     eax, [esi]
0x4BC805: mov     edx, [eax+170h]
0x4BC80B: mov     ecx, esi
0x4BC80D: call    edx
0x4BC80F: cmp     byte ptr [eax+4], 29h ; ')'
0x4BC813: jnz     loc_4BC90A
0x4BC819: mov     eax, [esi]
0x4BC81B: mov     edx, [eax+170h]
0x4BC821: mov     ecx, esi
0x4BC823: call    edx
0x4BC825: fldz
0x4BC827: movzx   edx, word ptr [eax+28h]
0x4BC82B: fstp    [esp+28h+var_1C]
0x4BC82F: fld1
0x4BC831: lea     ecx, [esp+28h+var_1C]
0x4BC835: fst     [esp+28h+var_18]
0x4BC839: mov     [esp+28h+arg_0], edx
0x4BC83D: movzx   edx, word ptr [eax+24h]
0x4BC841: fstp    [esp+28h+var_14]
0x4BC845: fld     dword ptr ds:0A3D65Ch
0x4BC84B: fstp    [esp+28h+var_10]
0x4BC84F: fild    [esp+28h+arg_0]
0x4BC853: push    ecx; int
0x4BC854: movzx   ecx, word ptr [eax+26h]
0x4BC858: sub     esp, 0Ch
0x4BC85B: mov     [esp+38h+arg_0], ecx
0x4BC85F: fstp    [esp+38h+var_30]; float
0x4BC863: fild    [esp+38h+arg_0]
0x4BC867: mov     [esp+38h+arg_0], edx
0x4BC86B: fstp    [esp+38h+var_34]; float
0x4BC86F: fild    [esp+38h+arg_0]
0x4BC873: fstp    [esp+38h+var_38]; float
0x4BC876: call    sub_47EA60
0x4BC87B: push    1Ch; Size
0x4BC87D: mov     edi, eax
0x4BC87F: call    FormHeapAlloc
0x4BC884: add     esp, 14h
0x4BC887: mov     [esp+28h+arg_0], eax
0x4BC88B: test    eax, eax
0x4BC88D: mov     [esp+28h+var_4], 0
0x4BC895: jz      short loc_4BC8A0
0x4BC897: mov     ecx, eax
0x4BC899: call    sub_47F920
0x4BC89E: jmp     short loc_4BC8A2
0x4BC8A0: xor     eax, eax
0x4BC8A2: or      word ptr [eax+18h], 1
0x4BC8A7: push    eax; a2
0x4BC8A8: mov     ecx, edi; this
0x4BC8AA: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4BC8B2: call    sub_405680
0x4BC8B7: push    1Ch; Size
0x4BC8B9: call    FormHeapAlloc
0x4BC8BE: mov     esi, eax
0x4BC8C0: add     esp, 4
0x4BC8C3: mov     [esp+28h+arg_0], esi
0x4BC8C7: test    esi, esi
0x4BC8C9: mov     [esp+28h+var_4], 3
0x4BC8D1: jz      short loc_4BC8E8
0x4BC8D3: mov     ecx, esi; this
0x4BC8D5: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x4BC8DA: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x4BC8E0: mov     word ptr [esi+18h], 8
0x4BC8E6: jmp     short loc_4BC8EA
0x4BC8E8: xor     esi, esi
0x4BC8EA: mov     ax, [esi+18h]
0x4BC8EE: and     ax, 0FFD7h
0x4BC8F2: or      ax, 10h
0x4BC8F6: push    esi; a2
0x4BC8F7: mov     ecx, edi; this
0x4BC8F9: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4BC901: mov     [esi+18h], ax
0x4BC905: call    sub_405680
0x4BC90A: mov     eax, edi
0x4BC90C: mov     ecx, [esp+28h+var_C]
0x4BC910: mov     large fs:0, ecx
0x4BC917: pop     ecx
0x4BC918: pop     edi
0x4BC919: pop     esi
0x4BC91A: add     esp, 1Ch
0x4BC91D: retn
