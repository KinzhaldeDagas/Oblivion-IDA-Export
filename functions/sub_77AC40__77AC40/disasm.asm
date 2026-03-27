0x77AC40: push    esi
0x77AC41: mov     esi, ecx
0x77AC43: mov     eax, [esi+8]
0x77AC46: mov     dword ptr [esi], offset ??_7NiDX9TextureManager@@6B@; const NiDX9TextureManager::`vftable'
0x77AC4C: mov     ecx, [eax]
0x77AC4E: mov     edx, [ecx+8]
0x77AC51: push    eax
0x77AC52: call    edx
0x77AC54: push    offset NiRefObject_objcount; lpAddend
0x77AC59: mov     dword ptr [esi+8], 0
0x77AC60: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x77AC66: call    dword ptr ds:0A2807Ch
0x77AC6C: test    [esp+4+arg_0], 1
0x77AC71: jz      short loc_77AC7C
0x77AC73: push    esi
0x77AC74: call    FormHeapFree
0x77AC79: add     esp, 4
0x77AC7C: mov     eax, esi
0x77AC7E: pop     esi
0x77AC7F: retn    4
