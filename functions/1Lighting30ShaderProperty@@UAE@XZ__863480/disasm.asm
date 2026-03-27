0x863480: push    0FFFFFFFFh
0x863482: push    offset ??1Lighting30ShaderProperty@@UAE@XZ_SEH
0x863487: mov     eax, large fs:0
0x86348D: push    eax
0x86348E: push    ecx
0x86348F: push    ebp
0x863490: push    esi
0x863491: push    edi
0x863492: mov     eax, ds:0B30AACh
0x863497: xor     eax, esp
0x863499: push    eax
0x86349A: lea     eax, [esp+20h+var_C]
0x86349E: mov     large fs:0, eax
0x8634A4: mov     edi, ecx
0x8634A6: mov     [esp+20h+var_10], edi
0x8634AA: mov     dword ptr [edi], offset ??_7Lighting30ShaderProperty@@6B@; const Lighting30ShaderProperty::`vftable'
0x8634B0: mov     esi, [edi+104h]
0x8634B6: test    esi, esi
0x8634B8: mov     ebp, ds:0A2807Ch
0x8634BE: mov     [esp+20h+var_4], 1
0x8634C6: jz      short loc_8634EA
0x8634C8: lea     eax, [esi+4]
0x8634CB: push    eax; lpAddend
0x8634CC: call    ebp ; InterlockedDecrement
0x8634CE: test    eax, eax
0x8634D0: jnz     short loc_8634E0
0x8634D2: test    esi, esi
0x8634D4: jz      short loc_8634E0
0x8634D6: mov     edx, [esi]
0x8634D8: mov     eax, [edx]
0x8634DA: push    1
0x8634DC: mov     ecx, esi
0x8634DE: call    eax
0x8634E0: mov     dword ptr [edi+104h], 0
0x8634EA: mov     esi, [edi+104h]
0x8634F0: test    esi, esi
0x8634F2: mov     byte ptr [esp+20h+var_4], 0
0x8634F7: jz      short loc_863511
0x8634F9: lea     ecx, [esi+4]
0x8634FC: push    ecx; lpAddend
0x8634FD: call    ebp ; InterlockedDecrement
0x8634FF: test    eax, eax
0x863501: jnz     short loc_863511
0x863503: test    esi, esi
0x863505: jz      short loc_863511
0x863507: mov     edx, [esi]
0x863509: mov     eax, [edx]
0x86350B: push    1
0x86350D: mov     ecx, esi
0x86350F: call    eax
0x863511: mov     ecx, edi; this
0x863513: mov     [esp+20h+var_4], 0FFFFFFFFh
0x86351B: call    ??1BSShaderPPLightingProperty@@UAE@XZ; BSShaderPPLightingProperty::~BSShaderPPLightingProperty(void)
0x863520: mov     ecx, [esp+20h+var_C]
0x863524: mov     large fs:0, ecx
0x86352B: pop     ecx
0x86352C: pop     edi
0x86352D: pop     esi
0x86352E: pop     ebp
0x86352F: add     esp, 10h
0x863532: retn
