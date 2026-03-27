0x8C4210: push    0FFFFFFFFh
0x8C4212: push    offset SEH_8C62B0
0x8C4217: mov     eax, large fs:0
0x8C421D: push    eax
0x8C421E: push    ecx
0x8C421F: push    esi
0x8C4220: mov     eax, ds:0B30AACh
0x8C4225: xor     eax, esp
0x8C4227: push    eax
0x8C4228: lea     eax, [esp+18h+var_C]
0x8C422C: mov     large fs:0, eax
0x8C4232: push    14h; Size
0x8C4234: call    FormHeapAlloc
0x8C4239: mov     esi, eax
0x8C423B: add     esp, 4
0x8C423E: mov     [esp+18h+var_10], esi
0x8C4242: test    esi, esi
0x8C4244: mov     [esp+18h+var_4], 0
0x8C424C: jz      short loc_8C429F
0x8C424E: mov     ecx, esi; this
0x8C4250: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C4255: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C425B: mov     eax, 1
0x8C4260: mov     dword ptr [esi+0Ch], 0
0x8C4267: mov     dword ptr [esi+10h], 0
0x8C426E: add     ds:0BA7D70h, eax
0x8C4274: mov     dword ptr [esi], offset ??_7bhkHeightFieldShape@@6B@; const bhkHeightFieldShape::`vftable'
0x8C427A: add     ds:0BA8400h, eax
0x8C4280: mov     dword ptr [esi], offset ??_7bhkPlaneShape@@6B@; const bhkPlaneShape::`vftable'
0x8C4286: add     ds:0BA810Ch, eax
0x8C428C: mov     eax, esi
0x8C428E: mov     ecx, [esp+18h+var_C]
0x8C4292: mov     large fs:0, ecx
0x8C4299: pop     ecx
0x8C429A: pop     esi
0x8C429B: add     esp, 10h
0x8C429E: retn
0x8C429F: xor     eax, eax
0x8C42A1: mov     ecx, [esp+18h+var_C]
0x8C42A5: mov     large fs:0, ecx
0x8C42AC: pop     ecx
0x8C42AD: pop     esi
0x8C42AE: add     esp, 10h
0x8C42B1: retn
