0x7227B0: push    esi
0x7227B1: push    edi
0x7227B2: mov     esi, ecx
0x7227B4: call    ??0NiAVObject@@QAE@XZ; NiAVObject::NiAVObject(void)
0x7227B9: mov     eax, [esp+8+arg_0]
0x7227BD: xor     edi, edi
0x7227BF: cmp     eax, edi
0x7227C1: mov     dword ptr [esi], offset ??_7NiGeometry@@6B@; const NiGeometry::`vftable'
0x7227C7: mov     [esi+0ACh], edi
0x7227CD: mov     [esi+0B0h], edi
0x7227D3: mov     [esi+0B4h], eax
0x7227D9: jz      short loc_7227E5
0x7227DB: add     eax, 4
0x7227DE: push    eax; lpAddend
0x7227DF: call    dword ptr ds:0A28078h
0x7227E5: mov     [esi+0B8h], edi
0x7227EB: mov     [esi+0BCh], edi
0x7227F1: pop     edi
0x7227F2: mov     eax, esi
0x7227F4: pop     esi
0x7227F5: retn    4
