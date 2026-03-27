0x73BCA0: push    0FFFFFFFFh
0x73BCA2: push    offset ??1NiTextureEffect@@UAE@XZ_SEH
0x73BCA7: mov     eax, large fs:0
0x73BCAD: push    eax
0x73BCAE: push    ecx
0x73BCAF: push    esi
0x73BCB0: push    edi
0x73BCB1: mov     eax, ds:0B30AACh
0x73BCB6: xor     eax, esp
0x73BCB8: push    eax
0x73BCB9: lea     eax, [esp+1Ch+var_C]
0x73BCBD: mov     large fs:0, eax
0x73BCC3: mov     edi, ecx
0x73BCC5: mov     [esp+1Ch+var_10], edi
0x73BCC9: mov     dword ptr [edi], offset ??_7NiTextureEffect@@6B@; const NiTextureEffect::`vftable'
0x73BCCF: push    edi
0x73BCD0: mov     [esp+20h+var_4], 1
0x73BCD8: call    sub_701480
0x73BCDD: mov     esi, [edi+13Ch]
0x73BCE3: add     esp, 4
0x73BCE6: test    esi, esi
0x73BCE8: mov     byte ptr [esp+1Ch+var_4], 0
0x73BCED: jz      short loc_73BD0B
0x73BCEF: lea     eax, [esi+4]
0x73BCF2: push    eax; lpAddend
0x73BCF3: call    dword ptr ds:0A2807Ch
0x73BCF9: test    eax, eax
0x73BCFB: jnz     short loc_73BD0B
0x73BCFD: test    esi, esi
0x73BCFF: jz      short loc_73BD0B
0x73BD01: mov     edx, [esi]
0x73BD03: mov     eax, [edx]
0x73BD05: push    1
0x73BD07: mov     ecx, esi
0x73BD09: call    eax
0x73BD0B: mov     ecx, edi; this
0x73BD0D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x73BD15: call    ??1NiDynamicEffect@@UAE@XZ; NiDynamicEffect::~NiDynamicEffect(void)
0x73BD1A: mov     ecx, dword ptr [esp+1Ch+var_C]
0x73BD1E: mov     large fs:0, ecx
0x73BD25: pop     ecx
0x73BD26: pop     edi
0x73BD27: pop     esi
0x73BD28: add     esp, 10h
0x73BD2B: retn
