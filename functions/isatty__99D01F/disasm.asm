0x99D01F: mov     eax, [esp+arg_0]
0x99D023: cmp     eax, 0FFFFFFFEh
0x99D026: jnz     short loc_99D036
0x99D028: call    __errno
0x99D02D: mov     dword ptr [eax], 9
0x99D033: xor     eax, eax
0x99D035: retn
0x99D036: push    esi
0x99D037: xor     esi, esi
0x99D039: cmp     eax, esi
0x99D03B: jl      short loc_99D045
0x99D03D: cmp     eax, uNumber
0x99D043: jb      short loc_99D061
0x99D045: call    __errno
0x99D04A: push    esi
0x99D04B: push    esi
0x99D04C: push    esi
0x99D04D: push    esi
0x99D04E: push    esi
0x99D04F: mov     dword ptr [eax], 9
0x99D055: call    __invalid_parameter
0x99D05A: add     esp, 14h
0x99D05D: xor     eax, eax
0x99D05F: pop     esi
0x99D060: retn
0x99D061: mov     ecx, eax
0x99D063: and     eax, 1Fh
0x99D066: imul    eax, 28h ; '('
0x99D069: sar     ecx, 5
0x99D06C: mov     ecx, dword_BAAAC0[ecx*4]
0x99D073: movzx   eax, byte ptr [ecx+eax+4]
0x99D078: and     eax, 40h
0x99D07B: pop     esi
0x99D07C: retn
