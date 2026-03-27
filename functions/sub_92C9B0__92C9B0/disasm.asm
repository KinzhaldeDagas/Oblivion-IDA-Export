0x92C9B0: mov     ecx, [esp+arg_4]
0x92C9B4: fld     dword ptr [ecx]
0x92C9B6: mov     edx, [esp+arg_8]
0x92C9BA: fcomp   dword ptr [edx]
0x92C9BC: fnstsw  ax
0x92C9BE: test    ah, 5
0x92C9C1: jp      short loc_92C9CB
0x92C9C3: mov     eax, [esp+arg_0]
0x92C9C7: mov     byte ptr [eax], 1
0x92C9CA: retn
0x92C9CB: fld     dword ptr [edx]
0x92C9CD: fld     dword ptr [ecx]
0x92C9CF: fucompp
0x92C9D1: fnstsw  ax
0x92C9D3: test    ah, 44h
0x92C9D6: jp      short loc_92C9E5
0x92C9D8: fld     dword ptr [ecx+4]
0x92C9DB: fcomp   dword ptr [edx+4]
0x92C9DE: fnstsw  ax
0x92C9E0: test    ah, 5
0x92C9E3: jnp     short loc_92C9C3
0x92C9E5: fld     dword ptr [edx]
0x92C9E7: fld     dword ptr [ecx]
0x92C9E9: fucompp
0x92C9EB: fnstsw  ax
0x92C9ED: test    ah, 44h
0x92C9F0: jp      short loc_92CA0E
0x92C9F2: fld     dword ptr [edx+4]
0x92C9F5: fld     dword ptr [ecx+4]
0x92C9F8: fucompp
0x92C9FA: fnstsw  ax
0x92C9FC: test    ah, 44h
0x92C9FF: jp      short loc_92CA0E
0x92CA01: fld     dword ptr [ecx+8]
0x92CA04: fcomp   dword ptr [edx+8]
0x92CA07: fnstsw  ax
0x92CA09: test    ah, 5
0x92CA0C: jnp     short loc_92C9C3
0x92CA0E: mov     eax, [esp+arg_0]
0x92CA12: mov     byte ptr [eax], 0
0x92CA15: retn
