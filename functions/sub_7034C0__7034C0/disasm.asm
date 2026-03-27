0x7034C0: push    esi
0x7034C1: mov     esi, ecx
0x7034C3: mov     eax, [esi+58h]
0x7034C6: push    eax
0x7034C7: mov     dword ptr [esi], offset ??_7NiScreenElementsData@@6B@; const NiScreenElementsData::`vftable'
0x7034CD: call    FormHeapFree
0x7034D2: mov     ecx, [esi+5Ch]
0x7034D5: push    ecx
0x7034D6: call    FormHeapFree
0x7034DB: add     esp, 8
0x7034DE: mov     ecx, esi; this
0x7034E0: call    ??1NiTriShapeDynamicData@@UAE@XZ; NiTriShapeDynamicData::~NiTriShapeDynamicData(void)
0x7034E5: test    [esp+4+arg_0], 1
0x7034EA: jz      short loc_7034F5
0x7034EC: push    esi
0x7034ED: call    FormHeapFree
0x7034F2: add     esp, 4
0x7034F5: mov     eax, esi
0x7034F7: pop     esi
0x7034F8: retn    4
