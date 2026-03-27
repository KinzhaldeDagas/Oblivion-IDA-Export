0x77F600: push    esi
0x77F601: mov     esi, ecx
0x77F603: mov     ecx, [esi+18h]
0x77F606: test    ecx, ecx
0x77F608: push    edi
0x77F609: mov     dword ptr [esi], offset ??_7NiD3DShaderProgramFactory@@6B@; const NiD3DShaderProgramFactory::`vftable'
0x77F60F: jz      short loc_77F616
0x77F611: call    NiTMap_Clear
0x77F616: mov     ecx, [esi+18h]
0x77F619: test    ecx, ecx
0x77F61B: jz      short loc_77F625
0x77F61D: mov     eax, [ecx]
0x77F61F: mov     edx, [eax]
0x77F621: push    1
0x77F623: call    edx
0x77F625: mov     ecx, [esi+1Ch]
0x77F628: test    ecx, ecx
0x77F62A: jz      short loc_77F631
0x77F62C: call    NiTMap_Clear
0x77F631: mov     ecx, [esi+1Ch]
0x77F634: test    ecx, ecx
0x77F636: jz      short loc_77F640
0x77F638: mov     eax, [ecx]
0x77F63A: mov     edx, [eax]
0x77F63C: push    1
0x77F63E: call    edx
0x77F640: mov     ecx, esi
0x77F642: call    sub_77F460
0x77F647: lea     edi, [esi+8]
0x77F64A: mov     ecx, edi
0x77F64C: mov     dword ptr [edi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAD@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,char *>::`vftable'
0x77F652: call    NiTPointerList__FreeAllNodes
0x77F657: mov     dword ptr [edi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAD@@6B@; const NiTListBase<NiTPointerAllocator<uint>,char *>::`vftable'
0x77F65D: push    offset NiRefObject_objcount; lpAddend
0x77F662: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x77F668: call    dword ptr ds:0A2807Ch
0x77F66E: pop     edi
0x77F66F: pop     esi
0x77F670: retn
