0x7386A0: push    esi
0x7386A1: mov     esi, ecx
0x7386A3: mov     eax, [esi+8]
0x7386A6: push    eax
0x7386A7: mov     dword ptr [esi], offset ??_7NiShader@@6B@; const NiShader::`vftable'
0x7386AD: call    FormHeapFree
0x7386B2: add     esp, 4
0x7386B5: push    offset NiRefObject_objcount; lpAddend
0x7386BA: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7386C0: call    dword ptr ds:0A2807Ch
0x7386C6: test    [esp+4+arg_0], 1
0x7386CB: jz      short loc_7386D6
0x7386CD: push    esi
0x7386CE: call    FormHeapFree
0x7386D3: add     esp, 4
0x7386D6: mov     eax, esi
0x7386D8: pop     esi
0x7386D9: retn    4
