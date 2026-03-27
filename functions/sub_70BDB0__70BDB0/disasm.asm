0x70BDB0: push    esi
0x70BDB1: mov     esi, ecx
0x70BDB3: mov     eax, [esi+14h]
0x70BDB6: mov     dword ptr [esi], offset ??_7NiDepthStencilBuffer@@6B@; const NiDepthStencilBuffer::`vftable'
0x70BDBC: sub     ds:0B3FAB8h, eax
0x70BDC2: mov     ecx, [esi+14h]
0x70BDC5: mov     eax, ecx
0x70BDC7: and     eax, 0FFFFF000h
0x70BDCC: xor     edx, edx
0x70BDCE: cmp     eax, ecx
0x70BDD0: jz      short loc_70BDDB
0x70BDD2: sub     eax, ecx
0x70BDD4: add     eax, 1000h
0x70BDD9: mov     edx, eax
0x70BDDB: sub     ds:0B3FABCh, edx
0x70BDE1: mov     ecx, esi; this
0x70BDE3: call    ??1Ni2DBuffer@@UAE@XZ; Ni2DBuffer::~Ni2DBuffer(void)
0x70BDE8: test    [esp+4+arg_0], 1
0x70BDED: jz      short loc_70BDF8
0x70BDEF: push    esi
0x70BDF0: call    FormHeapFree
0x70BDF5: add     esp, 4
0x70BDF8: mov     eax, esi
0x70BDFA: pop     esi
0x70BDFB: retn    4
