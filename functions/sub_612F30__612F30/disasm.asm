0x612F30: push    ecx
0x612F31: mov     ecx, [ecx+28h]
0x612F34: call    Shared_GetPointerAtOffset08; Returns Mesh from metadata object found by 0x8AFCE0; part of ray hit -> NiAVObject resolution.
0x612F39: mov     [esp+4+var_4], eax
0x612F3C: fild    [esp+4+var_4]
0x612F3F: pop     ecx
0x612F40: retn
