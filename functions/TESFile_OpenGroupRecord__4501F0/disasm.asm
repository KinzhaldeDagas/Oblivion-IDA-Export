0x4501F0: mov     eax, [esp+arg_0]
0x4501F4: test    eax, eax
0x4501F6: push    esi
0x4501F7: mov     esi, ecx
0x4501F9: jz      short loc_450249
0x4501FB: push    eax
0x4501FC: call    TESFile_PushGroup
0x450201: mov     ecx, [esi+10h]
0x450204: test    ecx, ecx
0x450206: jz      short loc_450249
0x450208: mov     edx, ds:0A853D8h
0x45020E: mov     eax, [ecx]
0x450210: mov     eax, [eax+0Ch]
0x450213: push    edi
0x450214: mov     edi, [esi+284h]
0x45021A: push    edx
0x45021B: push    0
0x45021D: call    eax
0x45021F: mov     eax, [esi+10h]
0x450222: mov     ecx, [eax+30h]
0x450225: cmp     ecx, 0FFFFFFFFh
0x450228: jz      short loc_45022E
0x45022A: mov     eax, ecx
0x45022C: jmp     short loc_450234
0x45022E: mov     eax, [eax+148h]
0x450234: push    14h
0x450236: push    edi
0x450237: mov     ecx, esi
0x450239: mov     [edi+14h], eax
0x45023C: call    TESFile_WriteData
0x450241: add     dword ptr [esi+3D4h], 1
0x450248: pop     edi
0x450249: pop     esi
0x45024A: retn    4
