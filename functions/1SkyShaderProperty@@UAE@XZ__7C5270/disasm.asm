0x7C5270: push    0FFFFFFFFh
0x7C5272: push    offset ??1SkyShaderProperty@@UAE@XZ_SEH
0x7C5277: mov     eax, large fs:0
0x7C527D: push    eax
0x7C527E: push    ecx
0x7C527F: push    ebp
0x7C5280: push    esi
0x7C5281: push    edi
0x7C5282: mov     eax, ds:0B30AACh
0x7C5287: xor     eax, esp
0x7C5289: push    eax
0x7C528A: lea     eax, [esp+20h+var_C]
0x7C528E: mov     large fs:0, eax
0x7C5294: mov     esi, ecx
0x7C5296: mov     [esp+20h+var_10], esi
0x7C529A: mov     dword ptr [esi], offset ??_7SkyShaderProperty@@6B@; const SkyShaderProperty::`vftable'
0x7C52A0: mov     edi, [esi+7Ch]
0x7C52A3: test    edi, edi
0x7C52A5: mov     ebp, ds:0A2807Ch
0x7C52AB: mov     [esp+20h+var_4], 1
0x7C52B3: jz      short loc_7C52D4
0x7C52B5: lea     eax, [edi+4]
0x7C52B8: push    eax; lpAddend
0x7C52B9: call    ebp ; InterlockedDecrement
0x7C52BB: test    eax, eax
0x7C52BD: jnz     short loc_7C52CD
0x7C52BF: test    edi, edi
0x7C52C1: jz      short loc_7C52CD
0x7C52C3: mov     edx, [edi]
0x7C52C5: mov     eax, [edx]
0x7C52C7: push    1
0x7C52C9: mov     ecx, edi
0x7C52CB: call    eax
0x7C52CD: mov     dword ptr [esi+7Ch], 0
0x7C52D4: fldz
0x7C52D6: mov     dword ptr [esi+88h], 8
0x7C52E0: fstp    dword ptr [esi+80h]
0x7C52E6: mov     word ptr [esi+84h], 0
0x7C52EF: mov     edi, [esi+7Ch]
0x7C52F2: test    edi, edi
0x7C52F4: mov     byte ptr [esp+20h+var_4], 0
0x7C52F9: jz      short loc_7C5313
0x7C52FB: lea     ecx, [edi+4]
0x7C52FE: push    ecx; lpAddend
0x7C52FF: call    ebp ; InterlockedDecrement
0x7C5301: test    eax, eax
0x7C5303: jnz     short loc_7C5313
0x7C5305: test    edi, edi
0x7C5307: jz      short loc_7C5313
0x7C5309: mov     edx, [edi]
0x7C530B: mov     eax, [edx]
0x7C530D: push    1
0x7C530F: mov     ecx, edi
0x7C5311: call    eax
0x7C5313: mov     ecx, esi; this
0x7C5315: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7C531D: call    ??1BSShaderProperty@@UAE@XZ; BSShaderProperty::~BSShaderProperty(void)
0x7C5322: mov     ecx, [esp+20h+var_C]
0x7C5326: mov     large fs:0, ecx
0x7C532D: pop     ecx
0x7C532E: pop     edi
0x7C532F: pop     esi
0x7C5330: pop     ebp
0x7C5331: add     esp, 10h
0x7C5334: retn
