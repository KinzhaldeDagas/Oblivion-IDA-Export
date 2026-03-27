0x8C5210: push    0FFFFFFFFh
0x8C5212: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x8C5217: mov     eax, large fs:0
0x8C521D: push    eax
0x8C521E: push    ecx
0x8C521F: push    ebx
0x8C5220: push    ebp
0x8C5221: push    esi
0x8C5222: push    edi
0x8C5223: mov     eax, ds:0B30AACh
0x8C5228: xor     eax, esp
0x8C522A: push    eax
0x8C522B: lea     eax, [esp+24h+var_C]
0x8C522F: mov     large fs:0, eax
0x8C5235: mov     edi, ecx
0x8C5237: push    offset stru_BA7C80; lpCriticalSection
0x8C523C: call    dword ptr ds:0A2806Ch
0x8C5242: call    dword ptr ds:0A2808Ch
0x8C5248: mov     ebp, 1
0x8C524D: add     ds:0BA7CFCh, ebp
0x8C5253: push    14h; Size
0x8C5255: mov     ds:0BA7CF8h, eax
0x8C525A: call    FormHeapAlloc
0x8C525F: mov     esi, eax
0x8C5261: add     esp, 4
0x8C5264: mov     [esp+24h+var_10], esi
0x8C5268: xor     ebx, ebx
0x8C526A: cmp     esi, ebx
0x8C526C: mov     [esp+24h+var_4], ebx
0x8C5270: jz      short loc_8C52A5
0x8C5272: mov     ecx, esi; this
0x8C5274: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C5279: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C527F: mov     [esi+0Ch], ebx
0x8C5282: mov     [esi+10h], ebx
0x8C5285: add     ds:0BA7D70h, ebp
0x8C528B: mov     dword ptr [esi], offset ??_7bhkShapeCollection@@6B@; const bhkShapeCollection::`vftable'
0x8C5291: add     ds:0BA816Ch, ebp
0x8C5297: mov     dword ptr [esi], offset ??_7bhkPackedNiTriStripsShape@@6B@; const bhkPackedNiTriStripsShape::`vftable'
0x8C529D: add     ds:0BA8120h, ebp
0x8C52A3: jmp     short loc_8C52A7
0x8C52A5: xor     esi, esi
0x8C52A7: mov     ecx, [esp+24h+arg_0]
0x8C52AB: mov     eax, [edi]
0x8C52AD: mov     edx, [eax+80h]
0x8C52B3: push    ecx
0x8C52B4: push    esi
0x8C52B5: mov     ecx, edi
0x8C52B7: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8C52BF: call    edx
0x8C52C1: sub     ds:0BA7CFCh, ebp
0x8C52C7: jnz     short loc_8C52CF
0x8C52C9: mov     ds:0BA7CF8h, ebx
0x8C52CF: push    offset stru_BA7C80; lpCriticalSection
0x8C52D4: call    dword ptr ds:0A28074h
0x8C52DA: mov     eax, esi
0x8C52DC: mov     ecx, dword ptr [esp+24h+var_C]
0x8C52E0: mov     large fs:0, ecx
0x8C52E7: pop     ecx
0x8C52E8: pop     edi
0x8C52E9: pop     esi
0x8C52EA: pop     ebp
0x8C52EB: pop     ebx
0x8C52EC: add     esp, 10h
0x8C52EF: retn    4
