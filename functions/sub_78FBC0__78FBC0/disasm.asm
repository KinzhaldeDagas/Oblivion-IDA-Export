0x78FBC0: push    ebp
0x78FBC1: mov     ebp, [esp+4+arg_8]
0x78FBC5: push    esi
0x78FBC6: mov     esi, [esp+8+arg_4]
0x78FBCA: lea     eax, [esi-1]
0x78FBCD: cdq
0x78FBCE: sub     eax, edx
0x78FBD0: mov     ecx, eax
0x78FBD2: sar     ecx, 1
0x78FBD4: cmp     ebp, esi
0x78FBD6: jge     short loc_78FC0F
0x78FBD8: push    ebx
0x78FBD9: mov     ebx, [esp+0Ch+arg_C]
0x78FBDD: push    edi
0x78FBDE: mov     edi, [esp+10h+arg_0]
0x78FBE2: mov     edx, [edi+ecx*4]
0x78FBE5: fld     dword ptr [edx+2Ch]
0x78FBE8: fld     dword ptr [ebx+2Ch]
0x78FBEB: fcompp
0x78FBED: fnstsw  ax
0x78FBEF: test    ah, 5
0x78FBF2: jp      short loc_78FC07
0x78FBF4: lea     eax, [ecx-1]
0x78FBF7: mov     [edi+esi*4], edx
0x78FBFA: cdq
0x78FBFB: sub     eax, edx
0x78FBFD: mov     esi, ecx
0x78FBFF: sar     eax, 1
0x78FC01: cmp     ebp, esi
0x78FC03: mov     ecx, eax
0x78FC05: jl      short loc_78FBE2
0x78FC07: mov     [edi+esi*4], ebx
0x78FC0A: pop     edi
0x78FC0B: pop     ebx
0x78FC0C: pop     esi
0x78FC0D: pop     ebp
0x78FC0E: retn
0x78FC0F: mov     eax, [esp+8+arg_C]
0x78FC13: mov     ecx, [esp+8+arg_0]
0x78FC17: mov     [ecx+esi*4], eax
0x78FC1A: pop     esi
0x78FC1B: pop     ebp
0x78FC1C: retn
