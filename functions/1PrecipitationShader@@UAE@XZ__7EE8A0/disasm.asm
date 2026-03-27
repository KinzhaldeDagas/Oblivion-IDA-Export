0x7EE8A0: push    0FFFFFFFFh
0x7EE8A2: push    offset ??1PrecipitationShader@@UAE@XZ_SEH
0x7EE8A7: mov     eax, large fs:0
0x7EE8AD: push    eax
0x7EE8AE: push    ecx
0x7EE8AF: push    ebp
0x7EE8B0: push    esi
0x7EE8B1: push    edi
0x7EE8B2: mov     eax, ds:0B30AACh
0x7EE8B7: xor     eax, esp
0x7EE8B9: push    eax
0x7EE8BA: lea     eax, [esp+20h+var_C]
0x7EE8BE: mov     large fs:0, eax
0x7EE8C4: mov     [esp+20h+var_10], ecx
0x7EE8C8: mov     dword ptr [ecx], offset ??_7PrecipitationShader@@6B@; const PrecipitationShader::`vftable'
0x7EE8CE: mov     ebp, ds:0A2807Ch
0x7EE8D4: mov     [esp+20h+var_4], 1
0x7EE8DC: mov     edi, offset dword_B466E0
0x7EE8E1: mov     esi, [edi]
0x7EE8E3: test    esi, esi
0x7EE8E5: jz      short loc_7EE905
0x7EE8E7: lea     eax, [esi+4]
0x7EE8EA: push    eax; lpAddend
0x7EE8EB: call    ebp ; InterlockedDecrement
0x7EE8ED: test    eax, eax
0x7EE8EF: jnz     short loc_7EE8FF
0x7EE8F1: test    esi, esi
0x7EE8F3: jz      short loc_7EE8FF
0x7EE8F5: mov     edx, [esi]
0x7EE8F7: mov     eax, [edx]
0x7EE8F9: push    1
0x7EE8FB: mov     ecx, esi
0x7EE8FD: call    eax
0x7EE8FF: mov     dword ptr [edi], 0
0x7EE905: add     edi, 4
0x7EE908: cmp     edi, offset unk_B466F0
0x7EE90E: jl      short loc_7EE8E1
0x7EE910: mov     edi, offset dword_B46708
0x7EE915: mov     esi, [edi]
0x7EE917: test    esi, esi
0x7EE919: jz      short loc_7EE939
0x7EE91B: lea     ecx, [esi+4]
0x7EE91E: push    ecx; lpAddend
0x7EE91F: call    ebp ; InterlockedDecrement
0x7EE921: test    eax, eax
0x7EE923: jnz     short loc_7EE933
0x7EE925: test    esi, esi
0x7EE927: jz      short loc_7EE933
0x7EE929: mov     edx, [esi]
0x7EE92B: mov     eax, [edx]
0x7EE92D: push    1
0x7EE92F: mov     ecx, esi
0x7EE931: call    eax
0x7EE933: mov     dword ptr [edi], 0
0x7EE939: add     edi, 4
0x7EE93C: cmp     edi, offset dword_B46710
0x7EE942: jl      short loc_7EE915
0x7EE944: mov     eax, ds:0B46704h
0x7EE949: or      edi, 0FFFFFFFFh
0x7EE94C: test    eax, eax
0x7EE94E: jz      short loc_7EE966
0x7EE950: add     [eax+60h], edi
0x7EE953: mov     ecx, eax
0x7EE955: jnz     short loc_7EE95C
0x7EE957: call    sub_7604D0
0x7EE95C: mov     dword ptr ds:0B46704h, 0
0x7EE966: mov     ecx, [esp+20h+var_10]
0x7EE96A: mov     esi, [ecx+0ACh]
0x7EE970: test    esi, esi
0x7EE972: mov     byte ptr [esp+20h+var_4], 0
0x7EE977: jz      short loc_7EE991
0x7EE979: lea     edx, [esi+4]
0x7EE97C: push    edx; lpAddend
0x7EE97D: call    ebp ; InterlockedDecrement
0x7EE97F: test    eax, eax
0x7EE981: jnz     short loc_7EE991
0x7EE983: test    esi, esi
0x7EE985: jz      short loc_7EE991
0x7EE987: mov     eax, [esi]
0x7EE989: mov     edx, [eax]
0x7EE98B: push    1
0x7EE98D: mov     ecx, esi
0x7EE98F: call    edx
0x7EE991: mov     ecx, [esp+20h+var_10]; this
0x7EE995: mov     [esp+20h+var_4], edi
0x7EE999: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x7EE99E: mov     ecx, dword ptr [esp+20h+var_C]
0x7EE9A2: mov     large fs:0, ecx
0x7EE9A9: pop     ecx
0x7EE9AA: pop     edi
0x7EE9AB: pop     esi
0x7EE9AC: pop     ebp
0x7EE9AD: add     esp, 10h
0x7EE9B0: retn
