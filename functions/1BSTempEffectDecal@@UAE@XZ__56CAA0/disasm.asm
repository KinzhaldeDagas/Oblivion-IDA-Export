0x56CAA0: push    0FFFFFFFFh
0x56CAA2: push    offset ??1BSTempEffectDecal@@UAE@XZ_SEH
0x56CAA7: mov     eax, large fs:0
0x56CAAD: push    eax
0x56CAAE: push    ecx
0x56CAAF: push    ebx
0x56CAB0: push    esi
0x56CAB1: push    edi
0x56CAB2: mov     eax, ds:0B30AACh
0x56CAB7: xor     eax, esp
0x56CAB9: push    eax
0x56CABA: lea     eax, [esp+20h+var_C]
0x56CABE: mov     large fs:0, eax
0x56CAC4: mov     edi, ecx
0x56CAC6: mov     [esp+20h+var_10], edi
0x56CACA: mov     dword ptr [edi], offset ??_7BSTempEffectDecal@@6B@; const BSTempEffectDecal::`vftable'
0x56CAD0: mov     eax, [edi+18h]
0x56CAD3: mov     ecx, [eax+48h]
0x56CAD6: test    ecx, ecx
0x56CAD8: mov     [esp+20h+var_4], 0
0x56CAE0: jz      short loc_56CAE8
0x56CAE2: push    eax
0x56CAE3: call    sub_7EE740
0x56CAE8: mov     esi, [edi+18h]
0x56CAEB: mov     ebx, [esi+48h]
0x56CAEE: add     esi, 48h ; 'H'
0x56CAF1: test    ebx, ebx
0x56CAF3: jz      short loc_56CB17
0x56CAF5: lea     eax, [ebx+4]
0x56CAF8: push    eax; lpAddend
0x56CAF9: call    dword ptr ds:0A2807Ch
0x56CAFF: test    eax, eax
0x56CB01: jnz     short loc_56CB11
0x56CB03: test    ebx, ebx
0x56CB05: jz      short loc_56CB11
0x56CB07: mov     edx, [ebx]
0x56CB09: mov     eax, [edx]
0x56CB0B: push    1
0x56CB0D: mov     ecx, ebx
0x56CB0F: call    eax
0x56CB11: mov     dword ptr [esi], 0
0x56CB17: mov     esi, [edi+18h]
0x56CB1A: test    esi, esi
0x56CB1C: jz      short loc_56CB2E
0x56CB1E: mov     ecx, esi
0x56CB20: call    sub_56C0F0
0x56CB25: push    esi
0x56CB26: call    FormHeapFree
0x56CB2B: add     esp, 4
0x56CB2E: mov     ecx, edi
0x56CB30: mov     [esp+20h+var_4], 0FFFFFFFFh
0x56CB38: call    BSTempEffect_destr
0x56CB3D: mov     ecx, dword ptr [esp+20h+var_C]
0x56CB41: mov     large fs:0, ecx
0x56CB48: pop     ecx
0x56CB49: pop     edi
0x56CB4A: pop     esi
0x56CB4B: pop     ebx
0x56CB4C: add     esp, 10h
0x56CB4F: retn
