0x8CDFE0: mov     eax, [esp+arg_4]
0x8CDFE4: mov     [ecx+0Ch], eax
0x8CDFE7: mov     eax, [esp+arg_0]
0x8CDFEB: push    esi
0x8CDFEC: mov     word ptr [ecx+6], 1
0x8CDFF2: mov     dword ptr [ecx+8], 0
0x8CDFF9: mov     dword ptr [ecx], offset off_A99D60
0x8CDFFF: push    edi
0x8CE000: mov     edi, [eax]
0x8CE002: lea     edx, [ecx+10h]
0x8CE005: mov     esi, edx
0x8CE007: mov     [esi], edi
0x8CE009: mov     edi, [eax+4]
0x8CE00C: mov     [esi+4], edi
0x8CE00F: mov     edi, [eax+8]
0x8CE012: mov     [esi+8], edi
0x8CE015: mov     eax, [eax+0Ch]
0x8CE018: mov     [esi+0Ch], eax
0x8CE01B: fld     dword ptr [edx]
0x8CE01D: fcomp   dword ptr [ecx+14h]
0x8CE020: pop     edi
0x8CE021: pop     esi
0x8CE022: fnstsw  ax
0x8CE024: test    ah, 5
0x8CE027: jp      short loc_8CE02D
0x8CE029: fld     dword ptr [edx]
0x8CE02B: jmp     short loc_8CE030
0x8CE02D: fld     dword ptr [ecx+14h]
0x8CE030: fst     dword ptr [ecx+1Ch]
0x8CE033: fcom    dword ptr [ecx+18h]
0x8CE036: fnstsw  ax
0x8CE038: test    ah, 41h
0x8CE03B: jnz     short loc_8CE042
0x8CE03D: fstp    st
0x8CE03F: fld     dword ptr [ecx+18h]
0x8CE042: fstp    dword ptr [ecx+1Ch]
0x8CE045: mov     eax, ecx
0x8CE047: retn    8
