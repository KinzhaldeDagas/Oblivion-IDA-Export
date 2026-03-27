0x4B9D10: fld     dword ptr [ecx]
0x4B9D12: mov     edx, [esp+arg_0]
0x4B9D16: fld     dword ptr [edx]
0x4B9D18: fucompp
0x4B9D1A: fnstsw  ax
0x4B9D1C: test    ah, 44h
0x4B9D1F: jp      short loc_4B9D41
0x4B9D21: fld     dword ptr [ecx+4]
0x4B9D24: fld     dword ptr [edx+4]
0x4B9D27: fucompp
0x4B9D29: fnstsw  ax
0x4B9D2B: test    ah, 44h
0x4B9D2E: jp      short loc_4B9D41
0x4B9D30: mov     eax, 1
0x4B9D35: xor     ecx, ecx
0x4B9D37: test    al, al
0x4B9D39: setz    cl
0x4B9D3C: mov     al, cl
0x4B9D3E: retn    4
0x4B9D41: xor     eax, eax
0x4B9D43: xor     ecx, ecx
0x4B9D45: test    al, al
0x4B9D47: setz    cl
0x4B9D4A: mov     al, cl
0x4B9D4C: retn    4
