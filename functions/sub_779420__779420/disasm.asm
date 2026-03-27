0x779420: push    esi
0x779421: mov     esi, ecx
0x779423: mov     eax, [esi+60h]
0x779426: mov     dword ptr [esi], offset ??_7NiDX9RenderedCubeMapData@@6B@; const NiDX9RenderedCubeMapData::`vftable'
0x77942C: sub     ds:0B42860h, eax
0x779432: mov     ecx, [esi+60h]
0x779435: mov     eax, ecx
0x779437: and     eax, 0FFFFF000h
0x77943C: xor     edx, edx
0x77943E: cmp     eax, ecx
0x779440: jz      short loc_77944B
0x779442: sub     eax, ecx
0x779444: add     eax, 1000h
0x779449: mov     edx, eax
0x77944B: sub     ds:0B42864h, edx
0x779451: mov     ecx, [esi+8]
0x779454: mov     edx, [ecx]
0x779456: mov     eax, [esi+4]
0x779459: mov     edx, [edx+17Ch]
0x77945F: push    eax
0x779460: call    edx
0x779462: mov     ecx, esi; this
0x779464: call    sub_7616E0
0x779469: test    [esp+4+arg_0], 1
0x77946E: jz      short loc_779479
0x779470: push    esi
0x779471: call    FormHeapFree
0x779476: add     esp, 4
0x779479: mov     eax, esi
0x77947B: pop     esi
0x77947C: retn    4
