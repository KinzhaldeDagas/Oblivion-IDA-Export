0x7EB110: push    0FFFFFFFFh
0x7EB112: push    offset ??1GethitShader@@UAE@XZ_SEH
0x7EB117: mov     eax, large fs:0
0x7EB11D: push    eax
0x7EB11E: push    ecx
0x7EB11F: push    ebx
0x7EB120: push    ebp
0x7EB121: push    esi
0x7EB122: push    edi
0x7EB123: mov     eax, ds:0B30AACh
0x7EB128: xor     eax, esp
0x7EB12A: push    eax
0x7EB12B: lea     eax, [esp+24h+var_C]
0x7EB12F: mov     large fs:0, eax
0x7EB135: mov     ebp, ecx
0x7EB137: mov     [esp+24h+var_10], ebp
0x7EB13B: mov     dword ptr [ebp+0], offset ??_7GethitShader@@6B@; const GethitShader::`vftable'
0x7EB142: mov     [esp+24h+var_4], 4
0x7EB14A: lea     edi, [ebp+0A0h]
0x7EB150: mov     ebx, 3
0x7EB155: mov     esi, [edi-0Ch]
0x7EB158: test    esi, esi
0x7EB15A: jz      short loc_7EB17F
0x7EB15C: lea     eax, [esi+4]
0x7EB15F: push    eax; lpAddend
0x7EB160: call    dword ptr ds:0A2807Ch
0x7EB166: test    eax, eax
0x7EB168: jnz     short loc_7EB178
0x7EB16A: test    esi, esi
0x7EB16C: jz      short loc_7EB178
0x7EB16E: mov     edx, [esi]
0x7EB170: mov     eax, [edx]
0x7EB172: push    1
0x7EB174: mov     ecx, esi
0x7EB176: call    eax
0x7EB178: mov     dword ptr [edi-0Ch], 0
0x7EB17F: mov     esi, [edi]
0x7EB181: test    esi, esi
0x7EB183: jz      short loc_7EB1A7
0x7EB185: lea     ecx, [esi+4]
0x7EB188: push    ecx; lpAddend
0x7EB189: call    dword ptr ds:0A2807Ch
0x7EB18F: test    eax, eax
0x7EB191: jnz     short loc_7EB1A1
0x7EB193: test    esi, esi
0x7EB195: jz      short loc_7EB1A1
0x7EB197: mov     edx, [esi]
0x7EB199: mov     eax, [edx]
0x7EB19B: push    1
0x7EB19D: mov     ecx, esi
0x7EB19F: call    eax
0x7EB1A1: mov     dword ptr [edi], 0
0x7EB1A7: add     edi, 4
0x7EB1AA: sub     ebx, 1
0x7EB1AD: jnz     short loc_7EB155
0x7EB1AF: mov     ecx, [ebp+0B0h]
0x7EB1B5: or      esi, 0FFFFFFFFh
0x7EB1B8: test    ecx, ecx
0x7EB1BA: mov     byte ptr [esp+24h+var_4], 3
0x7EB1BF: jz      short loc_7EB1CB
0x7EB1C1: add     [ecx+60h], esi
0x7EB1C4: jnz     short loc_7EB1CB
0x7EB1C6: call    sub_7604D0
0x7EB1CB: mov     ecx, [ebp+0ACh]
0x7EB1D1: test    ecx, ecx
0x7EB1D3: mov     byte ptr [esp+24h+var_4], 2
0x7EB1D8: jz      short loc_7EB1E4
0x7EB1DA: add     [ecx+60h], esi
0x7EB1DD: jnz     short loc_7EB1E4
0x7EB1DF: call    sub_7604D0
0x7EB1E4: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7EB1E9: push    3; int
0x7EB1EB: push    4; unsigned int
0x7EB1ED: lea     eax, [ebp+0A0h]
0x7EB1F3: push    eax; void *
0x7EB1F4: mov     byte ptr [esp+34h+var_4], 1
0x7EB1F9: call    $LN21
0x7EB1FE: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7EB203: push    3; int
0x7EB205: push    4; unsigned int
0x7EB207: lea     ecx, [ebp+94h]
0x7EB20D: push    ecx; void *
0x7EB20E: mov     byte ptr [esp+34h+var_4], 0
0x7EB213: call    $LN21
0x7EB218: mov     ecx, ebp; this
0x7EB21A: mov     [esp+24h+var_4], esi
0x7EB21E: call    ??1BSImageSpaceShader@@UAE@XZ; BSImageSpaceShader::~BSImageSpaceShader(void)
0x7EB223: mov     ecx, [esp+24h+var_C]
0x7EB227: mov     large fs:0, ecx
0x7EB22E: pop     ecx
0x7EB22F: pop     edi
0x7EB230: pop     esi
0x7EB231: pop     ebp
0x7EB232: pop     ebx
0x7EB233: add     esp, 10h
0x7EB236: retn
