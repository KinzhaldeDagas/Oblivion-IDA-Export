0x701D40: push    0FFFFFFFFh
0x701D42: push    offset ??1NiSourceTexture@@UAE@XZ_SEH
0x701D47: mov     eax, large fs:0
0x701D4D: push    eax
0x701D4E: push    ecx
0x701D4F: push    ebp
0x701D50: push    esi
0x701D51: push    edi
0x701D52: mov     eax, ds:0B30AACh
0x701D57: xor     eax, esp
0x701D59: push    eax
0x701D5A: lea     eax, [esp+20h+var_C]
0x701D5E: mov     large fs:0, eax
0x701D64: mov     esi, ecx
0x701D66: mov     [esp+20h+var_10], esi
0x701D6A: mov     dword ptr [esi], offset ??_7NiSourceTexture@@6B@; const NiSourceTexture::`vftable'
0x701D70: mov     eax, [esi+34h]
0x701D73: push    eax
0x701D74: mov     [esp+24h+var_4], 1
0x701D7C: call    FormHeapFree
0x701D81: mov     eax, [esi+38h]
0x701D84: push    eax
0x701D85: call    FormHeapFree
0x701D8A: mov     edi, [esi+3Ch]
0x701D8D: mov     ebp, ds:0A2807Ch
0x701D93: add     esp, 8
0x701D96: test    edi, edi
0x701D98: jz      short loc_701DB9
0x701D9A: lea     eax, [edi+4]
0x701D9D: push    eax; lpAddend
0x701D9E: call    ebp ; InterlockedDecrement
0x701DA0: test    eax, eax
0x701DA2: jnz     short loc_701DB2
0x701DA4: test    edi, edi
0x701DA6: jz      short loc_701DB2
0x701DA8: mov     edx, [edi]
0x701DAA: mov     eax, [edx]
0x701DAC: push    1
0x701DAE: mov     ecx, edi
0x701DB0: call    eax
0x701DB2: mov     dword ptr [esi+3Ch], 0
0x701DB9: mov     edi, [esi+3Ch]
0x701DBC: test    edi, edi
0x701DBE: mov     byte ptr [esp+20h+var_4], 0
0x701DC3: jz      short loc_701DDD
0x701DC5: lea     ecx, [edi+4]
0x701DC8: push    ecx; lpAddend
0x701DC9: call    ebp ; InterlockedDecrement
0x701DCB: test    eax, eax
0x701DCD: jnz     short loc_701DDD
0x701DCF: test    edi, edi
0x701DD1: jz      short loc_701DDD
0x701DD3: mov     edx, [edi]
0x701DD5: mov     eax, [edx]
0x701DD7: push    1
0x701DD9: mov     ecx, edi
0x701DDB: call    eax
0x701DDD: mov     ecx, esi; this
0x701DDF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x701DE7: call    ??1NiTexture@@UAE@XZ; NiTexture::~NiTexture(void)
0x701DEC: mov     ecx, [esp+20h+var_C]
0x701DF0: mov     large fs:0, ecx
0x701DF7: pop     ecx
0x701DF8: pop     edi
0x701DF9: pop     esi
0x701DFA: pop     ebp
0x701DFB: add     esp, 10h
0x701DFE: retn
