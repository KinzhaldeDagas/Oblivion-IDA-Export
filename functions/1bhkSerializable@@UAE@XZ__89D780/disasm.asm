0x89D780: push    esi
0x89D781: mov     esi, ecx
0x89D783: mov     eax, [esi+0Ch]
0x89D786: push    eax
0x89D787: mov     dword ptr [esi], offset ??_7bhkSerializable@@6B@; const bhkSerializable::`vftable'
0x89D78D: call    FormHeapFree
0x89D792: add     esp, 4
0x89D795: mov     dword ptr [esi+0Ch], 0
0x89D79C: mov     ecx, esi; this
0x89D79E: pop     esi
0x89D79F: jmp     ??1bhkRefObject@@UAE@XZ; bhkRefObject::~bhkRefObject(void)
