0x70FBE0: push    ebx
0x70FBE1: mov     ebx, [esp+4+ArgList]
0x70FBE5: push    esi
0x70FBE6: mov     eax, ebx
0x70FBE8: push    edi
0x70FBE9: lea     edx, [eax+1]
0x70FBEC: lea     esp, [esp+0]
0x70FBF0: mov     cl, [eax]
0x70FBF2: add     eax, 1
0x70FBF5: test    cl, cl
0x70FBF7: jnz     short loc_70FBF0
0x70FBF9: sub     eax, edx
0x70FBFB: lea     esi, [eax+10h]
0x70FBFE: push    esi; Size
0x70FBFF: call    FormHeapAlloc
0x70FC04: mov     edi, eax
0x70FC06: mov     eax, [esp+10h+arg_4]
0x70FC0A: push    eax
0x70FC0B: push    ebx; ArgList
0x70FC0C: push    offset aSP; "%s = %p"
0x70FC11: push    esi; SizeInBytes
0x70FC12: push    edi; DstBuf
0x70FC13: call    sub_6C5D40
0x70FC18: add     esp, 18h
0x70FC1B: mov     eax, edi
0x70FC1D: pop     edi
0x70FC1E: pop     esi
0x70FC1F: pop     ebx
0x70FC20: retn
