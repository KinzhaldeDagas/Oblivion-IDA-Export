0x612790: mov     edx, [esp+arg_4]
0x612794: fld     [esp+arg_0]
0x612798: test    edx, edx
0x61279A: jz      short loc_6127C3
0x61279C: fldz
0x61279E: fcomp   dword ptr [ecx+8]
0x6127A1: fnstsw  ax
0x6127A3: test    ah, 5
0x6127A6: jp      short loc_6127C3
0x6127A8: fld     st
0x6127AA: fsub    dword ptr [ecx]
0x6127AC: fld     dword ptr [ecx+8]
0x6127AF: fcompp
0x6127B1: fnstsw  ax
0x6127B3: test    ah, 5
0x6127B6: jp      short loc_6127BF
0x6127B8: mov     eax, 1
0x6127BD: jmp     short loc_6127C1
0x6127BF: xor     eax, eax
0x6127C1: mov     [edx], al
0x6127C3: fsub    dword ptr [ecx]
0x6127C5: fld     dword ptr [ecx+4]
0x6127C8: fcompp
0x6127CA: fnstsw  ax
0x6127CC: test    ah, 5
0x6127CF: jp      short loc_6127D9
0x6127D1: mov     eax, 1
0x6127D6: retn    8
0x6127D9: xor     eax, eax
0x6127DB: retn    8
