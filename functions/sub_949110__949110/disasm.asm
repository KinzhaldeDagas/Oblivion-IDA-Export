0x949110: mov     eax, [ecx+0Ch]
0x949113: mov     edx, [ecx+8]
0x949116: and     eax, 3FFFFFFFh
0x94911B: add     edx, 46h ; 'F'
0x94911E: cmp     eax, edx
0x949120: jle     short locret_949144
0x949122: push    esi
0x949123: push    0
0x949125: lea     esi, [ecx+4]
0x949128: call    sub_948DF0
0x94912D: add     esp, 4
0x949130: mov     byte ptr [eax], 70h ; 'p'
0x949133: mov     byte ptr [eax+1], 0
0x949137: mov     word ptr [eax+2], 0
0x94913D: mov     word ptr [eax+4], 0
0x949143: pop     esi
0x949144: retn
